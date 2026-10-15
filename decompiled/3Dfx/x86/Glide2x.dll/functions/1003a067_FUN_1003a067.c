/*
 * FUN_1003a067 at 1003a067
 * undefined4 * __thiscall FUN_1003a067(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1003a067-1003a0a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1003a067(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  *(undefined ***)this = &PTR_FUN_100540cc;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_1005409c;
  return this;
}

