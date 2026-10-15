/*
 * FUN_1003c9b1 at 1003c9b1
 * undefined4 * __thiscall FUN_1003c9b1(void * this, byte param_1)
 * Address ranges: 1003c9b1-1003c9d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1003c9b1(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_1005f584;
  if ((param_1 & 1) != 0) {
    FUN_1005c76c(this);
  }
  return this;
}

