/*
 * FUN_18006a550 at 18006a550
 * undefined FUN_18006a550(void)
 * Address ranges: 18006a550-18006ad3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006a550(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 extraout_x1;
  undefined1 auVar14 [16];
  undefined4 uVar16;
  undefined8 uVar15;
  undefined8 in_stack_ffffffffffffff58;
  undefined8 uVar17;
  undefined8 in_stack_ffffffffffffff60;
  undefined8 uVar18;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar19;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar21;
  undefined8 uVar20;
  float local_70;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  uVar2 = *(uint *)(param_4 + 0x4ac);
  auVar14 = FUN_1800f42d0(param_4 + 0x20,1,1);
  uVar13 = auVar14._0_8_;
  uVar3 = FUN_1800f42d0(param_4 + 0x20,auVar14._8_8_,1);
  if (uVar2 == 0) {
    uVar4 = 0;
    uVar5 = FUN_1800f42d0(param_4 + 0x20,extraout_x1,1);
    uVar6 = FUN_1800f42d0(param_4 + 0x20,1,1);
    uVar12 = uVar5;
  }
  else {
    uVar6 = (uVar2 & 0xc0000) + 0x40000 | uVar2 & 0xff83ffff | 0x100000;
    uVar5 = uVar2 & 0xff800000 | uVar2 & 0xfffff | 0x100000;
    uVar4 = FUN_1800f42d0(param_4 + 0x20,extraout_x1,1);
    uVar16 = 0;
    FUN_1800f5730(param_4 + 0x20,param_2,0x2a,uVar13 & 0xffffffff,1);
    uVar10 = 0;
    uVar11 = 0;
    FUN_1800f5730(param_4 + 0x20,param_2,0x29,uVar13 & 0xffffffff,1,*(undefined4 *)(param_4 + 0x498)
                  ,0,1,CONCAT44(uVar16,auVar14._0_4_) | 0x10000000,0,0);
    uVar12 = uVar4;
  }
  uVar16 = 0;
  FUN_1800f5730(param_4 + 0x20,param_2,0x36,uVar12,1,*(undefined4 *)(param_4 + 0x498),0,0,0);
  uVar12 = (uint)*(undefined8 *)(param_4 + 0x520) >> 0xc & 0xf;
  local_70 = (float)uVar12;
  if ((*(uint *)(param_4 + 0x4a4) & 0x3f00) == 0) {
    local_70 = 0.0;
    uVar7 = FUN_1800f42d0(param_4 + 0x20,1,1);
    *(undefined4 *)(param_4 + 0x4a8) = uVar7;
    uVar16 = 0;
    FUN_1800f5730(param_4 + 0x20,param_2,0x56,uVar7,1,*(undefined4 *)(param_4 + 0x4a4),0,0,0);
    uVar12 = 0;
  }
  uVar8 = FUN_1800f42d0(param_4 + 0x20,1,1);
  uVar7 = *(undefined4 *)(param_4 + 0x498);
  uVar9 = *(uint *)(param_4 + 0x4a4) & 0x3f00;
  lVar1 = param_4 + 0x20;
  if (uVar2 == 0) {
    if (uVar9 == 0) {
      uVar15 = CONCAT44(uVar10,2);
      FUN_1800f5730(lVar1,param_2,0x23,uVar8,1,*(uint *)(param_4 + 0x4a4),0,uVar7,
                    CONCAT44(uVar16,0xe4),uVar15,CONCAT44(uVar11,uVar7),CONCAT44(uVar19,0xe4),
                    CONCAT44(uVar21,1),0);
      uVar10 = (undefined4)((ulonglong)uVar15 >> 0x20);
    }
    else {
      FUN_1800f5730(lVar1,param_2,0x36,uVar8,1,uVar7,0,uVar12 << 1 | 1,0);
    }
  }
  else if (uVar9 == 0) {
    uVar15 = CONCAT44(uVar10,0xfffffffe);
    FUN_1800f5730(lVar1,param_2,0x23,uVar8,1,*(undefined4 *)(param_4 + 0x4ac),0,uVar7,0,uVar15,
                  CONCAT44(uVar11,uVar7),0,CONCAT44(uVar21,1),0);
    uVar15 = CONCAT44((int)((ulonglong)uVar15 >> 0x20),2);
    FUN_1800f5730(param_4 + 0x20,param_2,0x23,uVar8,1,*(undefined4 *)(param_4 + 0x4a4),0,
                  *(undefined4 *)(param_4 + 0x498),0,uVar15,uVar8,0,0);
    uVar10 = (undefined4)((ulonglong)uVar15 >> 0x20);
  }
  else {
    uVar15 = CONCAT44(uVar10,0xfffffffe);
    FUN_1800f5730(lVar1,param_2,0x23,uVar8,1,*(undefined4 *)(param_4 + 0x4ac),0,uVar7,0,uVar15,
                  CONCAT44(uVar11,uVar7),0,CONCAT44(uVar21,uVar12 << 1) | 1,0);
    uVar10 = (undefined4)((ulonglong)uVar15 >> 0x20);
  }
  FUN_1800f5730(param_4 + 0x20,param_2,0x36,uVar3,1,*(undefined4 *)(param_4 + 0x498),0,0,0);
  FUN_1800f5730(param_4 + 0x20,param_2,0x30,0);
  uVar9 = FUN_1800f42d0(param_4 + 0x20,1,0);
  uVar18 = 0;
  uVar15 = CONCAT44(uVar10,uVar12);
  FUN_1800f5730(param_4 + 0x20,param_2,0x4f,uVar9,1,uVar5,0,*(undefined4 *)(param_4 + 0x4a4),0,
                uVar15,0);
  FUN_1800f5730(param_4 + 0x20,param_2,3,0xffffffff,uVar9 | 0x10000000,0,0);
  if (uVar2 == 0) {
    FUN_1800f5730(param_4 + 0x20,param_2,0x36,uVar13 & 0xffffffff,1,*(undefined4 *)(param_4 + 0x498)
                  ,0,1,0,uVar15,uVar18);
    FUN_1800f5730(param_4 + 0x20,param_2,0x36,uVar6,1,*(undefined4 *)(param_4 + 0x498),0,0,0);
  }
  uVar11 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar10 = FUN_1800f42d0(param_4 + 0x20,1,1);
  uVar16 = 0;
  uVar19 = 0;
  FUN_1800f5730(param_4 + 0x20,param_2,0x2a,uVar10,1,uVar8,0,*(undefined4 *)(param_4 + 0x498),0,
                CONCAT44(uVar11,1),0);
  uVar11 = FUN_1800f42d0(param_4 + 0x20,2,1);
  uVar18 = 0;
  uVar20 = 0;
  uVar21 = 0;
  FUN_1800f5730(param_4 + 0x20,param_2,0x1e,uVar11,3,uVar5,0,*(undefined4 *)(param_4 + 0x49c),
                CONCAT44(uVar19,0x1e4),0,CONCAT44(uVar16,1),0,0,0);
  FUN_1800f5730(param_4 + 0x20,param_2,0x56,uVar11,3,uVar11,0x154,0);
  FUN_1800f5730(param_4 + 0x20,param_2,0xe,uVar11,3,uVar11,0x154,*(undefined4 *)(param_4 + 0x4a8),0,
                CONCAT44(uVar21,local_70),0);
  FUN_1800f5730(param_4 + 0x20,param_2,0x30,0);
  uVar12 = FUN_1800f42d0(param_4 + 0x20,1,0);
  uVar19 = 0;
  uVar21 = 0;
  FUN_1800f5730(param_4 + 0x20,param_2,0x4f,uVar12,1,uVar6,0,uVar8,0,0);
  FUN_1800f5730(param_4 + 0x20,param_2,3,0xffffffff,uVar12 | 0x10000000,0,0);
  uVar15 = CONCAT44(uVar19,uVar3);
  FUN_18006ad48(param_1,param_2,param_3,param_4,uVar11,uVar10,uVar6,uVar13 & 0xffffffff,uVar15);
  uVar19 = (undefined4)((ulonglong)uVar15 >> 0x20);
  if (uVar2 != 0) {
    uVar12 = FUN_1800f42d0(param_4 + 0x20,1,0);
    uVar16 = 0;
    FUN_1800f5730(param_4 + 0x20,param_2,0x1e,uVar4,1,uVar4,0,*(undefined4 *)(param_4 + 0x498),
                  CONCAT44(uVar19,0xe4),CONCAT44(uVar21,1),0);
    uVar19 = 0;
    FUN_1800f5730(param_4 + 0x20,param_2,0x50,uVar12,1,uVar4,0,*(undefined4 *)(param_4 + 0x4ac),0xaa
                  ,0);
    uVar18 = 0;
    uVar20 = 0;
    uVar15 = CONCAT44(uVar19,0xffffff00);
    uVar19 = 0;
    FUN_1800f5730(param_4 + 0x20,param_2,0x37,uVar5,1,uVar12,0,*(undefined4 *)(param_4 + 0x498),0,
                  uVar15,CONCAT44(uVar16,uVar5),0,0);
    uVar21 = (undefined4)((ulonglong)uVar15 >> 0x20);
    FUN_1800f5730(param_4 + 0x20,param_2,0x40003,0xffffffff,uVar12 | 0x10000000,0,0);
  }
  uVar17 = CONCAT44(uVar21,1);
  uVar15 = CONCAT44(uVar19,0xe4);
  FUN_1800f5730(param_4 + 0x20,param_2,0x1e,uVar6,1,uVar6,0,*(undefined4 *)(param_4 + 0x498),uVar15,
                uVar17,0,uVar18,uVar20);
  uVar19 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar21 = (undefined4)((ulonglong)uVar17 >> 0x20);
  FUN_1800f5730(param_4 + 0x20,param_2,0x16,0);
  uVar18 = CONCAT44(uVar21,0xfffffffe);
  uVar15 = CONCAT44(uVar19,0xe4);
  FUN_1800f5730(param_4 + 0x20,param_2,0x1e,uVar8,1,uVar8,0,*(undefined4 *)(param_4 + 0x498),uVar15,
                uVar18,0);
  uVar19 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar21 = (undefined4)((ulonglong)uVar18 >> 0x20);
  FUN_1800f5730(param_4 + 0x20,param_2,0x76,0xffffffff,0x20011000,0,0);
  uVar18 = 0;
  uVar15 = CONCAT44(uVar21,1);
  FUN_1800f5730(param_4 + 0x20,param_2,0x1e,uVar5,1,uVar5,0,*(undefined4 *)(param_4 + 0x498),
                CONCAT44(uVar19,0xe4),uVar15,0);
  if (uVar2 != 0) {
    FUN_1800f5730(param_4 + 0x20,param_2,0x36,uVar13 & 0xffffffff,1,*(undefined4 *)(param_4 + 0x498)
                  ,0,1,0,uVar15,uVar18);
    FUN_1800f5730(param_4 + 0x20,param_2,0x36,uVar6,1,*(undefined4 *)(param_4 + 0x498),0,0,0);
  }
  FUN_1800f5730(param_4 + 0x20,param_2,0x16,0);
  if (uVar2 == 0) {
    FUN_1800f4370(param_4 + 0x20,uVar5);
    FUN_1800f4370(param_4 + 0x20,uVar6);
  }
  if (uVar4 != 0) {
    FUN_1800f4370(param_4 + 0x20,uVar4);
  }
  FUN_1800f4370(param_4 + 0x20,uVar8);
  FUN_1800f4370(param_4 + 0x20,uVar10);
  FUN_1800f4370(param_4 + 0x20,uVar11);
  FUN_1800f4370(param_4 + 0x20,uVar3);
  FUN_1800f4370(param_4 + 0x20,uVar13 & 0xffffffff);
  if ((*(uint *)(param_4 + 0x4a8) & 0x3f00) == 0) {
    FUN_1800f4370(param_4 + 0x20);
  }
  return;
}

