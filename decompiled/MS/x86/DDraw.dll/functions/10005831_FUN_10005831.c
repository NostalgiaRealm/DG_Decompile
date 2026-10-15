/*
 * FUN_10005831 at 10005831
 * undefined4 * __thiscall FUN_10005831(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10005831-10005875
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10005831(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  FUN_10060d45((int *)((int)this + 0x34),0,0x30);
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x24) = param_4;
  return this;
}

