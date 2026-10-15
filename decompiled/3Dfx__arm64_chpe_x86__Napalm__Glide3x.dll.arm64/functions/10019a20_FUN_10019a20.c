/*
 * FUN_10019a20 at 10019a20
 * undefined FUN_10019a20(void)
 * Address ranges: 10019a20-10019a97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019a20(int param_1,uint param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(uint *)(param_1 + 0x2e0c) = -(uint)((param_2 & 0xff) != 0);
  *(undefined1 *)(param_1 + 0x3650) = 1;
  *(uint *)(param_1 + 0x2b28) = param_2 & 0xff;
  return;
}

