/*
 * FUN_10091d0a at 10091d0a
 * undefined4 __thiscall FUN_10091d0a(void * this, int param_1)
 * Address ranges: 10091d0a-10091d22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10091d0a(void *this,int param_1)

{
  return CONCAT31((int3)((uint)(param_1 * 0x1510) >> 8),
                  *(int *)(param_1 * 0x1510 + 0x51c + (int)this) == 5);
}

