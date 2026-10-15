/*
 * FUN_1004e690 at 1004e690
 * undefined4 * __thiscall FUN_1004e690(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 1004e690-1004e76c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1004e690(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined ***)this = &PTR_FUN_100d5a5c;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = param_2;
  *(undefined4 *)((int)this + 0x78) = 0x400;
  *(undefined4 *)((int)this + 0x7c) = 0x4140;
  *(undefined4 *)((int)this + 0x80) = 1;
  *(undefined2 *)((int)this + 0x84) = 0x100;
  FUN_1004e653((int)this + 0xf58);
  *(undefined4 *)((int)this + 0xfc0) = 0;
  *(undefined4 *)((int)this + 0xfc4) = 0;
  puVar2 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return this;
}

