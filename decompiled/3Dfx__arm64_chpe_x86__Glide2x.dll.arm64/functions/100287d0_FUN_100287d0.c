/*
 * FUN_100287d0 at 100287d0
 * undefined FUN_100287d0(void)
 * Address ranges: 100287d0-10028847
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100287d0(int param_1)

{
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x296c) == 2) {
    FUN_1002b8d0(*(undefined4 *)(param_1 + 0x315c));
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
  }
  *(undefined1 *)(param_1 + 0x3152) = 1;
  return;
}

