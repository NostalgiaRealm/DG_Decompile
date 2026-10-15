/*
 * FUN_10037791 at 10037791
 * undefined4 * __thiscall FUN_10037791(void * this, byte param_1)
 * Address ranges: 10037791-100377b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10037791(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100d5570;
  FUN_10037253(this);
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

