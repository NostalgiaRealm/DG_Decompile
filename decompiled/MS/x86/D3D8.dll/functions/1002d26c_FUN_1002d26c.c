/*
 * FUN_1002d26c at 1002d26c
 * undefined4 * __thiscall FUN_1002d26c(void * this, byte param_1)
 * Address ranges: 1002d26c-1002d28e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1002d26c(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100b1fec;
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

