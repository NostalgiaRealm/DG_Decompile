/*
 * FUN_10028c50 at 10028c50
 * undefined FUN_10028c50(void)
 * Address ranges: 10028c50-10028cc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028c50(int param_1)

{
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x296c) == 2) {
    FUN_1002bd50(*(undefined4 *)(param_1 + 0x315c));
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
  }
  *(undefined1 *)(param_1 + 0x3152) = 1;
  return;
}

