/*
 * FUN_1004765e at 1004765e
 * undefined4 * __thiscall FUN_1004765e(void * this, byte param_1)
 * Address ranges: 1004765e-10047688
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1004765e(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_1005f4bc;
  FUN_10047faa((int)this);
  if ((param_1 & 1) != 0) {
    FUN_1005c76c(this);
  }
  return this;
}

