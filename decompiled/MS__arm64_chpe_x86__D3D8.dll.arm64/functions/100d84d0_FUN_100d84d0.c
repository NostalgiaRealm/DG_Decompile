/*
 * FUN_100d84d0 at 100d84d0
 * undefined FUN_100d84d0(void)
 * Address ranges: 100d84d0-100d8567
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d84d0(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  code *extraout_w11;
  
  param_1 = param_1 + param_2 * 0x1510;
  iVar1 = param_1 + 0x8ac;
  iVar3 = FUN_100d9ea0(iVar1,param_5);
  piVar2 = (int *)(param_1 + 0x594);
  if (*piVar2 != iVar3) {
    FUN_100da0c0(iVar1,*piVar2);
    *piVar2 = iVar3;
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar4,0,1,piVar2);
  }
  return;
}

