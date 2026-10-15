/*
 * FUN_10011680 at 10011680
 * undefined FUN_10011680(void)
 * Address ranges: 10011680-100117a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10011680(int param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  int iVar2;
  int local_30 [4];
  
  local_30[0] = param_1 + 0x42d0;
  local_30[1] = param_1 + 0x72f4;
  local_30[2] = param_1 + 0xa318;
  iVar2 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
    do {
      FUN_1002de30(local_30[iVar2]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(int *)(param_1 + 4) + 0x33));
  }
  FUN_1002e020(param_1 + 0x3f50);
  FUN_1001adb0(param_1 + 0x35c0);
  FUN_1000f4e0(param_1);
  iVar2 = *(int *)(param_1 + 0x333c);
  if (iVar2 != 0) {
    FUN_1005cdb0(*(undefined4 *)(*(int *)(param_1 + 0x3300) + 0x172c0),iVar2,0,1);
  }
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1);
  *(int *)(param_1 + 0x333c) = 0;
  FUN_1005fe30(*(int *)(param_1 + 0x3300),*(undefined4 *)(param_1 + 0x3304));
  return;
}

