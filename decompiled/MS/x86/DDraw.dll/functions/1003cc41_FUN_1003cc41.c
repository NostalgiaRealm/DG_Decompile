/*
 * FUN_1003cc41 at 1003cc41
 * undefined4 * __thiscall FUN_1003cc41(void * this, byte param_1)
 * Address ranges: 1003cc41-1003cc63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1003cc41(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_10065b90;
  if ((param_1 & 1) != 0) {
    FUN_10060be1(this);
  }
  return this;
}

