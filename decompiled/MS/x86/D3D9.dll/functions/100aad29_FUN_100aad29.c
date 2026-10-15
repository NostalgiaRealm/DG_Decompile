/*
 * FUN_100aad29 at 100aad29
 * undefined4 * __thiscall FUN_100aad29(void * this, byte param_1)
 * Address ranges: 100aad29-100aad4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100aad29(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100d8190;
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

