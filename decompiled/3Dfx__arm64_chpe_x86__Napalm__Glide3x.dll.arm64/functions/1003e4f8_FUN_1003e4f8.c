/*
 * FUN_1003e4f8 at 1003e4f8
 * undefined FUN_1003e4f8(void)
 * Address ranges: 1003e4f8-1003e5cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort FUN_1003e4f8(undefined8 param_1,undefined4 param_2,ushort param_3,ushort param_4,
                   ushort param_5,uint param_6,int param_7)

{
  ushort uVar1;
  undefined4 uVar2;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int iVar3;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  ulonglong extraout_x12_01;
  ulonglong uVar4;
  uint uVar5;
  uint extraout_w13;
  uint extraout_w13_00;
  uint extraout_w13_01;
  ulonglong extraout_x13;
  uint extraout_w14;
  uint extraout_w14_00;
  uint uVar6;
  
  uVar1 = FUN_1003e328(0,param_2);
  uVar5 = (uint)extraout_x13;
  uVar6 = uVar5 & 0x200;
  uVar4 = extraout_x12;
  iVar3 = extraout_w11;
  if ((extraout_x13 & 1) != 0) {
    uVar1 = 0;
    if ((extraout_x13 & 0x200) != 0 || extraout_w11 != 0) {
      uVar1 = 0x1000;
    }
    uVar1 = FUN_1003e328(param_3 | uVar1,extraout_x12 & 0xffffffff);
    uVar4 = extraout_x12_00;
    uVar6 = extraout_w14;
    iVar3 = extraout_w11_00;
    uVar5 = extraout_w13;
  }
  if ((uVar5 >> 6 & 1) != 0) {
    uVar2 = 0x2040;
    if (uVar6 != 0 || iVar3 != 0) {
      uVar2 = 0x3040;
    }
    uVar1 = FUN_1003e328(uVar2,uVar4 & 0xffffffff);
    uVar4 = extraout_x12_01;
    uVar6 = extraout_w14_00;
    iVar3 = extraout_w11_01;
    uVar5 = extraout_w13_00;
  }
  if ((uVar5 >> 3 & 1) != 0) {
    uVar2 = 0x2050;
    if (uVar6 != 0 || iVar3 != 0) {
      uVar2 = 0x3050;
    }
    uVar1 = FUN_1003e328(uVar2,uVar4 & 0xffffffff);
    uVar5 = extraout_w13_01;
  }
  if (((param_6 & 1) == 0) && (param_7 - 3U < 2)) {
    if ((uVar5 >> 1 & 1) != 0) {
      uVar1 = param_4 | 0x1000;
    }
    if ((param_7 == 3) && ((uVar5 >> 2 & 1) != 0)) {
      uVar1 = param_5 | 0x1000;
    }
  }
  return uVar1;
}

