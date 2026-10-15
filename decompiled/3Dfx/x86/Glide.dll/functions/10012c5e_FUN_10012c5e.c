/*
 * FUN_10012c5e at 10012c5e
 * undefined __fastcall FUN_10012c5e(int param_1)
 * Address ranges: 10012c5e-10012c77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10012c5e(int param_1)

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

