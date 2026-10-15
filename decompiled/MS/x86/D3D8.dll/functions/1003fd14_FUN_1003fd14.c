/*
 * FUN_1003fd14 at 1003fd14
 * undefined4 * __thiscall FUN_1003fd14(void * this, byte param_1)
 * Address ranges: 1003fd14-1003fd3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1003fd14(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100b240c;
  FUN_1003fac9(this);
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

