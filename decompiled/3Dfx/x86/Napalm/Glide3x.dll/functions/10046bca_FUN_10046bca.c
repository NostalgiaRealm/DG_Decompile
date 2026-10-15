/*
 * FUN_10046bca at 10046bca
 * undefined __thiscall FUN_10046bca(void * this, int param_1)
 * Address ranges: 10046bca-10046be7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10046bca(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 * 0x1510 + 0x510 + (int)this);
  (**(code **)(*piVar1 + 0x9c))(piVar1);
  return;
}

