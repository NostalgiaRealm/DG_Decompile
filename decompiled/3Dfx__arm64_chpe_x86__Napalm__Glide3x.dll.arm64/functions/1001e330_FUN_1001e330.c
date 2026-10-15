/*
 * FUN_1001e330 at 1001e330
 * undefined FUN_1001e330(void)
 * Address ranges: 1001e330-1001e3eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001e330(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  FUN_1001c528(*(undefined4 *)(param_1 + 0x365c),0,0);
  *(undefined4 *)(param_1 + 0x2b54) = param_5;
  *(undefined4 *)(param_1 + 0x2b58) = param_6;
  *(undefined4 *)(param_1 + 0x2b5c) = param_3;
  *(undefined4 *)(param_1 + 0x2b60) = param_4;
  *(undefined4 *)(param_1 + 0x2b64) = param_7;
  return;
}

