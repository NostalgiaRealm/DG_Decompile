/*
 * FUN_1004925a at 1004925a
 * undefined4 * __thiscall FUN_1004925a(void * this, undefined4 param_1, undefined1 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 1004925a-10049285
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1004925a(void *this,undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 0x1c) = param_6;
  return this;
}

