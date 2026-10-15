/*
 * FUN_1002c6f6 at 1002c6f6
 * undefined __thiscall FUN_1002c6f6(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 1002c6f6-1002c736
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c6f6(void *this,int param_1,int param_2,int param_3)

{
  (**(code **)(*(int *)this + 0x150))();
  *(int *)(param_1 * 0x180 + 0x2d04 + (int)this) = param_2;
  *(int *)(param_1 * 0x180 + 0x2d08 + (int)this) = param_3;
  *(undefined1 *)((int)this + 0x3150) = 1;
  *(undefined1 *)(param_1 + 0x3153 + (int)this) = 1;
  return;
}

