/*
 * FUN_100461bc at 100461bc
 * undefined __thiscall FUN_100461bc(void * this, int param_1)
 * Address ranges: 100461bc-100461d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100461bc(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 * 0x1510 + 0x510 + (int)this);
  (**(code **)(*piVar1 + 0x9c))(piVar1);
  return;
}

