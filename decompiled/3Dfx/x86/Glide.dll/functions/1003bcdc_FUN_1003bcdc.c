/*
 * FUN_1003bcdc at 1003bcdc
 * undefined __thiscall FUN_1003bcdc(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1003bcdc-1003bcf8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1003bcdc(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 * 0x18 + (int)this);
  (**(code **)(*piVar1 + 0x48))(piVar1,param_2,param_3,param_4);
  return;
}

