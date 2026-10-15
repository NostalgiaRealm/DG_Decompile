/*
 * FUN_1000fadf at 1000fadf
 * byte __fastcall FUN_1000fadf(int param_1)
 * Address ranges: 1000fadf-1000fb0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_1000fadf(int param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = 1;
  if (*(char *)(param_1 + 0xb5) == '\0') {
    if ((*(int *)(param_1 + 100) != *(int *)(param_1 + 0x4c)) ||
       (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x50))) {
      bVar2 = 0;
    }
    bVar1 = (**(code **)(**(int **)(param_1 + 0xb8) + 0x28))();
    bVar2 = bVar2 & bVar1;
  }
  return bVar2;
}

