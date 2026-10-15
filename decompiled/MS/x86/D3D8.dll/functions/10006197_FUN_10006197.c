/*
 * FUN_10006197 at 10006197
 * undefined __thiscall FUN_10006197(void * this, int param_1)
 * Address ranges: 10006197-100061b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006197(void *this,int param_1)

{
  if (param_1 != *(int *)((int)this + 0x58a0)) {
    *(int *)((int)this + 0x58a0) = param_1;
    *(undefined4 *)((int)this + 0x58a8) = 0xff;
  }
  return;
}

