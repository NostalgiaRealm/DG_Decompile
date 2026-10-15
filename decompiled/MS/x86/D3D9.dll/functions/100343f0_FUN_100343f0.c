/*
 * FUN_100343f0 at 100343f0
 * undefined __thiscall FUN_100343f0(void * this, undefined1 param_1)
 * Address ranges: 100343f0-1003440f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100343f0(void *this,undefined1 param_1)

{
  if (*(int *)((int)this + 0xf748) == 0xa000) {
    param_1 = 0;
  }
  *(undefined1 *)((int)this + 0x80) = param_1;
  return;
}

