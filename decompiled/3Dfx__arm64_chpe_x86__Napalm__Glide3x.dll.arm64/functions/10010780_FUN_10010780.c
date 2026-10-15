/*
 * FUN_10010780 at 10010780
 * undefined FUN_10010780(void)
 * Address ranges: 10010780-1001082b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10010780(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(undefined4 *)(param_1 + 0x2cf8) = param_2;
  *(undefined4 *)(param_1 + 0x2cfc) = param_3;
  *(undefined4 *)(param_1 + 0x2d00) = param_4;
  *(undefined4 *)(param_1 + 0x2d04) = param_5;
  FUN_10010310(param_1,param_2,param_3,param_4,param_5);
  return;
}

