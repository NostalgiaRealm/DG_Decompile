/*
 * FUN_100cbfb4 at 100cbfb4
 * int __fastcall FUN_100cbfb4(void * param_1)
 * Address ranges: 100cbfb4-100cc0e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_100cbfb4(void *param_1)

{
  bool bVar1;
  uint3 extraout_var;
  HMODULE hModule;
  FARPROC pFVar2;
  LPVOID pvVar3;
  undefined4 uVar4;
  uint3 extraout_var_00;
  uint3 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  
  bVar1 = FUN_100cc3e6((int)param_1 + 0x48);
  uVar5 = extraout_var;
  if (bVar1) {
    *(undefined4 *)((int)param_1 + 200) = 0;
    FUN_100cfed0((int *)((int)param_1 + 0x308),0,0x454);
    FUN_100cbd45((int)param_1);
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule != (HMODULE)0x0) {
      pFVar2 = GetProcAddress(hModule,"CallWindowProcA");
      *(FARPROC *)((int)param_1 + 0xb4) = pFVar2;
      if (pFVar2 != (FARPROC)0x0) {
        pFVar2 = GetProcAddress(hModule,"CallWindowProcW");
        *(FARPROC *)((int)param_1 + 0xb8) = pFVar2;
        if (pFVar2 != (FARPROC)0x0) {
          pvVar3 = VirtualAlloc((LPVOID)0x0,0x1000,0x1000,0x40);
          *(LPVOID *)((int)param_1 + 0xbc) = pvVar3;
          if (pvVar3 != (LPVOID)0x0) {
            pvVar3 = VirtualAlloc((LPVOID)0x0,0x2000,0x1000,0x40);
            *(LPVOID *)((int)param_1 + 0xc0) = pvVar3;
            if (pvVar3 != (LPVOID)0x0) {
              pvVar3 = VirtualAlloc((LPVOID)0x0,0x2400,0x1000,0x40);
              *(LPVOID *)((int)param_1 + 0x78) = pvVar3;
              if (pvVar3 != (LPVOID)0x0) {
                uVar6 = -(uint)(param_1 != (void *)0x0) & (int)param_1 + 0x9cU;
                uVar4 = FUN_100cf903(param_1,uVar6,uVar6);
                if ((char)uVar4 != '\0') {
                  puVar8 = (undefined4 *)((int)param_1 + 0x7c);
                  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
                    *puVar8 = 0;
                    puVar8 = puVar8 + 1;
                  }
                  thunk_FUN_100cfd6c(*(LPVOID *)((int)param_1 + 0x60));
                  *(undefined4 *)((int)param_1 + 0x60) = 0;
                  *(undefined4 *)((int)param_1 + 100) = 0;
                  *(undefined4 *)((int)param_1 + 0x68) = 0;
                  return 1;
                }
                VirtualFree(*(LPVOID *)((int)param_1 + 0x78),0,0x8000);
              }
            }
          }
        }
      }
    }
    FUN_100b9973((int)param_1 + 0x48);
    uVar5 = extraout_var_00;
  }
  return (uint)uVar5 << 8;
}

