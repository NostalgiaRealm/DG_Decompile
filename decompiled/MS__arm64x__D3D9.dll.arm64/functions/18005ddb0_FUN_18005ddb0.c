/*
 * FUN_18005ddb0 at 18005ddb0
 * undefined FUN_18005ddb0(void)
 * Address ranges: 18005ddb0-18005e477
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005ddb0(undefined8 param_1,longlong param_2,uint param_3,uint param_4,uint param_5,
                  undefined4 param_6,ulonglong param_7,undefined8 param_8,uint param_9,byte param_10
                  )

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 extraout_w10;
  undefined4 extraout_w10_00;
  undefined4 extraout_w10_01;
  undefined4 extraout_w10_02;
  undefined4 extraout_w10_03;
  undefined4 extraout_w10_04;
  undefined4 extraout_w11;
  undefined4 extraout_w11_00;
  undefined4 extraout_w12;
  ulonglong extraout_x13;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong in_stack_ffffffffffffff40;
  ulonglong in_stack_ffffffffffffff48;
  undefined4 uVar11;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar13;
  undefined8 uVar12;
  undefined8 in_stack_ffffffffffffff58;
  undefined8 uVar14;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar16;
  undefined8 uVar15;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  uVar1 = (uint)param_10;
  if (param_9 == 0) {
    param_9 = param_5;
    uVar1 = 0xe4;
  }
  uVar9 = (ulonglong)param_4;
  if ((param_3 - 2 & 0xfffffffb) == 0) {
    uVar17 = CONCAT44((int)(in_stack_ffffffffffffff40 >> 0x20),uVar1);
    FUN_1800f5730(param_2,param_8,0x10,param_5,8,param_9,(char)uVar1,param_9,uVar17,0);
    uVar3 = (undefined4)((ulonglong)uVar17 >> 0x20);
    FUN_1800f5730(param_2,param_8,0x44,param_5,8,param_5,0xff,0);
    in_stack_ffffffffffffff48 = 0;
    in_stack_ffffffffffffff40 = CONCAT44(uVar3,0xff);
    FUN_1800f5730(param_2,param_8,0x38,param_5,0xf,param_9,uVar1,param_5,in_stack_ffffffffffffff40,0
                 );
  }
  uVar3 = (undefined4)(in_stack_ffffffffffffff40 >> 0x20);
  uVar11 = (undefined4)(in_stack_ffffffffffffff48 >> 0x20);
  if (param_3 == 5) {
    if (param_5 != param_9) {
      FUN_1800f5730(param_2,param_8,0x36,param_5,0xb,param_9,
                    (uVar1 >> 6) << 4 | uVar1 & 0xf | uVar1 & 0xc0,0);
    }
    in_stack_ffffffffffffff50 = 0;
    in_stack_ffffffffffffff48 = CONCAT44(uVar11,param_4 * 0x40 + 0xf8);
    uVar8 = uVar1 >> 4 & 3;
    in_stack_ffffffffffffff40 = CONCAT44(uVar3,(uint)DAT_18022c416);
    FUN_1800f5730(param_2,param_8,0x38,param_5,4,param_9,
                  uVar8 | (uVar8 | (uVar8 | uVar8 << 2) << 2) << 2,*(undefined4 *)(param_2 + 0x68),
                  in_stack_ffffffffffffff40,in_stack_ffffffffffffff48,0);
LAB_18005df88:
    uVar3 = (undefined4)(in_stack_ffffffffffffff40 >> 0x20);
    uVar11 = (undefined4)(in_stack_ffffffffffffff48 >> 0x20);
    if ((0x92U >> (ulonglong)(param_3 & 0x1f) & 1) != 0) {
      func_0x0001802136f8(param_2,uVar9,0,uVar9);
      uVar2 = func_0x000180213690(0xe1,param_2);
      FUN_1800f5730(param_2,param_8,0x45,param_5,0xf,param_9,uVar1,uVar2,
                    CONCAT44(uVar3,extraout_w10),CONCAT44(uVar11,extraout_w11),0,0);
      goto LAB_18005e3e0;
    }
  }
  else {
    if (param_3 == 6) {
      in_stack_ffffffffffffff50 = 0;
      in_stack_ffffffffffffff48 = CONCAT44(uVar11,param_4 * 0x40 + 0xf8);
      in_stack_ffffffffffffff40 = CONCAT44(uVar3,(uint)DAT_18022c416);
      FUN_1800f5730(param_2,param_8,0x38,param_5,8,param_5,0xff,*(undefined4 *)(param_2 + 0x68),
                    in_stack_ffffffffffffff40,in_stack_ffffffffffffff48,0);
      goto LAB_18005df88;
    }
    if (param_3 < 8) goto LAB_18005df88;
  }
  uVar3 = (undefined4)(in_stack_ffffffffffffff40 >> 0x20);
  uVar11 = (undefined4)(in_stack_ffffffffffffff48 >> 0x20);
  if (param_3 - 5 < 2) {
    uVar5 = (ulonglong)(param_3 == 6);
    iVar7 = 0x10;
    if (param_3 != 6) {
      iVar7 = 0;
    }
    uVar1 = (uint)(param_7 >> 0x20);
    uVar8 = uVar1 >> 0x12 & 1;
    uVar1 = (uVar1 >> 0x11 & 1) << 1 | uVar8;
    if (uVar8 == 0) {
      func_0x0001802136f8(2,param_2,uVar9,1,param_4 + 0x10);
      uVar3 = func_0x000180213690(param_2,extraout_x13 & 0xffffffff,uVar5 & 0xffffffff,
                                  extraout_x13 & 0xffffffff);
      uVar15 = 0;
      uVar14 = CONCAT44(uVar2,extraout_w11_00);
      uVar12 = 0;
      uVar17 = CONCAT44(uVar11,extraout_w10_04);
      uVar2 = extraout_w12;
      FUN_1800f5730(param_2,param_8,0x46,param_5,0xf,param_5,0xe4,uVar3,0,uVar17,0,uVar14,
                    extraout_w12,0);
      if (uVar1 == 0) {
        FUN_1800f5730(param_2,param_8,0x36,param_5,8,*(undefined4 *)(param_2 + 0xa8),0xe4,0x3f800000
                      ,0,uVar17,uVar12,uVar14,uVar2,uVar15);
      }
    }
    else if ((uVar1 - 1 & 0xfffffffd) == 0) {
      uVar2 = 2;
      if (param_3 == 6) {
        uVar2 = 3;
      }
      uVar8 = 0;
      uVar6 = param_5 | 0x10000000;
      uVar10 = (ulonglong)(iVar7 + param_4);
      do {
        uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
        uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
        uVar11 = (undefined4)(in_stack_ffffffffffffff40 >> 0x20);
        func_0x0001802136f8(param_2,uVar9,1,param_4 + 0x10);
        uVar3 = func_0x000180213690(param_2,uVar10,uVar5,uVar10);
        uVar17 = 0;
        in_stack_ffffffffffffff40 = CONCAT44(uVar11,uVar3);
        in_stack_ffffffffffffff68 = CONCAT44(uVar16,uVar2);
        uVar11 = 0;
        in_stack_ffffffffffffff50 = CONCAT44(uVar4,extraout_w10_02);
        uVar3 = 0;
        FUN_1800f5730(param_2,param_8,0x80000046,(&DAT_18022c2a0)[uVar8],param_6,
                      1 << (ulonglong)(uVar8 & 0x1f),param_5,0xe4,in_stack_ffffffffffffff40,0,
                      in_stack_ffffffffffffff50,0,uVar6,in_stack_ffffffffffffff68,0);
        uVar8 = uVar8 + 1;
      } while (uVar8 < 4);
      func_0x0001802136f8(param_2,uVar9,1,param_4 + 0x10,uVar10,uVar5);
      uVar4 = func_0x000180213690(param_2,uVar10 & 0xffffffff,uVar5 & 0xffffffff,uVar10 & 0xffffffff
                                 );
      uVar13 = 0;
      uVar16 = 0;
      FUN_1800f5730(param_2,param_8,0x46,param_5,0xf,param_5,0xe4,uVar4,0,
                    CONCAT44(uVar3,extraout_w10_03),0,CONCAT44(uVar11,uVar6),uVar2,0,uVar17);
      uVar2 = 0;
      FUN_1800f5730(param_2,param_8,0x11,param_6,1,param_6,0xe4,*(undefined4 *)(param_2 + 0xac),
                    CONCAT44(uVar16,0xe4),0x3e4ccccd,CONCAT44(uVar13,0x3e4ccccd),0x3e4ccccd,
                    0x3e4ccccd,0);
      uVar18 = 0;
      uVar19 = 0;
      uVar15 = CONCAT44(uVar2,param_6);
      uVar2 = 0x3e4ccccd;
      uVar14 = 0x3e4ccccd;
      uVar12 = 0x3e4ccccd;
      uVar17 = 0x3e4ccccd;
      FUN_1800f5730(param_2,param_8,0x32,param_5,0xf,param_5,0xe4,*(undefined4 *)(param_2 + 0xac),
                    0xe4,0x3e4ccccd,0x3e4ccccd,0x3e4ccccd,0x3e4ccccd,uVar15,0,0);
      if (uVar1 == 1) {
        FUN_1800f5730(param_2,param_8,0x36,param_5,8,*(undefined4 *)(param_2 + 0xa8),0xe4,0x3f800000
                      ,0,uVar17,uVar12,uVar14,uVar2,uVar15,uVar18,uVar19);
      }
    }
  }
  else {
    if (param_3 == 2) {
      func_0x0001802136f8(param_2,uVar9,0,uVar9);
      uVar2 = func_0x000180213690(param_2,param_4 + 0x10,1,param_4 + 0x10);
      FUN_1800f5730(param_2,param_8,0x45,param_5,0xf,param_5,uVar1,uVar2,CONCAT44(uVar3,0xe4),
                    CONCAT44(uVar11,extraout_w10_01),0,0);
      goto LAB_18005e3e0;
    }
    if (param_3 == 3) {
      func_0x0001802136f8(param_2,uVar9,0,uVar9);
      uVar2 = func_0x000180213690(param_2,param_4 + 0x20,2,param_4 + 0x20);
      FUN_1800f5730(param_2,param_8,0x45,param_5,0xf,param_9,uVar1,uVar2,CONCAT44(uVar3,0xe4),
                    CONCAT44(uVar11,extraout_w10_00),0,0);
      goto LAB_18005e3e0;
    }
    if (param_3 == 0) {
      FUN_1800f5730(param_2,param_8,0x36,param_5,0xf,*(undefined4 *)(param_2 + 0xac),0xe4,0,
                    in_stack_ffffffffffffff40 & 0xffffffff00000000,
                    in_stack_ffffffffffffff48 & 0xffffffff00000000,0x3f800000,0);
      goto LAB_18005e3e0;
    }
  }
  if (7 < param_3) {
    return;
  }
LAB_18005e3e0:
  if (((0x9eU >> (ulonglong)(param_3 & 0x1f) & 1) != 0) && ((param_7 >> 0x3d & 1) != 0)) {
    FUN_1800f5730(param_2,param_8,1,param_5,0xf,param_5,0xe4,*(undefined4 *)(param_2 + 0x68),0xe4,
                  uVar9 * 0x20 + 0x2c0,0);
    FUN_1800f5730(param_2,param_8,0x3c,param_5,0xf,param_5,0xe4,*(undefined4 *)(param_2 + 0x68),0xe4
                  ,uVar9 * 0x20 + 0x2d0,0);
  }
  return;
}

