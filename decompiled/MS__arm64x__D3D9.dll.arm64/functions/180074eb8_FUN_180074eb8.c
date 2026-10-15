/*
 * FUN_180074eb8 at 180074eb8
 * undefined FUN_180074eb8(void)
 * Address ranges: 180074eb8-1800763a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180074eb8(longlong *param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined8 in_stack_fffffffffffffee0;
  undefined8 uVar24;
  undefined8 in_stack_fffffffffffffee8;
  undefined8 in_stack_fffffffffffffef0;
  ulonglong uVar25;
  undefined4 uVar26;
  undefined8 in_stack_fffffffffffffef8;
  ulonglong uVar27;
  undefined8 in_stack_ffffffffffffff00;
  ulonglong uVar28;
  undefined8 uVar29;
  undefined4 uVar30;
  undefined8 in_stack_ffffffffffffff10;
  undefined8 uVar31;
  undefined8 in_stack_ffffffffffffff18;
  undefined8 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined8 uVar35;
  uint local_b0;
  uint local_ac;
  int local_a8;
  undefined4 local_a4;
  int local_a0;
  int local_9c;
  uint local_90;
  uint local_8c;
  undefined4 local_80;
  uint local_7c;
  
  uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffef0 >> 0x20);
  uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff10 >> 0x20);
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffee0 >> 0x20);
  uVar30 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  if (((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x14 & 1) == 0) ||
     (*(char *)(param_3 + 0x1ca) == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  local_a0 = FUN_1800f42d0(param_3 + 0x20,3,1);
  iVar12 = 0;
  FUN_180074a50(param_1,param_2,param_3);
  uVar29 = CONCAT44(uVar30,0x12345678);
  uVar31 = CONCAT44(uVar14,*(undefined4 *)(param_3 + 0x188));
  FUN_180071c08(param_1,param_3,param_2,0x36,2,8,*(undefined4 *)(param_3 + 0x184),0xff,uVar31,uVar29
               );
  uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
  local_ac = 0;
  uVar30 = (undefined4)((ulonglong)uVar29 >> 0x20);
  if (*(char *)(param_3 + 0x1ca) == '\0') {
    if (*(char *)(param_3 + 0x74) == '\0') {
      uVar33 = 0xa4;
      uVar20 = CONCAT44(uVar10,0xa4);
      uVar28 = CONCAT44(uVar18,*(undefined4 *)(param_3 + 0x17c));
      uVar31 = CONCAT44(uVar15,*(undefined4 *)(param_3 + 0x180));
      uVar25 = CONCAT44(uVar30,*(undefined4 *)(param_3 + 0x174));
      uVar17 = 0;
      uVar27 = CONCAT44(uVar26,*(undefined4 *)(param_3 + 0x178));
      FUN_180071c08(param_1,param_3,param_2,0x2032,2,7,*(undefined4 *)(param_3 + 0xd0),0xa4,0xa0,
                    uVar25,uVar20,uVar27,uVar28,0xa4,uVar31,0x12345678);
    }
    else {
      uVar15 = FUN_1800f42d0(param_3 + 0x20,3,1);
      uVar33 = *(undefined4 *)(param_3 + 0x180);
      uVar28 = CONCAT44(uVar18,0x1a4);
      uVar25 = CONCAT44(uVar30,0x1a4);
      uVar31 = 0;
      uVar27 = CONCAT44(uVar26,*(undefined4 *)(param_3 + 0x17c));
      uVar20 = CONCAT44(uVar10,*(undefined4 *)(param_3 + 0x178));
      uVar29 = CONCAT44(uVar14,*(undefined4 *)(param_3 + 0x174));
      FUN_1800f5730(param_3 + 0x20,param_2,0x2032,uVar15,7,*(undefined4 *)(param_3 + 0xd0),0x1a4,
                    0xa0,uVar29,uVar25,uVar20,uVar27,uVar28,uVar33,0);
      uVar29 = CONCAT44((int)((ulonglong)uVar29 >> 0x20),0x12345678);
      FUN_180071c08(param_1,param_3,param_2,0x36,2,7,uVar15,0xa4,uVar29);
      uVar17 = (uint)((ulonglong)uVar29 >> 0x20);
      FUN_1800f4370(param_3 + 0x20,uVar15);
    }
  }
  else {
    uVar33 = *(undefined4 *)(param_3 + 0x180);
    uVar31 = 0;
    uVar28 = CONCAT44(uVar18,0xa4);
    uVar25 = CONCAT44(uVar30,0xa4);
    uVar27 = CONCAT44(uVar26,*(undefined4 *)(param_3 + 0x17c));
    uVar20 = CONCAT44(uVar10,*(undefined4 *)(param_3 + 0x178));
    uVar29 = CONCAT44(uVar14,*(undefined4 *)(param_3 + 0x174));
    FUN_1800f5730(param_3 + 0x20,param_2,0x32,local_a0,7,*(undefined4 *)(param_3 + 0xd0),0xa4,0xa0,
                  uVar29,uVar25,uVar20,uVar27,uVar28,uVar33,0);
    uVar22 = 7;
    uVar17 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x28);
    uVar8 = uVar17 & 0xe00000;
    while (uVar8 == 0) {
      iVar7 = uVar22 * 3;
      uVar22 = uVar22 - 1;
      uVar8 = uVar17 >> (ulonglong)(iVar7 - 3U & 0x1f) & 7;
    }
    if ((*(uint *)(param_3 + 0x1ac) >> 2 & 1) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(param_3 + 0x1a0);
      if (iVar7 == 0) {
        iVar7 = (**(code **)*param_1)(param_1,param_2,param_3,3,0xf);
        *(int *)(param_3 + 0x1a0) = iVar7;
      }
    }
    local_8c = 0;
    local_ac = 0;
    do {
      uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
      if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x28) >> (ulonglong)(local_8c * 3 & 0x1f) & 7)
          != 0) {
        uVar8 = FUN_1800f42d0(param_3 + 0x20,1,1);
        uVar18 = (undefined4)((ulonglong)uVar31 >> 0x20);
        uVar26 = (undefined4)(uVar20 >> 0x20);
        uVar10 = (undefined4)(uVar25 >> 0x20);
        uVar30 = 0;
        FUN_1800f5730(param_3 + 0x20,param_2,0x36,uVar8,1,*(undefined4 *)(param_3 + 0xdc),
                      (&DAT_18022c414)[(ulonglong)(local_8c + 0x300) & 3],(local_8c + 0x300) * 4,0);
        local_90 = uVar8 | 0x10000000;
        uVar17 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x24) >>
                 (ulonglong)(local_8c * 3 & 0x1f) & 7;
        if (uVar17 == 3) {
          uVar9 = FUN_1800f42d0(param_3 + 0x20,3,1);
          uVar25 = 0;
          uVar20 = CONCAT44(uVar30,uVar8) | 0x10000000;
          uVar31 = FUN_1800f5730(param_3 + 0x20,param_2,0x36,uVar9,7,
                                 *(uint *)(param_3 + 0xd4) | 0x40000000,0x1a4,0x6c0,uVar20,
                                 CONCAT44(uVar10,local_8c) & 0xffffffff00000003,0);
          uVar30 = (undefined4)(uVar20 >> 0x20);
LAB_180075134:
          iVar11 = 0;
          local_a8 = 0;
        }
        else {
          uVar9 = FUN_1800f42d0(param_3 + 0x20,3,1);
          uVar28 = 0;
          uVar27 = CONCAT44((int)(uVar27 >> 0x20),local_8c) & 0xffffffff00000003;
          uVar25 = CONCAT44(uVar26,uVar8) | 0x10000000;
          uVar29 = CONCAT44(uVar30,0x1a4);
          uVar10 = 0;
          uVar31 = FUN_1800f5730(param_3 + 0x20,param_2,0,uVar9,7,*(undefined4 *)(param_3 + 0x15c),
                                 0x1a4,*(uint *)(param_3 + 0xd4) | 0xc0000000,uVar29,0x6b0,uVar25,
                                 uVar27,0);
          uVar30 = (undefined4)((ulonglong)uVar29 >> 0x20);
          if (uVar17 == 4) goto LAB_180075134;
          local_a8 = FUN_1800f42d0(param_3 + 0x20,1,1);
          uVar20 = 0;
          uVar29 = CONCAT44((int)(uVar25 >> 0x20),0xffffffff);
          uVar25 = CONCAT44(uVar10,0xa4);
          uVar31 = CONCAT44(uVar30,uVar9);
          FUN_1800f5730(param_3 + 0x20,param_2,0x10,local_a8,1,uVar9,0xa4,0xffffffff,uVar31,uVar25,
                        uVar29,0,uVar28);
          uVar26 = (undefined4)((ulonglong)uVar31 >> 0x20);
          uVar15 = (undefined4)((ulonglong)uVar29 >> 0x20);
          FUN_1800f5730(param_3 + 0x20,param_2,0x4b,local_a8,1,local_a8,0,0);
          uVar10 = FUN_1800f42d0(param_3 + 0x20,3,0);
          uVar30 = *(undefined4 *)(param_3 + 0xbc);
          uVar35 = 0;
          uVar34 = 0;
          uVar16 = 0;
          uVar33 = 0;
          uVar32 = CONCAT44(uVar14,0x3f800000);
          uVar24 = CONCAT44(uVar18,0x1e4);
          uVar20 = uVar20 & 0xffffffff00000000;
          uVar31 = CONCAT44(uVar15,0x3f800000);
          FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar10,3,local_a8,0,uVar30,
                        CONCAT44(uVar26,0x1e4),uVar25 & 0xffffffff00000000,uVar31,uVar20,
                        uVar28 & 0xffffffff00000000,uVar30,uVar24,uVar32,0,0,0,0);
          uVar26 = (undefined4)((ulonglong)uVar31 >> 0x20);
          uVar18 = (undefined4)(uVar20 >> 0x20);
          uVar14 = 0;
          FUN_1800f5730(param_3 + 0x20,param_2,0x38,uVar10,4,local_a8,0,local_a8,0,0);
          iVar11 = FUN_1800f42d0(param_3 + 0x20,1,1);
          uVar28 = 0;
          uVar27 = CONCAT44(uVar18,local_8c) & 0xffffffff00000003;
          uVar25 = CONCAT44(uVar26,uVar8) | 0x10000000;
          uVar29 = 0x6d4;
          uVar31 = CONCAT44(uVar14,0xa4);
          FUN_1800f5730(param_3 + 0x20,param_2,0x10,iVar11,1,uVar10,0xa4,
                        *(uint *)(param_3 + 0xd4) | 0x40000000,uVar31,0x6d4,uVar25,uVar27,0);
          if (*(int *)(param_3 + 0x20) == 0x10040) {
            uVar31 = CONCAT44((int)((ulonglong)uVar31 >> 0x20),iVar11);
            FUN_1800f5730(param_3 + 0x20,param_2,0xe,iVar11,1,*(undefined4 *)(param_3 + 0xb8),0xe4,
                          0x3f800000,uVar31,0,0,uVar27,uVar28,uVar30,uVar24,uVar32,uVar33,uVar16,
                          uVar34,uVar35);
            uVar18 = (undefined4)((ulonglong)uVar24 >> 0x20);
            uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
          }
          else {
            FUN_1800f5730(param_3 + 0x20,param_2,0x81,iVar11,1,iVar11,0,0,uVar31,uVar29,uVar25,
                          uVar27,uVar28,uVar30,uVar24,uVar32,uVar33,uVar16,uVar34,uVar35);
            uVar18 = (undefined4)((ulonglong)uVar24 >> 0x20);
            uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
          }
          uVar31 = CONCAT44(uVar14,iVar11);
          FUN_1800f5730(param_3 + 0x20,param_2,0x33,iVar11,1,*(undefined4 *)(param_3 + 0xb8),0xe4,
                        0x42000000,uVar31,0,0,uVar27,uVar28);
          uVar14 = 0;
          uVar25 = 0;
          uVar29 = CONCAT44((int)((ulonglong)uVar31 >> 0x20),iVar11);
          uVar31 = FUN_1800f5730(param_3 + 0x20,param_2,0x34,iVar11,1,
                                 *(undefined4 *)(param_3 + 0xb8),0xe4,0,uVar29,0,0);
          uVar30 = (undefined4)((ulonglong)uVar29 >> 0x20);
          if (local_a8 != 0) {
            if ((iVar12 == 0) &&
               ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x14 & 1) != 0)) {
              iVar12 = FUN_1800f42d0(param_3 + 0x20,3,1);
              uVar14 = 0;
              uVar31 = CONCAT44(uVar30,0xa4);
              FUN_1800f5730(param_3 + 0x20,param_2,0x57,iVar12,7,iVar12,0xa4,iVar12,uVar31,0,uVar25)
              ;
              uVar30 = (undefined4)((ulonglong)uVar31 >> 0x20);
            }
            uVar10 = (undefined4)(uVar25 >> 0x20);
            uVar13 = FUN_1800f42d0(param_3 + 0x20,1,0);
            uVar27 = 0;
            uVar28 = 0;
            uVar20 = CONCAT44(uVar30,uVar8) | 0x10000000;
            uVar25 = CONCAT44(uVar10,local_a8);
            FUN_1800f5730(param_3 + 0x20,param_2,0x1d,uVar13,1,
                          *(uint *)(param_3 + 0xdc) | 0x40000000,0xe4,0x68c,uVar20,
                          CONCAT44(uVar14,local_8c) & 0xffffffff00000003,uVar25,0,0);
            uVar30 = (undefined4)(uVar20 >> 0x20);
            uVar31 = FUN_1800f5730(param_3 + 0x20,param_2,0x4001f,0xffffffff,uVar13 | 0x10000000,1,0
                                  );
          }
        }
        bVar2 = *(byte *)(param_3 + 0x1c0);
        if ((bVar2 & 4) == 0) {
          local_b0 = 0;
LAB_180075508:
          FUN_180072118(uVar31,param_2,param_3,uVar9);
        }
        else {
          bVar1 = true;
          uVar20 = FUN_1800f42d0(param_3 + 0x20,3,1);
          uVar31 = FUN_1800763b8(uVar20,param_3,param_2);
          if ((uVar17 != 2) && ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x14 & 1) == 0)
             ) {
            uVar31 = FUN_1800f4370(param_3 + 0x20,uVar9);
            uVar9 = 0;
            bVar1 = false;
          }
          uVar31 = FUN_180072118(uVar31,param_2,param_3,uVar20 & 0xffffffff);
          local_b0 = (uint)uVar20;
          if (bVar1) goto LAB_180075508;
        }
        FUN_1800f4370(param_3 + 0x20,local_a8);
        local_9c = 0;
        if (uVar17 == 2) {
          auVar23 = FUN_1800f42d0(param_3 + 0x20,1,1);
          uVar20 = auVar23._0_8_;
          uVar26 = (undefined4)(uVar27 >> 0x20);
          uVar10 = (undefined4)(uVar25 >> 0x20);
          uVar14 = FUN_1800f42d0(param_3 + 0x20,auVar23._8_8_,1);
          uVar25 = CONCAT44(uVar10,uVar8) | 0x10000000;
          uVar27 = CONCAT44(uVar26,local_8c) & 0xffffffff00000003;
          uVar10 = 0;
          uVar31 = CONCAT44(uVar30,0xa4);
          FUN_1800f5730(param_3 + 0x20,param_2,0x10,uVar20 & 0xffffffff,1,uVar9,0xa4,
                        *(uint *)(param_3 + 0xd4) | 0x40000000,uVar31,0x6c0,uVar25,uVar27,0);
          local_9c = auVar23._0_4_;
          uVar29 = CONCAT44((int)(uVar25 >> 0x20),local_9c);
          uVar24 = CONCAT44((int)(uVar27 >> 0x20),0xa4);
          FUN_1800f5730(param_3 + 0x20,param_2,0x1d,uVar14,1,*(uint *)(param_3 + 0xd4) | 0x40000000,
                        0xa4,0x6ac,CONCAT44((int)((ulonglong)uVar31 >> 0x20),uVar8) | 0x10000000,
                        CONCAT44(uVar10,local_8c) & 0xffffffff00000003,uVar29,uVar24,0);
          uVar27 = CONCAT44((int)((ulonglong)uVar24 >> 0x20),local_8c) & 0xffffffff00000003;
          uVar25 = CONCAT44((int)((ulonglong)uVar29 >> 0x20),uVar8) | 0x10000000;
          FUN_1800f5730(param_3 + 0x20,param_2,0,uVar20 & 0xffffffff,1,uVar20 & 0xffffffff,0,
                        *(uint *)(param_3 + 0xdc) | 0xc0000000,0,0x6bc,uVar25,uVar27,0);
          uVar27 = CONCAT44((int)(uVar27 >> 0x20),local_8c) & 0xffffffff00000003;
          uVar25 = CONCAT44((int)(uVar25 >> 0x20),uVar8) | 0x10000000;
          uVar30 = 0;
          uVar10 = 0;
          uVar31 = FUN_1800f5730(param_3 + 0x20,param_2,0x200e,uVar20 & 0xffffffff,1,
                                 uVar20 & 0xffffffff,0,*(uint *)(param_3 + 0xdc) | 0x40000000,0,
                                 0x6d0,uVar25,uVar27,0);
          uVar15 = (undefined4)(uVar27 >> 0x20);
          uVar26 = (undefined4)(uVar25 >> 0x20);
          FUN_180074d70(uVar31,param_2,param_3,uVar20 & 0xffffffff,
                        *(uint *)(param_3 + 0xdc) | 0x40000000,0x69c,local_90,local_8c & 3,
                        CONCAT44(uVar30,local_9c));
          uVar28 = 0;
          uVar25 = CONCAT44(uVar26,0xe4);
          uVar27 = CONCAT44(uVar15,0x3f800000);
          uVar30 = 0;
          FUN_1800f5730(param_3 + 0x20,param_2,0x37,uVar20 & 0xffffffff,1,uVar14,0,
                        uVar20 & 0xffffffff,0,CONCAT44(uVar10,*(undefined4 *)(param_3 + 0xb8)),
                        uVar25,uVar27,0);
          FUN_1800f4370(param_3 + 0x20,uVar14);
        }
        uVar10 = *(undefined4 *)(param_3 + 0x184);
        uVar26 = *(undefined4 *)(param_3 + 0x188);
        uVar17 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x800000;
        uVar15 = FUN_1800f42d0(param_3 + 0x20,1,1);
        uVar14 = 0x2010;
        if (uVar17 == 0) {
          uVar14 = 0x10;
        }
        iVar21 = iVar7;
        if ((bVar2 & 4) == 0) {
          iVar21 = *(int *)(param_3 + 0x160);
        }
        uVar20 = 0;
        uVar13 = uVar9;
        if ((bVar2 & 4) != 0) {
          uVar13 = local_b0;
        }
        uVar31 = CONCAT44(uVar30,0xa4);
        FUN_1800f5730(param_3 + 0x20,param_2,uVar14,uVar15,1,uVar13 | 0x80000000,0xa4,iVar21,uVar31,
                      0,uVar25,uVar27,uVar28);
        uVar30 = (undefined4)(uVar27 >> 0x20);
        uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
        if (uVar17 == 0) {
          uVar14 = 0;
          FUN_1800f5730(param_3 + 0x20,param_2,0x34,uVar15,1,uVar15,0,
                        *(undefined4 *)(param_3 + 0xb8),0,uVar20 & 0xffffffff00000000,0);
        }
        if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x14 & 1) == 0) {
          FUN_1800f4370(param_3 + 0x20,uVar9);
          uVar9 = 0;
        }
        FUN_1800f4370(param_3 + 0x20,local_b0);
        uVar16 = FUN_1800f42d0(param_3 + 0x20,3,1);
        uVar33 = 0;
        uVar31 = CONCAT44(uVar14,uVar15);
        FUN_1800f5730(param_3 + 0x20,param_2,0x38,uVar16,7,uVar10,0x1a4,uVar26,uVar31,0,0);
        uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
        FUN_1800f4370(param_3 + 0x20,uVar15);
        uVar29 = 0;
        uVar25 = CONCAT44(uVar33,uVar8) | 0x10000000;
        uVar31 = CONCAT44(uVar14,0x1a4);
        uVar20 = CONCAT44(uVar30,local_8c) & 0xffffffff00000003;
        uVar30 = 0;
        FUN_1800f5730(param_3 + 0x20,param_2,0x38,uVar16,7,uVar16,0x1a4,
                      *(uint *)(param_3 + 0xd4) | 0x40000000,uVar31,0x680,uVar25,uVar20,0);
        uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
        if (local_9c != 0) {
          uVar14 = 0;
          uVar30 = 0;
          FUN_1800f5730(param_3 + 0x20,param_2,0x38,uVar16,7,uVar16,0x1a4,local_9c,0,0,uVar25,uVar20
                        ,uVar29);
        }
        in_stack_ffffffffffffff18 = 0;
        uVar31 = CONCAT44(uVar18,0x1a4);
        uVar27 = CONCAT44((int)(uVar20 >> 0x20),uVar8) | 0x10000000;
        uVar24 = CONCAT44(uVar30,0x1a4);
        uVar20 = 0x6a0;
        uVar28 = CONCAT44((int)((ulonglong)uVar29 >> 0x20),local_8c) & 0xffffffff00000003;
        uVar25 = CONCAT44(uVar14,*(undefined4 *)(param_3 + 0xd4)) | 0x40000000;
        uVar33 = uVar16;
        FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar16,7,*(undefined4 *)(param_3 + 0x174),0x1a4,
                      *(undefined4 *)(param_3 + 0x178),uVar25,uVar24,0x6a0,uVar27,uVar28,uVar16,
                      uVar31,0);
        uVar14 = (undefined4)(uVar25 >> 0x20);
        uVar30 = (undefined4)((ulonglong)uVar24 >> 0x20);
        if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x14 & 1) == 0) {
          FUN_1800f4370(param_3 + 0x20,local_90);
          local_90 = 0;
        }
        bVar5 = local_8c != uVar22;
        bVar6 = local_a8 != 0;
        bVar1 = bVar5 || bVar6;
        if (bVar1) {
          local_a4 = 0;
          local_80 = 0x32;
          local_7c = 0;
          uVar10 = 0x38;
        }
        else {
          local_a4 = 0x2000;
          local_80 = 0x2032;
          local_7c = 2;
          uVar10 = 0x2038;
        }
        uVar26 = (undefined4)(uVar20 >> 0x20);
        if (iVar11 == 0) {
          if ((!bVar5 && !bVar6) && (*(char *)(param_3 + 0x74) == '\0')) {
            uVar20 = CONCAT44(uVar26,0x12345678);
            uVar25 = CONCAT44(uVar30,0x1a4);
            uVar29 = CONCAT44(uVar14,local_a0);
            FUN_180071c08(param_1,param_3,param_2,0x2000,2,7,uVar16,0x1a4,uVar29,uVar25,uVar20);
            goto LAB_180075a30;
          }
          uVar25 = 0;
          uVar29 = CONCAT44(uVar14,0x1a4);
          local_ac = (!bVar5 && !bVar6) | local_ac;
          FUN_1800f5730(param_3 + 0x20,param_2,local_a4,local_a0,7,uVar16,0x1a4,local_a0,uVar29,0,
                        uVar20,uVar27,uVar28,uVar33,uVar31,in_stack_ffffffffffffff18);
        }
        else if ((bVar1) || (*(char *)(param_3 + 0x74) != '\0')) {
          uVar27 = 0;
          uVar20 = CONCAT44(uVar26,0x1a4);
          uVar29 = CONCAT44(uVar14,0x1a4);
          local_ac = (!bVar5 && !bVar6) | local_ac;
          uVar25 = CONCAT44(uVar30,local_a0);
          FUN_1800f5730(param_3 + 0x20,param_2,local_80,local_a0,7,iVar11,0,uVar16,uVar29,uVar25,
                        uVar20,0,uVar28,uVar33,uVar31,in_stack_ffffffffffffff18);
        }
        else {
          uVar28 = 0x12345678;
          uVar27 = CONCAT44((int)(uVar27 >> 0x20),0x1a4);
          uVar25 = CONCAT44(uVar30,0x1a4);
          uVar20 = CONCAT44(uVar26,local_a0);
          uVar29 = CONCAT44(uVar14,uVar16);
          FUN_180071c08(param_1,param_3,param_2,0x2032,2,7,iVar11,0,uVar29,uVar25,uVar20);
LAB_180075a30:
          FUN_1800f4370(param_3 + 0x20,local_a0);
          local_a0 = 0;
        }
        FUN_1800f4370(param_3 + 0x20,uVar16);
        iVar21 = iVar12;
        if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x14 & 1) != 0) {
          uVar14 = FUN_1800f42d0(param_3 + 0x20,3,1);
          FUN_1800f5730(param_3 + 0x20,param_2,0x36,uVar14,1,*(undefined4 *)(param_3 + 0xd0),0xff,
                        0x1f0,0,uVar25,uVar20,uVar27);
          uVar26 = (undefined4)(uVar27 >> 0x20);
          FUN_1800f5730(param_3 + 0x20,param_2,0x36,uVar14,2,*(undefined4 *)(param_3 + 0xd0),0xff,
                        0x200,0);
          uVar30 = 0;
          FUN_1800f5730(param_3 + 0x20,param_2,0x36,uVar14,4,*(undefined4 *)(param_3 + 0xd0),0xff,
                        0x210,0);
          if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x1d & 1) == 0) {
            uVar17 = FUN_1800f42d0(param_3 + 0x20,3,1);
            FUN_1800f5730(param_3 + 0x20,param_2,0x36,uVar17,1,*(undefined4 *)(param_3 + 0xd0),0xaa,
                          0x1f0,0);
            FUN_1800f5730(param_3 + 0x20,param_2,0x36,uVar17,2,*(undefined4 *)(param_3 + 0xd0),0xaa,
                          0x200,0);
            uVar30 = 0;
            FUN_1800f5730(param_3 + 0x20,param_2,0x36,uVar17,4,*(undefined4 *)(param_3 + 0xd0),0xaa,
                          0x210,0);
            uVar29 = CONCAT44(uVar30,0x1a4);
            FUN_1800f5730(param_3 + 0x20,param_2,0,uVar17,7,uVar17 | 0x80000000,0x1a4,uVar14,uVar29,
                          0);
            uVar30 = (undefined4)((ulonglong)uVar29 >> 0x20);
          }
          else {
            uVar17 = *(uint *)(param_3 + 0x15c);
          }
          uVar24 = CONCAT44(uVar30,0x1a4);
          uVar29 = FUN_1800f5730(param_3 + 0x20,param_2,0,uVar14,7,uVar14,0x1a4,uVar17 | 0x80000000,
                                 uVar24,0);
          uVar30 = (undefined4)((ulonglong)uVar24 >> 0x20);
          FUN_180072118(uVar29,param_2,param_3,uVar14);
          if (uVar17 != *(uint *)(param_3 + 0x15c)) {
            FUN_1800f4370(param_3 + 0x20,uVar17);
          }
          uVar29 = CONCAT44(uVar30,0x1a4);
          FUN_1800f5730(param_3 + 0x20,param_2,0,uVar14,7,uVar14,0x1a4,uVar9 | 0x80000000,uVar29,0);
          uVar30 = (undefined4)((ulonglong)uVar29 >> 0x20);
          uVar29 = FUN_1800f4370(param_3 + 0x20,uVar9);
          uVar9 = 0;
          if ((bVar2 & 4) == 0) {
            FUN_180072118(uVar29,param_2,param_3,uVar14);
          }
          else {
            uVar25 = FUN_1800f42d0(param_3 + 0x20,3,1);
            uVar29 = FUN_1800763b8(uVar25,param_3,param_2);
            FUN_180072118(uVar29,param_2,param_3,uVar25 & 0xffffffff);
            FUN_1800f4370(param_3 + 0x20,uVar25 & 0xffffffff);
          }
          FUN_1800f4370(param_3 + 0x20,uVar14);
          if (((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x17 & 1) == 0) &&
             ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x28) >> 0x1e & 1) == 0)) {
            bVar4 = false;
            uVar29 = 0x10;
          }
          else {
            bVar4 = true;
            uVar29 = 0x2010;
          }
          uVar18 = FUN_1800f42d0(param_3 + 0x20,1,1);
          iVar21 = iVar7;
          if ((bVar2 & 4) == 0) {
            iVar21 = *(int *)(param_3 + 0x160);
          }
          uVar25 = 0;
          uVar24 = CONCAT44(uVar30,0xa4);
          uVar29 = FUN_1800f5730(param_3 + 0x20,param_2,uVar29,uVar18,1,uVar14,0xa4,iVar21,uVar24,0)
          ;
          uVar14 = (undefined4)((ulonglong)uVar24 >> 0x20);
          if (!bVar4) {
            uVar14 = 0;
            uVar29 = FUN_1800f5730(param_3 + 0x20,param_2,0x34,uVar18,1,uVar18,0,
                                   *(undefined4 *)(param_3 + 0xb8),0,uVar25 & 0xffffffff00000000,0);
          }
          uVar24 = CONCAT44(uVar14,uVar18);
          FUN_180074d70(uVar29,param_2,param_3,uVar18,*(undefined4 *)(param_3 + 0xdc),0x67c,
                        0xffffffff,0xffffffff,uVar24);
          uVar14 = (undefined4)((ulonglong)uVar24 >> 0x20);
          FUN_1800f4370(param_3 + 0x20,uVar18);
          iVar19 = FUN_1800f42d0(param_3 + 0x20,3,1);
          uVar30 = 0;
          uVar29 = CONCAT44(uVar14,uVar18);
          FUN_1800f5730(param_3 + 0x20,param_2,0x38,iVar19,7,*(undefined4 *)(param_3 + 0x18c),0x1a4,
                        *(undefined4 *)(param_3 + 400),uVar29,0,0);
          uVar28 = 0;
          uVar29 = CONCAT44((int)((ulonglong)uVar29 >> 0x20),0x1a4);
          uVar27 = CONCAT44(uVar26,local_8c) & 0xffffffff00000003;
          uVar25 = 0x690;
          uVar20 = CONCAT44(uVar30,local_90);
          FUN_1800f5730(param_3 + 0x20,param_2,0x38,iVar19,7,iVar19,0xa4,
                        *(uint *)(param_3 + 0xd4) | 0x40000000,uVar29,0x690,uVar20,uVar27,0);
          FUN_1800f4370(param_3 + 0x20,local_90);
          local_90 = 0;
          if (local_9c != 0) {
            uVar29 = 0;
            uVar25 = 0;
            FUN_1800f5730(param_3 + 0x20,param_2,0x38,iVar19,7,iVar19,0x1a4,local_9c,0,0,uVar20,
                          uVar27,uVar28);
            FUN_1800f4370(param_3 + 0x20,local_9c);
            local_9c = 0;
          }
          uVar26 = (undefined4)(uVar20 >> 0x20);
          uVar30 = (undefined4)(uVar25 >> 0x20);
          uVar14 = (undefined4)((ulonglong)uVar29 >> 0x20);
          iVar21 = iVar19;
          if (iVar11 == 0) {
            if (iVar12 == 0) goto LAB_180076040;
            if ((!bVar5 && !bVar6) && (*(char *)(param_3 + 0x74) == '\0')) {
              uVar20 = CONCAT44(uVar26,0x12345678);
              uVar25 = CONCAT44(uVar30,0x1a4);
              uVar29 = CONCAT44(uVar14,iVar12);
              FUN_180071c08(param_1,param_3,param_2,0x2000,3,7,iVar19,0x1a4,uVar29,uVar25,uVar20);
              goto LAB_180075f0c;
            }
            uVar25 = 0;
            uVar29 = CONCAT44(uVar14,0x1a4);
            local_ac = local_7c | local_ac;
            FUN_1800f5730(param_3 + 0x20,param_2,local_a4,iVar12,7,iVar19,0x1a4,iVar12,uVar29,0,
                          uVar20,uVar27,uVar28);
          }
          else if ((bVar1) || (*(char *)(param_3 + 0x74) != '\0')) {
            local_ac = local_7c | local_ac;
            if (iVar12 == 0) {
              uVar25 = 0;
              uVar29 = CONCAT44(uVar14,0x1a4);
              FUN_1800f5730(param_3 + 0x20,param_2,uVar10,iVar19,7,iVar11,0,iVar19,uVar29,0,uVar20,
                            uVar27,uVar28);
              goto LAB_180076040;
            }
            uVar27 = 0;
            uVar20 = CONCAT44(uVar26,0x1a4);
            uVar25 = CONCAT44(uVar30,iVar12);
            uVar29 = CONCAT44(uVar14,0x1a4);
            FUN_1800f5730(param_3 + 0x20,param_2,local_80,iVar12,7,iVar11,0,iVar19,uVar29,uVar25,
                          uVar20,0,uVar28);
          }
          else if (iVar12 == 0) {
            uVar20 = CONCAT44(uVar26,0x12345678);
            uVar25 = CONCAT44(uVar30,0x1a4);
            uVar29 = CONCAT44(uVar14,iVar19);
            FUN_180071c08(param_1,param_3,param_2,0x2038,3,7,iVar11,0,uVar29,uVar25,uVar20);
          }
          else {
            uVar28 = 0x12345678;
            uVar27 = CONCAT44((int)(uVar27 >> 0x20),0x1a4);
            uVar20 = CONCAT44(uVar26,iVar12);
            uVar25 = CONCAT44(uVar30,0x1a4);
            uVar29 = CONCAT44(uVar14,iVar19);
            FUN_180071c08(param_1,param_3,param_2,0x2032,3,7,iVar11,0,uVar29,uVar25,uVar20);
LAB_180075f0c:
            FUN_1800f4370(param_3 + 0x20,iVar12);
            iVar12 = 0;
          }
          iVar21 = iVar12;
          if (iVar12 != iVar19) {
            FUN_1800f4370(param_3 + 0x20,iVar19);
          }
        }
LAB_180076040:
        FUN_1800f4370(param_3 + 0x20,iVar11);
        FUN_1800f4370(param_3 + 0x20,uVar9);
        FUN_1800f4370(param_3 + 0x20,local_9c);
        FUN_1800f4370(param_3 + 0x20,local_90);
        iVar12 = iVar21;
        if (local_a8 != 0) {
          FUN_1800f5730(param_3 + 0x20,param_2,0x15,0);
        }
      }
      uVar17 = (uint)((ulonglong)uVar29 >> 0x20);
      local_8c = local_8c + 1;
    } while (local_8c < 8);
    bVar2 = *(byte *)(param_3 + 0x1c0);
    *(byte *)(param_3 + 0x1c0) = bVar2 & 0xfb;
    if (((bVar2 & 0xfb) == 0) && (*(int *)(param_3 + 0x1a0) != 0)) {
      (**(code **)(*param_1 + 8))(param_1,param_3);
      *(undefined4 *)(param_3 + 0x1a0) = 0;
    }
    if (local_a0 != 0) {
      uVar22 = ~(local_ac << 0xd) & 0x2000;
      if ((uVar22 == 0) || (*(char *)(param_3 + 0x74) == '\0')) {
        uVar29 = CONCAT44(uVar17,0x12345678);
        FUN_180071c08(param_1,param_3,param_2,uVar22 | 0x36,2,7,local_a0,0xa4,uVar29);
        uVar17 = (uint)((ulonglong)uVar29 >> 0x20);
      }
      else {
        FUN_1800f5730(param_3 + 0x20,param_2,0x2036,local_a0,7,local_a0,0x1a4,0);
        uVar29 = CONCAT44(uVar17,0x12345678);
        FUN_180071c08(param_1,param_3,param_2,0x36,2,7,local_a0,0xa4,uVar29);
        uVar17 = (uint)((ulonglong)uVar29 >> 0x20);
      }
    }
  }
  if (bVar3) {
    if (iVar12 != 0) {
      uVar22 = ~(local_ac << 0xc) & 0x2000;
      if ((uVar22 == 0) || (*(char *)(param_3 + 0x74) == '\0')) {
        FUN_180071c08(param_1,param_3,param_2,uVar22 | 0x36,3,7,iVar12,0xa4,
                      CONCAT44(uVar17,0x12345678),uVar25,uVar20,uVar27,uVar28,uVar33,uVar31);
      }
      else {
        FUN_1800f5730(param_3 + 0x20,param_2,0x2036,iVar12,7,iVar12,0x1a4,0);
        FUN_180071c08(param_1,param_3,param_2,0x36,3,7,iVar12,0xa4,CONCAT44(uVar17,0x12345678),
                      uVar25,uVar20,uVar27,uVar28,uVar33,uVar31);
      }
    }
  }
  else {
    uVar14 = 0xf;
    if (*(char *)(param_3 + 0x1c8) == '\0') {
      uVar14 = 7;
    }
    FUN_180071c08(param_1,param_3,param_2,0x36,3,uVar14,*(undefined4 *)(param_3 + 0xbc),0xe4,
                  (ulonglong)uVar17 << 0x20,uVar25 & 0xffffffff00000000,uVar20 & 0xffffffff00000000,
                  0x3f800000,0x12345678,uVar33,uVar31);
  }
  FUN_1800f4370(param_3 + 0x20,iVar12);
  FUN_1800f4370(param_3 + 0x20,local_a0);
  return;
}

