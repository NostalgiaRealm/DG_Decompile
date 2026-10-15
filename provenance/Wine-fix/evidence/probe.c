#define COBJMACROS
#define INITGUID
#include <windows.h>
#include <ddraw.h>
#include <d3d.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

static void checked(const char *name, HRESULT hr) {
    printf("%s = %08lx\n", name, (unsigned long)hr); fflush(stdout);
    if (FAILED(hr)) ExitProcess(2);
}
int main(int argc, char **argv) {
    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX);
    if(argc<4) return 2;
    HMODULE mod=LoadLibraryA(argv[1]);
    if(!mod) { printf("LoadLibrary failed %lu\n",GetLastError()); return 2; }
    char path[MAX_PATH]; GetModuleFileNameA(mod,path,sizeof(path));
    printf("Loaded %s at %p\n", path,mod);
    uintptr_t rva=strtoul(argv[2],NULL,0);
    if (rva) {
        typedef unsigned char (__cdecl *Predicate)(const char *,unsigned);
        Predicate pred=(Predicate)((uintptr_t)mod+rva);
        const char *names[]={"wine_get_version","wine_get_build_id","__wine_get_unix_file_name","NtCreateFile","ordinary_export"};
        int expected=atoi(argv[3]);
        for(int i=0;i<5;i++) {
            unsigned char actual=pred(names[i],strlen(names[i]));
            printf("%s => %u (expected %u)\n",names[i],actual,i<3?expected:0);
            if(actual!=(i<3?expected:0)) return 3;
        }
        puts("PASS: loaded DLL predicate");fflush(stdout);
    }
    if(argc<5) return 0;
    HWND win=CreateWindowA("STATIC","dgVoodoo 2.87.5 DirectDraw probe",WS_OVERLAPPEDWINDOW|WS_VISIBLE,
        50,50,660,520,0,0,GetModuleHandleA(NULL),0);
    typedef HRESULT(WINAPI *CreateDD)(GUID *,void **,REFIID,IUnknown *);
    CreateDD create=(CreateDD)GetProcAddress(mod,"DirectDrawCreateEx");
    IDirectDraw7 *dd=0; IDirectDrawSurface7 *primary=0,*target=0;
    checked("DirectDrawCreateEx",create(NULL,(void **)&dd,&IID_IDirectDraw7,NULL));
    DDDEVICEIDENTIFIER2 id={0};
    checked("GetDeviceIdentifier",IDirectDraw7_GetDeviceIdentifier(dd,&id,0));
    printf("Adapter: %s / %s\n",id.szDriver,id.szDescription);
    checked("SetCooperativeLevel",IDirectDraw7_SetCooperativeLevel(dd,win,DDSCL_NORMAL));
    DDSURFACEDESC2 desc={0}; desc.dwSize=sizeof(desc); desc.dwFlags=DDSD_CAPS;
    desc.ddsCaps.dwCaps=DDSCAPS_PRIMARYSURFACE;
    checked("Create primary",IDirectDraw7_CreateSurface(dd,&desc,&primary,NULL));
    desc.dwFlags=DDSD_CAPS|DDSD_WIDTH|DDSD_HEIGHT; desc.dwWidth=640; desc.dwHeight=480;
    desc.ddsCaps.dwCaps=DDSCAPS_OFFSCREENPLAIN|DDSCAPS_3DDEVICE;
    checked("Create render target",IDirectDraw7_CreateSurface(dd,&desc,&target,NULL));
    DDBLTFX fill={0}; fill.dwSize=sizeof(fill); fill.dwFillColor=0x00204080;
    IDirectDrawClipper *clip=0;
    checked("CreateClipper",IDirectDraw7_CreateClipper(dd,0,&clip,NULL));
    checked("SetHWnd",IDirectDrawClipper_SetHWnd(clip,0,win));
    checked("SetClipper",IDirectDrawSurface7_SetClipper(primary,clip));
    for(int n=0;n<120;n++) {
        MSG msg; while(PeekMessageA(&msg,NULL,0,0,PM_REMOVE)){TranslateMessage(&msg);DispatchMessageA(&msg);}
        HRESULT hr=IDirectDrawSurface7_Blt(target,NULL,NULL,NULL,DDBLT_WAIT|DDBLT_COLORFILL,&fill);
        if(FAILED(hr)){checked("Color fill",hr);}
        RECT dst; GetClientRect(win,&dst); MapWindowPoints(win,NULL,(POINT *)&dst,2);
        hr=IDirectDrawSurface7_Blt(primary,&dst,target,NULL,DDBLT_WAIT,NULL);
        if(FAILED(hr)){checked("Blt",hr);}
        Sleep(16);
    }
    DDSURFACEDESC2 locked={0}; locked.dwSize=sizeof(locked);
    checked("Lock target",IDirectDrawSurface7_Lock(target,NULL,&locked,DDLOCK_WAIT|DDLOCK_READONLY,NULL));
    unsigned pixel=*(unsigned *)locked.lpSurface;
    printf("Pixel after color fill: %08x (RGB bits %lu)\n",pixel,locked.ddpfPixelFormat.dwRGBBitCount);
    if(pixel != 0x00204080) return 4;
    checked("Unlock target",IDirectDrawSurface7_Unlock(target,NULL));

    IDirectDrawSurface7_Release(target); IDirectDrawSurface7_Release(primary);
    IDirectDrawClipper_Release(clip); IDirectDraw7_Release(dd);
    DestroyWindow(win);
    puts("PASS: 120 fills/blits, readback, and resource teardown");
    return 0;
}
