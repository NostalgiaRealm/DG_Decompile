/*
 * FUN_10036e83 at 10036e83
 * undefined4 * __thiscall FUN_10036e83(void * this, byte param_1)
 * Address ranges: 10036e83-10036ea5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10036e83(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100d5560;
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

