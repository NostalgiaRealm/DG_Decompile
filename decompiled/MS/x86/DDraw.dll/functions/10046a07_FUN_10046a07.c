/*
 * FUN_10046a07 at 10046a07
 * undefined4 __thiscall FUN_10046a07(void * this, int param_1, undefined4 param_2)
 * Address ranges: 10046a07-10046a33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10046a07(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_8;
  
  local_8 = 0;
  piVar1 = *(int **)(param_1 * 0x1510 + 0x510 + (int)this);
  (**(code **)(*piVar1 + 0x5c))(piVar1,param_2,&local_8);
  return local_8;
}

