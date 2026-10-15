/*
 * FUN_1005a3a0 at 1005a3a0
 * undefined __thiscall FUN_1005a3a0(void * this, int param_1)
 * Address ranges: 1005a3a0-1005a3ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005a3a0(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 * 0x18 + 0x520 + (int)this);
  (**(code **)(*piVar1 + 0x94))(piVar1);
  return;
}

