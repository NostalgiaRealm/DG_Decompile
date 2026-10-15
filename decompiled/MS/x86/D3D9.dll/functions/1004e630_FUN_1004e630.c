/*
 * FUN_1004e630 at 1004e630
 * undefined4 * __thiscall FUN_1004e630(void * this, byte param_1)
 * Address ranges: 1004e630-1004e652
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1004e630(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100d5a10;
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

