/*
 * FUN_10018a40 at 10018a40
 * undefined __thiscall FUN_10018a40(void * this, undefined1 param_1)
 * Address ranges: 10018a40-10018a5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10018a40(void *this,undefined1 param_1)

{
  if (*(int *)((int)this + 0x1dd0) == 0xa000) {
    param_1 = 0;
  }
  *(undefined1 *)((int)this + 0x78) = param_1;
  return;
}

