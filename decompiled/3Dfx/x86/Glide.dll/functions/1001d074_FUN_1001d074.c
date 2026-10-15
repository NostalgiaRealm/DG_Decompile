/*
 * FUN_1001d074 at 1001d074
 * undefined __thiscall FUN_1001d074(void * this, byte param_1)
 * Address ranges: 1001d074-1001d09e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001d074(void *this,byte param_1)

{
  (**(code **)(**(int **)((int)this + 0x315c) + 0x28))(1,0);
  *(uint *)((int)this + 0x2be8) = (uint)param_1;
  *(undefined1 *)((int)this + 0x3150) = 1;
  return;
}

