/*
 * FUN_10036901 at 10036901
 * undefined4 * __thiscall FUN_10036901(void * this, byte param_1)
 * Address ranges: 10036901-10036923
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10036901(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100d54f8;
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

