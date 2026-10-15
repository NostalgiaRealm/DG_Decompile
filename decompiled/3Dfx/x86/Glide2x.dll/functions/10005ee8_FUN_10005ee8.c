/*
 * FUN_10005ee8 at 10005ee8
 * undefined4 * __thiscall FUN_10005ee8(void * this, byte param_1)
 * Address ranges: 10005ee8-10005f0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10005ee8(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_1005288c;
  if ((param_1 & 1) != 0) {
    FUN_1004f626(this);
  }
  return this;
}

