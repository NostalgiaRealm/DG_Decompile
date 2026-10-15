/*
 * FUN_1001290c at 1001290c
 * undefined __fastcall FUN_1001290c(int param_1)
 * Address ranges: 1001290c-10012925
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001290c(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

