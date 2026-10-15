/*
 * FUN_10088acb at 10088acb
 * undefined4 * __thiscall FUN_10088acb(void * this, byte param_1)
 * Address ranges: 10088acb-10088aed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10088acb(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100b4758;
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

