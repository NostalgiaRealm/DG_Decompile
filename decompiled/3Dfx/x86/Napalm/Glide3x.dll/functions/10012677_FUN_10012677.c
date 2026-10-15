/*
 * FUN_10012677 at 10012677
 * undefined __thiscall FUN_10012677(void * this, undefined4 param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
 * Address ranges: 10012677-100126c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10012677(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  (**(code **)(*(int *)this + 0x198))();
  (**(code **)(**(int **)((int)this + 0x365c) + 0x28))(0,0);
  *(int *)((int)this + 0x2b68) = param_4;
  *(int *)((int)this + 0x2b6c) = param_5;
  *(int *)((int)this + 0x2b70) = param_2;
  *(int *)((int)this + 0x2b74) = param_3;
  *(int *)((int)this + 0x2b78) = param_6;
  return;
}

