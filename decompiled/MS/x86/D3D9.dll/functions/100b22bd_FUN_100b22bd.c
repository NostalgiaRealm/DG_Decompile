/*
 * FUN_100b22bd at 100b22bd
 * undefined4 * __thiscall FUN_100b22bd(void * this, byte param_1)
 * Address ranges: 100b22bd-100b22df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100b22bd(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100d8364;
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

