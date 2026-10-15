/*
 * FUN_1800722c8 at 1800722c8
 * undefined FUN_1800722c8(void)
 * Address ranges: 1800722c8-1800732bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800722c8(longlong *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  undefined8 in_stack_ffffffffffffff30;
  ulonglong uVar25;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar27;
  undefined8 uVar26;
  undefined8 in_stack_ffffffffffffff40;
  undefined8 in_stack_ffffffffffffff48;
  undefined8 uVar28;
  undefined4 uVar30;
  undefined8 uVar29;
  int local_90;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  uVar10 = (uint)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
  uVar1 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x200000;
  uVar5 = (**(code **)*param_1)();
  uVar6 = uVar5;
  if (uVar1 != 0) {
    uVar6 = FUN_1800f42d0(param_3 + 0x20,4,1);
    if ((*(uint *)(param_3 + 0x1ac) >> 0x10 & 1) == 0) {
      uVar29 = CONCAT44(uVar19,0xe4);
      uVar23 = CONCAT44(uVar11,uVar5);
      uVar22 = CONCAT44(uVar10,0xe4);
      uVar25 = CONCAT44(uVar18,uVar5) | 0x80000000;
      FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar6,0xf,*(undefined4 *)(param_3 + 0xdc),0xe4,0x5f8
                    ,uVar25,uVar22,uVar23,uVar29,0);
      uVar19 = (undefined4)((ulonglong)uVar29 >> 0x20);
      uVar11 = (undefined4)((ulonglong)uVar23 >> 0x20);
      uVar10 = (uint)((ulonglong)uVar22 >> 0x20);
      uVar18 = (undefined4)(uVar25 >> 0x20);
    }
    else {
      uVar7 = (**(code **)*param_1)(param_1,param_2,param_3,0xf);
      uVar27 = 0;
      uVar22 = CONCAT44(uVar18,0xe4);
      FUN_1800f5730(param_3 + 0x20,param_2,0,uVar6,0xf,uVar5 | 0x80000000,0xe4,uVar7,uVar22,0);
      uVar26 = CONCAT44(uVar19,0xe4);
      uVar29 = CONCAT44(uVar11,uVar5);
      uVar23 = CONCAT44(uVar27,0xe4);
      uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),uVar6);
      FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar6,0xf,*(undefined4 *)(param_3 + 0xdc),0xe4,0x5f8
                    ,uVar22,uVar23,uVar29,uVar26,0);
      uVar19 = (undefined4)((ulonglong)uVar26 >> 0x20);
      uVar11 = (undefined4)((ulonglong)uVar29 >> 0x20);
      uVar10 = (uint)((ulonglong)uVar23 >> 0x20);
      uVar18 = (undefined4)((ulonglong)uVar22 >> 0x20);
      (**(code **)(*param_1 + 8))(param_1,param_3,uVar7);
    }
    if (uVar5 != uVar6) {
      (**(code **)(*param_1 + 8))(param_1,param_3,uVar5);
    }
  }
  uVar8 = *(uint *)(param_3 + 0x1ac);
  if ((uVar8 >> 0xf & 1) == 0) {
    uVar8 = 0;
  }
  else {
    if ((uVar8 >> 0xb & 1) == 0) {
      iVar12 = 1;
      uVar23 = 0;
      iVar13 = 2;
      uVar22 = 1;
    }
    else {
      iVar12 = 2;
      uVar23 = 0x54;
      iVar13 = 3;
      uVar22 = 3;
    }
    if ((uVar8 >> 0xc & 1) != 0) {
      uVar23 = 0xa4;
      uVar22 = 7;
      iVar12 = iVar13;
    }
    if ((uVar8 >> 0xd & 1) != 0) {
      iVar12 = iVar12 + 1;
      uVar23 = 0xe4;
      uVar22 = 0xf;
    }
    uVar8 = FUN_1800f42d0(param_3 + 0x20,iVar12,1);
    uVar7 = (**(code **)*param_1)(param_1,param_2,param_3,2);
    uVar27 = 0;
    uVar30 = 0;
    uVar11 = 0;
    uVar19 = 0;
    uVar29 = CONCAT44(uVar18,0x1e4);
    FUN_1800f5730(param_3 + 0x20,param_2,0x24,uVar8,uVar22,uVar7,uVar23,
                  *(undefined4 *)(param_3 + 0xbc),uVar29,0,0,0,0,0);
    uVar28 = CONCAT44(uVar27,0xff);
    uVar26 = CONCAT44(uVar11,0xff);
    uVar29 = CONCAT44((int)((ulonglong)uVar29 >> 0x20),0x1e4);
    FUN_1800f5730(param_3 + 0x20,param_2,0x25,uVar8,uVar22,uVar8,uVar23,
                  *(undefined4 *)(param_3 + 0xbc),uVar29,uVar26,CONCAT44(uVar19,0xff),uVar28,
                  CONCAT44(uVar30,0xff),0);
    uVar19 = (undefined4)((ulonglong)uVar28 >> 0x20);
    uVar11 = 0;
    uVar26 = CONCAT44((int)((ulonglong)uVar26 >> 0x20),2);
    uVar29 = CONCAT44((int)((ulonglong)uVar29 >> 0x20),0xe4);
    FUN_1800f5730(param_3 + 0x20,param_2,0x29,uVar8,uVar22,uVar8,uVar23,
                  *(undefined4 *)(param_3 + 0xb8),uVar29,uVar26,0);
    uVar18 = (undefined4)((ulonglong)uVar29 >> 0x20);
    uVar10 = (uint)((ulonglong)uVar26 >> 0x20);
    (**(code **)(*param_1 + 8))(param_1,param_3,uVar7);
  }
  uVar9 = FUN_1800f42d0(param_3 + 0x20,4,1);
  local_90 = 0;
  uVar16 = 0x40000000;
  if (uVar8 == 0) {
    uVar16 = 0;
  }
  uVar17 = 0x10000000;
  if (uVar8 == 0) {
    uVar17 = 0;
  }
  if ((*(uint *)(param_3 + 0x1ac) & 0xf800) == 0) {
    uVar22 = CONCAT44(uVar18,0xe4);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar9,1,uVar6,0xe4,*(undefined4 *)(param_3 + 0xd0),
                  uVar22,CONCAT44(uVar10,0xf0),0);
    uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),0xe4);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar9,2,uVar6,0xe4,*(undefined4 *)(param_3 + 0xd0),
                  uVar22,0x100,0);
    uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),0xe4);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar9,4,uVar6,0xe4,*(undefined4 *)(param_3 + 0xd0),
                  uVar22,0x110,0);
    uVar23 = 0;
    uVar25 = 0x120;
    uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),0xe4);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar9,8,uVar6,0xe4,*(undefined4 *)(param_3 + 0xd0),
                  uVar22,0x120,0);
    uVar18 = (undefined4)((ulonglong)uVar22 >> 0x20);
  }
  else {
    uVar3 = uVar17 | uVar8;
    uVar23 = CONCAT44(uVar11,uVar3);
    uVar22 = CONCAT44(uVar18,0xe4);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar9,1,uVar6,0xe4,*(uint *)(param_3 + 0xe0) | uVar16,
                  uVar22,(ulonglong)uVar10 << 0x20,uVar23,0,0);
    uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),uVar3);
    uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),0xe4);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar9,2,uVar6,0xe4,*(uint *)(param_3 + 0xe0) | uVar16,
                  uVar22,0x10,uVar23,0,0);
    uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),uVar3);
    uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),0xe4);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar9,4,uVar6,0xe4,*(uint *)(param_3 + 0xe0) | uVar16,
                  uVar22,0x20,uVar23,0,0);
    uVar19 = 0;
    uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),uVar3);
    uVar25 = 0x30;
    uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),0xe4);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar9,8,uVar6,0xe4,*(uint *)(param_3 + 0xe0) | uVar16,
                  uVar22,0x30,uVar23,0,0);
    uVar18 = (undefined4)((ulonglong)uVar22 >> 0x20);
  }
  uVar10 = *(uint *)(param_3 + 0x1ac);
  uVar11 = 0;
  uVar7 = 0;
  cVar4 = (uVar10 & 0x800) != 0;
  cVar15 = '\x02';
  if ((bool)cVar4) {
    cVar15 = '\x03';
  }
  if ((uVar10 & 0x1000) != 0) {
    cVar4 = cVar15;
  }
  if (cVar4 == '\0' && (uVar10 & 0x2000) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (**(code **)*param_1)(param_1,param_2,param_3,1);
  }
  if ((*(uint *)(param_3 + 0x1ac) >> 0xb & 1) != 0) {
    uVar11 = FUN_1800f42d0(param_3 + 0x20,1,1);
    uVar7 = FUN_1800f42d0(param_3 + 0x20,4,1);
    local_90 = 0x40;
    if (uVar8 != 0) {
      local_90 = 0;
    }
    uVar18 = 0;
    uVar27 = 0;
    FUN_1800f5730(param_3 + 0x20,param_2,0x38,uVar9,0xf,uVar9,0x1e4,uVar10,0,0);
    uVar30 = 0;
    uVar22 = CONCAT44(uVar18,0xe4);
    FUN_1800f5730(param_3 + 0x20,param_2,0,uVar11,1,uVar10 | 0x80000000,0,
                  *(undefined4 *)(param_3 + 0xb8),uVar22,CONCAT44(uVar27,0x3f800000),0);
    uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),0xe4);
    uVar3 = uVar17 | uVar8;
    uVar23 = CONCAT44(uVar30,uVar3);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar7,1,uVar6,0xe4,*(uint *)(param_3 + 0xe0) | uVar16,
                  uVar22,local_90,uVar23,CONCAT44(uVar19,1),0);
    uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),0xe4);
    uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),uVar3);
    uVar18 = 0x50;
    if (uVar8 != 0) {
      uVar18 = 0x10;
    }
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar7,2,uVar6,0xe4,*(uint *)(param_3 + 0xe0) | uVar16,
                  uVar22,uVar18,uVar23,1,0);
    uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),0xe4);
    uVar18 = 0x60;
    if (uVar8 != 0) {
      uVar18 = 0x20;
    }
    uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),uVar3);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar7,4,uVar6,0xe4,*(uint *)(param_3 + 0xe0) | uVar16,
                  uVar22,uVar18,uVar23,1,0);
    uVar29 = 0;
    uVar18 = 0x70;
    if (uVar8 != 0) {
      uVar18 = 0x30;
    }
    uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),uVar3);
    uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),0xe4);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar7,8,uVar6,0xe4,*(uint *)(param_3 + 0xe0) | uVar16,
                  uVar22,uVar18,uVar23,1,0);
    uVar18 = (undefined4)((ulonglong)uVar23 >> 0x20);
    if ((*(uint *)(param_3 + 0x1ac) >> 0xc & 1) == 0) {
      uVar19 = 0;
      uVar23 = CONCAT44(uVar18,0x1e4);
      uVar25 = (ulonglong)uVar9;
      uVar18 = 0;
      FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar9,0xf,uVar7,0x1e4,uVar11,0,uVar25,uVar23,0,
                    uVar29);
    }
    else {
      uVar19 = 0;
      uVar23 = CONCAT44(uVar18,0x1e4);
      uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),0x55);
      uVar25 = (ulonglong)uVar9;
      FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar9,0xf,uVar7,0x1e4,uVar10,uVar22,uVar25,uVar23,0,
                    uVar29);
      uVar18 = (undefined4)((ulonglong)uVar22 >> 0x20);
    }
  }
  if ((*(uint *)(param_3 + 0x1ac) >> 0xc & 1) != 0) {
    iVar12 = 0x40;
    if (uVar8 != 0) {
      iVar12 = 0;
    }
    uVar18 = 0;
    uVar27 = 0;
    iVar12 = iVar12 + local_90;
    FUN_1800f5730(param_3 + 0x20,param_2,0,uVar11,1,uVar10 | 0x80000000,0x55,uVar11,0,0,uVar23);
    uVar22 = CONCAT44(uVar18,0xe4);
    uVar3 = uVar17 | uVar8;
    uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),uVar3);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar7,1,uVar6,0xe4,*(uint *)(param_3 + 0xe0) | uVar16,
                  uVar22,CONCAT44(uVar27,iVar12),uVar23,CONCAT44(uVar19,2),0);
    iVar13 = 0x50;
    if (uVar8 != 0) {
      iVar13 = 0x10;
    }
    uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),uVar3);
    uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),0xe4);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar7,2,uVar6,0xe4,*(uint *)(param_3 + 0xe0) | uVar16,
                  uVar22,iVar13 + local_90,uVar23,2,0);
    uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),uVar3);
    iVar13 = 0x60;
    if (uVar8 != 0) {
      iVar13 = 0x20;
    }
    uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),0xe4);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar7,4,uVar6,0xe4,*(uint *)(param_3 + 0xe0) | uVar16,
                  uVar22,iVar13 + local_90,uVar23,2,0);
    uVar29 = 0;
    uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),uVar3);
    iVar13 = 0x70;
    if (uVar8 != 0) {
      iVar13 = 0x30;
    }
    uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),0xe4);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar7,8,uVar6,0xe4,*(uint *)(param_3 + 0xe0) | uVar16,
                  uVar22,iVar13 + local_90,uVar23,2,0);
    uVar18 = (undefined4)((ulonglong)uVar23 >> 0x20);
    local_90 = iVar12;
    if ((*(uint *)(param_3 + 0x1ac) >> 0xd & 1) == 0) {
      uVar19 = 0;
      uVar23 = CONCAT44(uVar18,0x1e4);
      uVar25 = (ulonglong)uVar9;
      uVar18 = 0;
      FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar9,0xf,uVar7,0x1e4,uVar11,0,uVar25,uVar23,0,
                    uVar29);
    }
    else {
      uVar19 = 0;
      uVar23 = CONCAT44(uVar18,0x1e4);
      uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),0xaa);
      uVar25 = (ulonglong)uVar9;
      FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar9,0xf,uVar7,0x1e4,uVar10,uVar22,uVar25,uVar23,0,
                    uVar29);
      uVar18 = (undefined4)((ulonglong)uVar22 >> 0x20);
    }
  }
  if ((*(uint *)(param_3 + 0x1ac) >> 0xd & 1) != 0) {
    uVar18 = 0;
    uVar27 = 0;
    FUN_1800f5730(param_3 + 0x20,param_2,0,uVar11,1,uVar10 | 0x80000000,0xaa,uVar11,0,0,uVar23);
    uVar17 = uVar17 | uVar8;
    uVar22 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),uVar17);
    iVar12 = 0x40;
    if (uVar8 != 0) {
      iVar12 = 0;
    }
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar7,1,uVar6,0xe4,*(uint *)(param_3 + 0xe0) | uVar16,
                  CONCAT44(uVar18,0xe4),CONCAT44(uVar27,iVar12 + local_90),uVar22,CONCAT44(uVar19,3)
                  ,0);
    iVar12 = 0x50;
    if (uVar8 != 0) {
      iVar12 = 0x10;
    }
    uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),uVar17);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar7,2,uVar6,0xe4,*(uint *)(param_3 + 0xe0) | uVar16,
                  0xe4,iVar12 + local_90,uVar22,3,0);
    uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),uVar17);
    iVar12 = 0x60;
    if (uVar8 != 0) {
      iVar12 = 0x20;
    }
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar7,4,uVar6,0xe4,*(uint *)(param_3 + 0xe0) | uVar16,
                  0xe4,iVar12 + local_90,uVar22,3,0);
    iVar12 = 0x70;
    if (uVar8 != 0) {
      iVar12 = 0x30;
    }
    uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),uVar17);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar7,8,uVar6,0xe4,*(uint *)(param_3 + 0xe0) | uVar16,
                  0xe4,iVar12 + local_90,uVar22,3,0);
    uVar23 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),0x1e4);
    uVar18 = 0;
    uVar25 = (ulonglong)uVar9;
    FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar9,0xf,uVar7,0x1e4,uVar11,0,uVar25,uVar23,0);
  }
  if (uVar5 == uVar6) {
    (**(code **)(*param_1 + 8))(param_1,param_3,uVar5);
  }
  else {
    FUN_1800f4370(param_3 + 0x20,uVar6);
  }
  *(uint *)(param_3 + 0x15c) = uVar9;
  FUN_1800f4370(param_3 + 0x20,uVar7);
  if ((*(char *)(param_3 + 0x1c2) != '\0') || (*(char *)(param_3 + 0x1c4) != '\0')) {
    if ((*(uint *)(param_3 + 0x1ac) >> 2 & 1) == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(param_3 + 0x1a0);
      if (iVar12 == 0) {
        iVar12 = (**(code **)*param_1)(param_1,param_2,param_3,3,0xf);
        *(int *)(param_3 + 0x1a0) = iVar12;
      }
    }
    iVar13 = FUN_180071da8(param_1,param_2,param_3,iVar12,uVar1 != 0);
    if (((iVar13 != iVar12) &&
        (bVar2 = *(byte *)(param_3 + 0x1c0), *(byte *)(param_3 + 0x1c0) = bVar2 & 0xf7,
        (bVar2 & 0xf7) == 0)) && (*(int *)(param_3 + 0x1a0) != 0)) {
      (**(code **)(*param_1 + 8))(param_1,param_3);
      *(undefined4 *)(param_3 + 0x1a0) = 0;
    }
    cVar15 = *(char *)(param_3 + 0x1c4);
    uVar19 = 3;
    if (cVar15 != '\0') {
      uVar19 = 4;
    }
    uVar14 = FUN_1800f42d0(param_3 + 0x20,uVar19,1);
    iVar20 = 0x4000;
    uVar24 = uVar14 & 0xffffffff;
    if ((*(uint *)(param_3 + 0x1ac) & 0xf800) == 0) {
      uVar29 = CONCAT44(uVar18,*(undefined4 *)(param_3 + 0xd0));
      uVar22 = FUN_180071f80(uVar14,param_2,param_3,uVar24,iVar13,0x130,0,0,uVar29);
      uVar18 = (undefined4)((ulonglong)uVar29 >> 0x20);
    }
    else {
      uVar29 = CONCAT44(uVar18,*(undefined4 *)(param_3 + 0xe0));
      uVar22 = FUN_180071f80(uVar14,param_2,param_3,uVar24,iVar13,0x4000,uVar8,0,uVar29);
      uVar18 = (undefined4)((ulonglong)uVar29 >> 0x20);
    }
    uVar19 = (undefined4)uVar14;
    if ((*(uint *)(param_3 + 0x1ac) >> 0xb & 1) != 0) {
      uVar7 = FUN_1800f42d0(param_3 + 0x20,3,1);
      uVar30 = (undefined4)((ulonglong)uVar23 >> 0x20);
      uVar18 = 0;
      uVar27 = 0;
      iVar20 = 0x4040;
      if (uVar8 != 0) {
        iVar20 = 0x4000;
      }
      uVar22 = FUN_1800f5730(param_3 + 0x20,param_2,0x38,uVar24,7,uVar24,0x1a4,uVar10,0,0);
      uVar29 = CONCAT44(uVar18,*(undefined4 *)(param_3 + 0xe0));
      FUN_180071f80(uVar22,param_2,param_3,uVar7,iVar13,iVar20,uVar8,1,uVar29);
      if ((*(uint *)(param_3 + 0x1ac) >> 0xc & 1) == 0) {
        uVar23 = CONCAT44(uVar30,0x1a4);
        uVar25 = CONCAT44(uVar27,uVar19);
        uVar18 = 0;
        uVar22 = FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar24,7,uVar7,0x1a4,uVar11,0,uVar25,
                               uVar23,0);
      }
      else {
        uVar23 = CONCAT44(uVar30,0x1a4);
        uVar29 = CONCAT44((int)((ulonglong)uVar29 >> 0x20),0x55);
        uVar25 = CONCAT44(uVar27,uVar19);
        uVar22 = FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar24,7,uVar7,0x1a4,uVar10,uVar29,uVar25
                               ,uVar23,0);
        uVar18 = (undefined4)((ulonglong)uVar29 >> 0x20);
      }
    }
    if ((*(uint *)(param_3 + 0x1ac) >> 0xc & 1) != 0) {
      iVar21 = 0x40;
      if (uVar8 != 0) {
        iVar21 = 0;
      }
      iVar20 = iVar21 + iVar20;
      uVar29 = CONCAT44(uVar18,*(undefined4 *)(param_3 + 0xe0));
      FUN_180071f80(uVar22,param_2,param_3,uVar7,iVar13,iVar20,uVar8,2,uVar29);
      if ((*(uint *)(param_3 + 0x1ac) >> 0xd & 1) == 0) {
        uVar23 = 0x1a4;
        uVar25 = uVar14 & 0xffffffff;
        uVar18 = 0;
        uVar22 = FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar24,7,uVar7,0x1a4,uVar11,0,uVar25,
                               0x1a4,0);
      }
      else {
        uVar23 = 0x1a4;
        uVar29 = CONCAT44((int)((ulonglong)uVar29 >> 0x20),0xaa);
        uVar25 = uVar14 & 0xffffffff;
        uVar22 = FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar24,7,uVar7,0x1a4,uVar10,uVar29,uVar25
                               ,0x1a4,0);
        uVar18 = (undefined4)((ulonglong)uVar29 >> 0x20);
      }
    }
    if ((*(uint *)(param_3 + 0x1ac) >> 0xd & 1) != 0) {
      iVar21 = 0x40;
      if (uVar8 != 0) {
        iVar21 = 0;
      }
      FUN_180071f80(uVar22,param_2,param_3,uVar7,iVar13,iVar21 + iVar20,uVar8,3,
                    CONCAT44(uVar18,*(undefined4 *)(param_3 + 0xe0)));
      uVar23 = 0x1a4;
      uVar25 = uVar14 & 0xffffffff;
      FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar24,7,uVar7,0x1a4,uVar11,0,uVar25,0x1a4,0);
    }
    if (iVar13 == iVar12) {
      bVar2 = *(byte *)(param_3 + 0x1c0);
      *(byte *)(param_3 + 0x1c0) = bVar2 & 0xf7;
      if (((bVar2 & 0xf7) == 0) && (*(int *)(param_3 + 0x1a0) != 0)) {
        (**(code **)(*param_1 + 8))(param_1,param_3);
        *(undefined4 *)(param_3 + 0x1a0) = 0;
      }
    }
    else {
      FUN_1800f4370(param_3 + 0x20,iVar13);
    }
    *(undefined4 *)(param_3 + 0x160) = uVar19;
    if (cVar15 != '\0') {
      FUN_1800f5730(param_3 + 0x20,param_2,0x36,uVar24,8,*(undefined4 *)(param_3 + 0xb8),0xe4,
                    0x3f800000,0,uVar25,uVar23);
    }
    FUN_1800f4370(param_3 + 0x20,uVar7);
  }
  (**(code **)(*param_1 + 8))(param_1,param_3,uVar10);
  FUN_1800f4370(param_3 + 0x20,uVar8);
  uVar22 = FUN_1800f4370(param_3 + 0x20,uVar11);
  if (((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x17 & 1) != 0) &&
     (*(int *)(param_3 + 0x160) != 0)) {
    FUN_180072118(uVar22,param_2,param_3);
  }
  return;
}

