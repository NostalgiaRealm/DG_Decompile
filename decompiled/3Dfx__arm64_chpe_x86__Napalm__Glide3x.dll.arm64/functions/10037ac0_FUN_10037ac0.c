/*
 * FUN_10037ac0 at 10037ac0
 * undefined FUN_10037ac0(void)
 * Address ranges: 10037ac0-10037bb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037ac0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  FUN_100375d8(param_1 + param_2 * 0x250 + 12000,param_3,param_4,param_5,param_6,param_7,param_8,
               param_9,param_11);
  FUN_100363a8(param_1,param_2);
  FUN_10036448(param_1,param_2);
  *(undefined1 *)(param_1 + 0x3650) = 1;
  return;
}

