/*
 * FUN_1003db0b at 1003db0b
 * undefined4 __thiscall FUN_1003db0b(void * this, int param_1, int param_2)
 * Address ranges: 1003db0b-1003db25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003db0b(void *this,int param_1,int param_2)

{
  return *(undefined4 *)
          (*(int *)(*(int *)((int)this + 0x5c) + 4 + param_1 * 0x10) + 8 + param_2 * 0x1c);
}

