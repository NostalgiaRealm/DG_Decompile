/*
 * FUN_1004095d at 1004095d
 * undefined4 __thiscall FUN_1004095d(void * this, int param_1)
 * Address ranges: 1004095d-10040975
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004095d(void *this,int param_1)

{
  return CONCAT31((int3)((uint)(param_1 * 0x1510) >> 8),
                  *(int *)(param_1 * 0x1510 + 0x51c + (int)this) == 5);
}

