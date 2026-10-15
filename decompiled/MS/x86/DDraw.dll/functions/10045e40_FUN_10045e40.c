/*
 * FUN_10045e40 at 10045e40
 * undefined4 __thiscall FUN_10045e40(void * this, int param_1)
 * Address ranges: 10045e40-10045e58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10045e40(void *this,int param_1)

{
  return CONCAT31((int3)((uint)(param_1 * 0x1510) >> 8),
                  *(int *)(param_1 * 0x1510 + 0x51c + (int)this) == 5);
}

