/*
 * FUN_100070e5 at 100070e5
 * int __thiscall FUN_100070e5(void * this, int param_1, int param_2)
 * Address ranges: 100070e5-10007103
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100070e5(void *this,int param_1,int param_2)

{
  return *(int *)(*(int *)(*(int *)((int)this + 0x5c) + 4 + param_1 * 0x10) + param_2 * 0x1c) +
         *(int *)((int)this + 0x44);
}

