/*
 * FUN_1000686d at 1000686d
 * undefined __fastcall FUN_1000686d(int param_1)
 * Address ranges: 1000686d-100068bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000686d(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    FUN_10008ccb((undefined4 *)(*(int *)(param_1 + 0xc) + 0x11d4));
    (**(code **)(**(int **)(param_1 + 0xc) + 0x34))(*(int **)(param_1 + 0xc) + 0x475);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

