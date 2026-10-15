/*
 * FUN_10006d93 at 10006d93
 * int __thiscall FUN_10006d93(void * this, int param_1, int param_2)
 * Address ranges: 10006d93-10006db1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10006d93(void *this,int param_1,int param_2)

{
  return *(int *)(*(int *)(*(int *)((int)this + 0x5c) + 4 + param_1 * 0x10) + param_2 * 0x1c) +
         *(int *)((int)this + 0x44);
}

