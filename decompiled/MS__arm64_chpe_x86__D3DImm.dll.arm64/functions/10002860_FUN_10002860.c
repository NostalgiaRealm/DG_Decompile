/*
 * FUN_10002860 at 10002860
 * undefined FUN_10002860(void)
 * Address ranges: 10002860-100028d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002860(int param_1,int param_2,uint param_3)

{
  int iVar1;
  code *extraout_w11;
  undefined1 auVar2 [16];
  
  iVar1 = *(int *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + 100);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0x68);
  if ((param_3 & 1) != 0) {
    auVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar2._0_8_ & 0xffffffff,auVar2._8_8_ & 0xffffffff);
  }
  return;
}

