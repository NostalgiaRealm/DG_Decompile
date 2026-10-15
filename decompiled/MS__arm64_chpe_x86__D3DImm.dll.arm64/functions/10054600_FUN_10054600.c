/*
 * FUN_10054600 at 10054600
 * undefined FUN_10054600(void)
 * Address ranges: 10054600-1005464f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10054600(undefined8 param_1,int param_2)

{
  code *extraout_w11;
  undefined1 auVar1 [16];
  
  if (*(int *)(param_2 + 300) != 0) {
    auVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar1._0_8_ & 0xffffffff,auVar1._8_8_ & 0xffffffff);
  }
  return;
}

