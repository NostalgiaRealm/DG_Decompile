/*
 * FUN_1002ba10 at 1002ba10
 * undefined __thiscall FUN_1002ba10(void * this, undefined1 param_1)
 * Address ranges: 1002ba10-1002ba2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002ba10(void *this,undefined1 param_1)

{
  if (*(int *)((int)this + 0xda44) == 0xa000) {
    param_1 = 0;
  }
  *(undefined1 *)((int)this + 0x80) = param_1;
  return;
}

