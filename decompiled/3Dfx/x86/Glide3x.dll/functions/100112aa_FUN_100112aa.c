/*
 * FUN_100112aa at 100112aa
 * undefined __thiscall FUN_100112aa(void * this, undefined4 param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
 * Address ranges: 100112aa-100112f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100112aa(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  (**(code **)(*(int *)this + 0x170))();
  (**(code **)(**(int **)((int)this + 0x32dc) + 0x28))(0,0);
  *(int *)((int)this + 0x2a18) = param_4;
  *(int *)((int)this + 0x2a1c) = param_5;
  *(int *)((int)this + 0x2a20) = param_2;
  *(int *)((int)this + 0x2a24) = param_3;
  *(int *)((int)this + 0x2a28) = param_6;
  return;
}

