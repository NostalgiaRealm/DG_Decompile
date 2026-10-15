/*
 * FUN_1005551d at 1005551d
 * undefined4 * __thiscall FUN_1005551d(void * this, byte param_1)
 * Address ranges: 1005551d-1005553f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1005551d(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_1005fef8;
  if ((param_1 & 1) != 0) {
    FUN_1005c76c(this);
  }
  return this;
}

