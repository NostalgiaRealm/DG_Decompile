/*
 * FUN_1003cb4c at 1003cb4c
 * undefined4 * __thiscall FUN_1003cb4c(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1003cb4c-1003cb8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1003cb4c(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x28) = param_3;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x34) = 0;
  *(undefined ***)this = &PTR_FUN_10057324;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_100572f4;
  return this;
}

