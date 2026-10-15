/*
 * FUN_10048c6a at 10048c6a
 * undefined4 * __thiscall FUN_10048c6a(void * this, byte param_1)
 * Address ranges: 10048c6a-10048c8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10048c6a(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_10054e20;
  if ((param_1 & 1) != 0) {
    FUN_1004f626(this);
  }
  return this;
}

