/*
 * FUN_100516a4 at 100516a4
 * undefined __thiscall FUN_100516a4(void * this, int param_1)
 * Address ranges: 100516a4-100516be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100516a4(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 * 0x18 + 0x520 + (int)this);
  (**(code **)(*piVar1 + 0x94))(piVar1);
  return;
}

