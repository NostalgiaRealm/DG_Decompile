/*
 * FUN_10025f07 at 10025f07
 * undefined4 * __thiscall FUN_10025f07(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10025f07-10025f4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10025f07(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  FUN_100ada8e((int *)((int)this + 0x34),0,0x30);
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x24) = param_4;
  return this;
}

