/*
 * FUN_1005f2c0 at 1005f2c0
 * undefined FUN_1005f2c0(void)
 * Address ranges: 1005f2c0-10060363
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005f2c0(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6,
                 int param_7,int param_8)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  code *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  ulonglong extraout_x1_01;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  code *extraout_w11_13;
  code *extraout_w11_14;
  code *extraout_w11_15;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float local_150;
  float fStack_14c;
  float local_148;
  float local_144;
  int aiStack_140 [64];
  
  uVar12 = param_3 * 6;
  if (uVar12 < 0x1001) {
    FUN_1005c0c8(param_2);
    iVar21 = 0;
    if (param_8 != 0) {
      iVar21 = param_8 + -0xc0;
    }
    piVar2 = (int *)(param_2 + 0xfa80);
    iVar20 = *piVar2;
    if (iVar20 == 0) {
      iVar20 = *(int *)(param_2 + 0xfa90);
    }
    if ((param_8 == 0) && (iVar20 != 0)) {
      FUN_1005df78(param_2,0,0,0);
      piVar3 = (int *)(param_2 + 0xf6b8);
      piVar1 = (int *)(*(int *)(*piVar3 + 0x1304) + 0x634);
      *piVar1 = *piVar1 + 1;
      pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      iVar21 = 1;
      if ((param_5 & 1) != 0) {
        if (*piVar2 != 0) {
          FUN_100566e0(param_2,0);
          iVar9 = *piVar2;
          (*pcVar7)();
          uVar8 = (*extraout_w11)(iVar9);
          iVar15 = *(int *)(param_2 + 0xfaa4);
          iVar9 = *(int *)(iVar9 + 0x2c);
          iVar16 = *(int *)(param_2 + 0xfa94);
          FUN_10056f98(param_2,uVar8);
          *(undefined1 *)(param_2 + 0xfd9b) = 1;
          iVar4 = *(int *)(*piVar3 + 0x1304);
          iVar5 = *(int *)(iVar4 + 0x8e0);
          if ((iVar5 != 0) && ((int)extraout_x1 != 0)) {
            iVar16 = iVar16 + iVar9 * iVar15;
            iVar9 = FUN_1011ef68(*(undefined4 *)(iVar4 + 0x8e4),extraout_x1 & 0xffffffff,iVar16,0,
                                 iVar5,iVar4,4,*(undefined8 *)(iVar4 + 0x938));
            if (*(int *)(*(int *)(iVar4 + 0x8e0) + 0x20) != 3 && iVar9 != 4) {
              FUN_10112f60(iVar4,uVar8,iVar16,iVar9,4);
            }
          }
        }
        if (*(int *)(param_2 + 0xfa84) != 0) {
          FUN_100566e0(param_2,1);
          iVar9 = *(int *)(param_2 + 0xfa84);
          (*pcVar7)();
          iVar10 = (*extraout_w11_00)(iVar9);
          iVar15 = *(int *)(param_2 + 0xfaa8);
          iVar9 = *(int *)(iVar9 + 0x2c);
          iVar16 = *(int *)(param_2 + 0xfa98);
          FUN_10056f98(param_2,iVar10);
          *(undefined1 *)(param_2 + 0xfd9b) = 1;
          iVar4 = *(int *)(*piVar3 + 0x1304);
          iVar5 = *(int *)(iVar4 + 0x8e0);
          if ((iVar5 != 0) && (iVar10 != 0)) {
            iVar16 = iVar16 + iVar15 * iVar9;
            iVar9 = FUN_1011ef68(*(undefined4 *)(iVar4 + 0x8e4),iVar10,iVar16,0,iVar5,iVar4,4,
                                 *(undefined8 *)(iVar4 + 0x938));
            if (*(int *)(*(int *)(iVar4 + 0x8e0) + 0x20) != 3 && iVar9 != 4) {
              FUN_10112f60(iVar4,iVar10,iVar16,iVar9,4);
            }
          }
        }
        if (*(int *)(param_2 + 0xfa88) != 0) {
          FUN_100566e0(param_2,2);
          iVar9 = *(int *)(param_2 + 0xfa88);
          (*pcVar7)();
          iVar10 = (*extraout_w11_01)(iVar9);
          iVar15 = *(int *)(param_2 + 0xfaac);
          iVar9 = *(int *)(iVar9 + 0x2c);
          iVar16 = *(int *)(param_2 + 0xfa9c);
          FUN_10056f98(param_2,iVar10);
          *(undefined1 *)(param_2 + 0xfd9b) = 1;
          iVar4 = *(int *)(*piVar3 + 0x1304);
          iVar5 = *(int *)(iVar4 + 0x8e0);
          if ((iVar5 != 0) && (iVar10 != 0)) {
            iVar16 = iVar16 + iVar15 * iVar9;
            iVar9 = FUN_1011ef68(*(undefined4 *)(iVar4 + 0x8e4),iVar10,iVar16,0,iVar5,iVar4,4,
                                 *(undefined8 *)(iVar4 + 0x938));
            if (*(int *)(*(int *)(iVar4 + 0x8e0) + 0x20) != 3 && iVar9 != 4) {
              FUN_10112f60(iVar4,iVar10,iVar16,iVar9,4);
            }
          }
        }
        if (*(int *)(param_2 + 0xfa8c) != 0) {
          FUN_100566e0(param_2,3);
          iVar9 = *(int *)(param_2 + 0xfa8c);
          (*pcVar7)();
          iVar10 = (*extraout_w11_02)(iVar9);
          iVar15 = *(int *)(param_2 + 0xfab0);
          iVar9 = *(int *)(iVar9 + 0x2c);
          iVar16 = *(int *)(param_2 + 0xfaa0);
          FUN_10056f98(param_2,iVar10);
          *(undefined1 *)(param_2 + 0xfd9b) = 1;
          iVar4 = *(int *)(*piVar3 + 0x1304);
          iVar5 = *(int *)(iVar4 + 0x8e0);
          if ((iVar5 != 0) && (iVar10 != 0)) {
            iVar16 = iVar16 + iVar15 * iVar9;
            iVar9 = FUN_1011ef68(*(undefined4 *)(iVar4 + 0x8e4),iVar10,iVar16,0,iVar5,iVar4,4,
                                 *(undefined8 *)(iVar4 + 0x938));
            if (*(int *)(*(int *)(iVar4 + 0x8e0) + 0x20) != 3 && iVar9 != 4) {
              FUN_10112f60(iVar4,iVar10,iVar16,iVar9,4);
            }
          }
        }
      }
      if (((param_5 & 6) != 0) && (*(int *)(param_2 + 0xfa90) != 0)) {
        FUN_10056770(param_2);
        iVar9 = *(int *)(param_2 + 0xfa90);
        (*pcVar7)();
        uVar8 = (*extraout_w11_03)(iVar9);
        if ((param_5 >> 1 & 1) != 0) {
          FUN_10056f98(param_2,uVar8,
                       *(int *)(param_2 + 0xfab4) +
                       *(int *)(iVar9 + 0x2c) * *(int *)(param_2 + 0xfab8));
          *(undefined1 *)(param_2 + 0xfd9b) = 1;
          FUN_10113dd8(*(undefined4 *)(*piVar3 + 0x1304),extraout_x1_00 & 0xffffffff);
        }
        puVar17 = (undefined1 *)(param_2 + 0xfd9b);
        if ((param_5 >> 2 & 1) != 0) {
          FUN_10056f98(param_2,uVar8,
                       *(int *)(param_2 + 0xfab4) +
                       (*(int *)(iVar9 + 0x24) + *(int *)(param_2 + 0xfab8)) *
                       *(int *)(iVar9 + 0x2c));
          *puVar17 = 1;
          FUN_10113dd8(*(undefined4 *)(*(int *)(param_2 + 0xf6b8) + 0x1304),
                       extraout_x1_01 & 0xffffffff);
        }
      }
      uVar12 = *(uint *)(iVar20 + 0x14);
      (*pcVar7)();
      uVar11 = (*extraout_w11_04)(iVar20,0);
      uVar18 = *(uint *)(iVar20 + 0x18);
      fVar22 = (float)uVar11 / (float)uVar12;
      (*pcVar7)();
      uVar12 = (*extraout_w11_05)(iVar20,0);
      fVar23 = (float)uVar12 / (float)uVar18;
      if (param_3 != 0) {
        uVar12 = 0;
        do {
          iVar20 = *(int *)(param_4 + 4 + uVar12 * 0x10);
          iVar9 = *(int *)(param_4 + 8 + uVar12 * 0x10);
          iVar15 = *(int *)(param_4 + 0xc + uVar12 * 0x10);
          uVar18 = uVar12 + 1;
          aiStack_140[uVar12 * 4] = (int)((float)*(int *)(param_4 + uVar12 * 0x10) * fVar22);
          aiStack_140[uVar12 * 4 + 1] = (int)((float)iVar20 * fVar23);
          aiStack_140[uVar12 * 4 + 2] = (int)((float)iVar9 * fVar22);
          aiStack_140[uVar12 * 4 + 3] = (int)((float)iVar15 * fVar23);
          uVar12 = uVar18;
        } while (uVar18 < param_3);
      }
      if ((param_5 & 1) != 0) {
        if (*(int *)(param_2 + 0x697c) == 0) {
          uVar19 = 0xff;
          uVar18 = param_6 >> 0x10 & 0xff;
          uVar11 = param_6 >> 8 & 0xff;
          uVar12 = param_6 & 0xff;
        }
        else {
          uVar18 = *(uint *)(param_2 + 0x6990) & param_6 >> 0x10;
          uVar11 = *(uint *)(param_2 + 0x6994) & param_6 >> 8;
          uVar19 = *(uint *)(param_2 + 0x699c);
          uVar12 = *(uint *)(param_2 + 0x6998) & param_6;
        }
        local_150 = (float)uVar18 / 255.0;
        fStack_14c = (float)uVar11 / 255.0;
        local_148 = (float)uVar12 / 255.0;
        local_144 = (float)(uVar19 & param_6 >> 0x18) / 255.0;
        if (*(int *)(param_2 + 0xfa80) != 0) {
          uVar8 = *(undefined4 *)(param_2 + 0xf9e4);
          iVar20 = *(int *)(*(int *)(param_2 + 0xf6b8) + 0x1304);
          iVar9 = *(int *)(iVar20 + 0x8ec);
          if (iVar9 != 0) {
            uVar14 = *(undefined4 *)(iVar20 + 0x8e8);
            FUN_10113218(iVar20);
            uVar13 = (*pcVar7)();
            (*extraout_w11_06)(uVar13,iVar9,uVar14);
            *(undefined4 *)(iVar20 + 0x8ec) = 0;
          }
          FUN_10113218(iVar20);
          uVar14 = (*pcVar7)();
          (*extraout_w11_07)(uVar14,uVar8,&local_150,param_3,aiStack_140);
          cVar6 = *(char *)(iVar20 + 0x620);
          *(char *)(iVar20 + 0x620) = '\0';
          iVar9 = 8;
          if (cVar6 == '\0') {
            iVar9 = iVar21;
          }
          iVar9 = iVar9 + *(int *)(iVar20 + 0x624);
          *(int *)(iVar20 + 0x624) = iVar9;
          if (((*(int *)(iVar20 + 0x630) <= iVar9) && (*(int *)(iVar20 + 0x8e0) != 0)) &&
             (*(int *)(iVar20 + 0x634) == 0)) {
            FUN_101138b0(iVar20 + 4,0);
          }
        }
        if (*(int *)(param_2 + 0xfa84) != 0) {
          uVar8 = *(undefined4 *)(param_2 + 0xf9e8);
          iVar20 = *(int *)(*(int *)(param_2 + 0xf6b8) + 0x1304);
          iVar9 = *(int *)(iVar20 + 0x8ec);
          if (iVar9 != 0) {
            uVar14 = *(undefined4 *)(iVar20 + 0x8e8);
            FUN_10113218(iVar20);
            uVar13 = (*pcVar7)();
            (*extraout_w11_08)(uVar13,iVar9,uVar14);
            *(int *)(iVar20 + 0x8ec) = 0;
          }
          FUN_10113218(iVar20);
          uVar14 = (*pcVar7)();
          (*extraout_w11_09)(uVar14,uVar8,&local_150,param_3,aiStack_140);
          iVar9 = 8;
          if (*(char *)(iVar20 + 0x620) == '\0') {
            iVar9 = iVar21;
          }
          iVar9 = iVar9 + *(int *)(iVar20 + 0x624);
          *(int *)(iVar20 + 0x624) = iVar9;
          *(char *)(iVar20 + 0x620) = '\0';
          if (((*(int *)(iVar20 + 0x630) <= iVar9) && (*(int *)(iVar20 + 0x8e0) != 0)) &&
             (*(int *)(iVar20 + 0x634) == 0)) {
            FUN_101138b0(iVar20 + 4,0);
          }
        }
        if (*(int *)(param_2 + 0xfa88) != 0) {
          uVar8 = *(undefined4 *)(param_2 + 0xf9ec);
          iVar20 = *(int *)(*(int *)(param_2 + 0xf6b8) + 0x1304);
          iVar9 = *(int *)(iVar20 + 0x8ec);
          if (iVar9 != 0) {
            uVar14 = *(undefined4 *)(iVar20 + 0x8e8);
            FUN_10113218(iVar20);
            uVar13 = (*pcVar7)();
            (*extraout_w11_10)(uVar13,iVar9,uVar14);
            *(int *)(iVar20 + 0x8ec) = 0;
          }
          FUN_10113218(iVar20);
          uVar14 = (*pcVar7)();
          (*extraout_w11_11)(uVar14,uVar8,&local_150,param_3,aiStack_140);
          iVar9 = 8;
          if (*(char *)(iVar20 + 0x620) == '\0') {
            iVar9 = iVar21;
          }
          iVar9 = iVar9 + *(int *)(iVar20 + 0x624);
          *(int *)(iVar20 + 0x624) = iVar9;
          *(char *)(iVar20 + 0x620) = '\0';
          if (((*(int *)(iVar20 + 0x630) <= iVar9) && (*(int *)(iVar20 + 0x8e0) != 0)) &&
             (*(int *)(iVar20 + 0x634) == 0)) {
            FUN_101138b0(iVar20 + 4,0);
          }
        }
        if (*(int *)(param_2 + 0xfa8c) != 0) {
          uVar8 = *(undefined4 *)(param_2 + 0xf9f0);
          iVar20 = *(int *)(*(int *)(param_2 + 0xf6b8) + 0x1304);
          iVar9 = *(int *)(iVar20 + 0x8ec);
          if (iVar9 != 0) {
            uVar14 = *(undefined4 *)(iVar20 + 0x8e8);
            FUN_10113218(iVar20);
            uVar13 = (*pcVar7)();
            (*extraout_w11_12)(uVar13,iVar9,uVar14);
            *(int *)(iVar20 + 0x8ec) = 0;
          }
          FUN_10113218(iVar20);
          uVar14 = (*pcVar7)();
          (*extraout_w11_13)(uVar14,uVar8,&local_150,param_3,aiStack_140);
          iVar9 = 8;
          if (*(char *)(iVar20 + 0x620) == '\0') {
            iVar9 = iVar21;
          }
          iVar9 = iVar9 + *(int *)(iVar20 + 0x624);
          *(int *)(iVar20 + 0x624) = iVar9;
          *(char *)(iVar20 + 0x620) = '\0';
          if (((*(int *)(iVar20 + 0x630) <= iVar9) && (*(int *)(iVar20 + 0x8e0) != 0)) &&
             (*(int *)(iVar20 + 0x634) == 0)) {
            FUN_101138b0(iVar20 + 4,0);
          }
        }
      }
      if (((param_5 & 6) != 0) && (*(int *)(param_2 + 0xfa90) != 0)) {
        uVar8 = *(undefined4 *)(param_2 + 0xfa78);
        iVar20 = *(int *)(*(int *)(param_2 + 0xf6b8) + 0x1304);
        iVar9 = *(int *)(iVar20 + 0x8ec);
        if (iVar9 != 0) {
          uVar14 = *(undefined4 *)(iVar20 + 0x8e8);
          FUN_10113218(iVar20);
          uVar13 = (*pcVar7)();
          (*extraout_w11_14)(uVar13,iVar9,uVar14);
          *(int *)(iVar20 + 0x8ec) = 0;
        }
        FUN_10113218(iVar20);
        uVar14 = (*pcVar7)();
        (*extraout_w11_15)(param_1,uVar14,uVar8,param_5 >> 1 & 3);
        cVar6 = *(char *)(iVar20 + 0x620);
        *(char *)(iVar20 + 0x620) = '\0';
        iVar9 = 8;
        if (cVar6 == '\0') {
          iVar9 = iVar21;
        }
        iVar9 = iVar9 + *(int *)(iVar20 + 0x624);
        *(int *)(iVar20 + 0x624) = iVar9;
        if (((*(int *)(iVar20 + 0x630) <= iVar9) && (*(int *)(iVar20 + 0x8e0) != 0)) &&
           (*(int *)(iVar20 + 0x634) == 0)) {
          FUN_101138b0(iVar20 + 4,0);
        }
      }
      iVar21 = *(int *)(*(int *)(param_2 + 0xf6b8) + 0x1304);
      iVar20 = *(int *)(iVar21 + 0x634) + -1;
      *(int *)(iVar21 + 0x634) = iVar20;
      if ((iVar20 == 0) && (*(int *)(iVar21 + 0x630) <= *(int *)(iVar21 + 0x624))) {
        FUN_101138b0(iVar21 + 4,0);
      }
    }
    else {
      if ((*(char *)(param_2 + 0x7642) == '\0') ||
         ((((param_5 != *(uint *)(param_2 + 0x7620) || (param_6 != *(uint *)(param_2 + 0x7624))) ||
           (param_7 != *(int *)(param_2 + 0x7628))) ||
          ((iVar21 != *(int *)(param_2 + 0xfa7c) ||
           ((uint)((0x1000 - *(int *)(param_2 + 0x54)) - *(int *)(param_2 + 0x50)) < uVar12)))))) {
        FUN_1005df78(param_2,(uint)((0x1000 - *(int *)(param_2 + 0x54)) - *(int *)(param_2 + 0x50))
                             < uVar12,0,0x14);
        cVar6 = *(char *)(param_2 + 0x7642);
        if ((cVar6 == '\0') ||
           (((param_5 != *(uint *)(param_2 + 0x7620) || (iVar21 != *(int *)(param_2 + 0xfa7c))) ||
            ((*(int *)(param_2 + 0xfc8) != 0x14 ||
             (*(int *)(param_2 + 0x100c) != *(int *)(param_2 + 0x5c))))))) {
          *(uint *)(param_2 + 0x7620) = param_5;
          if (cVar6 == '\0') {
            *(undefined1 *)(param_2 + 0xf66e) = 1;
          }
          if (*(int *)(param_2 + 0xfbd0) != *(int *)(param_2 + 0xf6d4)) {
            *(int *)(param_2 + 0xfbd0) = *(int *)(param_2 + 0xf6d4);
            *(undefined1 *)(param_2 + 0xf66f) = 1;
          }
          if (*(int *)(param_2 + 0xfc8) != 0x14) {
            *(undefined1 *)(param_2 + 0xf66f) = 1;
            *(int *)(param_2 + 0xfc8) = 0x14;
          }
          if (*(int *)(param_2 + 0x100c) != *(int *)(param_2 + 0x5c)) {
            *(int *)(param_2 + 0x100c) = *(int *)(param_2 + 0x5c);
            *(undefined1 *)(param_2 + 0xf66f) = 1;
          }
          if ((iVar21 != 0) && (iVar21 != *(int *)(param_2 + 0xfa7c))) {
            FUN_100568d8(param_2,*(undefined4 *)(param_2 + 0xfb7c));
            *(undefined1 *)(param_2 + 0xf669) = 1;
          }
          *(int *)(param_2 + 0xfa7c) = iVar21;
          *(undefined4 *)(param_2 + 0xf834) = *(undefined4 *)(*(int *)(param_2 + 0xf6c4) + 0xac);
          uVar8 = *(undefined4 *)(*(int *)(param_2 + 0xf6c4) + 0xb0);
          *(undefined4 *)(param_2 + 0xf81c) = 0;
          *(undefined1 *)(param_2 + 0xf668) = 1;
          *(undefined4 *)(param_2 + 0xf80c) = uVar8;
          *(undefined4 *)(param_2 + 0xf83c) = 3;
          *(undefined4 *)(param_2 + 0xfc18) = 4;
          *(undefined1 *)(param_2 + 0x7648) = 0;
          if (*(char *)(param_2 + 0x7642) == '\0') {
            *(undefined1 *)(param_2 + 0x7642) = 1;
            FUN_10074c68(param_2);
          }
          *(undefined1 *)(param_2 + 0xfd9a) = 1;
          *(undefined2 *)(param_2 + 0xfd98) = 0x101;
        }
      }
      *(undefined4 *)(param_2 + 0xfd90) = 1;
      *(undefined1 *)(param_2 + 0xfd94) = 0;
      FUN_1007a6a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  else {
    (*(code *)PTR_FUN_1016c068)();
  }
  return;
}

