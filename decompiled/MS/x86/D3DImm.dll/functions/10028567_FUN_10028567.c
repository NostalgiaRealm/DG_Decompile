/*
 * FUN_10028567 at 10028567
 * undefined4 * __thiscall FUN_10028567(void * this, byte param_1)
 * Address ranges: 10028567-10028589
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10028567(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_1005ed80;
  if ((param_1 & 1) != 0) {
    FUN_1005c76c(this);
  }
  return this;
}

