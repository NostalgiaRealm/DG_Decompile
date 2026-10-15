/*
 * FUN_1003fa4f at 1003fa4f
 * undefined4 * __thiscall FUN_1003fa4f(void * this, int param_1, int param_2, undefined1 param_3)
 * Address ranges: 1003fa4f-1003faa6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1003fa4f(void *this,int param_1,int param_2,undefined1 param_3)

{
  *(undefined4 *)((int)this + 8) = 0;
  *(int *)((int)this + 0x20) = param_2 * 0x16c0 + 0x1d00 + param_1;
  *(undefined1 *)((int)this + 0x38) = param_3;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined ***)this = &PTR_LAB_100b2404;
  *(int *)((int)this + 0x24) = param_1;
  *(int *)((int)this + 0x28) = param_2;
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_2 * 0x28 + 0x38 + param_1);
  return this;
}

