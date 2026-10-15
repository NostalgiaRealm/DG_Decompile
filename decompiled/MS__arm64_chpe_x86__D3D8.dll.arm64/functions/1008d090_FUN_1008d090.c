/*
 * FUN_1008d090 at 1008d090
 * undefined FUN_1008d090(void)
 * Address ranges: 1008d090-1008d127
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1008d090(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar2 = (*extraout_w11)(param_1);
  if ((iVar2 == 0) || (uVar3 = FUN_1008cf10(param_1), (uVar3 & 1) == 0)) {
    uVar4 = 0;
  }
  else {
    (*pcVar1)();
    (*extraout_w11_00)(param_1,param_2,param_3);
    uVar4 = 1;
  }
  return uVar4;
}

