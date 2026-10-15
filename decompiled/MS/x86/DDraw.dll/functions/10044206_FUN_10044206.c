/*
 * FUN_10044206 at 10044206
 * undefined4 * __thiscall FUN_10044206(void * this, byte param_1)
 * Address ranges: 10044206-10044228
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10044206(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_10065d64;
  if ((param_1 & 1) != 0) {
    FUN_10060be1(this);
  }
  return this;
}

