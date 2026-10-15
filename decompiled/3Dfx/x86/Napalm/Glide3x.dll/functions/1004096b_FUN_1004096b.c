/*
 * FUN_1004096b at 1004096b
 * undefined __thiscall FUN_1004096b(void * this, int param_1)
 * Address ranges: 1004096b-10040985
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004096b(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 * 0x18 + 0x520 + (int)this);
  (**(code **)(*piVar1 + 0x94))(piVar1);
  return;
}

