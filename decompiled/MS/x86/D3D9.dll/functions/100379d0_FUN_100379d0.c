/*
 * FUN_100379d0 at 100379d0
 * undefined4 * __thiscall FUN_100379d0(void * this, byte param_1)
 * Address ranges: 100379d0-100379f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100379d0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100d56d4;
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

