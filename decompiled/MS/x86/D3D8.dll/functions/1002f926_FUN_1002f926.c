/*
 * FUN_1002f926 at 1002f926
 * undefined4 * __thiscall FUN_1002f926(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5, undefined1 param_6)
 * Address ranges: 1002f926-1002f985
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1002f926(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined1 param_6)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined ***)this = &PTR_FUN_100b2250;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(int *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x21) = param_6;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  if ((*(int *)((int)this + 0x18) == 2) && (param_4 != 0)) {
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return this;
}

