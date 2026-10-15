/*
 * FUN_1002f603 at 1002f603
 * undefined4 __fastcall FUN_1002f603(int param_1)
 * Address ranges: 1002f603-1002f6d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1002f603(int param_1)

{
  bool bVar1;
  WNDPROC pWVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined3 extraout_var;
  
  pWVar2 = FUN_10094a16(DAT_100ba2dc,&PTR_s_DGD3D12ROOT_100b8fc8,0);
  *(WNDPROC *)(param_1 + 0xc4) = pWVar2;
  uVar3 = 0;
  if (pWVar2 != (WNDPROC)0x0) {
    *(WNDPROC *)(param_1 + 0xcc) = pWVar2 + *(int *)(param_1 + 200) * 0x16c0 + 0x6c0;
    FUN_100ac680((int)(pWVar2 + *(int *)(param_1 + 200) * 0x16c0 + 0x6c0 + 0x11c0));
    uVar3 = FUN_1002efa5(param_1);
    if ((char)uVar3 != '\0') {
      uVar4 = FUN_1002f205(param_1);
      if ((char)uVar4 != '\0') {
        puVar5 = (undefined4 *)FUN_100ad475(8);
        *(undefined4 **)(param_1 + 0xac) = puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = &PTR_s_POSITION_100b9f48;
          *(undefined4 *)(*(int *)(param_1 + 0xac) + 4) = 2;
          bVar1 = FUN_1002f315(param_1);
          if (bVar1) {
            return CONCAT31(extraout_var,1);
          }
          FUN_1002f2bc(param_1);
        }
        FUN_1002f285(param_1);
      }
      FUN_1002f1b2(param_1);
    }
    uVar3 = FUN_100920a4(*(int **)(param_1 + 0xc4));
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  return uVar3 & 0xffffff00;
}

