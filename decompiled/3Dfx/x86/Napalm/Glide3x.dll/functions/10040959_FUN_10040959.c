/*
 * FUN_10040959 at 10040959
 * undefined4 __thiscall FUN_10040959(void * this, int param_1)
 * Address ranges: 10040959-1004096a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10040959(void *this,int param_1)

{
  return CONCAT31((int3)((uint)(param_1 * 0x18) >> 8),
                  *(undefined1 *)(param_1 * 0x18 + 0x535 + (int)this));
}

