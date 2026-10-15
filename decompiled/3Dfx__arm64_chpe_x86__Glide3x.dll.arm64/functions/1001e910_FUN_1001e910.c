/*
 * FUN_1001e910 at 1001e910
 * undefined FUN_1001e910(void)
 * Address ranges: 1001e910-1001e99f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001e910(int param_1,int param_2)

{
  code *extraout_w11;
  
  FUN_1001bfa8(*(undefined4 *)(param_1 + 0x32dc));
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(int *)(param_1 + 0x2bf4) = param_2;
  *(undefined4 *)(param_1 + 0x2ae8) = *(undefined4 *)(&DAT_10099ae8 + param_2 * 4);
  *(undefined1 *)(param_1 + 0x2c60) = 1;
  return;
}

