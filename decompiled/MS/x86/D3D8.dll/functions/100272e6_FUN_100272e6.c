/*
 * FUN_100272e6 at 100272e6
 * undefined4 * __thiscall FUN_100272e6(void * this, byte param_1)
 * Address ranges: 100272e6-10027308
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100272e6(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100b1f14;
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

