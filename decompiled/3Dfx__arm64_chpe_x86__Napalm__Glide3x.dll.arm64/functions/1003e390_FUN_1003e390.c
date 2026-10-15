/*
 * FUN_1003e390 at 1003e390
 * undefined FUN_1003e390(void)
 * Address ranges: 1003e390-1003e4f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2
FUN_1003e390(undefined8 param_1,undefined4 param_2,ushort param_3,ushort param_4,undefined8 param_5,
            int param_6)

{
  undefined2 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int iVar4;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  ulonglong extraout_x12_01;
  ulonglong uVar5;
  ulonglong extraout_x12_02;
  ulonglong extraout_x12_03;
  ulonglong extraout_x12_04;
  uint uVar6;
  uint extraout_w13;
  uint extraout_w13_00;
  uint extraout_w13_01;
  ulonglong extraout_x13;
  ulonglong extraout_x13_00;
  ulonglong extraout_x13_01;
  ulonglong uVar7;
  
  uVar1 = FUN_1003e328(0,param_2);
  uVar5 = extraout_x12;
  uVar7 = extraout_x13;
  iVar4 = extraout_w11;
  if (param_6 - 1U < 4) {
    if ((extraout_x13 & 1) != 0) {
      uVar3 = 0x2010;
      if ((extraout_x13 & 0x200) != 0 || extraout_w11 != 0) {
        uVar3 = 0x3010;
      }
      uVar1 = FUN_1003e328(uVar3 | param_3,extraout_x12 & 0xffffffff);
      uVar5 = extraout_x12_00;
      uVar7 = extraout_x13_00;
      iVar4 = extraout_w11_00;
    }
    if (((param_6 == 1) || (param_6 == 2)) || (param_6 == 3)) {
      if (((uint)uVar7 >> 7 & 1) != 0) {
        uVar3 = 0;
        if ((uVar7 & 0x200) != 0 || iVar4 != 0) {
          uVar3 = 0x1000;
        }
        uVar1 = FUN_1003e328(param_4 | uVar3,uVar5 & 0xffffffff);
        uVar5 = extraout_x12_01;
        uVar7 = extraout_x13_01;
        iVar4 = extraout_w11_01;
      }
      if ((param_6 == 1 || param_6 == 2) || (param_6 == 3)) goto LAB_1003e44c;
    }
  }
  if (param_6 != 4) {
    return uVar1;
  }
LAB_1003e44c:
  uVar6 = (uint)uVar7;
  if ((uVar6 >> 6 & 1) != 0) {
    uVar2 = 0x2040;
    if ((uVar7 & 0x200) != 0 || iVar4 != 0) {
      uVar2 = 0x3040;
    }
    uVar1 = FUN_1003e328(uVar2,uVar5 & 0xffffffff);
    uVar5 = extraout_x12_02;
    uVar6 = extraout_w13;
    iVar4 = extraout_w11_02;
  }
  if (param_6 == 3) {
    if ((uVar6 >> 4 & 1) != 0) {
      uVar1 = FUN_1003e328(param_3 | 0x30,uVar5 & 0xffffffff);
      uVar5 = extraout_x12_03;
      uVar6 = extraout_w13_00;
      iVar4 = extraout_w11_03;
    }
    if ((uVar6 >> 5 & 1) != 0) {
      uVar1 = FUN_1003e328(param_3 | 0x20,uVar5 & 0xffffffff);
      uVar5 = extraout_x12_04;
      uVar6 = extraout_w13_01;
      iVar4 = extraout_w11_04;
    }
  }
  else if ((param_6 != 1) && (param_6 != 2)) {
    return uVar1;
  }
  if ((uVar6 >> 8 & 1) != 0) {
    uVar3 = 0x2060;
    if ((uVar6 & 0x200) != 0 || iVar4 != 0) {
      uVar3 = 0x3060;
    }
    uVar1 = FUN_1003e328(uVar3 | param_3,uVar5 & 0xffffffff);
  }
  return uVar1;
}

