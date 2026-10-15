/*
 * FUN_100bfff7 at 100bfff7
 * undefined4 * __thiscall FUN_100bfff7(void * this, byte param_1)
 * Address ranges: 100bfff7-100c0019
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100bfff7(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100d8d20;
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

