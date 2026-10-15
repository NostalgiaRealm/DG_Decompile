/*
 * FUN_100125f6 at 100125f6
 * undefined __thiscall FUN_100125f6(void * this, int param_1)
 * Address ranges: 100125f6-10012627
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100125f6(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x198))();
  (**(code **)(**(int **)((int)this + 0x365c) + 0x28))(0,0);
  *(undefined1 *)((int)this + 0x2dac) = 1;
  *(int *)((int)this + 0x2b20) = param_1;
  return;
}

