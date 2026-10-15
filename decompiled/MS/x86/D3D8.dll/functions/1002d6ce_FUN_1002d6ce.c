/*
 * FUN_1002d6ce at 1002d6ce
 * undefined4 * __thiscall FUN_1002d6ce(void * this, byte param_1)
 * Address ranges: 1002d6ce-1002d6f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1002d6ce(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100b202c;
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

