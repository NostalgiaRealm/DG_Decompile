/*
 * FUN_100126c6 at 100126c6
 * undefined __thiscall FUN_100126c6(void * this, byte param_1)
 * Address ranges: 100126c6-100126f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100126c6(void *this,byte param_1)

{
  (**(code **)(**(int **)((int)this + 0x365c) + 0x28))(1,0);
  *(uint *)((int)this + 0x2dd8) = (uint)param_1;
  *(undefined1 *)((int)this + 0x3650) = 1;
  return;
}

