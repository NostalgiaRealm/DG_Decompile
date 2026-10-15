/*
 * FUN_1004e770 at 1004e770
 * undefined4 * __thiscall FUN_1004e770(void * this, byte param_1)
 * Address ranges: 1004e770-1004e796
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1004e770(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100d53f4;
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

