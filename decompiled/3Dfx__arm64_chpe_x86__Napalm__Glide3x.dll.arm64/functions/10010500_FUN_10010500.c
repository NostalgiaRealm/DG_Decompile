/*
 * FUN_10010500 at 10010500
 * undefined FUN_10010500(void)
 * Address ranges: 10010500-1001057b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10010500(int param_1)

{
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x2b24) - 1U < 2) {
    FUN_1001c570(*(undefined4 *)(param_1 + 0x365c));
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
  }
  *(undefined1 *)(param_1 + 0x3652) = 1;
  return;
}

