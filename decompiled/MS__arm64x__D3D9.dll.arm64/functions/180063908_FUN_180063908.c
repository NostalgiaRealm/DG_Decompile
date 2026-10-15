/*
 * FUN_180063908 at 180063908
 * undefined FUN_180063908(void)
 * Address ranges: 180063908-180063c1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180063908(ulonglong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  ulonglong param_5,undefined4 param_6,ulonglong param_7,uint param_8,int param_9)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  undefined4 uVar6;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 in_stack_ffffffffffffff40;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 in_stack_ffffffffffffff50;
  ulonglong in_stack_ffffffffffffff58;
  undefined4 uVar14;
  undefined8 uVar13;
  ulonglong in_stack_ffffffffffffff60;
  undefined8 uVar15;
  undefined4 local_70;
  undefined1 uVar5;
  ulonglong uVar7;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  uVar9 = (ulonglong)param_4;
  uVar3 = (param_7 & 0xffffffffffff) >> ((ulonglong)(param_4 * 3) & 0x3f);
  uVar1 = (uint)uVar3 & 7;
  if (((uVar1 - 5 < 2) && (((uint)(param_7 >> 0x32) & 1) != 0)) || (param_8 != 0)) {
    param_1 = FUN_1800f42d0(param_2,4,1);
    uVar8 = param_1 & 0xffffffff;
  }
  else {
    uVar8 = 0;
  }
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0xe4;
  uVar4 = 0xe4;
  if ((uVar3 & 7) != 0) {
    if (param_8 != 0) {
      uVar10 = CONCAT44(uVar11,0x54);
      FUN_1800f5730(param_2,param_3,0xf,uVar8,1,param_8 | 0x410000,0x54,
                    *(undefined4 *)(param_2 + 0x70),uVar10,uVar9 * 0x40 + 0xc0,0);
      in_stack_ffffffffffffff50 = 0;
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x54);
      param_1 = FUN_1800f5730(param_2,param_3,0xf,uVar8,2,param_8 | 0x410000,0x54,
                              *(undefined4 *)(param_2 + 0x70),uVar10,uVar9 * 0x40 + 200,0);
      uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
    }
    uVar14 = (undefined4)(in_stack_ffffffffffffff58 >> 0x20);
    uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
    uVar4 = uVar5;
    if ((param_7 >> 0x3e & 1) == 0) {
      if (param_8 == 0) {
        uVar4 = (undefined1)(param_5 >> 0x20);
      }
      else {
        in_stack_ffffffffffffff50 = CONCAT44(uVar6,0x3f800000);
        uVar10 = CONCAT44(uVar11,0xe4);
        param_1 = FUN_1800f5730(param_2,param_3,0x32,param_6,0xf,uVar8,0x54,
                                *(undefined4 *)(param_2 + 0xac),uVar10,0x3f800000,
                                in_stack_ffffffffffffff50,
                                in_stack_ffffffffffffff58 & 0xffffffff00000000,
                                in_stack_ffffffffffffff60 & 0xffffffff00000000,param_5 & 0xffffffff,
                                (uint)(param_5 >> 0x20) & 0xff,0);
        uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
        param_5 = uVar7;
      }
    }
    else {
      uVar2 = param_5 >> 0x20 & 0xff;
      uVar12 = 0;
      uVar10 = CONCAT44(uVar11,0xff);
      FUN_1800f5730(param_2,param_3,0xe,param_6,0xf,param_5 & 0xffffffff,uVar2,param_5 & 0xffffffff,
                    uVar10,0);
      local_70 = (undefined4)uVar2;
      uVar15 = 0;
      in_stack_ffffffffffffff50 = CONCAT44(uVar6,(int)param_5);
      uVar13 = CONCAT44(uVar14,local_70);
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),param_6);
      param_1 = FUN_1800f5730(param_2,param_3,0x37,param_6,0xf,*(undefined4 *)(param_2 + 0x74),0,
                              uVar9 * 0x40 + 0xfc,uVar10,CONCAT44(uVar12,0xe4),
                              in_stack_ffffffffffffff50,uVar13,0);
      uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
      param_5 = uVar7;
      if (param_8 != 0) {
        uVar10 = CONCAT44(uVar11,0x54);
        param_1 = FUN_1800f5730(param_2,param_3,0,param_6,3,param_6,0x54,uVar8,uVar10,0,
                                in_stack_ffffffffffffff50,uVar13,uVar15);
        uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
      }
    }
    uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
    uVar6 = (undefined4)param_5;
    *(byte *)(param_2 + 0xb4 + (longlong)((int)param_4 >> 3)) =
         *(byte *)(param_2 + 0xb4 + (longlong)((int)param_4 >> 3)) |
         (byte)(1 << (ulonglong)(param_4 & 7));
  }
  FUN_18005ddb0(param_1,param_2,uVar1,uVar9,param_6,uVar8,param_7,param_3,CONCAT44(uVar11,uVar6),
                uVar4);
  if (((uVar3 & 7) != 0) && (param_9 != 0)) {
    uVar11 = 0;
    FUN_1800f5730(param_2,param_3,0x32,uVar8,4,param_9,0xaa,*(undefined4 *)(param_2 + 0x74),0,
                  uVar9 * 0x40 + 0xd0,CONCAT44(uVar14,*(undefined4 *)(param_2 + 0x74)),0,
                  uVar9 * 0x40 + 0xd4,0);
    FUN_1800f5730(param_2,param_3,0x38,param_6,7,param_6,0xa4,uVar8,CONCAT44(uVar11,0xaa),0);
  }
  FUN_1800f4370(param_2,uVar8);
  return;
}

