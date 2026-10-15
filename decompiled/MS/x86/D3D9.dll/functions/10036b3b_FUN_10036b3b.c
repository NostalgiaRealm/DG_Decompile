/*
 * FUN_10036b3b at 10036b3b
 * undefined4 * __thiscall FUN_10036b3b(void * this, byte param_1)
 * Address ranges: 10036b3b-10036b5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10036b3b(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100d5524;
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

