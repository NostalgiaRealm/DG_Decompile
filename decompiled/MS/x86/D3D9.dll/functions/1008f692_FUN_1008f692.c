/*
 * FUN_1008f692 at 1008f692
 * undefined4 * __thiscall FUN_1008f692(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined1 param_6)
 * Address ranges: 1008f692-1008f6ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1008f692(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined4 *)((int)this + 0x14) = param_5;
  *(undefined1 *)((int)this + 0x18) = param_6;
  *(undefined ***)this = &PTR_LAB_100d69a8;
  *(undefined2 *)((int)this + 0x19) = 0;
  return this;
}

