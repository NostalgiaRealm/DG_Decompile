/*
 * FUN_10023e4c at 10023e4c
 * undefined4 * __thiscall FUN_10023e4c(void * this, undefined1 param_1)
 * Address ranges: 10023e4c-10023fc6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10023e4c(void *this,undefined1 param_1)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x40) = 0;
  this_00 = (undefined4 *)((int)this + 0x44);
  *puVar1 = 0;
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  *(undefined ***)this = &PTR_FUN_10064590;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 **)((int)this + 0x14) = puVar1;
  *(undefined ***)((int)this + 0x10) = &PTR_FUN_100626cc;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 1;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_10064510;
  *this_00 = 0;
  FUN_10060d45((int *)((int)this + 0x4c),0,0xa8);
  *(undefined ***)this = &PTR_FUN_10064534;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined1 *)((int)this + 0x14f) = 0;
  *(undefined1 *)((int)this + 0x151) = 0;
  *(undefined1 *)((int)this + 0x14e) = param_1;
  *(undefined ***)((int)this + 0x10) = &PTR_FUN_10064164;
  *(undefined ***)((int)this + 0x38) = &PTR_FUN_10064140;
  *(undefined4 *)((int)this + 0x124) = 1;
  puVar1 = (undefined4 *)((int)this + 0xf4);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  uVar2 = FUN_100254ca(this);
  *(char *)((int)this + 0x150) = (char)uVar2;
  if ((char)uVar2 != '\0') {
    FUN_100276d8(this_00,&DAT_10062560,0);
    FUN_100276d8(this_00,&DAT_10062380,(int)this + 4);
    FUN_100276d8(this_00,&DAT_10062390,0);
    FUN_100276d8(this_00,&DAT_100623a0,0);
    FUN_100276d8(this_00,&DAT_100623b0,(int)this + 8);
    FUN_100276d8(this_00,&DAT_10062440,0);
  }
  return this;
}

