/*
 * FUN_1004f273 at 1004f273
 * undefined4 __thiscall FUN_1004f273(void * this, int param_1)
 * Address ranges: 1004f273-1004f28b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004f273(void *this,int param_1)

{
  return CONCAT31((int3)((uint)(param_1 * 0x1510) >> 8),
                  *(int *)(param_1 * 0x1510 + 0x51c + (int)this) == 5);
}

