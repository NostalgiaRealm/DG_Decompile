/*
 * FUN_1001fd70 at 1001fd70
 * undefined FUN_1001fd70(void)
 * Address ranges: 1001fd70-1001fdcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001fd70(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1,param_2);
  *(undefined1 *)(param_1 + 0xd4) = param_2;
  return;
}

