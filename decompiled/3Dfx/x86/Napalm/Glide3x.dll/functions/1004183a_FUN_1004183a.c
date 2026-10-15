/*
 * FUN_1004183a at 1004183a
 * undefined __thiscall FUN_1004183a(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1004183a-10041856
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1004183a(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 * 0x18 + (int)this);
  (**(code **)(*piVar1 + 0x48))(piVar1,param_2,param_3,param_4);
  return;
}

