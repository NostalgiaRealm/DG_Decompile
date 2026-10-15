/*
 * FUN_1003a3d4 at 1003a3d4
 * undefined4 * __thiscall FUN_1003a3d4(void * this, byte param_1)
 * Address ranges: 1003a3d4-1003a3f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1003a3d4(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100540d4;
  if ((param_1 & 1) != 0) {
    FUN_1004f9b6(this);
  }
  return this;
}

