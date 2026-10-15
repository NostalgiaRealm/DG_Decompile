/*
 * FUN_100ba3df at 100ba3df
 * undefined __thiscall FUN_100ba3df(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100ba3df-100ba3fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100ba3df(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 * 0x18 + (int)this);
  (**(code **)(*piVar1 + 0x48))(piVar1,param_2,param_3,param_4);
  return;
}

