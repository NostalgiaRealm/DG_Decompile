/*
 * FUN_1000711f at 1000711f
 * int __thiscall FUN_1000711f(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 1000711f-10007144
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1000711f(void *this,int param_1,int param_2,int param_3)

{
  return *(int *)(*(int *)(*(int *)(*(int *)((int)this + 0x5c) + 4 + param_1 * 0x10) + 4 +
                          param_2 * 0x1c) + param_3 * 4) + *(int *)((int)this + 0x44);
}

