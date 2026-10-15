/*
 * FUN_100414fe at 100414fe
 * undefined4 __thiscall FUN_100414fe(void * this, int param_1, undefined4 param_2)
 * Address ranges: 100414fe-1004152a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100414fe(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_8;
  
  local_8 = 0;
  piVar1 = *(int **)(param_1 * 0x1510 + 0x510 + (int)this);
  (**(code **)(*piVar1 + 0x50))(piVar1,param_2,&local_8);
  return local_8;
}

