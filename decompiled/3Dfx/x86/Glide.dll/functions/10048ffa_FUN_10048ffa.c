/*
 * FUN_10048ffa at 10048ffa
 * undefined4 * __thiscall FUN_10048ffa(void * this, byte param_1)
 * Address ranges: 10048ffa-1004901c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10048ffa(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_10054e20;
  if ((param_1 & 1) != 0) {
    FUN_1004f9b6(this);
  }
  return this;
}

