/*
 * FUN_1003daec at 1003daec
 * int __thiscall FUN_1003daec(void * this, int param_1, int param_2)
 * Address ranges: 1003daec-1003db0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1003daec(void *this,int param_1,int param_2)

{
  return *(int *)(*(int *)(*(int *)((int)this + 0x5c) + 4 + param_1 * 0x10) + param_2 * 0x1c) +
         *(int *)((int)this + 0x44);
}

