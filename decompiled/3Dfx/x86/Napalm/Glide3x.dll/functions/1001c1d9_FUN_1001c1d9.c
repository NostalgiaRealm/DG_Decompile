/*
 * FUN_1001c1d9 at 1001c1d9
 * undefined4 * __thiscall FUN_1001c1d9(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1001c1d9-1001c216
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1001c1d9(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1001f714(this,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0x3018) = param_1;
  *(undefined ***)this = &PTR_FUN_10059230;
  *(undefined4 *)((int)this + 0x301c) = 0x1000;
  *(undefined4 *)((int)this + 0x3020) = 0;
  return this;
}

