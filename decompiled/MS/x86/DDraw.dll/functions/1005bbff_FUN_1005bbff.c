/*
 * FUN_1005bbff at 1005bbff
 * undefined4 * __thiscall FUN_1005bbff(void * this, byte param_1)
 * Address ranges: 1005bbff-1005bc28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1005bbff(void *this,byte param_1)

{
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_10066928;
  *(undefined ***)this = &PTR_FUN_10066ce0;
  if ((param_1 & 1) != 0) {
    FUN_10060be1(this);
  }
  return this;
}

