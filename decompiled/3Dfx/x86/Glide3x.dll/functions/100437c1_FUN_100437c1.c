/*
 * FUN_100437c1 at 100437c1
 * undefined __thiscall FUN_100437c1(void * this, int param_1)
 * Address ranges: 100437c1-100437de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100437c1(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 * 0x1510 + 0x510 + (int)this);
  (**(code **)(*piVar1 + 0x9c))(piVar1);
  return;
}

