/*
 * FUN_1009010b at 1009010b
 * undefined4 * __thiscall FUN_1009010b(void * this, undefined4 param_1, char param_2)
 * Address ranges: 1009010b-100901f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1009010b(void *this,undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *this_00;
  void *this_01;
  undefined1 extraout_DL;
  undefined1 uVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined ***)this = &PTR_FUN_100d4b88;
  *(undefined1 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x46) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x20) = param_1;
  uVar1 = FUN_10001d82(this);
  *(char *)((int)this + 0x25) = (char)uVar1;
  puVar4 = (undefined4 *)((int)this + 0x26);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  iVar2 = (int)this + 0x70;
  *(undefined4 *)((int)this + 0x74) = 0;
  if (this == (void *)0x0) {
    iVar2 = 0;
  }
  *(undefined4 *)((int)this + 0x78) = 0;
  *(int *)((int)this + 0x80) = iVar2;
  *(undefined4 *)((int)this + 0x7c) = 0;
  FUN_100cfed0((int *)((int)this + 0x84),0,0x30);
  *(undefined ***)this = &PTR_FUN_100d6aa0;
  *(undefined ***)((int)this + 0x60) = &PTR_LAB_100d1540;
  *(undefined ***)((int)this + 0x70) = &PTR_FUN_100d6a48;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  if (*(char *)((int)this + 0x25) != '\0') {
    FUN_10091025((undefined4 *)((int)this + 0x74),&DAT_100d1530);
    FUN_10091025(this_00,(uint *)&DAT_100d1300);
    uVar3 = 0;
    if (param_2 != '\0') {
      FUN_10091025(this_01,(uint *)&DAT_100d13f0);
      uVar3 = extraout_DL;
    }
    *(undefined1 *)((int)this + 0x47) = uVar3;
  }
  return this;
}

