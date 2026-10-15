/*
 * FUN_10006bf4 at 10006bf4
 * undefined4 * __thiscall FUN_10006bf4(void * this, undefined4 param_1)
 * Address ranges: 10006bf4-10006d13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10006bf4(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_1001f7ad(this,param_1);
  *(undefined ***)this = &PTR_FUN_1006382c;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_10063828;
  *(undefined4 *)((int)this + 0xcf00) = 0;
  *(undefined4 *)((int)this + 0xcf04) = 0;
  *(undefined4 *)((int)this + 0xcfb0) = 0;
  *(undefined4 *)((int)this + 0xcfb4) = 0;
  *(undefined4 *)((int)this + 0xcfb8) = 0;
  *(undefined4 *)((int)this + 0xcfbc) = 0;
  *(undefined4 *)((int)this + 0xcfc0) = 0;
  *(undefined4 *)((int)this + 0xcfc4) = 0;
  uVar1 = FUN_10060bfe(0x80);
  *(undefined4 *)((int)this + 0xcfc8) = uVar1;
  *(undefined4 *)((int)this + 0xcfcc) = 8;
  *(undefined4 *)((int)this + 0xcfd0) = 0;
  *(undefined4 *)((int)this + 0xcfd4) = 0;
  *(undefined1 *)((int)this + 0xcfd8) = 0;
  *(undefined4 *)((int)this + 0xd1dc) = 0;
  *(undefined4 *)((int)this + 0xd1e0) = 0;
  uVar1 = FUN_10060bfe(0x4000);
  *(undefined4 *)((int)this + 0xd1e4) = uVar1;
  *(undefined4 *)((int)this + 0xd1e8) = 0x100;
  *(undefined4 *)((int)this + 0xd1ec) = 0;
  *(undefined4 *)((int)this + 0xd1f0) = 0;
  *(undefined4 *)((int)this + 0xd1f4) = 0;
  *(undefined4 *)((int)this + 0xd1f8) = 0;
  *(undefined4 *)((int)this + 0xd1fc) = 0;
  *(undefined4 *)((int)this + 0xd200) = 0;
  FUN_10060d45((int *)((int)this + 53000),0,0xa0);
  *(undefined4 *)((int)this + 0xcfa8) = 0;
  *(undefined4 *)((int)this + 0xcfac) = 0;
  FUN_10060d45((int *)((int)this + 0xcfdc),0,0x100);
  FUN_10060d45((int *)((int)this + 0xd0dc),0,0x100);
  FUN_10060d45((int *)((int)this + 0xa8),0,0xc180);
  return this;
}

