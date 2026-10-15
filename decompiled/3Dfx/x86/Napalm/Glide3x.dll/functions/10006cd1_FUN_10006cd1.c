/*
 * FUN_10006cd1 at 10006cd1
 * undefined __fastcall FUN_10006cd1(int param_1)
 * Address ranges: 10006cd1-10006d23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10006cd1(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    FUN_10009517((undefined4 *)(*(int *)(param_1 + 0xc) + 0x1310));
    (**(code **)(**(int **)(param_1 + 0xc) + 0x30))(*(int **)(param_1 + 0xc) + 0x4c4);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

