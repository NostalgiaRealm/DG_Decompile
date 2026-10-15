/*
 * FUN_1003a044 at 1003a044
 * undefined4 * __thiscall FUN_1003a044(void * this, byte param_1)
 * Address ranges: 1003a044-1003a066
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1003a044(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100540d4;
  if ((param_1 & 1) != 0) {
    FUN_1004f626(this);
  }
  return this;
}

