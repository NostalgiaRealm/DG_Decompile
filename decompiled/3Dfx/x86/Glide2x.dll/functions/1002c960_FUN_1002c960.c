/*
 * FUN_1002c960 at 1002c960
 * undefined __thiscall FUN_1002c960(void * this, int param_1)
 * Address ranges: 1002c960-1002c987
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c960(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x150))();
  *(undefined1 *)((int)this + 0x3150) = 1;
  *(uint *)((int)this + 0x2c70) = (uint)(param_1 != 0);
  return;
}

