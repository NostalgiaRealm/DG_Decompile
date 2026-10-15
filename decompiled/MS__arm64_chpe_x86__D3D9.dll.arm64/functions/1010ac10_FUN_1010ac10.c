/*
 * FUN_1010ac10 at 1010ac10
 * undefined FUN_1010ac10(void)
 * Address ranges: 1010ac10-1010aca7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010ac10(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  code *extraout_w11;
  
  param_1 = param_1 + param_2 * 0x1510;
  iVar1 = param_1 + 0x8ac;
  iVar3 = FUN_1010c5e0(iVar1,param_5);
  piVar2 = (int *)(param_1 + 0x594);
  if (*piVar2 != iVar3) {
    FUN_1010c800(iVar1,*piVar2);
    *piVar2 = iVar3;
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar4,0,1,piVar2);
  }
  return;
}

