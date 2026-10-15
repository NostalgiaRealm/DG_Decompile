/*
 * FUN_10026d7d at 10026d7d
 * undefined4 * __thiscall FUN_10026d7d(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10026d7d-10026dba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10026d7d(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1002c201(this,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0x3018) = param_1;
  *(undefined ***)this = &PTR_FUN_10053d6c;
  *(undefined4 *)((int)this + 0x301c) = 0x1000;
  *(undefined4 *)((int)this + 0x3020) = 0;
  return this;
}

