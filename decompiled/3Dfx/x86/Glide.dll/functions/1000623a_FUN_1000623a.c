/*
 * FUN_1000623a at 1000623a
 * undefined4 * __thiscall FUN_1000623a(void * this, byte param_1)
 * Address ranges: 1000623a-1000625c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1000623a(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_1005288c;
  if ((param_1 & 1) != 0) {
    FUN_1004f9b6(this);
  }
  return this;
}

