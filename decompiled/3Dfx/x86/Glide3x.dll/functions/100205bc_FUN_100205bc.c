/*
 * FUN_100205bc at 100205bc
 * undefined __thiscall FUN_100205bc(void * this, int param_1, int param_2)
 * Address ranges: 100205bc-100205ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100205bc(void *this,int param_1,int param_2)

{
  (**(code **)(*(int *)this + 0x170))();
  *(uint *)(*(int *)((int)this + param_1 * 4 + 0x32e4) + 0x10) = (uint)(param_2 == 1);
  *(undefined1 *)(param_1 + 0x32d3 + (int)this) = 1;
  return;
}

