/*
 * FUN_1004eb5b at 1004eb5b
 * undefined4 * __thiscall FUN_1004eb5b(void * this, byte param_1)
 * Address ranges: 1004eb5b-1004eb7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1004eb5b(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_1005b528;
  if ((param_1 & 1) != 0) {
    FUN_10055686(this);
  }
  return this;
}

