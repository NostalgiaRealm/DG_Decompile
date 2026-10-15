/*
 * FUN_1003ff37 at 1003ff37
 * undefined4 * __thiscall FUN_1003ff37(void * this, byte param_1)
 * Address ranges: 1003ff37-1003ff59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1003ff37(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_1005a7d8;
  if ((param_1 & 1) != 0) {
    FUN_10055686(this);
  }
  return this;
}

