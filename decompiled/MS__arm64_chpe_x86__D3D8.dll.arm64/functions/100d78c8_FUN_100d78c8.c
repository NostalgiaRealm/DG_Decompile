/*
 * FUN_100d78c8 at 100d78c8
 * undefined FUN_100d78c8(void)
 * Address ranges: 100d78c8-100d795b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d78c8(int param_1,int param_2,int param_3)

{
  int *piVar1;
  code *extraout_w11;
  
  (*(code *)PTR_FUN_10134070)(param_1 + 0x4a0);
  piVar1 = (int *)(param_1 + param_2 * 0x1510 + 0x7ec);
  if (param_3 == *piVar1) {
    *piVar1 = 0;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_3);
  (*(code *)PTR_FUN_101340bc)(param_1 + 0x4a0);
  return;
}

