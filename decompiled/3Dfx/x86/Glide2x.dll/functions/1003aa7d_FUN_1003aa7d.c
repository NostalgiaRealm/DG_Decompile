/*
 * FUN_1003aa7d at 1003aa7d
 * undefined __thiscall FUN_1003aa7d(void * this, int param_1)
 * Address ranges: 1003aa7d-1003aa97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003aa7d(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 * 0x18 + 0x520 + (int)this);
  (**(code **)(*piVar1 + 0x94))(piVar1);
  return;
}

