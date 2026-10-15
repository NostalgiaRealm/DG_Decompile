/*
 * FUN_1003c937 at 1003c937
 * undefined4 __thiscall FUN_1003c937(void * this, uint param_1)
 * Address ranges: 1003c937-1003c949
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003c937(void *this,uint param_1)

{
  return *(undefined4 *)(*(int *)((int)this + 0x34) + (param_1 >> 0x10) * 8);
}

