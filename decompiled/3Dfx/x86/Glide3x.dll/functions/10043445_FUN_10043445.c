/*
 * FUN_10043445 at 10043445
 * undefined4 __thiscall FUN_10043445(void * this, int param_1)
 * Address ranges: 10043445-1004345d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10043445(void *this,int param_1)

{
  return CONCAT31((int3)((uint)(param_1 * 0x1510) >> 8),
                  *(int *)(param_1 * 0x1510 + 0x51c + (int)this) == 5);
}

