/*
 * FUN_1004d970 at 1004d970
 * undefined FUN_1004d970(void)
 * Address ranges: 1004d970-1004da2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1004d970(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  code *extraout_w11;
  
  if (param_6 == 1) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(param_2,param_3,param_4);
    uVar1 = (*extraout_w11)(uVar1);
    iVar2 = FUN_1007de60(uVar1,s_disable_1009b060);
    if (iVar2 == 0) {
      *param_5 = 0;
    }
    else {
      iVar2 = FUN_1007de60(uVar1,s_enable_1009b068);
      if (iVar2 == 0) {
        uVar1 = 1;
      }
      else {
        iVar2 = FUN_1007de60(uVar1,s_enablebreak_1009b070);
        if (iVar2 != 0) goto LAB_1004da20;
        uVar1 = 2;
      }
      *param_5 = uVar1;
    }
    uVar3 = 1;
  }
  else {
LAB_1004da20:
    uVar3 = 0;
  }
  return uVar3;
}

