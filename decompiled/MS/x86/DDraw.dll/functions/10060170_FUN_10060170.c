/*
 * FUN_10060170 at 10060170
 * undefined4 * __thiscall FUN_10060170(void * this, byte param_1)
 * Address ranges: 10060170-100601a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10060170(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_10066eac;
  if ((*(HANDLE *)((int)this + 4) != (HANDLE)0x0) && (*(char *)((int)this + 8) != '\0')) {
    CloseHandle(*(HANDLE *)((int)this + 4));
  }
  if ((param_1 & 1) != 0) {
    FUN_10060be1(this);
  }
  return this;
}

