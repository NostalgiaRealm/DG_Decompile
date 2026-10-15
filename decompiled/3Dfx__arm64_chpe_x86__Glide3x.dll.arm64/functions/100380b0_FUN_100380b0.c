/*
 * FUN_100380b0 at 100380b0
 * undefined FUN_100380b0(void)
 * Address ranges: 100380b0-10038137
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100380b0(int param_1,int param_2,int param_3)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(uint *)(*(int *)(param_1 + param_2 * 4 + 0x32e4) + 0x10) = (uint)(param_3 == 1);
  *(undefined1 *)(param_2 + param_1 + 0x32d3) = 1;
  return;
}

