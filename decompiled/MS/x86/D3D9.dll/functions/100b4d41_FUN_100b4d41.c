/*
 * FUN_100b4d41 at 100b4d41
 * undefined4 __thiscall FUN_100b4d41(void * this, int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 100b4d41-100b4d70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100b4d41(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 local_8;
  
  local_8 = 0;
  piVar1 = *(int **)(param_1 * 0x1510 + 0x510 + (int)this);
  (**(code **)(*piVar1 + 0x1c))(piVar1,param_2,param_3,&local_8);
  return local_8;
}

