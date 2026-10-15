/*
 * FUN_1002e257 at 1002e257
 * undefined4 * __thiscall FUN_1002e257(void * this, byte param_1)
 * Address ranges: 1002e257-1002e279
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1002e257(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100b2194;
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

