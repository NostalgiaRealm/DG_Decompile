/*
 * FUN_100112f9 at 100112f9
 * undefined __thiscall FUN_100112f9(void * this, undefined4 param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
 * Address ranges: 100112f9-10011347
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100112f9(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  (**(code **)(*(int *)this + 0x170))();
  (**(code **)(**(int **)((int)this + 0x32dc) + 0x28))(0,0);
  *(int *)((int)this + 0x2a2c) = param_4;
  *(int *)((int)this + 0x2a30) = param_5;
  *(int *)((int)this + 0x2a34) = param_2;
  *(int *)((int)this + 0x2a38) = param_3;
  *(int *)((int)this + 0x2a3c) = param_6;
  return;
}

