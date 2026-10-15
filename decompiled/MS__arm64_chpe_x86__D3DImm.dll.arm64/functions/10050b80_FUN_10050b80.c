/*
 * FUN_10050b80 at 10050b80
 * undefined FUN_10050b80(void)
 * Address ranges: 10050b80-10050c37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10050b80(undefined4 *param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  *param_1 = &PTR_FUN_1009c98c;
  if (param_1[0x2a0] != 0) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  FUN_10081dc0(param_1[0x5f2]);
  *(undefined8 *)(param_1 + 0x5f2) = 0;
  *(undefined8 *)(param_1 + 0x5f4) = 0;
  FUN_10081dc0(param_1[0x5ee]);
  *(undefined8 *)(param_1 + 0x5ee) = 0;
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  FUN_1005e400(param_1 + 0x54e);
  FUN_10081dc0(param_1[0x549]);
  FUN_10001ab0(param_1);
  return;
}

