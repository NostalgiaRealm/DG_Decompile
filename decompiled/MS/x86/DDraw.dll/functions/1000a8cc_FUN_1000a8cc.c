/*
 * FUN_1000a8cc at 1000a8cc
 * int * __thiscall FUN_1000a8cc(void * this, int param_1, int param_2)
 * Address ranges: 1000a8cc-1000a900
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_1000a8cc(void *this,int param_1,int param_2)

{
  *(int *)((int)this + 4) = param_2;
  *(int *)this = param_1;
  *(int *)((int)this + 8) = param_2 * 0x1510 + 0x510 + param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  return this;
}

