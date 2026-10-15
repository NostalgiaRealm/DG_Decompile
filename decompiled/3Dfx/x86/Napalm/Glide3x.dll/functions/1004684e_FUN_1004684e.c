/*
 * FUN_1004684e at 1004684e
 * undefined4 __thiscall FUN_1004684e(void * this, int param_1)
 * Address ranges: 1004684e-10046866
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004684e(void *this,int param_1)

{
  return CONCAT31((int3)((uint)(param_1 * 0x1510) >> 8),
                  *(int *)(param_1 * 0x1510 + 0x51c + (int)this) == 5);
}

