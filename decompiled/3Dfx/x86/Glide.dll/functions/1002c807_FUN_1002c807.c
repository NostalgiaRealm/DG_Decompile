/*
 * FUN_1002c807 at 1002c807
 * undefined __thiscall FUN_1002c807(void * this, int param_1, int param_2)
 * Address ranges: 1002c807-1002c837
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c807(void *this,int param_1,int param_2)

{
  (**(code **)(*(int *)this + 0x150))();
  *(uint *)(*(int *)((int)this + param_1 * 4 + 0x3164) + 0x10) = (uint)(param_2 == 1);
  *(undefined1 *)(param_1 + 0x3153 + (int)this) = 1;
  return;
}

