/*
 * FUN_1007931a at 1007931a
 * undefined4 * __thiscall FUN_1007931a(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined1 param_6)
 * Address ranges: 1007931a-10079352
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1007931a(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined4 *)((int)this + 0x14) = param_5;
  *(undefined1 *)((int)this + 0x18) = param_6;
  *(undefined ***)this = &PTR_LAB_100b31f8;
  *(undefined2 *)((int)this + 0x19) = 0;
  return this;
}

