/*
 * FUN_1005bb9a at 1005bb9a
 * undefined4 * __thiscall FUN_1005bb9a(void * this, byte param_1)
 * Address ranges: 1005bb9a-1005bbbc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1005bb9a(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_10066ce0;
  if ((param_1 & 1) != 0) {
    FUN_10060be1(this);
  }
  return this;
}

