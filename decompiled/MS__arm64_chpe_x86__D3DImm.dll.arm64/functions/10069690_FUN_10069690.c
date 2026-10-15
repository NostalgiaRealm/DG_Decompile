/*
 * FUN_10069690 at 10069690
 * undefined FUN_10069690(void)
 * Address ranges: 10069690-1006973b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10069690(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = 0x80070057;
  if (param_5 == 0) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar1 = (*extraout_w11)(uVar1,param_3);
    uVar1 = FUN_10064740(*(undefined4 *)(param_1 + 4),&DAT_1009c4a0,param_2,param_1,uVar1,param_3,
                         param_4,0);
  }
  return uVar1;
}

