/*
 * FUN_10051692 at 10051692
 * undefined4 __thiscall FUN_10051692(void * this, int param_1)
 * Address ranges: 10051692-100516a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10051692(void *this,int param_1)

{
  return CONCAT31((int3)((uint)(param_1 * 0x18) >> 8),
                  *(undefined1 *)(param_1 * 0x18 + 0x535 + (int)this));
}

