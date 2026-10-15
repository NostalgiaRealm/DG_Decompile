/*
 * FUN_100280c1 at 100280c1
 * undefined4 * __thiscall FUN_100280c1(void * this, byte param_1)
 * Address ranges: 100280c1-100280eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100280c1(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_1005ed70;
  FUN_10027e80(this);
  if ((param_1 & 1) != 0) {
    FUN_1005c76c(this);
  }
  return this;
}

