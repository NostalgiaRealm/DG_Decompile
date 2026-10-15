/*
 * FUN_100f4838 at 100f4838
 * undefined FUN_100f4838(void)
 * Address ranges: 100f4838-100f48a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100f4838(undefined8 param_1,undefined4 param_2,undefined4 param_3,ulonglong param_4,
                 ulonglong param_5,int param_6)

{
  bool bVar1;
  char cVar2;
  code *extraout_w11;
  undefined1 auVar3 [16];
  
  param_4 = param_4 & 0xffffffff;
  if (param_6 == 1) {
    auVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(param_2,param_3,param_4);
    cVar2 = (*extraout_w11)(auVar3._0_8_ & 0xffffffff,auVar3._8_8_ & 0xffffffff,param_4 & 0xffffffff
                            ,0,param_5 & 0xffffffff);
    bVar1 = cVar2 != '\0';
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

