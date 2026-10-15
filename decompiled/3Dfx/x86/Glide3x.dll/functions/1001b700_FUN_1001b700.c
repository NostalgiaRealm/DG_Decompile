/*
 * FUN_1001b700 at 1001b700
 * undefined4 * __thiscall FUN_1001b700(void * this, byte param_1)
 * Address ranges: 1001b700-1001b722
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1001b700(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_10055e8c;
  if ((param_1 & 1) != 0) {
    FUN_10052276(this);
  }
  return this;
}

