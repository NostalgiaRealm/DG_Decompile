/*
 * FUN_10012628 at 10012628
 * undefined __thiscall FUN_10012628(void * this, undefined4 param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
 * Address ranges: 10012628-10012676
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10012628(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  (**(code **)(*(int *)this + 0x198))();
  (**(code **)(**(int **)((int)this + 0x365c) + 0x28))(0,0);
  *(int *)((int)this + 0x2b54) = param_4;
  *(int *)((int)this + 0x2b58) = param_5;
  *(int *)((int)this + 0x2b5c) = param_2;
  *(int *)((int)this + 0x2b60) = param_3;
  *(int *)((int)this + 0x2b64) = param_6;
  return;
}

