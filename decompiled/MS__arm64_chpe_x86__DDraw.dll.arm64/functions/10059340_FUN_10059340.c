/*
 * FUN_10059340 at 10059340
 * undefined FUN_10059340(void)
 * Address ranges: 10059340-100593ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_10059340(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  code *extraout_w11;
  
  if (param_6 == 1) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(param_2,param_3,param_4);
    uVar1 = (*extraout_w11)(uVar1);
    iVar2 = FUN_10091880(uVar1,s_disable_100b4c98);
    if (iVar2 == 0) {
      *param_5 = 0;
    }
    else {
      iVar2 = FUN_10091880(uVar1,s_enable_100b4ca0);
      if (iVar2 == 0) {
        uVar1 = 1;
      }
      else {
        iVar2 = FUN_10091880(uVar1,s_enablebreak_100b4ca8);
        if (iVar2 != 0) goto LAB_100593f0;
        uVar1 = 2;
      }
      *param_5 = uVar1;
    }
    uVar3 = 1;
  }
  else {
LAB_100593f0:
    uVar3 = 0;
  }
  return uVar3;
}

