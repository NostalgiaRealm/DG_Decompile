/*
 * FUN_180173fe8 at 180173fe8
 * undefined FUN_180173fe8(void)
 * Address ranges: 180173fe8-18017448b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180173fe8(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             ulonglong param_5)

{
  longlong lVar1;
  ushort *puVar2;
  longlong lVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined4 local_100 [2];
  undefined4 local_f8;
  uint local_f0;
  undefined8 local_e8;
  undefined4 local_80;
  byte local_7c;
  undefined4 local_60 [8];
  
  lVar1 = param_3 + 0x100;
  uVar19 = 0;
  do {
    lVar6 = uVar19 * 0x10;
    uVar12 = (uint)*(ushort *)(lVar1 + lVar6);
    uVar18 = (uint)uVar19;
    if ((uVar12 != 0) || (*(short *)(param_3 + lVar6 + 0x180) != 0)) {
      lVar3 = param_3 + lVar6;
      uVar13 = (uint)*(ushort *)(lVar3 + 0x180);
      if (((uVar13 & 0xfffffeff) != uVar12) ||
         (uVar17 = 1, *(ushort *)(lVar3 + 0x102) != (*(ushort *)(lVar3 + 0x182) & 0xfeff))) {
        uVar17 = 0;
      }
      puVar2 = (ushort *)(lVar3 + 0x186);
      uVar4 = *(ushort *)(lVar3 + 0x184) & 0xfeff;
      if ((*(ushort *)(lVar3 + 0x104) == uVar4) &&
         (*(ushort *)(lVar3 + 0x106) == (*(ushort *)(lVar3 + 0x186) & 0xfeff))) {
        uVar14 = 1;
        uVar16 = 1;
      }
      else {
        uVar14 = 0;
        uVar16 = 0;
      }
      uVar5 = *(uint *)(param_2 + uVar19 * 4);
      uVar20 = uVar5 & 0x1f;
      if ((uVar20 < 0x1b) && ((&DAT_18022c330)[uVar20] != '\0')) {
        if ((*(ushort *)(lVar3 + 0x104) != (*puVar2 & 0xfeff)) ||
           (uVar14 = 1, *(ushort *)(param_3 + 0x106 + lVar6) != uVar4)) {
          uVar14 = 0;
        }
        uVar14 = uVar14 | uVar16;
      }
      uVar10 = (ulonglong)uVar12;
      if (uVar20 != (uVar5 >> 5 & 0x1f)) {
        uVar17 = 0;
      }
      bVar7 = false;
      uVar15 = 0;
      do {
        bVar8 = true;
        if (bVar7) break;
        if (((*(ushort *)(lVar3 + 0x102 + uVar15 * 2) & 0xf0) == 0x70 && uVar12 != 0) ||
           (bVar7 = false, (*(ushort *)(lVar3 + 0x182 + uVar15 * 2) & 0xf0) == 0x70 && uVar13 != 0))
        {
          bVar7 = true;
        }
        uVar16 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar16;
        bVar8 = bVar7;
      } while (uVar16 < 3);
      uVar15 = 0;
      if (bVar8) {
        uVar9 = 0;
        if ((((uint)((param_5 & 0xffffffffffff) >> ((ulonglong)(uVar18 * 3) & 0x3f)) & 7) - 5 < 2)
           && (((uint)(param_5 >> 0x32) & 1) != 0)) {
          uVar9 = FUN_180213760(param_3,4,1);
        }
        uVar10 = FUN_180213760(param_3,4,1);
        uVar15 = uVar10 & 0xffffffff;
        local_f8 = CONCAT31(local_f8._1_3_,*(short *)(lVar3 + 0x10a) != 0);
        local_100[0] = CONCAT31(local_100[0]._1_3_,*(short *)(lVar3 + 0x108) != 0);
        FUN_18016fd28(uVar10,param_3,uVar19,uVar18 + 5 | 0x410100,uVar15,uVar9,param_4,param_5);
        uVar10 = FUN_180213800(param_3,uVar9);
      }
      uVar20 = 0;
      uVar16 = *(uint *)(param_2 + uVar19 * 4);
      if ((((uVar16 & 0x1f) != 0x18) && ((uVar16 & 0x3e0) == 0x300)) &&
         ((*(ushort *)(lVar1 + lVar6) == (*(ushort *)(lVar3 + 0x184) & 0xf0) ||
          (*(ushort *)(lVar1 + lVar6) == (*puVar2 & 0xf0))))) {
        uVar10 = FUN_180213760(param_3,4,1);
        uVar20 = ((uint)uVar10 & 0x3f) << 10 | 0xb0;
      }
      if (uVar12 != 0) {
        uVar12 = uVar20;
        if (uVar20 == 0) {
          uVar12 = (uint)*(ushort *)(lVar1 + lVar6);
        }
        local_e8 = CONCAT62(local_e8._2_6_,*(undefined2 *)(param_3 + 0x106 + lVar6));
        local_f0 = CONCAT22(local_f0._2_2_,*(undefined2 *)(lVar3 + 0x104));
        local_f8 = CONCAT22(local_f8._2_2_,*(undefined2 *)(lVar3 + 0x102));
        local_100[0] = CONCAT22(local_100[0]._2_2_,*(undefined2 *)(lVar3 + 0x10c));
        uVar10 = FUN_180170580(param_1,param_3,param_4,uVar19,*(uint *)(param_2 + uVar19 * 4) & 0x1f
                               ,uVar15,(uVar17 & uVar14) << 3 | 7,uVar12);
      }
      if (((uVar17 & uVar14) == 0) && (uVar13 != 0)) {
        local_e8 = CONCAT62(local_e8._2_6_,*puVar2);
        local_f0 = CONCAT22(local_f0._2_2_,*(undefined2 *)(lVar3 + 0x184));
        local_f8 = CONCAT22(local_f8._2_2_,*(undefined2 *)(lVar3 + 0x182));
        local_100[0] = CONCAT22(local_100[0]._2_2_,*(undefined2 *)(lVar3 + 0x18c));
        uVar10 = FUN_180170580(param_1,param_3,param_4,uVar19,
                               *(uint *)(param_2 + uVar19 * 4) >> 5 & 0x1f,uVar15,8,
                               *(undefined2 *)(lVar3 + 0x180));
      }
      if (uVar20 != 0) {
        uVar11 = FUN_180170118(uVar10,local_60,param_3,param_4,*(undefined2 *)(lVar1 + lVar6));
        FUN_180170208(uVar11,&local_80,param_3,param_4,0xffffffff,0xffffffff,uVar20,0);
        local_e8 = 0;
        local_f0 = (uint)local_7c;
        local_f8 = local_80;
        local_100[0] = 7;
        FUN_180214c88(param_3,param_4,0x36,local_60[0],local_100,0x20);
        FUN_180213800(param_3,0);
      }
      uVar12 = *(uint *)(param_3 + 0x210) & (0x1010101 << (ulonglong)(uVar18 & 0x1f) ^ 0xffffffffU);
      *(uint *)(param_3 + 0x210) = uVar12;
      if (((uVar12 & 0xff) == 0) && ((*(uint *)(param_3 + 0x224) & 0x3f00) == 0)) {
        FUN_180213800(param_3);
        *(undefined4 *)(param_3 + 0x224) = 0;
      }
      if ((*(uint *)(param_3 + 0x210) & 0xff0000) == 0) {
        FUN_180213800(param_3,*(undefined4 *)(param_3 + 0x220));
        *(undefined4 *)(param_3 + 0x220) = 0;
      }
      if ((*(uint *)(param_3 + 0x210) & 0xff000000) == 0) {
        FUN_180213800(param_3,*(undefined4 *)(param_3 + 0x21c));
        *(undefined4 *)(param_3 + 0x21c) = 0;
      }
      FUN_180213800(param_3,uVar15);
    }
    uVar19 = (ulonglong)(uVar18 + 1);
    if (7 < uVar18 + 1) {
      return 1;
    }
  } while( true );
}

