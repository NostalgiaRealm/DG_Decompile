/*
 * FUN_1003aa66 at 1003aa66
 * undefined4 __thiscall FUN_1003aa66(void * this, int param_1)
 * Address ranges: 1003aa66-1003aa77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003aa66(void *this,int param_1)

{
  return CONCAT31((int3)((uint)(param_1 * 0x18) >> 8),
                  *(undefined1 *)(param_1 * 0x18 + 0x535 + (int)this));
}

