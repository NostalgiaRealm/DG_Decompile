/*
 * FUN_10032e80 at 10032e80
 * undefined FUN_10032e80(void)
 * Address ranges: 10032e80-10032f97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10032e80(int param_1)

{
  int *piVar1;
  code *extraout_w11;
  
  piVar1 = (int *)(param_1 + 0x138);
  if (*(int *)(*piVar1 + 0x2964) == 0) {
    FUN_1003ea50(*piVar1 + 0x3950,0,0);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1,0);
  }
  if ((*(char *)(param_1 + 0x124) != '\0') || (**(char **)(*piVar1 + 0x3170) != '\0')) {
    FUN_1003ea50(*piVar1 + 0x3950,0,0);
    FUN_10032f98(param_1,1,0);
    if (*(char *)(*(int *)(*piVar1 + 0x3170) + 3) != '\0') {
      (*(code *)PTR_FUN_1009d030)();
    }
  }
  if (*(char *)(param_1 + 0x125) != '\0') {
    FUN_1003ea50(*piVar1 + 0x3950,0,0);
    FUN_10032f98(param_1,2,0);
  }
  return;
}

