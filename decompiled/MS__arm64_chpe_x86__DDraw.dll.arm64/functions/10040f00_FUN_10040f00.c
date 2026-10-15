/*
 * FUN_10040f00 at 10040f00
 * undefined FUN_10040f00(void)
 * Address ranges: 10040f00-10041077
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10040f00(int param_1,int param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  
  if (param_4 == 0) {
    return -0x7ff8ffa9;
  }
  if (param_2 != 0) {
    return -0x7ffbfef0;
  }
  param_1 = param_1 + 0x48;
  iVar2 = FUN_10091750(param_1,&DAT_100b17f0,0x10);
  if ((iVar2 == 0) || (iVar2 = FUN_10091750(param_1,0x100b1800,0x10), iVar2 == 0)) {
    iVar2 = FUN_10091750(param_3,&DAT_100b1850,0x10);
    iVar2 = FUN_10034570(iVar2 != 0);
    pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (iVar2 == 0) {
      return -0x7ff8fff2;
    }
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar3 = (*extraout_w11)(iVar2,param_3,param_4,0);
  }
  else {
    iVar2 = FUN_10091750(param_1,&DAT_100b1810,0x10);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_10034488(0);
    pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (iVar2 == 0) {
      return -0x7ff8fff2;
    }
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar3 = (*extraout_w11_00)(iVar2,param_3,param_4);
  }
  if (iVar3 < 0) {
    (*pcVar1)();
    (*extraout_w11_01)(iVar2,1);
  }
  return iVar3;
}

