/*
 * FUN_1000f428 at 1000f428
 * undefined4 * __thiscall FUN_1000f428(void * this, undefined4 param_1)
 * Address ranges: 1000f428-1000f525
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1000f428(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_1001f7ad(this,param_1);
  *(undefined ***)this = &PTR_FUN_10063bc0;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_10063828;
  *(undefined4 *)((int)this + 0xcf00) = 0;
  *(undefined4 *)((int)this + 0xcf04) = 0;
  *(undefined4 *)((int)this + 53000) = 0;
  *(undefined4 *)((int)this + 0xcf7c) = 0;
  *(undefined4 *)((int)this + 0xcf80) = 0;
  *(undefined4 *)((int)this + 0xd02c) = 0;
  *(undefined4 *)((int)this + 0xd030) = 0;
  *(undefined4 *)((int)this + 0xd034) = 0;
  *(undefined4 *)((int)this + 0xd038) = 0;
  *(undefined4 *)((int)this + 0xd03c) = 0;
  *(undefined4 *)((int)this + 0xd040) = 0;
  *(undefined4 *)((int)this + 0xd044) = 0;
  *(undefined4 *)((int)this + 0xd048) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd04c) = 0;
  *(undefined4 *)((int)this + 0xd050) = 0;
  *(undefined4 *)((int)this + 0xd054) = 0;
  *(undefined4 *)((int)this + 0xd058) = 0;
  *(undefined4 *)((int)this + 0xd05c) = 0;
  *(undefined4 *)((int)this + 0xd060) = 0;
  uVar1 = FUN_10060bfe(0x5000);
  *(undefined4 *)((int)this + 0xd064) = uVar1;
  *(undefined4 *)((int)this + 0xd068) = 0x100;
  *(undefined4 *)((int)this + 0xd06c) = 0;
  *(undefined4 *)((int)this + 0xd070) = 0;
  *(undefined4 *)((int)this + 0xd074) = 0;
  *(undefined4 *)((int)this + 0xd078) = 0;
  FUN_10060d45((int *)((int)this + 0xcf0c),0,0x70);
  FUN_10060d45((int *)((int)this + 0xcf84),0,0xa0);
  *(undefined4 *)((int)this + 0xd024) = 0;
  *(undefined4 *)((int)this + 0xd028) = 0;
  return this;
}

