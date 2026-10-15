/*
 * FUN_1001467b at 1001467b
 * undefined4 * __thiscall FUN_1001467b(void * this, byte param_1)
 * Address ranges: 1001467b-1001469d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1001467b(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_1005e914;
  if ((param_1 & 1) != 0) {
    FUN_1005c76c(this);
  }
  return this;
}

