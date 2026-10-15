/*
 * FUN_10019500 at 10019500
 * undefined FUN_10019500(void)
 * Address ranges: 10019500-100195d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019500(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,char param_7)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(undefined4 *)(param_1 + 0x2d30) = param_2;
  *(undefined4 *)(param_1 + 0x2d34) = param_3;
  *(undefined4 *)(param_1 + 0x2d38) = param_4;
  *(undefined4 *)(param_1 + 0x2d3c) = param_5;
  *(undefined4 *)(param_1 + 0x2d40) = param_6;
  *(uint *)(param_1 + 0x2ce0) = -(uint)(param_7 != '\0');
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  return;
}

