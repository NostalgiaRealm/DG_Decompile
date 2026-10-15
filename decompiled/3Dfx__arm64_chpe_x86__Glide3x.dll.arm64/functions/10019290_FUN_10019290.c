/*
 * FUN_10019290 at 10019290
 * undefined FUN_10019290(void)
 * Address ranges: 10019290-10019307
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019290(int param_1,uint param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(uint *)(param_1 + 0x2cbc) = -(uint)((param_2 & 0xff) != 0);
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  *(uint *)(param_1 + 0x29ec) = param_2 & 0xff;
  return;
}

