/*
 * FUN_1001ae2f at 1001ae2f
 * undefined4 __fastcall FUN_1001ae2f(int param_1)
 * Address ranges: 1001ae2f-1001af00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1001ae2f(int param_1)

{
  bool bVar1;
  WNDPROC pWVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined3 extraout_var;
  
  pWVar2 = FUN_1005104f(DAT_1006bbd4,&PTR_s_DGD3D12ROOT_10061c88);
  *(WNDPROC *)(param_1 + 0xcc) = pWVar2;
  uVar3 = 0;
  if (pWVar2 != (WNDPROC)0x0) {
    *(WNDPROC *)(param_1 + 0xd4) = pWVar2 + *(int *)(param_1 + 0xd0) * 0x16c0 + 0x6c0;
    FUN_1005c2e0((int)(pWVar2 + *(int *)(param_1 + 0xd0) * 0x16c0 + 0x6c0 + 0x11c0));
    uVar3 = FUN_1001a8db(param_1);
    if ((char)uVar3 != '\0') {
      uVar4 = FUN_1001ab43(param_1);
      if ((char)uVar4 != '\0') {
        puVar5 = (undefined4 *)FUN_1005c755(8);
        *(undefined4 **)(param_1 + 0xb4) = puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = &PTR_s_POSITION_1006b6f8;
          *(undefined4 *)(*(int *)(param_1 + 0xb4) + 4) = 2;
          bVar1 = FUN_1001ac3f(param_1);
          if (bVar1) {
            return CONCAT31(extraout_var,1);
          }
          FUN_1001abe6(param_1);
        }
        FUN_1001abaf(param_1);
      }
      FUN_1001aaf0(param_1);
    }
    uVar3 = FUN_1004f60d(*(int **)(param_1 + 0xcc));
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  return uVar3 & 0xffffff00;
}

