/*
 * FUN_10099c2d at 10099c2d
 * undefined4 * __thiscall FUN_10099c2d(void * this, byte param_1)
 * Address ranges: 10099c2d-10099c4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10099c2d(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100d7074;
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

