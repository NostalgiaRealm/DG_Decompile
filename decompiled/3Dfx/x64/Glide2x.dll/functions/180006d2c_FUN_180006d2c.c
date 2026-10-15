/*
 * FUN_180006d2c at 180006d2c
 * undefined8 __fastcall FUN_180006d2c(longlong param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 180006d2c-180006e50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180006d2c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  BOOL BVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  FARPROC pFVar5;
  INT_PTR IVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 extraout_var;
  ulonglong uVar10;
  CHAR local_148 [280];
  longlong lVar9;
  
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x20) = 0x287;
  hModule = LoadLibraryA("SampleAddon.dll");
  lVar9 = 0;
  if (hModule != (HMODULE)0x0) {
    GetModuleFileNameA(hModule,local_148,0x104);
    pFVar4 = GetProcAddress(hModule,"AddOnInit");
    pFVar5 = GetProcAddress(hModule,"AddOnExit");
    if ((pFVar4 != (FARPROC)0x0) && (pFVar5 != (FARPROC)0x0)) {
      IVar6 = (*pFVar4)(param_1);
      if ((char)IVar6 != '\0') {
        iVar1 = *(int *)(param_1 + 0x14);
        if (*(int *)(param_1 + 0x10) == iVar1) {
          uVar10 = 0x10;
          if (iVar1 != 0) {
            uVar10 = (ulonglong)(uint)(iVar1 * 2);
          }
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar10;
          uVar7 = SUB168(ZEXT816(0x18) * auVar2,0);
          if (SUB168(ZEXT816(0x18) * auVar2,8) != 0) {
            uVar7 = 0xffffffffffffffff;
          }
          puVar8 = (undefined8 *)thunk_FUN_18005d6fc(uVar7);
          lVar9 = 0;
          if (puVar8 == (undefined8 *)0x0) goto LAB_180006e3f;
          FUN_18005ed10(puVar8,*(undefined8 **)(param_1 + 8),
                        (ulonglong)*(uint *)(param_1 + 0x14) * 0x18);
          FUN_18005d720(*(LPVOID *)(param_1 + 8));
          *(undefined8 **)(param_1 + 8) = puVar8;
          *(int *)(param_1 + 0x14) = (int)uVar10;
        }
        uVar10 = (ulonglong)*(uint *)(param_1 + 0x10);
        lVar9 = *(longlong *)(param_1 + 8);
        *(HMODULE *)(lVar9 + uVar10 * 0x18) = hModule;
        *(FARPROC *)(lVar9 + 8 + uVar10 * 0x18) = pFVar4;
        *(FARPROC *)(lVar9 + 0x10 + uVar10 * 0x18) = pFVar5;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        goto LAB_180006e3f;
      }
    }
    BVar3 = FreeLibrary(hModule);
    lVar9 = CONCAT44(extraout_var,BVar3);
  }
LAB_180006e3f:
  return CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
}

