/*
 * FUN_10079c6f at 10079c6f
 * undefined4 * __thiscall FUN_10079c6f(void * this, undefined4 param_1)
 * Address ranges: 10079c6f-10079d0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10079c6f(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined ***)this = &PTR_FUN_100b1708;
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined1 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x46) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  uVar1 = FUN_10001e91(this);
  *(char *)((int)this + 0x25) = (char)uVar1;
  puVar3 = (undefined4 *)((int)this + 0x26);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 100) = 0;
  iVar2 = (int)this + 0x70;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  if (this == (void *)0x0) {
    iVar2 = 0;
  }
  *(undefined4 *)((int)this + 0x74) = 0;
  *(int *)((int)this + 0x7c) = iVar2;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined ***)this = &PTR__scalar_deleting_destructor__100b3328;
  *(undefined ***)((int)this + 0x60) = &PTR_LAB_100af4e0;
  *(undefined ***)((int)this + 0x70) = &PTR_FUN_100b32e8;
  return this;
}

