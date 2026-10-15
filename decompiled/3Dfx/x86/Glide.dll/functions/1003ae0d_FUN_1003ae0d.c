/*
 * FUN_1003ae0d at 1003ae0d
 * undefined __thiscall FUN_1003ae0d(void * this, int param_1)
 * Address ranges: 1003ae0d-1003ae27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003ae0d(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 * 0x18 + 0x520 + (int)this);
  (**(code **)(*piVar1 + 0x94))(piVar1);
  return;
}

