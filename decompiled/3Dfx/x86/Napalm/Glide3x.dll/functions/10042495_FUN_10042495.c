/*
 * FUN_10042495 at 10042495
 * undefined4 __thiscall FUN_10042495(void * this, uint param_1)
 * Address ranges: 10042495-100424a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10042495(void *this,uint param_1)

{
  return *(undefined4 *)(*(int *)((int)this + 0x34) + (param_1 >> 0x10) * 8);
}

