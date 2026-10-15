/*
 * FUN_1004f5ef at 1004f5ef
 * undefined __thiscall FUN_1004f5ef(void * this, int param_1)
 * Address ranges: 1004f5ef-1004f60c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004f5ef(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 * 0x1510 + 0x510 + (int)this);
  (**(code **)(*piVar1 + 0x9c))(piVar1);
  return;
}

