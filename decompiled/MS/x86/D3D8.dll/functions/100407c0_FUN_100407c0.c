/*
 * FUN_100407c0 at 100407c0
 * undefined4 * __thiscall FUN_100407c0(void * this, byte param_1)
 * Address ranges: 100407c0-100407e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100407c0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100b1f14;
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

