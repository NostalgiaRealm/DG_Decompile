/*
 * FUN_1001d8ac at 1001d8ac
 * undefined4 * __thiscall FUN_1001d8ac(void * this, byte param_1)
 * Address ranges: 1001d8ac-1001d8ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1001d8ac(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_1005923c;
  if ((param_1 & 1) != 0) {
    FUN_10055686(this);
  }
  return this;
}

