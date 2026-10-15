/*
 * FUN_10017a28 at 10017a28
 * undefined FUN_10017a28(void)
 * Address ranges: 10017a28-10017a83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10017a28(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  undefined1 auVar2 [16];
  
  uVar1 = 0x8876086c;
  if (param_2 != 0) {
    auVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar1 = (*extraout_w11)(auVar2._0_8_ & 0xffffffff,&DAT_101290c0,auVar2._8_8_ & 0xffffffff);
  }
  return uVar1;
}

