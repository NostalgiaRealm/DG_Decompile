/*
 * FUN_100e56d8 at 100e56d8
 * undefined FUN_100e56d8(void)
 * Address ranges: 100e56d8-100e5743
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e56d8(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (*(int *)(param_2 + 4) != 0) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,1);
  }
  FUN_101322d0(*(undefined4 *)(param_2 + 0x21c));
  FUN_10132260(*(undefined4 *)(param_2 + 8),0x1270);
  return;
}

