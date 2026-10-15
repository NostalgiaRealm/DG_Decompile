/*
 * FUN_1002d138 at 1002d138
 * undefined __thiscall FUN_1002d138(void * this, int param_1)
 * Address ranges: 1002d138-1002d160
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002d138(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x150))();
  *(int *)((int)this + 0x2c5c) = param_1;
  *(undefined1 *)((int)this + 0x3150) = 1;
  *(int *)((int)this + 0x296c) = param_1;
  return;
}

