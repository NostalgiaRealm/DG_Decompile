/*
 * FUN_100125c2 at 100125c2
 * undefined __thiscall FUN_100125c2(void * this, int param_1)
 * Address ranges: 100125c2-100125f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100125c2(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x198))();
  (**(code **)(**(int **)((int)this + 0x365c) + 0x28))(0,0);
  *(undefined2 *)((int)this + 0x2dac) = 0x101;
  *(int *)((int)this + 0x2b1c) = param_1;
  return;
}

