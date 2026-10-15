/*
 * FUN_1000fcf0 at 1000fcf0
 * undefined FUN_1000fcf0(void)
 * Address ranges: 1000fcf0-1000fe2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000fcf0(int param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  
  FUN_1001c528(*(undefined4 *)(param_1 + 0x365c),0,2);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_1 + 0x3660);
  if (*(int *)(*piVar1 + 0x1dc) != 1) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    *(undefined4 *)(*piVar1 + 0x1dc) = 1;
  }
  FUN_10019648(*piVar1,1,1);
  if (param_3 == '\0') {
    FUN_1000ed80(*piVar1,param_2,0,1);
  }
  else {
    FUN_1000f078();
  }
  **(int **)(*piVar1 + 0x1d4) = *(int *)(*piVar1 + 0x1d8) + -1;
  *(int *)(*piVar1 + 0x1d4) = *(int *)(*piVar1 + 0x1d4) + 4;
  FUN_10017ce8(param_1);
  uVar3 = (*pcVar2)();
  (*extraout_w11_00)(uVar3);
  return;
}

