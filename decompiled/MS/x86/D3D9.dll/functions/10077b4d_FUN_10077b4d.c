/*
 * FUN_10077b4d at 10077b4d
 * undefined4 * __thiscall FUN_10077b4d(void * this, byte param_1)
 * Address ranges: 10077b4d-10077b6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10077b4d(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100d61b0;
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

