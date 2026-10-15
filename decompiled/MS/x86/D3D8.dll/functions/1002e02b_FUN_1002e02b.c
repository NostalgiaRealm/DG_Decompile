/*
 * FUN_1002e02b at 1002e02b
 * undefined4 * __thiscall FUN_1002e02b(void * this, byte param_1)
 * Address ranges: 1002e02b-1002e052
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1002e02b(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100b203c;
  FUN_1002dae2(this);
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

