/*
 * FUN_100126f1 at 100126f1
 * undefined __thiscall FUN_100126f1(void * this, ushort param_1)
 * Address ranges: 100126f1-1001271b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100126f1(void *this,ushort param_1)

{
  (**(code **)(**(int **)((int)this + 0x365c) + 0x28))(1,0);
  *(uint *)((int)this + 0x2de0) = (uint)param_1;
  *(undefined1 *)((int)this + 0x3650) = 1;
  return;
}

