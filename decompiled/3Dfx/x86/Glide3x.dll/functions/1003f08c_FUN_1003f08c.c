/*
 * FUN_1003f08c at 1003f08c
 * undefined4 __thiscall FUN_1003f08c(void * this, uint param_1)
 * Address ranges: 1003f08c-1003f09e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003f08c(void *this,uint param_1)

{
  return *(undefined4 *)(*(int *)((int)this + 0x34) + (param_1 >> 0x10) * 8);
}

