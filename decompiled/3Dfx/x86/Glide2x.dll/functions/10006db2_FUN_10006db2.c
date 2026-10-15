/*
 * FUN_10006db2 at 10006db2
 * undefined4 __thiscall FUN_10006db2(void * this, int param_1, int param_2)
 * Address ranges: 10006db2-10006dcc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10006db2(void *this,int param_1,int param_2)

{
  return *(undefined4 *)
          (*(int *)(*(int *)((int)this + 0x5c) + 4 + param_1 * 0x10) + 8 + param_2 * 0x1c);
}

