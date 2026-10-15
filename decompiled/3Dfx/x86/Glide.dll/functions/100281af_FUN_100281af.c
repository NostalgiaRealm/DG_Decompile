/*
 * FUN_100281af at 100281af
 * undefined4 * __thiscall FUN_100281af(void * this, byte param_1)
 * Address ranges: 100281af-100281d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100281af(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_10053d78;
  if ((param_1 & 1) != 0) {
    FUN_1004f9b6(this);
  }
  return this;
}

