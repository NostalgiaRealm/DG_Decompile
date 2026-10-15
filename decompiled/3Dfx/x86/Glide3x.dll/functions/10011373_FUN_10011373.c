/*
 * FUN_10011373 at 10011373
 * undefined __thiscall FUN_10011373(void * this, ushort param_1)
 * Address ranges: 10011373-1001139d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10011373(void *this,ushort param_1)

{
  (**(code **)(**(int **)((int)this + 0x32dc) + 0x28))(1,0);
  *(uint *)((int)this + 0x2c90) = (uint)param_1;
  *(undefined1 *)((int)this + 0x32d0) = 1;
  return;
}

