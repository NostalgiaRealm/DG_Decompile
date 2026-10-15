/*
 * FUN_10092086 at 10092086
 * undefined __thiscall FUN_10092086(void * this, int param_1)
 * Address ranges: 10092086-100920a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10092086(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 * 0x1510 + 0x510 + (int)this);
  (**(code **)(*piVar1 + 0x9c))(piVar1);
  return;
}

