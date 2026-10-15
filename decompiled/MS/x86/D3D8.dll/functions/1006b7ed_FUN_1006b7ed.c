/*
 * FUN_1006b7ed at 1006b7ed
 * undefined __thiscall FUN_1006b7ed(void * this, int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1006b7ed-1006b824
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1006b7ed(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1006b18d(this,1,1);
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x1c) = param_3;
  *(int **)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x34) = param_4;
  (**(code **)(*param_1 + 4))(param_1);
  *(undefined2 *)((int)this + 0x38) = 0x101;
  return;
}

