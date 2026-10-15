/*
 * FUN_10020383 at 10020383
 * undefined __thiscall FUN_10020383(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
 * Address ranges: 10020383-100204c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10020383(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_1001164d(*(int **)((int)this + 0x365c));
  (**(code **)(*(int *)this + 0x198))();
  uVar3 = 4;
  if (param_1 == 4) {
    if (param_2 == 0) {
      if ((param_3 != 0) && (param_3 != 1)) goto LAB_100203c6;
      goto LAB_100203d5;
    }
  }
  else {
LAB_100203c6:
    if ((param_1 == 0) && ((param_2 == 4 && (param_3 == 2)))) {
LAB_100203d5:
      if (param_4 == 4) {
        if (param_5 == 0) {
          if ((param_6 != 0) && (param_6 != 1)) goto LAB_100203ee;
          goto LAB_100203fb;
        }
      }
      else {
LAB_100203ee:
        if ((param_4 == 0) && ((param_5 == 4 && (param_6 == 2)))) {
LAB_100203fb:
          uVar1 = 0;
          goto LAB_10020402;
        }
      }
    }
  }
  uVar1 = 1;
LAB_10020402:
  *(undefined4 *)((int)this + 0x2c60) = uVar1;
  *(undefined4 *)((int)this + 0x2c6c) = *(undefined4 *)(&DAT_10059314 + param_3 * 4);
  *(undefined4 *)((int)this + 0x2c64) = *(undefined4 *)(&DAT_10059320 + param_1 * 4);
  *(undefined4 *)((int)this + 0x2c68) = *(undefined4 *)(&DAT_10059290 + param_2 * 4);
  *(undefined4 *)((int)this + 0x2c78) = *(undefined4 *)(&DAT_10059314 + param_6 * 4);
  *(undefined4 *)((int)this + 0x2c70) = *(undefined4 *)(&DAT_10059320 + param_4 * 4);
  *(undefined4 *)((int)this + 0x2c74) = *(undefined4 *)(&DAT_10059320 + param_5 * 4);
  *(uint *)((int)this + 0x2d08) = (param_2 == 0xf) + 1;
  if (param_2 == 0xf) {
    uVar2 = *(uint *)((int)this + 0x2d0c) | 1;
  }
  else {
    uVar2 = *(uint *)((int)this + 0x2d0c) & 0xfffffffe;
  }
  *(uint *)((int)this + 0x2d0c) = uVar2;
  *(undefined1 *)((int)this + 0x2da9) = 1;
  if (param_4 == 4) {
    uVar2 = 0x400;
  }
  else {
    uVar2 = 0;
  }
  if (param_5 != 4) {
    uVar3 = 0;
  }
  *(undefined1 *)((int)this + 0x3650) = 1;
  *(uint *)((int)this + 0x2ddc) = *(uint *)((int)this + 0x2ddc) & 0xffff0000 | uVar2 | uVar3;
  return;
}

