/*
 * FUN_1006b6d8 at 1006b6d8
 * undefined FUN_1006b6d8(void)
 * Address ranges: 1006b6d8-1006b747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006b6d8(int param_1,int param_2,undefined8 param_3,undefined8 param_4,int *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  code *extraout_w11;
  
  piVar1 = (int *)(param_1 + param_2 * 0x1510 + 0x598);
  uVar3 = ZEXT48(piVar1);
  if (*piVar1 != *param_5) {
    *piVar1 = *param_5;
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,1,1,uVar3 & 0xffffffff);
  }
  return;
}

