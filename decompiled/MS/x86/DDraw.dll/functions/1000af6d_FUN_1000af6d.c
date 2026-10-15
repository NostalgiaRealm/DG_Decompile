/*
 * FUN_1000af6d at 1000af6d
 * undefined4 * __thiscall FUN_1000af6d(void * this, byte param_1)
 * Address ranges: 1000af6d-1000af8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1000af6d(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100639d0;
  if ((param_1 & 1) != 0) {
    FUN_10060be1(this);
  }
  return this;
}

