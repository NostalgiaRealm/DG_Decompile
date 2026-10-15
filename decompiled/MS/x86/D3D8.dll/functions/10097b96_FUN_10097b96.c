/*
 * FUN_10097b96 at 10097b96
 * undefined4 __thiscall FUN_10097b96(void * this, uint param_1)
 * Address ranges: 10097b96-10097ba8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10097b96(void *this,uint param_1)

{
  return *(undefined4 *)(*(int *)((int)this + 0x34) + (param_1 >> 0x10) * 8);
}

