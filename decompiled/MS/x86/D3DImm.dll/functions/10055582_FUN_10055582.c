/*
 * FUN_10055582 at 10055582
 * undefined4 * __thiscall FUN_10055582(void * this, byte param_1)
 * Address ranges: 10055582-100555ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10055582(void *this,byte param_1)

{
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_1005fec0;
  *(undefined ***)this = &PTR_FUN_1005fef8;
  if ((param_1 & 1) != 0) {
    FUN_1005c76c(this);
  }
  return this;
}

