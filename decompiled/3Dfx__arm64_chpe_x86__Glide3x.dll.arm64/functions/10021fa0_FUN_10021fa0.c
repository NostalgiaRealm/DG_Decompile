/*
 * FUN_10021fa0 at 10021fa0
 * undefined FUN_10021fa0(void)
 * Address ranges: 10021fa0-100220b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10021fa0(int param_1)

{
  int *piVar1;
  code *extraout_w11;
  
  piVar1 = (int *)(param_1 + 0x138);
  if (*(int *)(*piVar1 + 0x29e0) == 0) {
    FUN_1002e3d0(*piVar1 + 0x3f50,0,0);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1,0);
  }
  if ((*(char *)(param_1 + 0x124) != '\0') || (**(char **)(*piVar1 + 0x32f0) != '\0')) {
    FUN_1002e3d0(*piVar1 + 0x3f50,0,0);
    FUN_100220b8(param_1,1,0);
    if (*(char *)(*(int *)(*piVar1 + 0x32f0) + 3) != '\0') {
      (*(code *)PTR_FUN_100a0030)();
    }
  }
  if (*(char *)(param_1 + 0x125) != '\0') {
    FUN_1002e3d0(*piVar1 + 0x3f50,0,0);
    FUN_100220b8(param_1,2,0);
  }
  return;
}

