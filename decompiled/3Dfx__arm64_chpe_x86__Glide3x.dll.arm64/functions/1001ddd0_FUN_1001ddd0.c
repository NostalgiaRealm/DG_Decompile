/*
 * FUN_1001ddd0 at 1001ddd0
 * undefined FUN_1001ddd0(void)
 * Address ranges: 1001ddd0-1001de8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001ddd0(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  FUN_1001bf60(*(undefined4 *)(param_1 + 0x32dc),0,0);
  *(undefined4 *)(param_1 + 0x2a2c) = param_5;
  *(undefined4 *)(param_1 + 0x2a30) = param_6;
  *(undefined4 *)(param_1 + 0x2a34) = param_3;
  *(undefined4 *)(param_1 + 0x2a38) = param_4;
  *(undefined4 *)(param_1 + 0x2a3c) = param_7;
  return;
}

