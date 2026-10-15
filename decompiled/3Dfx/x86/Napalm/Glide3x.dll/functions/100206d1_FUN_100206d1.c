/*
 * FUN_100206d1 at 100206d1
 * undefined __thiscall FUN_100206d1(void * this, byte param_1)
 * Address ranges: 100206d1-10020707
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100206d1(void *this,byte param_1)

{
  FUN_1001164d(*(int **)((int)this + 0x365c));
  (**(code **)(*(int *)this + 0x198))();
  *(uint *)((int)this + 0x2d20) = (uint)param_1;
  *(uint *)((int)this + 0x2c2c) = (uint)param_1;
  *(undefined1 *)((int)this + 0x2da8) = 1;
  return;
}

