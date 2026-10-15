/*
 * FUN_1005a38e at 1005a38e
 * undefined4 __thiscall FUN_1005a38e(void * this, int param_1)
 * Address ranges: 1005a38e-1005a39f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1005a38e(void *this,int param_1)

{
  return CONCAT31((int3)((uint)(param_1 * 0x18) >> 8),
                  *(undefined1 *)(param_1 * 0x18 + 0x535 + (int)this));
}

