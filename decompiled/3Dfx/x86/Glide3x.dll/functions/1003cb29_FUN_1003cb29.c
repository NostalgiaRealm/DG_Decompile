/*
 * FUN_1003cb29 at 1003cb29
 * undefined4 * __thiscall FUN_1003cb29(void * this, byte param_1)
 * Address ranges: 1003cb29-1003cb4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1003cb29(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_1005732c;
  if ((param_1 & 1) != 0) {
    FUN_10052276(this);
  }
  return this;
}

