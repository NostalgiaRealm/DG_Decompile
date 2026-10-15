/*
 * FUN_10049f41 at 10049f41
 * undefined4 * __thiscall FUN_10049f41(void * this, byte param_1)
 * Address ranges: 10049f41-10049f66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10049f41(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_1005f568;
  if ((param_1 & 1) != 0) {
    FUN_1005c76c(this);
  }
  return this;
}

