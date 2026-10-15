/*
 * FUN_100138c1 at 100138c1
 * byte __fastcall FUN_100138c1(int param_1)
 * Address ranges: 100138c1-100138f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_100138c1(int param_1)

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

