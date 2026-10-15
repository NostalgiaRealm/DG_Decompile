/*
 * FUN_1003dbc0 at 1003dbc0
 * int __thiscall FUN_1003dbc0(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 1003dbc0-1003dbe6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1003dbc0(void *this,int param_1,int param_2,int param_3)

{
  return *(int *)(*(int *)(*(int *)(*(int *)((int)this + 0x5c) + 4 + param_1 * 0x10) + 0x10 +
                          param_2 * 0x1c) + 4 + param_3 * 8) + *(int *)((int)this + 0x44);
}

