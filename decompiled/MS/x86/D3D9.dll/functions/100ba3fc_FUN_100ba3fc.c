/*
 * FUN_100ba3fc at 100ba3fc
 * undefined __thiscall FUN_100ba3fc(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100ba3fc-100ba418
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100ba3fc(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 * 0x18 + (int)this);
  (**(code **)(*piVar1 + 0x50))(piVar1,param_2,param_3,param_4);
  return;
}

