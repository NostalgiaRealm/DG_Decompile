/*
 * FUN_100abbd4 at 100abbd4
 * int __thiscall FUN_100abbd4(void * this, int param_1, int param_2)
 * Address ranges: 100abbd4-100abbf2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100abbd4(void *this,int param_1,int param_2)

{
  return *(int *)(*(int *)(*(int *)((int)this + 0x5c) + 4 + param_1 * 0x10) + param_2 * 0x1c) +
         *(int *)((int)this + 0x44);
}

