/*
 * FUN_1003cb8e at 1003cb8e
 * undefined4 * __thiscall FUN_1003cb8e(void * this, byte param_1)
 * Address ranges: 1003cb8e-1003cbb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1003cb8e(void *this,byte param_1)

{
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_100572f4;
  *(undefined ***)this = &PTR_FUN_1005732c;
  if ((param_1 & 1) != 0) {
    FUN_10052276(this);
  }
  return this;
}

