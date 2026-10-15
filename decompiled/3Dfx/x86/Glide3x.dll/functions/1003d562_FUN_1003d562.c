/*
 * FUN_1003d562 at 1003d562
 * undefined __thiscall FUN_1003d562(void * this, int param_1)
 * Address ranges: 1003d562-1003d57c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003d562(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 * 0x18 + 0x520 + (int)this);
  (**(code **)(*piVar1 + 0x94))(piVar1);
  return;
}

