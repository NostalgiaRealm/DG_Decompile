/*
 * FUN_1001a31e at 1001a31e
 * undefined4 * __thiscall FUN_1001a31e(void * this, byte param_1)
 * Address ranges: 1001a31e-1001a347
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1001a31e(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_LAB_1005eb38;
  *(undefined ***)((int)this + 0x10) = &PTR_FUN_1005effc;
  if ((param_1 & 1) != 0) {
    FUN_1005c76c(this);
  }
  return this;
}

