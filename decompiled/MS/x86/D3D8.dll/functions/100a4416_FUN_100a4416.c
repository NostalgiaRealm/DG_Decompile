/*
 * FUN_100a4416 at 100a4416
 * undefined __thiscall FUN_100a4416(void * this, int param_1)
 * Address ranges: 100a4416-100a4430
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100a4416(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 * 0x18 + 0x520 + (int)this);
  (**(code **)(*piVar1 + 0x94))(piVar1);
  return;
}

