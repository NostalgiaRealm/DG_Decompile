/*
 * FUN_1002c8fc at 1002c8fc
 * undefined __thiscall FUN_1002c8fc(void * this, int param_1)
 * Address ranges: 1002c8fc-1002c91e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c8fc(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x150))();
  *(int *)((int)this + 0x2c48) = param_1;
  *(undefined1 *)((int)this + 0x3150) = 1;
  return;
}

