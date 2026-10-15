/*
 * FUN_10049628 at 10049628
 * undefined4 * __thiscall FUN_10049628(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 10049628-1004976a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10049628(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0x10;
  *(undefined4 *)((int)this + 8) = 0;
  puVar3 = (undefined4 *)((int)this + 0x18);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = &PTR_LAB_1005b0e8;
  do {
    FUN_10047d04(puVar3);
    puVar3 = puVar3 + 10;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this + 0x298) = param_1;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  *(undefined4 *)((int)this + 700) = 0;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  *(undefined4 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined4 *)((int)this + 0x2d0) = 0;
  *(undefined4 *)((int)this + 0x2d4) = 0x10000;
  *(undefined1 *)((int)this + 0x2d8) = 0;
  iVar2 = 8;
  iVar1 = (int)this + 0x2dc;
  do {
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 0x38;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this + 0x4e8) = param_2;
  *(undefined4 *)((int)this + 0x4b8) = 0;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *(undefined4 *)((int)this + 0x4c4) = 0;
  *(undefined4 *)((int)this + 0x4c8) = 0;
  *(undefined4 *)((int)this + 0x4cc) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4f4) = 0;
  *(undefined4 *)((int)this + 0x4f8) = 0;
  *(undefined4 *)((int)this + 0x500) = 0;
  *(undefined4 *)((int)this + 0x504) = 0;
  *(undefined4 *)((int)this + 0x49c) = 0;
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined1 *)((int)this + 0x4e4) = 0;
  *(undefined4 *)((int)this + 0x4ec) = 0;
  puVar3 = (undefined4 *)((int)this + 0x4a0);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x4d0) = 0;
  *(undefined4 *)((int)this + 0x4d4) = 0;
  *(undefined4 *)((int)this + 0x4d8) = 0;
  *(undefined4 *)((int)this + 0x4dc) = 0;
  return this;
}

