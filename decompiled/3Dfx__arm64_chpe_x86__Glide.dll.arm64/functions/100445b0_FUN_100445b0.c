/*
 * FUN_100445b0 at 100445b0
 * undefined FUN_100445b0(void)
 * Address ranges: 100445b0-100446c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100445b0(int param_1)

{
  int *piVar1;
  code *extraout_w11;
  
  piVar1 = (int *)(param_1 + 0x138);
  if (*(int *)(*piVar1 + 0x2964) == 0) {
    FUN_10046f18(*piVar1 + 0x3780,0,0);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1,0);
  }
  if ((*(char *)(param_1 + 0x124) != '\0') || (**(char **)(*piVar1 + 0x3170) != '\0')) {
    FUN_10046f18(*piVar1 + 0x3780,0,0);
    FUN_100446c8(param_1,1,0);
    if (*(char *)(*(int *)(*piVar1 + 0x3170) + 3) != '\0') {
      (*(code *)PTR_FUN_1009d030)();
    }
  }
  if (*(char *)(param_1 + 0x125) != '\0') {
    FUN_10046f18(*piVar1 + 0x3780,0,0);
    FUN_100446c8(param_1,2,0);
  }
  return;
}

