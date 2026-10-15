/*
 * FUN_1002c988 at 1002c988
 * undefined __thiscall FUN_1002c988(void * this, byte param_1)
 * Address ranges: 1002c988-1002c9bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c988(void *this,byte param_1)

{
  (**(code **)(*(int *)this + 0x150))();
  *(undefined1 *)((int)this + 0x3150) = 1;
  *(uint *)((int)this + 0x2c1c) = (param_1 == 0) - 1;
  *(uint *)((int)this + 0x2970) = (uint)param_1;
  return;
}

