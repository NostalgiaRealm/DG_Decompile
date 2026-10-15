/*
 * FUN_1002fd78 at 1002fd78
 * undefined4 * __thiscall FUN_1002fd78(void * this, byte param_1)
 * Address ranges: 1002fd78-1002fd9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1002fd78(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100599b0;
  if ((param_1 & 1) != 0) {
    FUN_10055686(this);
  }
  return this;
}

