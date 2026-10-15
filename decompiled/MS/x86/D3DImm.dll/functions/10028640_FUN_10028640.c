/*
 * FUN_10028640 at 10028640
 * undefined4 * __thiscall FUN_10028640(void * this, byte param_1)
 * Address ranges: 10028640-10028666
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10028640(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_1005e914;
  if ((param_1 & 1) != 0) {
    FUN_1005c76c(this);
  }
  return this;
}

