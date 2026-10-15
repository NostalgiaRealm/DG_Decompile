/*
 * FUN_1001e13d at 1001e13d
 * undefined4 * __thiscall FUN_1001e13d(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1001e13d-1001e1a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1001e13d(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1001f714(this,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0x3018) = param_1;
  *(undefined ***)this = &PTR_FUN_10059244;
  *(undefined4 *)((int)this + 0x30a4) = 0;
  *(undefined4 *)((int)this + 0x30a8) = 0;
  *(undefined4 *)((int)this + 0x30ac) = 0;
  *(undefined4 *)((int)this + 0x30b0) = 0;
  FUN_100561f1((int *)((int)this + 0x301c),0,0x44);
  FUN_100561f1((int *)((int)this + 0x3060),0,0x44);
  return this;
}

