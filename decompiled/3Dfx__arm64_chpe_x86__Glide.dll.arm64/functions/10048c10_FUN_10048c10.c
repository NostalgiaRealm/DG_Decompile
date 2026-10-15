/*
 * FUN_10048c10 at 10048c10
 * undefined FUN_10048c10(void)
 * Address ranges: 10048c10-10048c87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048c10(int param_1,uint param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(uint *)(param_1 + 0x2c1c) = -(uint)((param_2 & 0xff) != 0);
  *(undefined1 *)(param_1 + 0x3150) = 1;
  *(uint *)(param_1 + 0x2970) = param_2 & 0xff;
  return;
}

