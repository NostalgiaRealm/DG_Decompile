/*
 * FUN_1001f7ad at 1001f7ad
 * undefined4 * __thiscall FUN_1001f7ad(void * this, undefined4 param_1)
 * Address ranges: 1001f7ad-1001f8bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1001f7ad(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  double dVar5;
  
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x20) = 0x1e;
  *(undefined4 *)((int)this + 0x30) = 0x1e;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_10063f9c;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_10063828;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x1b;
  *(undefined4 *)((int)this + 0x24) = 0x1c;
  *(undefined4 *)((int)this + 0x28) = 0x1c;
  *(undefined4 *)((int)this + 0x2c) = 0x1b;
  *(undefined4 *)((int)this + 0x34) = 0x1c;
  *(undefined4 *)((int)this + 0x38) = 0x1c;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xcef0) = 0;
  *(undefined4 *)((int)this + 0xcef4) = 0;
  *(undefined1 *)((int)this + 0xcef8) = 0;
  FUN_10060d45((int *)((int)this + 0xce30),0,0xc0);
  FUN_10060d45((int *)((int)this + 0x3c),0,0x38);
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  QueryPerformanceFrequency((LARGE_INTEGER *)((int)this + 0x78));
  uVar3 = 0;
  do {
    dVar5 = (double)(int)uVar3;
    iVar1 = (int)uVar3 >> 0x1f;
    iVar2 = uVar3 * 0xc;
    uVar3 = uVar3 + 1;
    fVar4 = (float)(dVar5 + (double)(&DAT_10066fd0)[-iVar1]) / 255.0;
    *(float *)((int)this + iVar2 + 0xc228) = fVar4;
    *(float *)((int)this + iVar2 + 0xc22c) = fVar4;
    *(float *)((int)this + iVar2 + 0xc230) = fVar4;
  } while (uVar3 < 0x100);
  return this;
}

