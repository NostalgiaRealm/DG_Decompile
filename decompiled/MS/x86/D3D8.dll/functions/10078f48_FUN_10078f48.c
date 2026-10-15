/*
 * FUN_10078f48 at 10078f48
 * undefined4 * __thiscall FUN_10078f48(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5, undefined4 param_6, int param_7, uint param_8, uint param_9)
 * Address ranges: 10078f48-10078feb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10078f48(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined4 param_6,int param_7,uint param_8,uint param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined4 *)((int)this + 0x18) = param_4;
  *(int *)((int)this + 0x1c) = param_5;
  uVar1 = 1;
  uVar2 = param_6;
  if ((param_8 & 4) != 0) {
    uVar2 = uVar1;
  }
  *(undefined ***)this = &PTR_LAB_100b31a0;
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x20) = uVar2;
  if ((param_7 == 2) || (param_7 == 5)) {
    uVar1 = 6;
  }
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(int *)((int)this + 0x34) = param_7;
  *(undefined1 *)((int)this + 0x3d) = 0;
  uVar1 = 0;
  if ((param_8 & 4) != 0) {
    uVar1 = param_6;
  }
  *(undefined4 *)((int)this + 0x28) = uVar1;
  *(uint *)((int)this + 0x30) = param_8;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x2c) = uVar2;
  *(undefined1 *)((int)this + 0x3c) = (undefined1)param_9;
  FUN_1007905f(&param_9,param_1,param_5);
  *(uint *)((int)this + 0x38) = param_9;
  return this;
}

