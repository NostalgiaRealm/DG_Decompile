/*
 * FUN_10061dd9 at 10061dd9
 * undefined4 * __thiscall FUN_10061dd9(void * this, byte param_1)
 * Address ranges: 10061dd9-10061dfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10061dd9(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100b2a38;
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

