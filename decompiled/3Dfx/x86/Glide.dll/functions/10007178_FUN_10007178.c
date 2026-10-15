/*
 * FUN_10007178 at 10007178
 * undefined4 __thiscall FUN_10007178(void * this, int param_1, int param_2)
 * Address ranges: 10007178-10007192
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10007178(void *this,int param_1,int param_2)

{
  return *(undefined4 *)
          (*(int *)(*(int *)((int)this + 0x5c) + 4 + param_1 * 0x10) + 0x14 + param_2 * 0x1c);
}

