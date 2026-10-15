/*
 * FUN_1001f78a at 1001f78a
 * undefined4 * __thiscall FUN_1001f78a(void * this, byte param_1)
 * Address ranges: 1001f78a-1001f7ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1001f78a(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_10064050;
  if ((param_1 & 1) != 0) {
    FUN_10060be1(this);
  }
  return this;
}

