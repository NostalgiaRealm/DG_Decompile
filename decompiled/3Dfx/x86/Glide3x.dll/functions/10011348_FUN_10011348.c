/*
 * FUN_10011348 at 10011348
 * undefined __thiscall FUN_10011348(void * this, byte param_1)
 * Address ranges: 10011348-10011372
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10011348(void *this,byte param_1)

{
  (**(code **)(**(int **)((int)this + 0x32dc) + 0x28))(1,0);
  *(uint *)((int)this + 0x2c88) = (uint)param_1;
  *(undefined1 *)((int)this + 0x32d0) = 1;
  return;
}

