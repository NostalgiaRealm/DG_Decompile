/*
 * FUN_100b3f0c at 100b3f0c
 * undefined4 __thiscall FUN_100b3f0c(void * this, int param_1)
 * Address ranges: 100b3f0c-100b3f24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100b3f0c(void *this,int param_1)

{
  return CONCAT31((int3)((uint)(param_1 * 0x1510) >> 8),
                  *(int *)(param_1 * 0x1510 + 0x51c + (int)this) == 5);
}

