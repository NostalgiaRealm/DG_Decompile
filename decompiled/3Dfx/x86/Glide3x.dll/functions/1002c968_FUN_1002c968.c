/*
 * FUN_1002c968 at 1002c968
 * undefined4 * __thiscall FUN_1002c968(void * this, byte param_1)
 * Address ranges: 1002c968-1002c98a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1002c968(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_10056504;
  if ((param_1 & 1) != 0) {
    FUN_10052276(this);
  }
  return this;
}

