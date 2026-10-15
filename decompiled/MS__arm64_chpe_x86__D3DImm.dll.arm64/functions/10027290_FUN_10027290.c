/*
 * FUN_10027290 at 10027290
 * undefined FUN_10027290(void)
 * Address ranges: 10027290-10027e9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10027290(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,
                 int param_7,int param_8)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  uint uVar18;
  int iVar19;
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
  uint uVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_150 [16];
  int aiStack_140 [64];
  
  uVar18 = param_3 * 6;
  if (uVar18 < 0x1001) {
    FUN_10024940(param_2);
    iVar9 = 0;
    if (param_8 != 0) {
      iVar9 = param_8 + -0xc0;
    }
    piVar2 = (int *)(param_2 + 0x1f6c);
    iVar19 = *piVar2;
    if (iVar19 == 0) {
      iVar19 = *(int *)(param_2 + 0x1f7c);
    }
    if ((param_8 == 0) && (iVar19 != 0)) {
      FUN_10026090(param_2,0,0,0);
      piVar3 = (int *)(param_2 + 0x1d54);
      piVar1 = (int *)(*(int *)(*piVar3 + 0x1304) + 0x634);
      *piVar1 = *piVar1 + 1;
      pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      if (((param_5 & 1) != 0) && (*piVar2 != 0)) {
        FUN_1001f480(param_2,0);
        iVar9 = *piVar2;
        (*pcVar7)();
        iVar8 = (*extraout_w11)(iVar9);
        iVar15 = *(int *)(param_2 + 0x1f90);
        iVar9 = *(int *)(iVar9 + 0x2c);
        iVar16 = *(int *)(param_2 + 0x1f80);
        FUN_1001fb90(param_2,iVar8);
        *(undefined1 *)(param_2 + 0x21d3) = 1;
        iVar4 = *(int *)(*piVar3 + 0x1304);
        iVar5 = *(int *)(iVar4 + 0x8e0);
        if ((iVar5 != 0) && (iVar8 != 0)) {
          iVar16 = iVar16 + iVar9 * iVar15;
          iVar9 = FUN_100783c0(*(undefined4 *)(iVar4 + 0x8e4),iVar8,iVar16,0,iVar5,iVar4,4,
                               *(undefined8 *)(iVar4 + 0x938));
          if (*(int *)(*(int *)(iVar4 + 0x8e0) + 0x20) != 3 && iVar9 != 4) {
            FUN_10071a98(iVar4,iVar8,iVar16,iVar9,4);
          }
        }
      }
      if (((param_5 & 6) != 0) && (*(int *)(param_2 + 0x1f7c) != 0)) {
        FUN_1001f528(param_2);
        iVar9 = *(int *)(param_2 + 0x1f7c);
        (*pcVar7)();
        uVar10 = (*extraout_w11_00)(iVar9);
        if ((param_5 >> 1 & 1) != 0) {
          FUN_1001fb90(param_2,uVar10,
                       *(int *)(param_2 + 0x1fa0) +
                       *(int *)(param_2 + 0x1fa4) * *(int *)(iVar9 + 0x2c));
          *(undefined1 *)(param_2 + 0x21d3) = 1;
          FUN_10072268(*(undefined4 *)(*piVar3 + 0x1304),extraout_x1 & 0xffffffff);
        }
        puVar17 = (undefined1 *)(param_2 + 0x21d3);
        if ((param_5 >> 2 & 1) != 0) {
          FUN_1001fb90(param_2,uVar10,
                       *(int *)(param_2 + 0x1fa0) +
                       (*(int *)(iVar9 + 0x24) + *(int *)(param_2 + 0x1fa4)) *
                       *(int *)(iVar9 + 0x2c));
          *puVar17 = 1;
          FUN_10072268(*(undefined4 *)(*(int *)(param_2 + 0x1d54) + 0x1304),
                       extraout_x1_00 & 0xffffffff);
        }
      }
      uVar18 = *(uint *)(iVar19 + 0x14);
      uVar10 = (*pcVar7)();
      uVar11 = (*extraout_w11_01)(uVar10,0);
      uVar20 = *(uint *)(iVar19 + 0x18);
      fVar21 = (float)uVar11 / (float)uVar18;
      uVar10 = (*pcVar7)();
      auVar23 = (*extraout_w11_02)(uVar10,0);
      uVar13 = auVar23._8_8_;
      fVar22 = (float)(auVar23._0_8_ & 0xffffffff) / (float)uVar20;
      if (param_3 != 0) {
        uVar18 = 0;
        do {
          iVar9 = *(int *)(param_4 + 4 + uVar18 * 0x10);
          iVar19 = *(int *)(param_4 + 8 + uVar18 * 0x10);
          iVar15 = *(int *)(param_4 + 0xc + uVar18 * 0x10);
          uVar20 = uVar18 + 1;
          aiStack_140[uVar18 * 4] = (int)((float)*(int *)(param_4 + uVar18 * 0x10) * fVar21);
          aiStack_140[uVar18 * 4 + 1] = (int)((float)iVar9 * fVar22);
          aiStack_140[uVar18 * 4 + 2] = (int)((float)iVar19 * fVar21);
          aiStack_140[uVar18 * 4 + 3] = (int)((float)iVar15 * fVar22);
          uVar18 = uVar20;
        } while (uVar20 < param_3);
      }
      if (((param_5 & 1) != 0) &&
         (FUN_10033018(param_2,param_6,auStack_150), uVar13 = extraout_x1_01,
         *(int *)(param_2 + 0x1f6c) != 0)) {
        uVar10 = *(undefined4 *)(param_2 + 0x1f54);
        iVar9 = *(int *)(*(int *)(param_2 + 0x1d54) + 0x1304);
        iVar19 = *(int *)(iVar9 + 0x8ec);
        piVar2 = (int *)(iVar9 + 0x628);
        if (iVar19 != 0) {
          iVar15 = *piVar2;
          uVar18 = *(uint *)(iVar9 + 0x8e8);
          *piVar2 = iVar15 + 1;
          if ((iVar15 == 0) && (*(int *)(iVar9 + 0x8e0) != 0)) {
            uVar20 = 0;
            if (*(uint *)(iVar9 + 0x958) != 0) {
              do {
                uVar12 = (*pcVar7)();
                (*extraout_w11_03)(uVar12);
                uVar20 = uVar20 + 1;
              } while (uVar20 < *(uint *)(iVar9 + 0x958));
            }
          }
          uVar14 = (ulonglong)uVar18;
          auVar23 = (*pcVar7)(*(undefined4 *)(iVar9 + 0x638),iVar19,uVar14);
          (*extraout_w11_04)(auVar23._0_8_ & 0xffffffff,auVar23._8_8_ & 0xffffffff,
                             uVar14 & 0xffffffff);
          *(int *)(iVar9 + 0x8ec) = 0;
        }
        iVar19 = *piVar2;
        *piVar2 = iVar19 + 1;
        if ((iVar19 == 0) && (*(int *)(iVar9 + 0x8e0) != 0)) {
          uVar18 = 0;
          if (*(uint *)(iVar9 + 0x958) != 0) {
            do {
              uVar12 = (*pcVar7)();
              (*extraout_w11_05)(uVar12);
              uVar18 = uVar18 + 1;
            } while (uVar18 < *(uint *)(iVar9 + 0x958));
          }
        }
        uVar12 = (*pcVar7)();
        (*extraout_w11_06)(uVar12,uVar10,auStack_150,param_3,aiStack_140);
        cVar6 = *(char *)(iVar9 + 0x620);
        *(char *)(iVar9 + 0x620) = '\0';
        iVar19 = 8;
        if (cVar6 == '\0') {
          iVar19 = 1;
        }
        iVar19 = iVar19 + *(int *)(iVar9 + 0x624);
        *(int *)(iVar9 + 0x624) = iVar19;
        uVar13 = extraout_x1_02;
        if (((*(int *)(iVar9 + 0x630) <= iVar19) && (*(int *)(iVar9 + 0x8e0) != 0)) &&
           (*(int *)(iVar9 + 0x634) == 0)) {
          FUN_10071e00(iVar9 + 4,0);
          uVar13 = extraout_x1_03;
        }
      }
      if (((param_5 & 6) != 0) && (*(int *)(param_2 + 0x1f7c) != 0)) {
        uVar10 = *(undefined4 *)(param_2 + 0x1f64);
        iVar9 = *(int *)(*piVar3 + 0x1304);
        iVar19 = *(int *)(iVar9 + 0x8ec);
        piVar2 = (int *)(iVar9 + 0x628);
        if (iVar19 != 0) {
          iVar15 = *piVar2;
          uVar18 = *(uint *)(iVar9 + 0x8e8);
          *piVar2 = iVar15 + 1;
          if ((iVar15 == 0) && (*(int *)(iVar9 + 0x8e0) != 0)) {
            uVar20 = 0;
            if (*(uint *)(iVar9 + 0x958) != 0) {
              do {
                uVar12 = (*pcVar7)();
                (*extraout_w11_07)(uVar12);
                uVar20 = uVar20 + 1;
                uVar13 = extraout_x1_04;
              } while (uVar20 < *(uint *)(iVar9 + 0x958));
            }
          }
          uVar14 = (ulonglong)uVar18;
          uVar12 = (*pcVar7)(*(undefined4 *)(iVar9 + 0x638),uVar13,uVar14);
          (*extraout_w11_08)(uVar12,iVar19,uVar14 & 0xffffffff);
          *(int *)(iVar9 + 0x8ec) = 0;
        }
        iVar19 = *piVar2;
        *piVar2 = iVar19 + 1;
        if ((iVar19 == 0) && (*(int *)(iVar9 + 0x8e0) != 0)) {
          uVar18 = 0;
          if (*(uint *)(iVar9 + 0x958) != 0) {
            do {
              uVar12 = (*pcVar7)();
              (*extraout_w11_09)(uVar12);
              uVar18 = uVar18 + 1;
            } while (uVar18 < *(uint *)(iVar9 + 0x958));
          }
        }
        uVar12 = (*pcVar7)();
        (*extraout_w11_10)(param_1,uVar12,uVar10,param_5 >> 1 & 3);
        cVar6 = *(char *)(iVar9 + 0x620);
        *(char *)(iVar9 + 0x620) = '\0';
        iVar19 = 8;
        if (cVar6 == '\0') {
          iVar19 = 1;
        }
        iVar19 = iVar19 + *(int *)(iVar9 + 0x624);
        *(int *)(iVar9 + 0x624) = iVar19;
        if (((*(int *)(iVar9 + 0x630) <= iVar19) && (*(int *)(iVar9 + 0x8e0) != 0)) &&
           (*(int *)(iVar9 + 0x634) == 0)) {
          FUN_10071e00(iVar9 + 4,0);
        }
      }
      iVar9 = *(int *)(*piVar3 + 0x1304);
      iVar19 = *(int *)(iVar9 + 0x634) + -1;
      *(int *)(iVar9 + 0x634) = iVar19;
      if ((iVar19 == 0) && (*(int *)(iVar9 + 0x630) <= *(int *)(iVar9 + 0x624))) {
        FUN_10071e00(iVar9 + 4,0);
      }
    }
    else {
      if (((*(char *)(param_2 + 0x1905) == '\0') ||
          (((param_5 != *(uint *)(param_2 + 0x18e4) || (param_6 != *(int *)(param_2 + 0x18e8))) ||
           (param_7 != *(int *)(param_2 + 0x18ec))))) ||
         ((iVar9 != *(int *)(param_2 + 0x1f68) ||
          ((uint)((0x1000 - *(int *)(param_2 + 0x54)) - *(int *)(param_2 + 0x50)) < uVar18)))) {
        FUN_10026090(param_2,(uint)((0x1000 - *(int *)(param_2 + 0x54)) - *(int *)(param_2 + 0x50))
                             < uVar18,0,0x14);
        cVar6 = *(char *)(param_2 + 0x1905);
        if ((cVar6 == '\0') ||
           (((param_5 != *(uint *)(param_2 + 0x18e4) || (iVar9 != *(int *)(param_2 + 0x1f68))) ||
            ((*(int *)(param_2 + 0x4b0) != 0x14 ||
             (*(int *)(param_2 + 0x4f4) != *(int *)(param_2 + 0x5c))))))) {
          *(uint *)(param_2 + 0x18e4) = param_5;
          if (cVar6 == '\0') {
            *(undefined1 *)(param_2 + 0x1d3e) = 1;
          }
          if (*(int *)(param_2 + 0x2024) != *(int *)(param_2 + 0x1d70)) {
            *(int *)(param_2 + 0x2024) = *(int *)(param_2 + 0x1d70);
            *(undefined1 *)(param_2 + 0x1d3f) = 1;
          }
          if (*(int *)(param_2 + 0x4b0) != 0x14) {
            *(undefined1 *)(param_2 + 0x1d3f) = 1;
            *(int *)(param_2 + 0x4b0) = 0x14;
          }
          if (*(int *)(param_2 + 0x4f4) != *(int *)(param_2 + 0x5c)) {
            *(int *)(param_2 + 0x4f4) = *(int *)(param_2 + 0x5c);
            *(undefined1 *)(param_2 + 0x1d3f) = 1;
          }
          if ((iVar9 != 0) && (iVar9 != *(int *)(param_2 + 0x1f68))) {
            FUN_1001f6a8(param_2,*(undefined4 *)(param_2 + 0x1fe8));
            *(undefined1 *)(param_2 + 0x1d39) = 1;
          }
          *(int *)(param_2 + 0x1f68) = iVar9;
          *(undefined4 *)(param_2 + 0x1e24) = *(undefined4 *)(*(int *)(param_2 + 0x1d60) + 0xb4);
          uVar10 = *(undefined4 *)(*(int *)(param_2 + 0x1d60) + 0xb8);
          *(undefined1 *)(param_2 + 0x1d38) = 1;
          *(undefined4 *)(param_2 + 0x1dfc) = uVar10;
          *(undefined4 *)(param_2 + 0x1e0c) = 0;
          *(undefined4 *)(param_2 + 0x1e2c) = 3;
          *(undefined4 *)(param_2 + 0x206c) = 4;
          if (*(char *)(param_2 + 0x1905) == '\0') {
            *(undefined1 *)(param_2 + 0x1905) = 1;
            FUN_10032568(param_2);
          }
          *(undefined1 *)(param_2 + 0x21d2) = 1;
          *(undefined2 *)(param_2 + 0x21d0) = 0x101;
        }
      }
      *(undefined1 *)(param_2 + 0x21cc) = 0;
      *(undefined4 *)(param_2 + 0x21c8) = 1;
      FUN_100377d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  else {
    (*(code *)PTR_FUN_100a100c)();
  }
  return;
}

