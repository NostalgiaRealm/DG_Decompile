/*
 * FUN_100418bb at 100418bb
 * undefined4 __thiscall FUN_100418bb(void * this, int param_1, undefined4 param_2)
 * Address ranges: 100418bb-100418e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100418bb(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_8;
  
  local_8 = 0;
  piVar1 = *(int **)(param_1 * 0x1510 + 0x510 + (int)this);
  (**(code **)(*piVar1 + 0x5c))(piVar1,param_2,&local_8);
  return local_8;
}

