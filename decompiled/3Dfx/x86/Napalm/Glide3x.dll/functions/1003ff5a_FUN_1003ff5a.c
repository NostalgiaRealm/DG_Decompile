/*
 * FUN_1003ff5a at 1003ff5a
 * undefined4 * __thiscall FUN_1003ff5a(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1003ff5a-1003ff9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1003ff5a(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  *(undefined ***)this = &PTR_FUN_1005a7d0;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_1005a7a0;
  return this;
}

