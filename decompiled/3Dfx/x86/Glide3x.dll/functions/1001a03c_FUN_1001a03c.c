/*
 * FUN_1001a03c at 1001a03c
 * undefined4 * __thiscall FUN_1001a03c(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1001a03c-1001a079
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1001a03c(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1001faf6(this,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0x3018) = param_1;
  *(undefined ***)this = &PTR_FUN_10055e80;
  *(undefined4 *)((int)this + 0x301c) = 0x1000;
  *(undefined4 *)((int)this + 0x3020) = 0;
  return this;
}

