/*
 * FUN_1003ff9c at 1003ff9c
 * undefined4 * __thiscall FUN_1003ff9c(void * this, byte param_1)
 * Address ranges: 1003ff9c-1003ffc5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1003ff9c(void *this,byte param_1)

{
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_1005a7a0;
  *(undefined ***)this = &PTR_FUN_1005a7d8;
  if ((param_1 & 1) != 0) {
    FUN_10055686(this);
  }
  return this;
}

