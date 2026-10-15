/*
 * FUN_1001dd10 at 1001dd10
 * undefined FUN_1001dd10(void)
 * Address ranges: 1001dd10-1001ddcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001dd10(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  FUN_1001bf60(*(undefined4 *)(param_1 + 0x32dc),0,0);
  *(undefined4 *)(param_1 + 0x2a18) = param_5;
  *(undefined4 *)(param_1 + 0x2a1c) = param_6;
  *(undefined4 *)(param_1 + 0x2a20) = param_3;
  *(undefined4 *)(param_1 + 0x2a24) = param_4;
  *(undefined4 *)(param_1 + 0x2a28) = param_7;
  return;
}

