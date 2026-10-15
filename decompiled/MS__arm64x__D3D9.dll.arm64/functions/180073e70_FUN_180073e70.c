/*
 * FUN_180073e70 at 180073e70
 * undefined FUN_180073e70(void)
 * Address ranges: 180073e70-18007480f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180073e70(undefined8 *param_1,undefined8 param_2,longlong param_3,int param_4,uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined *puVar13;
  uint *puVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  undefined4 extraout_s16;
  undefined4 extraout_s17;
  undefined4 extraout_s18;
  undefined4 extraout_s19;
  undefined4 extraout_s20;
  undefined4 extraout_s21;
  ulonglong in_stack_ffffffffffffff20;
  undefined4 uVar20;
  undefined8 uVar19;
  uint uVar21;
  ulonglong in_stack_ffffffffffffff28;
  uint uVar24;
  undefined8 uVar22;
  ulonglong uVar23;
  undefined8 in_stack_ffffffffffffff38;
  uint uVar26;
  undefined8 uVar25;
  ulonglong in_stack_ffffffffffffff58;
  undefined4 uVar27;
  
  uVar26 = (uint)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  uVar20 = (undefined4)(in_stack_ffffffffffffff20 >> 0x20);
  uVar8 = (undefined4)(in_stack_ffffffffffffff28 >> 0x20);
  uVar27 = (undefined4)(in_stack_ffffffffffffff58 >> 0x20);
  lVar16 = *(longlong *)(param_3 + 0x1b0);
  iVar9 = *(int *)(param_3 + 0x194);
  uVar21 = param_4 * 3;
  uVar17 = 4;
  uVar4 = (*(uint *)(lVar16 + 0x1c) & *(uint *)(lVar16 + 8)) >> (ulonglong)(uVar21 & 0x1f);
  uVar1 = uVar4 & 7;
  if ((uVar1 != 0) != (bool)*(char *)(param_3 + 0x199)) {
    uVar17 = (uint)*(byte *)(param_3 + 0x198);
  }
  uVar18 = (*(uint *)(lVar16 + 0x20) & *(uint *)(lVar16 + 0xc)) >> (ulonglong)(uVar21 & 0x1f) & 7;
  if (uVar18 == 1) {
    if (iVar9 != 0) goto LAB_1800741b8;
    iVar9 = *(int *)(param_3 + 0x168);
    if (iVar9 == 0) {
      iVar9 = FUN_180073d58(param_1,param_2,param_3,0);
      *(int *)(param_3 + 0x168) = iVar9;
    }
  }
  else if (uVar18 == 2) {
    if (iVar9 != 0) goto LAB_1800741b8;
    iVar9 = *(int *)(param_3 + 0x164);
  }
  else if (uVar18 == 3) {
    if (iVar9 != 0) goto LAB_1800741b8;
    if (*(int *)(param_3 + 0x16c) == 0) {
      if (*(int *)(param_3 + 0x168) == 0) {
        uVar8 = FUN_180073d58(param_1,param_2,param_3,0);
        *(undefined4 *)(param_3 + 0x168) = uVar8;
      }
      uVar8 = FUN_1800f42d0(param_3 + 0x20,3,1);
      *(undefined4 *)(param_3 + 0x16c) = uVar8;
      uVar8 = FUN_1800f42d0(param_3 + 0x20,1,1);
      if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x1d & 1) == 0) {
        uVar27 = 0;
        uVar19 = CONCAT44(uVar20,0xaa);
        FUN_1800f5730(param_3 + 0x20,param_2,0,uVar8,1,*(undefined4 *)(param_3 + 0x160),0xaa,
                      *(undefined4 *)(param_3 + 0x160),uVar19,0);
        in_stack_ffffffffffffff58 = 0;
        in_stack_ffffffffffffff28 = CONCAT44(uVar27,*(undefined4 *)(param_3 + 0xbc));
        in_stack_ffffffffffffff20 = CONCAT44((int)((ulonglong)uVar19 >> 0x20),0x1a4);
        lVar16 = (ulonglong)uVar26 << 0x20;
        FUN_1800f5730(param_3 + 0x20,param_2,0x32,*(undefined4 *)(param_3 + 0x16c),7,uVar8,0,
                      *(undefined4 *)(param_3 + 0x168),in_stack_ffffffffffffff20,
                      in_stack_ffffffffffffff28,0x1e4,lVar16,0,0xbf800000,0,0);
        uVar26 = (uint)((ulonglong)lVar16 >> 0x20);
      }
      else {
        uVar12 = FUN_1800f42d0(param_3 + 0x20,3,1);
        FUN_180072118(uVar12,param_2,param_3,*(uint *)(param_3 + 0x164) | 0x80000000);
        FUN_1800f5730(param_3 + 0x20,param_2,0x10,uVar8,1,uVar12 & 0xffffffff,0xa4,
                      *(undefined4 *)(param_3 + 0x168),CONCAT44(uVar20,0xa4),0);
        uVar20 = 0;
        uVar27 = 0;
        FUN_1800f5730(param_3 + 0x20,param_2,0,uVar8,1,uVar8,0,uVar8,0,0);
        uVar26 = 0;
        in_stack_ffffffffffffff28 = CONCAT44(uVar27,(int)uVar12) | 0x80000000;
        in_stack_ffffffffffffff20 = CONCAT44(uVar20,0x1a4);
        FUN_1800f5730(param_3 + 0x20,param_2,0x32,*(undefined4 *)(param_3 + 0x16c),7,uVar8,0,
                      *(undefined4 *)(param_3 + 0x168),in_stack_ffffffffffffff20,
                      in_stack_ffffffffffffff28,0x1a4,0);
        FUN_1800f4370(param_3 + 0x20,uVar12 & 0xffffffff);
      }
      FUN_1800f4370(param_3 + 0x20,uVar8);
    }
    iVar9 = *(int *)(param_3 + 0x16c);
  }
  else {
    if ((uVar18 != 4) || (iVar9 != 0)) goto LAB_1800741b8;
    if (*(int *)(param_3 + 0x170) == 0) {
      if (*(int *)(param_3 + 0x168) == 0) {
        uVar7 = FUN_180073d58(param_1,param_2,param_3,0);
        *(undefined4 *)(param_3 + 0x168) = uVar7;
      }
      uVar7 = FUN_1800f42d0(param_3 + 0x20,3,1);
      *(undefined4 *)(param_3 + 0x170) = uVar7;
      in_stack_ffffffffffffff58 = CONCAT44(uVar27,0x3f000000);
      uVar19 = CONCAT44(uVar26,0x3f800000);
      in_stack_ffffffffffffff28 = CONCAT44(uVar8,0x3f000000);
      in_stack_ffffffffffffff20 = CONCAT44(uVar20,0x1e4);
      FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar7,7,*(undefined4 *)(param_3 + 0x168),0x1a4,
                    *(undefined4 *)(param_3 + 0xbc),in_stack_ffffffffffffff20,
                    in_stack_ffffffffffffff28,0x3f000000,uVar19,0,*(undefined4 *)(param_3 + 0xbc),
                    0x1e4,in_stack_ffffffffffffff58,0x3f000000,0,0,0);
      uVar26 = (uint)((ulonglong)uVar19 >> 0x20);
    }
    iVar9 = *(int *)(param_3 + 0x170);
  }
  uVar17 = 3;
LAB_1800741b8:
  puVar14 = *(uint **)(param_3 + 0x1b0);
  uVar18 = 0xf;
  if (((puVar14[0x11] >> 0x1e & 1) == 0) &&
     (((puVar14[7] & puVar14[2]) >> (ulonglong)(param_4 + 0x18U & 0x1f) & 1) != 0)) {
    bVar6 = true;
    uVar15 = 7;
  }
  else {
    bVar6 = false;
    uVar15 = 0xf;
  }
  if ((iVar9 == 0) &&
     (uVar21 = (puVar14[5] & puVar14[4] & *puVar14) >> (ulonglong)(uVar21 & 0x1f) & 7,
     (*(uint *)(param_3 + 0x1ac) & 8 << (ulonglong)uVar21) != 0)) {
    uVar17 = (puVar14[6] & puVar14[1]) >> (ulonglong)(uVar21 * 3) & 7;
    iVar9 = (**(code **)*param_1)(param_1,param_2,param_3,uVar21 + 7,0xf >> (4 - uVar17 & 0x1f));
    *(int *)(param_3 + 0x19c) = iVar9;
  }
  uVar21 = (uint)(in_stack_ffffffffffffff20 >> 0x20);
  uVar24 = (uint)(in_stack_ffffffffffffff28 >> 0x20);
  uVar5 = (undefined1)uVar17;
  if (uVar1 == 0) {
    if (iVar9 != 0) {
      puVar13 = &DAT_180234a70;
      puVar2 = &DAT_180234a74;
      if (!bVar6) {
        puVar2 = puVar13;
      }
      if ((param_5 & 1) != 0) {
        if (uVar17 != 4) {
          if (((*(uint *)(param_3 + 0x194) & 0x3f00) == 0) &&
             (*(uint *)(param_3 + 0x194) != *(uint *)(param_3 + 0x19c))) {
            FUN_1800f4370(param_3 + 0x20);
            *(undefined4 *)(param_3 + 0x194) = 0;
          }
          iVar11 = FUN_1800f42d0(param_3 + 0x20,4,1);
          bVar3 = puVar13[uVar17 - 1];
          if (*(int *)(param_3 + 0x20) == 0x10040) {
            FUN_1800f5730(param_3 + 0x20,param_2,0x36,iVar11,bVar3,iVar9,
                          (&DAT_18022c5a0)[uVar17 - 1],0);
            uVar23 = in_stack_ffffffffffffff28 & 0xffffffff00000000;
            uVar12 = in_stack_ffffffffffffff20 & 0xffffffff00000000;
            FUN_1800f5730(param_3 + 0x20,param_2,0x36,iVar11,bVar3 ^ 0xf,
                          *(undefined4 *)(param_3 + 0xbc),0xe4,0,uVar12,uVar23,0x3f800000,0);
            uVar24 = (uint)(uVar23 >> 0x20);
            uVar21 = (uint)(uVar12 >> 0x20);
          }
          else {
            uVar23 = CONCAT44((int)(in_stack_ffffffffffffff28 >> 0x20),(uint)(bVar3 >> 2)) &
                     0xffffffff00000001;
            uVar12 = CONCAT44((int)(in_stack_ffffffffffffff20 >> 0x20),(uint)(bVar3 >> 1)) &
                     0xffffffff00000001;
            FUN_1800f5730(param_3 + 0x20,param_2,0x37,iVar11,0xf,*(undefined4 *)(param_3 + 0xbc),
                          0xe4,bVar3 & 1,uVar12,uVar23,bVar3 >> 3 & 1,CONCAT44(uVar26,iVar9),
                          (&DAT_18022c5a0)[uVar17 - 1],*(undefined4 *)(param_3 + 0xbc),0xe4,
                          in_stack_ffffffffffffff58 & 0xffffffff00000000,0,0,0x3f800000,0);
            uVar24 = (uint)(uVar23 >> 0x20);
            uVar21 = (uint)(uVar12 >> 0x20);
          }
          uVar17 = 4;
          iVar9 = iVar11;
        }
        if (*(int *)(param_3 + 0x194) == 0) {
          *(int *)(param_3 + 0x194) = iVar9;
          *(undefined1 *)(param_3 + 0x198) = uVar5;
          *(undefined1 *)(param_3 + 0x199) = 0;
        }
      }
      uVar19 = CONCAT44(uVar21,0x12345678);
      uVar17 = uVar17 - 1;
      FUN_180071c08(param_1,param_3,param_2,0x36,param_4 + 5,puVar2[uVar17],iVar9,
                    (&DAT_18022c5a0)[uVar17],uVar19);
      uVar21 = (uint)((ulonglong)uVar19 >> 0x20);
      uVar18 = (byte)puVar2[uVar17] ^ 0xf;
    }
  }
  else {
    iVar11 = param_4 * 0x40;
    uVar18 = (byte)(&DAT_18022c5ac)[uVar1 - 1] & uVar15;
    if (iVar9 == 0) {
      uVar22 = CONCAT44(uVar24,0x12345678);
      uVar19 = CONCAT44(uVar21,iVar11 + 0x2e0);
      FUN_180071c08(param_1,param_3,param_2,0x36,param_4 + 5,1,*(undefined4 *)(param_3 + 0xd0),0xff,
                    uVar19,uVar22);
      uVar21 = (uint)((ulonglong)uVar19 >> 0x20);
      uVar24 = (uint)((ulonglong)uVar22 >> 0x20);
      if ((uVar4 & 6) != 0) {
        uVar22 = CONCAT44(uVar24,0x12345678);
        uVar19 = CONCAT44(uVar21,iVar11 + 0x2f0);
        FUN_180071c08(param_1,param_3,param_2,0x36,param_4 + 5,2,*(undefined4 *)(param_3 + 0xd0),
                      0xff,uVar19,uVar22);
        uVar21 = (uint)((ulonglong)uVar19 >> 0x20);
        uVar24 = (uint)((ulonglong)uVar22 >> 0x20);
      }
      if (2 < uVar1) {
        uVar22 = CONCAT44(uVar24,0x12345678);
        uVar19 = CONCAT44(uVar21,iVar11 + 0x300);
        FUN_180071c08(param_1,param_3,param_2,0x36,param_4 + 5,2,*(undefined4 *)(param_3 + 0xd0),
                      0xff,uVar19,uVar22);
        uVar21 = (uint)((ulonglong)uVar19 >> 0x20);
        uVar24 = (uint)((ulonglong)uVar22 >> 0x20);
      }
      if (((uVar4 >> 2 & 1) != 0) || (bVar6)) {
        uVar22 = CONCAT44(uVar24,0x12345678);
        uVar19 = CONCAT44(uVar21,iVar11 + uVar1 * 0x10 + 0x2d0);
        FUN_180071c08(param_1,param_3,param_2,0x36,param_4 + 5,4,*(undefined4 *)(param_3 + 0xd0),
                      0xff,uVar19,uVar22);
        uVar21 = (uint)((ulonglong)uVar19 >> 0x20);
        uVar24 = (uint)((ulonglong)uVar22 >> 0x20);
      }
    }
    else {
      iVar10 = iVar9;
      if (uVar17 != 4) {
        if (((*(uint *)(param_3 + 0x194) & 0x3f00) == 0) &&
           (*(uint *)(param_3 + 0x194) != *(uint *)(param_3 + 0x19c))) {
          FUN_1800f4370(param_3 + 0x20);
          *(undefined4 *)(param_3 + 0x194) = 0;
        }
        iVar10 = FUN_1800f42d0(param_3 + 0x20,4,1);
        uVar25 = CONCAT44(uVar26,extraout_s20);
        uVar22 = CONCAT44(uVar24,0x3f800000);
        uVar19 = CONCAT44(uVar21,0xe4);
        FUN_1800f5730(param_3 + 0x20,param_2,0x32,iVar10,0xf,iVar9,(&DAT_18022c5a0)[uVar17 - 1],
                      *(undefined4 *)(param_3 + 0xbc),uVar19,uVar22,extraout_s21,uVar25,extraout_s19
                      ,*(undefined4 *)(param_3 + 0xbc),0xe4,
                      in_stack_ffffffffffffff58 & 0xffffffff00000000,extraout_s18,extraout_s17,
                      extraout_s16,0);
        uVar21 = (uint)((ulonglong)uVar19 >> 0x20);
        uVar24 = (uint)((ulonglong)uVar22 >> 0x20);
        uVar26 = (uint)((ulonglong)uVar25 >> 0x20);
      }
      if (*(int *)(param_3 + 0x194) == 0) {
        *(int *)(param_3 + 0x194) = iVar10;
        *(undefined1 *)(param_3 + 0x199) = 1;
        *(undefined1 *)(param_3 + 0x198) = uVar5;
      }
      uVar25 = CONCAT44(uVar26,0x12345678);
      uVar22 = CONCAT44(uVar24,0xe4);
      uVar19 = CONCAT44(uVar21,*(undefined4 *)(param_3 + 0xd0));
      FUN_180071c08(param_1,param_3,param_2,0x11,param_4 + 5,1,iVar10,0xe4,uVar19,uVar22,
                    iVar11 + 0x2e0,uVar25);
      uVar21 = (uint)((ulonglong)uVar19 >> 0x20);
      uVar24 = (uint)((ulonglong)uVar22 >> 0x20);
      uVar20 = (undefined4)((ulonglong)uVar25 >> 0x20);
      if ((uVar4 & 6) != 0) {
        uVar25 = CONCAT44(uVar20,0x12345678);
        uVar22 = CONCAT44(uVar24,0xe4);
        uVar19 = CONCAT44(uVar21,*(undefined4 *)(param_3 + 0xd0));
        FUN_180071c08(param_1,param_3,param_2,0x11,param_4 + 5,2,iVar10,0xe4,uVar19,uVar22,
                      iVar11 + 0x2f0,uVar25);
        uVar21 = (uint)((ulonglong)uVar19 >> 0x20);
        uVar24 = (uint)((ulonglong)uVar22 >> 0x20);
        uVar20 = (undefined4)((ulonglong)uVar25 >> 0x20);
      }
      if (2 < uVar1) {
        uVar25 = CONCAT44(uVar20,0x12345678);
        uVar22 = CONCAT44(uVar24,0xe4);
        uVar19 = CONCAT44(uVar21,*(undefined4 *)(param_3 + 0xd0));
        FUN_180071c08(param_1,param_3,param_2,0x11,param_4 + 5,4,iVar10,0xe4,uVar19,uVar22,
                      iVar11 + 0x300,uVar25);
        uVar21 = (uint)((ulonglong)uVar19 >> 0x20);
        uVar24 = (uint)((ulonglong)uVar22 >> 0x20);
        uVar20 = (undefined4)((ulonglong)uVar25 >> 0x20);
      }
      if (((uVar4 >> 2 & 1) != 0) || (bVar6)) {
        uVar22 = CONCAT44(uVar24,0xe4);
        uVar19 = CONCAT44(uVar21,*(undefined4 *)(param_3 + 0xd0));
        FUN_180071c08(param_1,param_3,param_2,0x11,param_4 + 5,8,iVar10,0xe4,uVar19,uVar22,
                      iVar11 + uVar1 * 0x10 + 0x2d0,CONCAT44(uVar20,0x12345678));
        uVar21 = (uint)((ulonglong)uVar19 >> 0x20);
        uVar24 = (uint)((ulonglong)uVar22 >> 0x20);
      }
    }
  }
  if ((uVar18 < 9) && ((0x116U >> (ulonglong)(uVar18 & 0x1f) & 1) != 0)) {
    uVar17 = (uVar18 & 0xaaaaaaaa) >> 1 | (uVar18 & 0x55555555) << 1;
    uVar17 = (uVar17 & 0xcccccccc) >> 2 | (uVar17 & 0x33333333) << 2;
    FUN_180071c08(param_1,param_3,param_2,0x36,param_4 + 5,uVar18,*(undefined4 *)(param_3 + 0xb8),
                  0x1e4,CONCAT44(uVar21,*(undefined4 *)
                                         (&DAT_180231310 +
                                         LZCOUNT((uVar17 >> 4 | (uVar17 & 0xf0f0f0f) << 4) << 0x18)
                                         * 4)),CONCAT44(uVar24,0x12345678));
  }
  else if (uVar18 != 0) {
    FUN_180071c08(param_1,param_3,param_2,0x36,param_4 + 5,uVar18,*(undefined4 *)(param_3 + 0xbc),
                  0x1e4,(ulonglong)uVar21 << 0x20,(ulonglong)uVar24 << 0x20,0,0x3f800000,0x12345678)
    ;
  }
  return;
}

