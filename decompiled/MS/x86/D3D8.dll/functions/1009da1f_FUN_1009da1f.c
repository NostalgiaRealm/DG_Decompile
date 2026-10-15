/*
 * FUN_1009da1f at 1009da1f
 * undefined4 * __thiscall FUN_1009da1f(void * this, byte param_1)
 * Address ranges: 1009da1f-1009da41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1009da1f(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100b52e8;
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

