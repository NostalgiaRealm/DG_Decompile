/*
 * FUN_1006b410 at 1006b410
 * undefined FUN_1006b410(void)
 * Address ranges: 1006b410-1006b493
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006b410(int param_1,int param_2,int param_3,undefined8 param_4,int *param_5)

{
  int *piVar1;
  code *extraout_w11;
  undefined1 auVar2 [16];
  
  piVar1 = (int *)(param_1 + param_2 * 0x1510 + param_3 * 4 + 0x594);
  if (*piVar1 != *param_5) {
    *piVar1 = *param_5;
    auVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar2._0_8_ & 0xffffffff,auVar2._8_8_ & 0xffffffff,1);
  }
  return;
}

