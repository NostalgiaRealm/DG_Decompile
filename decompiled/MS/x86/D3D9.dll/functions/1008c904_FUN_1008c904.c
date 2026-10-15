/*
 * FUN_1008c904 at 1008c904
 * undefined4 * __thiscall FUN_1008c904(void * this, byte param_1)
 * Address ranges: 1008c904-1008c926
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1008c904(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100d68a4;
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

