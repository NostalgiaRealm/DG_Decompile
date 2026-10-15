/*
 * FUN_10019220 at 10019220
 * undefined FUN_10019220(void)
 * Address ranges: 10019220-1001928b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019220(int param_1,int param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(uint *)(param_1 + 0x2d10) = (uint)(param_2 != 0);
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  return;
}

