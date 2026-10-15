/*
 * FUN_100900a7 at 100900a7
 * undefined4 * __thiscall FUN_100900a7(void * this, byte param_1)
 * Address ranges: 100900a7-100900c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100900a7(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100b492c;
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

