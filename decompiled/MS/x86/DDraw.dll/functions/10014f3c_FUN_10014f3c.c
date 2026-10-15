/*
 * FUN_10014f3c at 10014f3c
 * undefined __thiscall FUN_10014f3c(void * this, int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10014f3c-10014f73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10014f3c(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_100148dc(this,1,1);
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x1c) = param_3;
  *(int **)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x34) = param_4;
  (**(code **)(*param_1 + 4))(param_1);
  *(undefined2 *)((int)this + 0x38) = 0x101;
  return;
}

