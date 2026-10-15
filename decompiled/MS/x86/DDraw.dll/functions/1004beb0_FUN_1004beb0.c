/*
 * FUN_1004beb0 at 1004beb0
 * undefined4 __thiscall FUN_1004beb0(void * this, uint param_1)
 * Address ranges: 1004beb0-1004bec2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004beb0(void *this,uint param_1)

{
  return *(undefined4 *)(*(int *)((int)this + 0x34) + (param_1 >> 0x10) * 8);
}

