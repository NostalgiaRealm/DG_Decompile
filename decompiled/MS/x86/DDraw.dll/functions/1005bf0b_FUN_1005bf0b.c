/*
 * FUN_1005bf0b at 1005bf0b
 * undefined4 * __thiscall FUN_1005bf0b(void * this, undefined4 param_1)
 * Address ranges: 1005bf0b-1005bf5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1005bf0b(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 0x30) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined ***)this = &PTR_LAB_10066d30;
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  *(undefined4 *)((int)this + 0x54) = 0xffffffff;
  puVar2 = (undefined4 *)((int)this + 0x18);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return this;
}

