/*
 * FUN_10020778 at 10020778
 * undefined FUN_10020778(void)
 * Address ranges: 10020778-10020817
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10020778(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *extraout_w11;
  
  FUN_1001fc90(param_1,1,1);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0x34) = param_5;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_2);
  *(undefined2 *)(param_1 + 0x38) = 0x101;
  return;
}

