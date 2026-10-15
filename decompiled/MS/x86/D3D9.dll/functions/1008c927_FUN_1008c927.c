/*
 * FUN_1008c927 at 1008c927
 * undefined4 * __thiscall FUN_1008c927(void * this, undefined4 param_1)
 * Address ranges: 1008c927-1008ca35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1008c927(void *this,undefined4 param_1)

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
  *(undefined ***)this = &PTR_FUN_100d67d8;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_100d6004;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x1b;
  *(undefined4 *)((int)this + 0x24) = 0x1c;
  *(undefined4 *)((int)this + 0x28) = 0x1c;
  *(undefined4 *)((int)this + 0x2c) = 0x1b;
  *(undefined4 *)((int)this + 0x34) = 0x1c;
  *(undefined4 *)((int)this + 0x38) = 0x1c;
  *(undefined4 *)((int)this + 0x10098) = 0;
  *(undefined4 *)((int)this + 0x1009c) = 0;
  *(undefined4 *)((int)this + 0x100a0) = 0;
  *(undefined4 *)((int)this + 0x1cef0) = 0;
  *(undefined4 *)((int)this + 0x1cef4) = 0;
  *(undefined1 *)((int)this + 0x1cef8) = 0;
  FUN_100cfed0((int *)((int)this + 0x1ce30),0,0xc0);
  FUN_100cfed0((int *)((int)this + 0x3c),0,0x38);
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
    fVar4 = (float)(dVar5 + (double)(&DAT_100d97a0)[-iVar1]) / 255.0;
    *(float *)((int)this + iVar2 + 0x1c228) = fVar4;
    *(float *)((int)this + iVar2 + 0x1c22c) = fVar4;
    *(float *)((int)this + iVar2 + 0x1c230) = fVar4;
  } while (uVar3 < 0x100);
  return this;
}

