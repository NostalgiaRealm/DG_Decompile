/*
 * FUN_1001e3bb at 1001e3bb
 * undefined __thiscall FUN_1001e3bb(void * this, int param_1)
 * Address ranges: 1001e3bb-1001e3e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001e3bb(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x150))();
  *(int *)((int)this + 0x2bd8) = param_1;
  *(int *)((int)this + 0x297c) = param_1;
  *(undefined1 *)((int)this + 0x3150) = 1;
  return;
}

