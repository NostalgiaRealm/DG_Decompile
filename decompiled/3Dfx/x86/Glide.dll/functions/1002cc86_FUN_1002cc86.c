/*
 * FUN_1002cc86 at 1002cc86
 * undefined __thiscall FUN_1002cc86(void * this, int param_1)
 * Address ranges: 1002cc86-1002cca8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002cc86(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x150))();
  *(int *)((int)this + 0x2c48) = param_1;
  *(undefined1 *)((int)this + 0x3150) = 1;
  return;
}

