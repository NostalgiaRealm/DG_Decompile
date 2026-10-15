/*
 * FUN_10048ba0 at 10048ba0
 * undefined FUN_10048ba0(void)
 * Address ranges: 10048ba0-10048c0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048ba0(int param_1,int param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(uint *)(param_1 + 0x2c70) = (uint)(param_2 != 0);
  *(undefined1 *)(param_1 + 0x3150) = 1;
  return;
}

