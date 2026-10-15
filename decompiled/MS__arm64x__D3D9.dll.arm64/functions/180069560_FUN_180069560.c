/*
 * FUN_180069560 at 180069560
 * undefined FUN_180069560(void)
 * Address ranges: 180069560-180069d13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180069560(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined1 uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined8 in_stack_ffffffffffffff50;
  undefined8 in_stack_ffffffffffffff58;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar19;
  undefined8 uVar18;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar21;
  undefined8 uVar20;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar23;
  undefined8 uVar22;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  uVar23 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  puVar1 = (uint *)(param_4 + 0x4c4);
  cVar5 = *(char *)(param_4 + 0x540);
  *(undefined4 *)(param_4 + 0x4dc) = 0;
  puVar2 = (uint *)(param_4 + 0x4bc);
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar3 = (uint *)(param_4 + 0x4cc);
  puVar2[0] = 0;
  puVar2[1] = 0;
  puVar4 = (uint *)(param_4 + 0x4d4);
  puVar3[0] = 0;
  puVar3[1] = 0;
  puVar4[0] = 0;
  puVar4[1] = 0;
  if (cVar5 == '\0') {
    uVar11 = FUN_18006d650(param_1,param_4);
  }
  else {
    uVar13 = 0;
    uVar11 = param_1;
    if (*(uint *)(param_4 + 0x158) != 0) {
      do {
        cVar5 = *(char *)(param_4 + 0x146 + uVar13);
        uVar14 = (uint)uVar13;
        if (cVar5 == '\0') {
          *puVar2 = uVar14 | 0x320100;
          *(uint *)(param_4 + 0x4c0) = uVar14 | 0x324100;
          *puVar1 = uVar14 | 0x328100;
        }
        else if (cVar5 == '\x03') {
          *(uint *)(param_4 + 0x4c8) = uVar14 | 0x320100;
          *puVar3 = uVar14 | 0x324100;
          *(uint *)(param_4 + 0x4d0) = uVar14 | 0x328100;
        }
        else if (cVar5 == '\x11') {
          *puVar4 = uVar14 | 0x320100;
          *(uint *)(param_4 + 0x4d8) = uVar14 | 0x324100;
          *(uint *)(param_4 + 0x4dc) = uVar14 | 0x328100;
        }
        uVar13 = (ulonglong)(uVar14 + 1);
      } while (uVar14 + 1 < *(uint *)(param_4 + 0x158));
    }
  }
  *(undefined8 *)(param_4 + 0x4a0) = 0x11040020000d00;
  *(undefined4 *)(param_4 + 0x4a8) = 0x110400;
  *(undefined8 *)(param_4 + 0x498) = 0x41040000110400;
  *(undefined8 *)(param_4 + 0x490) = 0x11080300410803;
  if ((*(char *)(param_4 + 0x53d) == '\0') || (*puVar2 == 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    uVar8 = FUN_1800f42d0(param_4 + 0x20,1,1);
    *(undefined4 *)(param_4 + 0x4a4) = uVar8;
    auVar15 = FUN_1800f42d0(param_4 + 0x20,3,1);
    uVar13 = auVar15._0_8_;
    uVar9 = FUN_1800f42d0(param_4 + 0x20,auVar15._8_8_,1);
    FUN_1800f5730(param_4 + 0x20,param_2,0x10,uVar13 & 0xffffffff,1,*puVar2,0xa4,
                  *(undefined4 *)(param_4 + 0x490),CONCAT44(uVar10,0xe4),0x80,0);
    FUN_1800f5730(param_4 + 0x20,param_2,0x10,uVar13 & 0xffffffff,2,*(undefined4 *)(param_4 + 0x4c0)
                  ,0xa4,*(undefined4 *)(param_4 + 0x490),0xe4,0x80,0);
    uVar19 = 0;
    FUN_1800f5730(param_4 + 0x20,param_2,0x10,uVar13 & 0xffffffff,4,*puVar1,0xa4,
                  *(undefined4 *)(param_4 + 0x490),0xe4,0x80,0);
    uVar10 = 0;
    FUN_1800f5730(param_4 + 0x20,param_2,0x56,uVar9,7,*(undefined4 *)(param_4 + 0x494),0xe4,8,0);
    uVar8 = 0;
    FUN_1800f5730(param_4 + 0x20,param_2,0xe,uVar9,7,uVar9,0x1a4,uVar13 & 0xffffffff,
                  CONCAT44(uVar10,0x1a4),0);
    uVar16 = CONCAT44(uVar8,0x3eaaaaab);
    FUN_1800f5730(param_4 + 0x20,param_2,0x10,uVar9,1,uVar9,0x1a4,*(undefined4 *)(param_4 + 0x49c),
                  0xe4,uVar16,CONCAT44(uVar19,0x3eaaaaab),CONCAT44(uVar21,0x3eaaaaab),
                  CONCAT44(uVar23,0x3eaaaaab),0);
    uVar8 = 0;
    FUN_1800f5730(param_4 + 0x20,param_2,0x1d,*(undefined4 *)(param_4 + 0x4a4),1,uVar9,0,
                  *(undefined4 *)(param_4 + 0x498),0xe4,uVar16 & 0xffffffff00000000,0);
    uVar21 = 0;
    uVar23 = 0;
    uVar10 = 0;
    FUN_1800f5730(param_4 + 0x20,param_2,0x37,*(undefined4 *)(param_4 + 0x4a4),1,
                  *(undefined4 *)(param_4 + 0x4a4),0,uVar9,0,*(undefined4 *)(param_4 + 0x494),
                  CONCAT44(uVar8,0xe4),0x94,0);
    uVar11 = CONCAT44(uVar10,0xe4);
    FUN_1800f5730(param_4 + 0x20,param_2,0x33,*(undefined4 *)(param_4 + 0x4a4),1,
                  *(undefined4 *)(param_4 + 0x4a4),0,*(undefined4 *)(param_4 + 0x494),uVar11,0x94,0)
    ;
    uVar8 = 0;
    uVar19 = 0;
    uVar11 = CONCAT44((int)((ulonglong)uVar11 >> 0x20),0xe4);
    FUN_1800f5730(param_4 + 0x20,param_2,0x34,*(undefined4 *)(param_4 + 0x4a4),1,
                  *(undefined4 *)(param_4 + 0x4a4),0,*(undefined4 *)(param_4 + 0x494),uVar11,0x90,0)
    ;
    uVar10 = (undefined4)((ulonglong)uVar11 >> 0x20);
    FUN_1800f5730(param_4 + 0x20,param_2,0x1c,*(undefined4 *)(param_4 + 0x4a4),1,
                  *(undefined4 *)(param_4 + 0x4a4),0,0);
    FUN_1800f4370(param_4 + 0x20,uVar9);
    uVar11 = FUN_1800f4370(param_4 + 0x20,uVar13 & 0xffffffff);
  }
  if (1 < *(uint *)(param_4 + 0x538)) {
    uVar9 = FUN_1800f42d0(param_4 + 0x20,3,1);
    *(undefined4 *)(param_4 + 0x4ac) = uVar9;
    if (bVar6) {
      uVar18 = CONCAT44(uVar23,0xfffffffa);
      uVar11 = CONCAT44(uVar19,*(undefined4 *)(param_4 + 0x498));
      uVar17 = CONCAT44(uVar21,0xe4);
      FUN_1800f5730(param_4 + 0x20,param_2,0x23,uVar9,1,*(undefined4 *)(param_4 + 0x4a4),0,
                    *(undefined4 *)(param_4 + 0x498),CONCAT44(uVar10,0xe4),CONCAT44(uVar8,6),uVar11,
                    uVar17,uVar18,0);
      uVar19 = (undefined4)((ulonglong)uVar11 >> 0x20);
      uVar21 = (undefined4)((ulonglong)uVar17 >> 0x20);
      uVar23 = (undefined4)((ulonglong)uVar18 >> 0x20);
      uVar10 = 0;
      uVar8 = 0;
      FUN_1800f5730(param_4 + 0x20,param_2,0x1e,*(undefined4 *)(param_4 + 0x4ac),1,
                    *(undefined4 *)(param_4 + 0x4ac),0x100,0x102500,0,0);
      uVar22 = CONCAT44(uVar23,0xffffffff);
      uVar20 = CONCAT44(uVar21,0xe4);
      uVar11 = CONCAT44(uVar10,*(undefined4 *)(param_4 + 0x4ac));
      uVar18 = CONCAT44(uVar19,*(undefined4 *)(param_4 + 0x498));
      uVar17 = CONCAT44(uVar8,0x100);
      FUN_1800f5730(param_4 + 0x20,param_2,0x27,*(undefined4 *)(param_4 + 0x4ac),2,0x40400900,0,0,
                    uVar11,uVar17,uVar18,uVar20,uVar22,0);
      uVar8 = (undefined4)((ulonglong)uVar17 >> 0x20);
      uVar19 = (undefined4)((ulonglong)uVar18 >> 0x20);
      uVar10 = (undefined4)((ulonglong)uVar11 >> 0x20);
      uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
      uVar23 = (undefined4)((ulonglong)uVar22 >> 0x20);
      FUN_1800f5730(param_4 + 0x20,param_2,0x4001f,0xffffffff,
                    *(uint *)(param_4 + 0x4ac) | 0x10000000,1,0);
    }
    else {
      FUN_1800f5730(param_4 + 0x20,param_2,0x36,uVar9,1,0x102500,0,0);
    }
    uVar11 = FUN_1800f5730(param_4 + 0x20,param_2,0x36,*(undefined4 *)(param_4 + 0x4ac),7,0x40400900
                           ,0x1e4,0,CONCAT44(uVar10,*(undefined4 *)(param_4 + 0x4ac)),
                           CONCAT44(uVar8,0x100),CONCAT44(uVar19,*(undefined4 *)(param_4 + 0x498)),
                           CONCAT44(uVar21,0xe4),CONCAT44(uVar23,0xffffffff),0);
  }
  uVar14 = (uint)*(undefined8 *)(param_4 + 0x520);
  if ((((uVar14 >> 9 & 1) == 0) || (*puVar2 == 0)) || (*puVar4 == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  *(bool *)(param_4 + 0x53e) = bVar7;
  if (((uVar14 >> 10 & 1) == 0) || (*(int *)(param_4 + 0x4c8) == 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  *(undefined1 *)(param_4 + 0x53f) = uVar12;
  if (bVar7) {
    *(uint *)(param_4 + 0x4e0) = *puVar2;
    *(undefined4 *)(param_4 + 0x4e4) = *(undefined4 *)(param_4 + 0x4c0);
    *(uint *)(param_4 + 0x4e8) = *puVar1;
    uVar10 = FUN_1800f42d0(param_4 + 0x20,3,1);
    *(undefined4 *)(param_4 + 0x4ec) = uVar10;
    uVar10 = FUN_1800f42d0(param_4 + 0x20,extraout_x1,1);
    *(undefined4 *)(param_4 + 0x4f0) = uVar10;
    uVar10 = FUN_1800f42d0(param_4 + 0x20,extraout_x1_00,1);
    *(undefined4 *)(param_4 + 0x4f4) = uVar10;
    uVar10 = FUN_1800f42d0(param_4 + 0x20,extraout_x1_01,1);
    *(undefined4 *)(param_4 + 0x4f8) = uVar10;
    uVar10 = FUN_1800f42d0(param_4 + 0x20,extraout_x1_02,1);
    *(undefined4 *)(param_4 + 0x4fc) = uVar10;
    uVar10 = FUN_1800f42d0(param_4 + 0x20,extraout_x1_03,1);
    *(undefined4 *)(param_4 + 0x500) = uVar10;
    uVar11 = FUN_1800f42d0(param_4 + 0x20,extraout_x1_04,1);
    *(int *)(param_4 + 0x504) = (int)uVar11;
  }
  if (*(char *)(param_4 + 0x53f) != '\0') {
    *(undefined4 *)(param_4 + 0x508) = *(undefined4 *)(param_4 + 0x4c8);
    *(uint *)(param_4 + 0x50c) = *puVar3;
    *(undefined4 *)(param_4 + 0x510) = *(undefined4 *)(param_4 + 0x4d0);
    uVar10 = FUN_1800f42d0(param_4 + 0x20,3,1);
    *(undefined4 *)(param_4 + 0x514) = uVar10;
    uVar10 = FUN_1800f42d0(param_4 + 0x20,extraout_x1_05,1);
    *(undefined4 *)(param_4 + 0x518) = uVar10;
    uVar11 = FUN_1800f42d0(param_4 + 0x20,extraout_x1_06,1);
    *(int *)(param_4 + 0x51c) = (int)uVar11;
  }
  uVar11 = FUN_180069d50(uVar11,param_2,param_4);
  if (*(char *)(param_4 + 0x53f) != '\0') {
    uVar11 = FUN_18006a2c8(uVar11,param_2,param_4,*(undefined4 *)(param_4 + 0x514),*puVar2,*puVar1,
                           *(undefined4 *)(param_4 + 0x4c8),*(undefined4 *)(param_4 + 0x4d0));
    uVar11 = FUN_18006a2c8(uVar11,param_2,param_4,*(undefined4 *)(param_4 + 0x518),
                           *(undefined4 *)(param_4 + 0x4c0),*puVar1,*puVar3,
                           *(undefined4 *)(param_4 + 0x4d0));
    FUN_18006a2c8(uVar11,param_2,param_4,*(undefined4 *)(param_4 + 0x51c),
                  *(undefined4 *)(param_4 + 0x4c0),*puVar2,*puVar3,*(undefined4 *)(param_4 + 0x4c8))
    ;
  }
  FUN_18006a550(param_1,param_2,param_3,param_4);
  if (*(char *)(param_4 + 0x53e) != '\0') {
    FUN_1800f4370(param_4 + 0x20,*(undefined4 *)(param_4 + 0x4ec));
    FUN_1800f4370(param_4 + 0x20,*(undefined4 *)(param_4 + 0x4f0));
    FUN_1800f4370(param_4 + 0x20,*(undefined4 *)(param_4 + 0x4f4));
    FUN_1800f4370(param_4 + 0x20,*(undefined4 *)(param_4 + 0x4f8));
    FUN_1800f4370(param_4 + 0x20,*(undefined4 *)(param_4 + 0x4fc));
    FUN_1800f4370(param_4 + 0x20,*(undefined4 *)(param_4 + 0x500));
    FUN_1800f4370(param_4 + 0x20,*(undefined4 *)(param_4 + 0x504));
  }
  *(undefined4 *)(param_4 + 0x500) = 0;
  *(undefined4 *)(param_4 + 0x504) = 0;
  *(undefined4 *)(param_4 + 0x4f8) = 0;
  *(undefined4 *)(param_4 + 0x4fc) = 0;
  *(undefined4 *)(param_4 + 0x4f0) = 0;
  *(undefined4 *)(param_4 + 0x4f4) = 0;
  *(undefined4 *)(param_4 + 0x4e8) = 0;
  *(undefined4 *)(param_4 + 0x4ec) = 0;
  *(undefined4 *)(param_4 + 0x4e0) = 0;
  *(undefined4 *)(param_4 + 0x4e4) = 0;
  if (*(char *)(param_4 + 0x53f) != '\0') {
    FUN_1800f4370(param_4 + 0x20,*(undefined4 *)(param_4 + 0x514));
    FUN_1800f4370(param_4 + 0x20,*(undefined4 *)(param_4 + 0x518));
    FUN_1800f4370(param_4 + 0x20,*(undefined4 *)(param_4 + 0x51c));
  }
  *(undefined4 *)(param_4 + 0x518) = 0;
  *(undefined4 *)(param_4 + 0x51c) = 0;
  *(undefined4 *)(param_4 + 0x510) = 0;
  *(undefined4 *)(param_4 + 0x514) = 0;
  *(undefined4 *)(param_4 + 0x508) = 0;
  *(undefined4 *)(param_4 + 0x50c) = 0;
  FUN_1800f4370(param_4 + 0x20,*(undefined4 *)(param_4 + 0x4ac));
  *(undefined4 *)(param_4 + 0x4ac) = 0;
  if ((*(uint *)(param_4 + 0x4a4) & 0x3f00) == 0) {
    FUN_1800f4370(param_4 + 0x20);
    *(undefined4 *)(param_4 + 0x4a4) = 0;
  }
  if ((bVar6) && (1 < *(uint *)(param_4 + 0x538))) {
    FUN_1800f5730(param_4 + 0x20,param_2,0x15,0);
  }
  return;
}

