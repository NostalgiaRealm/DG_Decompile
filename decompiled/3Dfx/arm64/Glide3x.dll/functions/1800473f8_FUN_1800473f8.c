/*
 * FUN_1800473f8 at 1800473f8
 * bool __cdecl FUN_1800473f8(longlong param_1, longlong param_2)
 * Address ranges: 1800473f8-1800474ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800473f8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined *lpszClass;
  bool bVar2;
  BOOL BVar3;
  HMODULE hInstance;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  tagWNDCLASSEXA tStack_80;
  
  lpszClass = PTR_s_DGD3D11ROOT_18006f580;
  uVar6 = *(undefined8 *)(param_1 + 8);
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  BVar3 = GetClassInfoExA(hInstance,lpszClass,&tStack_80);
  if (((BVar3 != 0) && (tStack_80.lpfnWndProc != (WNDPROC)0x0)) ||
     (tStack_80.lpfnWndProc = (WNDPROC)(*(code *)PTR_FUN_18006f588)(uVar6,0),
     tStack_80.lpfnWndProc != (WNDPROC)0x0)) {
    FUN_1800643e0((uint *)(tStack_80.lpfnWndProc + 8));
  }
  *(WNDPROC *)(param_1 + 0x480) = tStack_80.lpfnWndProc;
  if (tStack_80.lpfnWndProc == (WNDPROC)0x0) {
    bVar2 = false;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x8e);
    if (*(char *)(param_2 + 0x22) == '\0') {
      uVar5 = 1;
      uVar4 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 0x96);
      uVar4 = *(undefined4 *)(param_2 + 0x92);
    }
    *(undefined4 *)(tStack_80.lpfnWndProc + 0x668) = *(undefined4 *)(param_2 + 0x8a);
    *(undefined4 *)(tStack_80.lpfnWndProc + 0x66c) = uVar1;
    *(undefined4 *)(tStack_80.lpfnWndProc + 0x670) = uVar4;
    *(undefined4 *)(tStack_80.lpfnWndProc + 0x674) = uVar5;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 4);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x480);
    *(undefined4 *)(*(longlong *)(param_1 + 0x480) + 0x678) = *(undefined4 *)(param_1 + 0x474);
    bVar2 = *(longlong *)(param_1 + 0x10) != 0;
  }
  return bVar2;
}

