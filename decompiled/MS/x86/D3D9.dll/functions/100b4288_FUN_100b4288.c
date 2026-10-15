/*
 * FUN_100b4288 at 100b4288
 * undefined __thiscall FUN_100b4288(void * this, int param_1)
 * Address ranges: 100b4288-100b42a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100b4288(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 * 0x1510 + 0x510 + (int)this);
  (**(code **)(*piVar1 + 0x9c))(piVar1);
  return;
}

