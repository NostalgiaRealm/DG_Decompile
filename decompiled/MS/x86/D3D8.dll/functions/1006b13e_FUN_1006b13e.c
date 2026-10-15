/*
 * FUN_1006b13e at 1006b13e
 * int * __thiscall FUN_1006b13e(void * this, int param_1, int param_2)
 * Address ranges: 1006b13e-1006b18c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_1006b13e(void *this,int param_1,int param_2)

{
  *(int *)((int)this + 4) = param_2;
  *(int *)this = param_1;
  *(int *)((int)this + 8) = param_2 * 0x16c0 + param_1 + 0x6c0;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  return this;
}

