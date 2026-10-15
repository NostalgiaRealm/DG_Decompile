/*
 * FUN_1002d980 at 1002d980
 * undefined FUN_1002d980(void)
 * Address ranges: 1002d980-1002da0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002d980(int param_1,int param_2)

{
  code *extraout_w11;
  
  FUN_1002bd50(*(undefined4 *)(param_1 + 0x315c));
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(int *)(param_1 + 0x2b54) = param_2;
  *(undefined4 *)(param_1 + 0x2a48) = *(undefined4 *)(&DAT_10096e50 + param_2 * 4);
  *(undefined1 *)(param_1 + 0x2bc0) = 1;
  return;
}

