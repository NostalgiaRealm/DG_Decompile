/*
 * FUN_1003db26 at 1003db26
 * int __thiscall FUN_1003db26(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 1003db26-1003db4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1003db26(void *this,int param_1,int param_2,int param_3)

{
  return *(int *)(*(int *)(*(int *)(*(int *)((int)this + 0x5c) + 4 + param_1 * 0x10) + 4 +
                          param_2 * 0x1c) + param_3 * 4) + *(int *)((int)this + 0x44);
}

