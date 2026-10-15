/*
 * FUN_10040ced at 10040ced
 * undefined4 __thiscall FUN_10040ced(void * this, int param_1)
 * Address ranges: 10040ced-10040d05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10040ced(void *this,int param_1)

{
  return CONCAT31((int3)((uint)(param_1 * 0x1510) >> 8),
                  *(int *)(param_1 * 0x1510 + 0x51c + (int)this) == 5);
}

