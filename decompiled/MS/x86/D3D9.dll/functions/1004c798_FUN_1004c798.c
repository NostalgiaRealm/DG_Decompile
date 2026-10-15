/*
 * FUN_1004c798 at 1004c798
 * undefined4 * __thiscall FUN_1004c798(void * this, byte param_1)
 * Address ranges: 1004c798-1004c7c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1004c798(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100d59e4;
  FUN_1004c54d(this);
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

