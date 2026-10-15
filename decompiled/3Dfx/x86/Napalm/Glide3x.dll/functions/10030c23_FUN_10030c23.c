/*
 * FUN_10030c23 at 10030c23
 * int __thiscall FUN_10030c23(void * this, int param_1, int param_2)
 * Address ranges: 10030c23-10030c41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10030c23(void *this,int param_1,int param_2)

{
  return *(int *)(*(int *)(*(int *)((int)this + 0x5c) + 4 + param_1 * 0x10) + param_2 * 0x1c) +
         *(int *)((int)this + 0x44);
}

