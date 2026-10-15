/*
 * FUN_1000a94c at 1000a94c
 * undefined __thiscall FUN_1000a94c(void * this, int * param_1, int * param_2)
 * Address ranges: 1000a94c-1000a97b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000a94c(void *this,int *param_1,int *param_2)

{
  FUN_1000a901(this,1,1);
  *(int **)((int)this + 0xc) = param_1;
  **(undefined4 **)((int)this + 0x18) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  (**(code **)(*param_1 + 4))(param_1);
  return;
}

