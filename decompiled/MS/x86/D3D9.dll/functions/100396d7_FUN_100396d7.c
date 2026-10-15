/*
 * FUN_100396d7 at 100396d7
 * undefined4 * __thiscall FUN_100396d7(void * this, byte param_1)
 * Address ranges: 100396d7-100396f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100396d7(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100d5524;
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

