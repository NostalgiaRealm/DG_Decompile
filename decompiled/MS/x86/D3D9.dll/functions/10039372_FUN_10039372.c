/*
 * FUN_10039372 at 10039372
 * undefined4 __fastcall FUN_10039372(int param_1)
 * Address ranges: 10039372-10039444
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10039372(int param_1)

{
  bool bVar1;
  WNDPROC pWVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined3 extraout_var;
  
  pWVar2 = FUN_100b7069(DAT_100dea9c,&PTR_s_DGD3D12ROOT_100dd578,0);
  *(WNDPROC *)(param_1 + 0xc4) = pWVar2;
  uVar3 = 0;
  if (pWVar2 != (WNDPROC)0x0) {
    *(WNDPROC *)(param_1 + 0xcc) = pWVar2 + *(int *)(param_1 + 200) * 0x16c0 + 0x6c0;
    FUN_100cef50((int)(pWVar2 + *(int *)(param_1 + 200) * 0x16c0 + 0x6c0 + 0x11c0));
    uVar3 = FUN_10038c81(param_1);
    if ((char)uVar3 != '\0') {
      uVar4 = FUN_10038ee1(param_1);
      if ((char)uVar4 != '\0') {
        puVar5 = (undefined4 *)FUN_100cfd55(8);
        *(undefined4 **)(param_1 + 0xac) = puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = &PTR_s_POSITION_100de818;
          *(undefined4 *)(*(int *)(param_1 + 0xac) + 4) = 2;
          bVar1 = FUN_10038ff1(param_1);
          if (bVar1) {
            return CONCAT31(extraout_var,1);
          }
          FUN_10038f98(param_1);
        }
        FUN_10038f61(param_1);
      }
      FUN_10038e8e(param_1);
    }
    uVar3 = FUN_100b42a6(*(int **)(param_1 + 0xc4));
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  return uVar3 & 0xffffff00;
}

