/*
 * FUN_100c6ceb at 100c6ceb
 * undefined __thiscall FUN_100c6ceb(void * this, int param_1)
 * Address ranges: 100c6ceb-100c6d05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100c6ceb(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 * 0x18 + 0x520 + (int)this);
  (**(code **)(*piVar1 + 0x94))(piVar1);
  return;
}

