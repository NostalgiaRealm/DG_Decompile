/*
 * FUN_1003d54b at 1003d54b
 * undefined4 __thiscall FUN_1003d54b(void * this, int param_1)
 * Address ranges: 1003d54b-1003d55c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003d54b(void *this,int param_1)

{
  return CONCAT31((int3)((uint)(param_1 * 0x18) >> 8),
                  *(undefined1 *)(param_1 * 0x18 + 0x535 + (int)this));
}

