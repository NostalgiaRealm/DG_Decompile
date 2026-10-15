/*
 * FUN_180062948 at 180062948
 * undefined FUN_180062948(void)
 * Address ranges: 180062948-180062f5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180062948(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             ulonglong param_5)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  ushort uVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong in_stack_fffffffffffffef0;
  uint local_d8;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_70 [8];
  
  lVar1 = param_3 + 0x100;
  uVar20 = 0;
  lVar23 = 0;
  uVar13 = param_1;
  do {
    lVar19 = lVar23 * 0x10;
    uVar8 = *(ushort *)(lVar1 + lVar19);
    if ((uVar8 != 0) || (*(short *)(param_3 + lVar19 + 0x180) != 0)) {
      lVar2 = param_3 + lVar19;
      uVar5 = *(ushort *)(lVar2 + 0x180);
      if (((uVar5 & 0xfeff) != uVar8) ||
         (uVar18 = 1, *(ushort *)(lVar2 + 0x102) != (*(ushort *)(lVar2 + 0x182) & 0xfeff))) {
        uVar18 = 0;
      }
      uVar3 = *(ushort *)(lVar2 + 0x184) & 0xfeff;
      if ((*(ushort *)(lVar2 + 0x104) == uVar3) &&
         (*(ushort *)(lVar2 + 0x106) == (*(ushort *)(lVar2 + 0x186) & 0xfeff))) {
        uVar15 = 1;
        uVar14 = 1;
      }
      else {
        uVar15 = 0;
        uVar14 = 0;
      }
      uVar4 = *(uint *)(param_2 + lVar23 * 4);
      uVar22 = uVar4 & 0x1f;
      if ((uVar22 < 0x1b) && ((&DAT_18022c330)[uVar22] != '\0')) {
        if ((*(ushort *)(lVar2 + 0x104) != (*(ushort *)(lVar2 + 0x186) & 0xfeff)) ||
           (uVar15 = 1, *(ushort *)(param_3 + 0x106 + lVar19) != uVar3)) {
          uVar15 = 0;
        }
        uVar15 = uVar15 | uVar14;
      }
      if (uVar22 != (uVar4 >> 5 & 0x1f)) {
        uVar18 = 0;
      }
      bVar10 = false;
      uVar16 = 0;
      do {
        bVar9 = true;
        if (bVar10) break;
        if (((*(ushort *)(lVar2 + 0x102 + uVar16 * 2) & 0xf0) == 0x70 && uVar8 != 0) ||
           (bVar10 = false, (*(ushort *)(lVar2 + 0x182 + uVar16 * 2) & 0xf0) == 0x70 && uVar5 != 0))
        {
          bVar10 = true;
        }
        uVar14 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar14;
        bVar9 = bVar10;
      } while (uVar14 < 3);
      uVar16 = 0;
      if (bVar9) {
        uVar11 = 0;
        uVar17 = (param_5 & 0xffffffffffff) >> ((ulonglong)(uVar20 * 3) & 0x3f);
        uVar14 = (uint)uVar17 & 7;
        if ((uVar14 - 5 < 2) && (((uint)(param_5 >> 0x32) & 1) != 0)) {
          uVar11 = FUN_1800f42d0(param_3,4,1);
        }
        uVar12 = FUN_1800f42d0(param_3,4,1);
        sVar6 = *(short *)(lVar2 + 0x10a);
        local_d8 = 0;
        uVar16 = uVar12 & 0xffffffff;
        uVar21 = (undefined4)uVar12;
        uVar22 = local_d8;
        if ((uVar17 & 7) != 0) {
          sVar7 = *(short *)(lVar2 + 0x108);
          uVar22 = uVar20 + 5 | 0x410100;
          bVar10 = (param_5 >> 0x33 & 1) != 0;
          if ((param_5 >> 0x3e & 1) != 0 || bVar10 && uVar14 == 1) {
            uVar12 = FUN_1800f5730(param_3,param_4,0xe,uVar16,0xf,uVar22,0xe4,uVar22,0xff,0);
            if (!bVar10 || uVar14 != 1) {
              in_stack_fffffffffffffef0 = 0;
              uVar12 = FUN_1800f5730(param_3,param_4,0x37,uVar16,0xf,*(undefined4 *)(param_3 + 0x74)
                                     ,0xff,uVar20 * 0x40 + 0xfc,uVar21,0xe4,uVar22,0xe4,0);
            }
            uVar22 = local_d8;
            if (sVar7 != 0) {
              uVar12 = FUN_1800f5730(param_3,param_4,0,uVar16,3,uVar16,0x54,
                                     *(undefined4 *)(param_3 + 0x220),0x54,0);
            }
          }
          else if (sVar7 != 0) {
            in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffff00000000;
            uVar12 = FUN_1800f5730(param_3,param_4,0x32,uVar16,0xf,*(undefined4 *)(param_3 + 0x220),
                                   0x54,*(undefined4 *)(param_3 + 0xac),0xe4,0x3f800000,0x3f800000,0
                                   ,in_stack_fffffffffffffef0,uVar22,0xe4,0);
            uVar22 = local_d8;
          }
        }
        local_d8 = uVar22;
        FUN_18005ddb0(uVar12,param_3,uVar14,uVar20,uVar16,uVar11,param_5,param_4,local_d8,0xe4);
        if (((uVar17 & 7) != 0) && (sVar6 != 0)) {
          FUN_1800f5730(param_3,param_4,0x38,uVar16,7,uVar16,0xa4,*(undefined4 *)(param_3 + 0x220),
                        0xaa,0);
        }
        uVar13 = FUN_1800f4370(param_3,uVar11);
      }
      uVar22 = 0;
      uVar14 = *(uint *)(param_2 + lVar23 * 4);
      if ((((uVar14 & 0x1f) != 0x18) && ((uVar14 & 0x3e0) == 0x300)) &&
         ((*(ushort *)(lVar1 + lVar19) == (*(ushort *)(param_3 + 0x184 + lVar19) & 0xf0) ||
          (*(ushort *)(lVar1 + lVar19) == (*(ushort *)(param_3 + 0x186 + lVar19) & 0xf0))))) {
        uVar13 = FUN_1800f42d0(param_3,4,1);
        uVar22 = ((uint)uVar13 & 0x3f) << 10 | 0xb0;
      }
      if (uVar8 != 0) {
        uVar14 = uVar22;
        if (uVar22 == 0) {
          uVar14 = (uint)*(ushort *)(lVar1 + lVar19);
        }
        uVar13 = FUN_18005f490(param_1,param_3,param_4,uVar20,*(uint *)(param_2 + lVar23 * 4) & 0x1f
                               ,uVar16,(uVar18 & uVar15) << 3 | 7,uVar14,
                               *(undefined2 *)(lVar2 + 0x10c),*(undefined2 *)(lVar2 + 0x102),
                               *(undefined2 *)(lVar2 + 0x104),*(undefined2 *)(lVar2 + 0x106));
      }
      if (((uVar18 & uVar15) == 0) && (uVar5 != 0)) {
        uVar13 = FUN_18005f490(param_1,param_3,param_4,uVar20,
                               *(uint *)(param_2 + lVar23 * 4) >> 5 & 0x1f,uVar16,8,
                               *(undefined2 *)(param_3 + 0x180 + lVar19),
                               *(undefined2 *)(lVar2 + 0x18c),*(undefined2 *)(lVar2 + 0x182),
                               *(undefined2 *)(lVar2 + 0x184),*(ushort *)(lVar2 + 0x186));
      }
      if (uVar22 != 0) {
        uVar13 = FUN_18005f068(uVar13,local_70,param_3,param_4,*(undefined2 *)(lVar1 + lVar19));
        FUN_18005f158(uVar13,&local_90,param_3,param_4,0xffffffff,0xffffffff,uVar22,0);
        FUN_1800f5730(param_3,param_4,0x36,local_70[0],7,local_90,local_8c,0);
        FUN_1800f4370(param_3,0);
      }
      uVar18 = *(uint *)(param_3 + 0x210) & (0x1010101 << (ulonglong)(uVar20 & 0x1f) ^ 0xffffffffU);
      *(uint *)(param_3 + 0x210) = uVar18;
      if (((uVar18 & 0xff) == 0) && ((*(uint *)(param_3 + 0x224) & 0x3f00) == 0)) {
        FUN_1800f4370(param_3);
        *(undefined4 *)(param_3 + 0x224) = 0;
      }
      if ((*(uint *)(param_3 + 0x210) & 0xff0000) == 0) {
        FUN_1800f4370(param_3,*(undefined4 *)(param_3 + 0x220));
        *(undefined4 *)(param_3 + 0x220) = 0;
      }
      if ((*(uint *)(param_3 + 0x210) & 0xff000000) == 0) {
        FUN_1800f4370(param_3,*(undefined4 *)(param_3 + 0x21c));
        *(undefined4 *)(param_3 + 0x21c) = 0;
      }
      uVar13 = FUN_1800f4370(param_3,uVar16);
    }
    uVar20 = uVar20 + 1;
    lVar23 = lVar23 + 1;
    if (7 < uVar20) {
      return 1;
    }
  } while( true );
}

