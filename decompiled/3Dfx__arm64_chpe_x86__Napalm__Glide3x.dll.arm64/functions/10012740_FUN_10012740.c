/*
 * FUN_10012740 at 10012740
 * undefined FUN_10012740(void)
 * Address ranges: 10012740-10012867
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10012740(int param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  int iVar2;
  int local_30 [4];
  
  local_30[0] = param_1 + 0x4668;
  local_30[1] = param_1 + 0x768c;
  local_30[2] = param_1 + 0xa6b0;
  iVar2 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
    do {
      FUN_10030bb8(local_30[iVar2]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(int *)(param_1 + 4) + 0x33));
  }
  FUN_10030da0(param_1 + 0x42e8);
  FUN_1001b370(param_1 + 0x3940);
  FUN_10011470(param_1);
  iVar2 = *(int *)(param_1 + 0x36bc);
  if (iVar2 != 0) {
    FUN_10062460(*(undefined4 *)(*(int *)(param_1 + 0x3680) + 0x172c0),iVar2,0,1);
  }
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1);
  *(int *)(param_1 + 0x36bc) = 0;
  FUN_100654d0(*(int *)(param_1 + 0x3680),*(undefined4 *)(param_1 + 0x3684));
  return;
}

