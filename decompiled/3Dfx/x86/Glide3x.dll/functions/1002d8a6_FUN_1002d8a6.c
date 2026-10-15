/*
 * FUN_1002d8a6 at 1002d8a6
 * undefined4 __thiscall FUN_1002d8a6(void * this, int param_1, int param_2)
 * Address ranges: 1002d8a6-1002d8c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002d8a6(void *this,int param_1,int param_2)

{
  return *(undefined4 *)
          (*(int *)(*(int *)((int)this + 0x5c) + 4 + param_1 * 0x10) + 0x14 + param_2 * 0x1c);
}

