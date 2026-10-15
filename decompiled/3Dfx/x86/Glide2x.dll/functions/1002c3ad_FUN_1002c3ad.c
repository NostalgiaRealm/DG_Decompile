/*
 * FUN_1002c3ad at 1002c3ad
 * undefined __thiscall FUN_1002c3ad(void * this, int param_1, int param_2)
 * Address ranges: 1002c3ad-1002c3d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c3ad(void *this,int param_1,int param_2)

{
  (**(code **)(*(int *)this + 0x150))();
  *(int *)(param_1 * 0x180 + 0x2cec + (int)this) = param_2;
  *(undefined1 *)((int)this + 0x3150) = 1;
  return;
}

