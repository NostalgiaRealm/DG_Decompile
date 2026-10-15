/*
 * FUN_1009da84 at 1009da84
 * undefined4 * __thiscall FUN_1009da84(void * this, byte param_1)
 * Address ranges: 1009da84-1009daad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1009da84(void *this,byte param_1)

{
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_100b5288;
  *(undefined ***)this = &PTR_FUN_100b52e8;
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

