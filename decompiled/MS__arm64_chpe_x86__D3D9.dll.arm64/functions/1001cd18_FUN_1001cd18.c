/*
 * FUN_1001cd18 at 1001cd18
 * undefined FUN_1001cd18(void)
 * Address ranges: 1001cd18-1001cd73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001cd18(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  undefined1 auVar2 [16];
  
  uVar1 = 0x8876086c;
  if (param_2 != 0) {
    auVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar1 = (*extraout_w11)(auVar2._0_8_ & 0xffffffff,&DAT_1015e450,auVar2._8_8_ & 0xffffffff);
  }
  return uVar1;
}

