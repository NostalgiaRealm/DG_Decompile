/*
 * FUN_10027e25 at 10027e25
 * undefined4 * __thiscall FUN_10027e25(void * this, byte param_1)
 * Address ranges: 10027e25-10027e47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10027e25(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_10053d78;
  if ((param_1 & 1) != 0) {
    FUN_1004f626(this);
  }
  return this;
}

