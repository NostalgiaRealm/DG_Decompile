/*
 * FUN_1002ec65 at 1002ec65
 * undefined4 * __thiscall FUN_1002ec65(void * this, byte param_1)
 * Address ranges: 1002ec65-1002ec87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1002ec65(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100d53f4;
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

