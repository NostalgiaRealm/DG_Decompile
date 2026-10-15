/*
 * FUN_1004b752 at 1004b752
 * undefined4 * __thiscall FUN_1004b752(void * this, byte param_1)
 * Address ranges: 1004b752-1004b774
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1004b752(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_10058078;
  if ((param_1 & 1) != 0) {
    FUN_10052276(this);
  }
  return this;
}

