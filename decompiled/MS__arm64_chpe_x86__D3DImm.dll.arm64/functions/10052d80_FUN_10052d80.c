/*
 * FUN_10052d80 at 10052d80
 * undefined FUN_10052d80(void)
 * Address ranges: 10052d80-10052deb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10052d80(int param_1,undefined4 param_2,ulonglong param_3)

{
  undefined4 uVar1;
  code *extraout_w11;
  undefined1 auVar2 [16];
  
  if (*(int *)(param_1 + 0xa74) == 0) {
    uVar1 = FUN_10052b50(param_1,param_2,param_3 & 0xffffffff);
  }
  else {
    auVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar1 = (*extraout_w11)(auVar2._0_8_ & 0xffffffff,auVar2._8_8_ & 0xffffffff,param_3 & 0xffffffff
                            ,0);
  }
  return uVar1;
}

