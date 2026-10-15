/*
 * FUN_1002e849 at 1002e849
 * undefined4 * __thiscall FUN_1002e849(void * this, byte param_1)
 * Address ranges: 1002e849-1002e872
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1002e849(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_LAB_100b2198;
  *(undefined ***)((int)this + 0x10) = &PTR_FUN_100b27ac;
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

