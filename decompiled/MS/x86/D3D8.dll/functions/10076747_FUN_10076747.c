/*
 * FUN_10076747 at 10076747
 * undefined4 * __thiscall FUN_10076747(void * this, byte param_1)
 * Address ranges: 10076747-10076769
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10076747(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100b3104;
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

