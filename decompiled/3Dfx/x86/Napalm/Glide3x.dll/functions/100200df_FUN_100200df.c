/*
 * FUN_100200df at 100200df
 * undefined __thiscall FUN_100200df(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 100200df-1002011f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100200df(void *this,int param_1,int param_2,int param_3)

{
  (**(code **)(*(int *)this + 0x198))();
  *(int *)(param_1 * 0x250 + 0x2f68 + (int)this) = param_2;
  *(int *)(param_1 * 0x250 + 0x2f6c + (int)this) = param_3;
  *(undefined1 *)((int)this + 0x3650) = 1;
  *(undefined1 *)(param_1 + 0x3653 + (int)this) = 1;
  return;
}

