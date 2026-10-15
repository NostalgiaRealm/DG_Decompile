/*
 * FUN_1003a0a9 at 1003a0a9
 * undefined4 * __thiscall FUN_1003a0a9(void * this, byte param_1)
 * Address ranges: 1003a0a9-1003a0d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1003a0a9(void *this,byte param_1)

{
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_1005409c;
  *(undefined ***)this = &PTR_FUN_100540d4;
  if ((param_1 & 1) != 0) {
    FUN_1004f626(this);
  }
  return this;
}

