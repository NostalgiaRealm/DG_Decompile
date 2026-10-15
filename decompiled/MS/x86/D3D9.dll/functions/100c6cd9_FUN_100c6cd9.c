/*
 * FUN_100c6cd9 at 100c6cd9
 * undefined4 __thiscall FUN_100c6cd9(void * this, int param_1)
 * Address ranges: 100c6cd9-100c6cea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100c6cd9(void *this,int param_1)

{
  return CONCAT31((int3)((uint)(param_1 * 0x18) >> 8),
                  *(undefined1 *)(param_1 * 0x18 + 0x535 + (int)this));
}

