/*
 * FUN_100269f3 at 100269f3
 * undefined4 * __thiscall FUN_100269f3(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 100269f3-10026a30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_100269f3(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1002be77(this,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0x3018) = param_1;
  *(undefined ***)this = &PTR_FUN_10053d6c;
  *(undefined4 *)((int)this + 0x301c) = 0x1000;
  *(undefined4 *)((int)this + 0x3020) = 0;
  return this;
}

