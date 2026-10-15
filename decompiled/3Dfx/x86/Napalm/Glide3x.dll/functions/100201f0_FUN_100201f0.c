/*
 * FUN_100201f0 at 100201f0
 * undefined __thiscall FUN_100201f0(void * this, int param_1, int param_2)
 * Address ranges: 100201f0-10020220
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100201f0(void *this,int param_1,int param_2)

{
  (**(code **)(*(int *)this + 0x198))();
  *(uint *)(*(int *)((int)this + param_1 * 4 + 0x3664) + 0x10) = (uint)(param_2 == 1);
  *(undefined1 *)(param_1 + 0x3653 + (int)this) = 1;
  return;
}

