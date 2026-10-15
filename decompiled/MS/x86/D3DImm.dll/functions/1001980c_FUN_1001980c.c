/*
 * FUN_1001980c at 1001980c
 * undefined4 * __thiscall FUN_1001980c(void * this, byte param_1)
 * Address ranges: 1001980c-1001982e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1001980c(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_1005e9d0;
  if ((param_1 & 1) != 0) {
    FUN_1005c76c(this);
  }
  return this;
}

