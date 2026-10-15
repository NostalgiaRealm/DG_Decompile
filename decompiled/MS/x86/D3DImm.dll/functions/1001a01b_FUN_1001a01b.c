/*
 * FUN_1001a01b at 1001a01b
 * undefined4 * __thiscall FUN_1001a01b(void * this, byte param_1)
 * Address ranges: 1001a01b-1001a042
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1001a01b(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_1005e9e8;
  FUN_10019a8b(this);
  if ((param_1 & 1) != 0) {
    FUN_1005c76c(this);
  }
  return this;
}

