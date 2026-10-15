/*
 * FUN_10022960 at 10022960
 * undefined FUN_10022960(void)
 * Address ranges: 10022960-10022a77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10022960(int param_1)

{
  int *piVar1;
  code *extraout_w11;
  
  piVar1 = (int *)(param_1 + 0x138);
  if (*(int *)(*piVar1 + 0x2b1c) == 0) {
    FUN_10031150(*piVar1 + 0x42e8,0,0);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1,0);
  }
  if ((*(char *)(param_1 + 0x124) != '\0') || (**(char **)(*piVar1 + 0x3670) != '\0')) {
    FUN_10031150(*piVar1 + 0x42e8,0,0);
    FUN_10022a78(param_1,1,0);
    if (*(char *)(*(int *)(*piVar1 + 0x3670) + 3) != '\0') {
      (*(code *)PTR_FUN_100a8030)();
    }
  }
  if (*(char *)(param_1 + 0x125) != '\0') {
    FUN_10031150(*piVar1 + 0x42e8,0,0);
    FUN_10022a78(param_1,2,0);
  }
  return;
}

