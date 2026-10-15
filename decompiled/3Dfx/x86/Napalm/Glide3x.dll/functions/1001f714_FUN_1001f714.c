/*
 * FUN_1001f714 at 1001f714
 * undefined4 * __thiscall FUN_1001f714(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1001f714-1001f77d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1001f714(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined ***)this = &PTR_LAB_10059288;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x3014) = 0;
  *(undefined1 *)((int)this + 0x3016) = 0;
  FUN_100561f1((int *)((int)this + 0x14),0,0x1000);
  FUN_100561f1((int *)((int)this + 0x1014),0,0x1000);
  FUN_100561f1((int *)((int)this + 0x2014),0,0x1000);
  return this;
}

