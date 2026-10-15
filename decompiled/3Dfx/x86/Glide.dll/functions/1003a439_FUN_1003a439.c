/*
 * FUN_1003a439 at 1003a439
 * undefined4 * __thiscall FUN_1003a439(void * this, byte param_1)
 * Address ranges: 1003a439-1003a462
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1003a439(void *this,byte param_1)

{
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_1005409c;
  *(undefined ***)this = &PTR_FUN_100540d4;
  if ((param_1 & 1) != 0) {
    FUN_1004f9b6(this);
  }
  return this;
}

