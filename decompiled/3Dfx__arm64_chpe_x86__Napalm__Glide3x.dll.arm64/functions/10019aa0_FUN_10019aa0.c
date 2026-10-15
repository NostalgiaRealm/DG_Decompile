/*
 * FUN_10019aa0 at 10019aa0
 * undefined FUN_10019aa0(void)
 * Address ranges: 10019aa0-10019b37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019aa0(int param_1,uint param_2)

{
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x2b28) != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
  }
  *(uint *)(param_1 + 0x2e00) = param_2 >> 0x18;
  *(uint *)(param_1 + 0x2e04) = param_2 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x2e08) = param_2 >> 8 & 0xff;
  *(undefined1 *)(param_1 + 0x3650) = 1;
  return;
}

