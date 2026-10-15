/*
 * FUN_18014fcf0 at 18014fcf0
 * undefined FUN_18014fcf0(void)
 * Address ranges: 18014fcf0-18014fd13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18014fcf0(undefined4 param_1,longlong param_2,uint param_3,longlong param_4,uint param_5,
                  uint param_6,undefined4 param_7,longlong param_8)

{
  longlong lVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 extraout_x1;
  undefined8 uVar9;
  undefined8 extraout_x1_00;
  ulonglong extraout_x1_01;
  ulonglong extraout_x1_02;
  ulonglong extraout_x1_03;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *extraout_x11_10;
  code *extraout_x11_11;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined8 uStack_178;
  float fStack_170;
  float fStack_16c;
  longlong lStack_168;
  undefined8 uStack_160;
  uint uStack_158;
  uint uStack_154;
  uint auStack_150 [64];
  
  uStack_178 = param_2 + 0xc000;
  if (param_3 * 6 < 0x1001) {
    lStack_168 = param_4;
    FUN_18014c730();
    lVar13 = 0;
    if (param_8 != 0) {
      lVar13 = param_8 + -0x100;
    }
    lVar1 = param_2 + 0xfcc0;
    lVar18 = *(longlong *)(param_2 + 0xfcc0);
    if (lVar18 == 0) {
      lVar18 = *(longlong *)(param_2 + 0xfce0);
    }
    if ((param_8 == 0) && (lVar18 != 0)) {
      FUN_18014e9a0(param_2,0,0,0);
      lVar13 = *(longlong *)(*(longlong *)(param_2 + 0xf6e0) + 0x1508);
      *(int *)(lVar13 + 0x684) = *(int *)(lVar13 + 0x684) + 1;
      puVar3 = __hybrid_os_arm64x_dispatch_icall;
      if ((param_5 & 1) != 0) {
        lVar13 = 0;
        do {
          lVar6 = *(longlong *)(lVar1 + lVar13 * 8);
          if (lVar6 != 0) {
            uStack_160 = 0;
            uVar12 = *(uint *)(param_2 + 0xfce8 + lVar13 * 4);
            uStack_158 = *(uint *)(lVar6 + 0x24) >> (ulonglong)(uVar12 & 0x1f);
            if (uStack_158 == 0) {
              uStack_158 = 1;
            }
            uStack_154 = *(uint *)(lVar6 + 0x28) >> (ulonglong)(uVar12 & 0x1f);
            if (uStack_154 == 0) {
              uStack_154 = 1;
            }
            auVar22 = (*(code *)puVar3)(0x180224000,lVar6,
                                        uVar12 + *(int *)(lVar6 + 0x3c) *
                                                 *(int *)(param_2 + 0xfcf8 + lVar13 * 4));
            (*extraout_x11)(auVar22._0_8_,auVar22._8_8_,&uStack_160);
            lVar15 = *(longlong *)(lVar1 + lVar13 * 8);
            (*(code *)puVar3)(0x180224000);
            lVar6 = (*extraout_x11_00)(lVar15);
            iVar10 = *(int *)(param_2 + 0xfcf8 + lVar13 * 4);
            iVar4 = *(int *)(lVar15 + 0x3c);
            iVar11 = *(int *)(param_2 + 0xfce8 + lVar13 * 4);
            FUN_180147a60(param_2,lVar6,iVar10,iVar4);
            *(undefined1 *)(param_2 + 0x1018b) = 1;
            lVar15 = *(longlong *)(*(longlong *)(param_2 + 0xf6e0) + 0x1508);
            if ((*(longlong *)(lVar15 + 0xb10) != 0) && (lVar6 != 0)) {
              iVar11 = iVar11 + iVar10 * iVar4;
              iVar4 = FUN_18020e268(*(undefined8 *)(lVar15 + 0xb18),extraout_x1,iVar11,0,
                                    *(longlong *)(lVar15 + 0xb10),lVar15,4,
                                    *(undefined8 *)(lVar15 + 0xb78));
              if (*(int *)(*(longlong *)(lVar15 + 0xb10) + 0x30) != 3 && iVar4 != 4) {
                FUN_180206e88(lVar15,lVar6,iVar11,iVar4,4);
              }
            }
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 != 4);
      }
      if (((param_5 & 6) != 0) && (*(longlong *)(param_2 + 0xfce0) != 0)) {
        FUN_1801471e0(param_2);
        lVar6 = *(longlong *)(param_2 + 0xfce0);
        (*(code *)puVar3)(0x180224000);
        uVar7 = (*extraout_x11_01)();
        lVar13 = param_2 + 0x10000;
        if ((param_5 >> 1 & 1) != 0) {
          FUN_180147a60(param_2,uVar7,
                        *(int *)(uStack_178 + 0x3d08) +
                        *(int *)(uStack_178 + 0x3d0c) * *(int *)(lVar6 + 0x3c));
          *(undefined1 *)(lVar13 + 0x18b) = 1;
          FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_2 + 0xf6e0) + 0x1508));
        }
        if ((param_5 >> 2 & 1) != 0) {
          FUN_180147a60(param_2,uVar7,
                        *(int *)(uStack_178 + 0x3d08) +
                        (*(int *)(uStack_178 + 0x3d0c) + *(int *)(lVar6 + 0x34)) *
                        *(int *)(lVar6 + 0x3c));
          *(undefined1 *)(param_2 + 0x1018b) = 1;
          FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_2 + 0xf6e0) + 0x1508));
        }
      }
      uVar12 = *(uint *)(lVar18 + 0x24);
      (*(code *)puVar3)(0x180224000);
      uVar5 = (*extraout_x11_02)(lVar18,0);
      uVar8 = *(uint *)(lVar18 + 0x28);
      fVar21 = (float)uVar5 / (float)uVar12;
      (*(code *)puVar3)(0x180224000);
      auVar22 = (*extraout_x11_03)(lVar18,0);
      uVar16 = auVar22._8_8_;
      fVar20 = (float)(auVar22._0_8_ & 0xffffffff) / (float)uVar8;
      if (param_3 != 0) {
        uVar17 = 0;
        do {
          lVar13 = uVar17 * 0x10;
          iVar4 = *(int *)(lStack_168 + 4 + lVar13);
          uVar12 = (int)uVar17 + 1;
          iVar10 = *(int *)(lStack_168 + 0xc + lVar13);
          uVar8 = (uint)((float)*(int *)(lStack_168 + 8 + lVar13) * fVar21);
          uVar16 = (ulonglong)uVar8;
          auStack_150[uVar17 * 4] = (int)((float)*(int *)(lStack_168 + lVar13) * fVar21);
          auStack_150[uVar17 * 4 + 1] = (int)((float)iVar4 * fVar20);
          auStack_150[uVar17 * 4 + 2] = uVar8;
          auStack_150[uVar17 * 4 + 3] = (int)((float)iVar10 * fVar20);
          uVar17 = (ulonglong)uVar12;
        } while (uVar12 < param_3);
      }
      if ((param_5 & 1) != 0) {
        if (*(int *)(param_2 + 0x699c) == 0) {
          uVar14 = 0xff;
          uVar8 = param_6 >> 0x10 & 0xff;
          uVar5 = param_6 >> 8 & 0xff;
          uVar12 = param_6 & 0xff;
        }
        else {
          uVar8 = *(uint *)(param_2 + 0x69b0) & param_6 >> 0x10;
          uVar5 = *(uint *)(param_2 + 0x69b4) & param_6 >> 8;
          uVar14 = *(uint *)(param_2 + 0x69bc);
          uVar12 = *(uint *)(param_2 + 0x69b8) & param_6;
        }
        lVar13 = 0;
        uStack_178 = CONCAT44((float)uVar5 / 255.0,(float)uVar8 / 255.0);
        fStack_170 = (float)uVar12 / 255.0;
        fStack_16c = (float)(uVar14 & param_6 >> 0x18) / 255.0;
        do {
          if (*(longlong *)(lVar1 + lVar13 * 8) != 0) {
            uVar7 = *(undefined8 *)(param_2 + 0xfba0 + lVar13 * 8);
            lVar18 = *(longlong *)(*(longlong *)(param_2 + 0xf6e0) + 0x1508);
            iVar4 = *(int *)(lVar18 + 0xb28);
            if (iVar4 != 0) {
              iVar10 = *(int *)(lVar18 + 0x67c);
              uVar19 = *(undefined8 *)(lVar18 + 0xb20);
              *(int *)(lVar18 + 0x67c) = iVar10 + 1;
              if (((iVar10 == 0) && (*(longlong *)(lVar18 + 0xb10) != 0)) &&
                 (*(int *)(lVar18 + 0xba8) != 0)) {
                uVar9 = 0x180224000;
                uVar16 = 0;
                do {
                  (*(code *)puVar3)(*(undefined8 *)(*(longlong *)(lVar18 + 0xba0) + uVar16 * 8),
                                    uVar9);
                  (*extraout_x11_04)();
                  uVar12 = (int)uVar16 + 1;
                  uVar16 = (ulonglong)uVar12;
                  uVar9 = extraout_x1_00;
                } while (uVar12 < *(uint *)(lVar18 + 0xba8));
              }
              uVar9 = (*(code *)puVar3)(0x180224000);
              (*extraout_x11_05)(uVar9,iVar4,uVar19);
              *(undefined4 *)(lVar18 + 0xb28) = 0;
            }
            iVar4 = *(int *)(lVar18 + 0x67c);
            *(int *)(lVar18 + 0x67c) = iVar4 + 1;
            if (((iVar4 == 0) && (*(longlong *)(lVar18 + 0xb10) != 0)) &&
               (uVar12 = 0, *(int *)(lVar18 + 0xba8) != 0)) {
              do {
                (*(code *)puVar3)();
                (*extraout_x11_06)();
                uVar12 = uVar12 + 1;
              } while (uVar12 < *(uint *)(lVar18 + 0xba8));
            }
            uVar19 = (*(code *)puVar3)(0x180225000);
            (*extraout_x11_07)(uVar19,uVar7,&uStack_178,param_3,auStack_150);
            cVar2 = *(char *)(lVar18 + 0x674);
            *(undefined1 *)(lVar18 + 0x674) = 0;
            iVar4 = 8;
            if (cVar2 == '\0') {
              iVar4 = 1;
            }
            iVar4 = iVar4 + *(int *)(lVar18 + 0x678);
            *(int *)(lVar18 + 0x678) = iVar4;
            uVar16 = extraout_x1_01;
            if (((*(int *)(lVar18 + 0x680) <= iVar4) && (*(longlong *)(lVar18 + 0xb10) != 0)) &&
               (*(int *)(lVar18 + 0x684) == 0)) {
              FUN_180207560(lVar18 + 8,0);
              uVar16 = extraout_x1_02;
            }
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 != 4);
      }
      if (((param_5 & 6) != 0) && (*(longlong *)(param_2 + 0xfce0) != 0)) {
        uVar7 = *(undefined8 *)(param_2 + 0xfcb0);
        lVar13 = *(longlong *)(*(longlong *)(param_2 + 0xf6e0) + 0x1508);
        iVar4 = *(int *)(lVar13 + 0xb28);
        if (iVar4 != 0) {
          iVar10 = *(int *)(lVar13 + 0x67c);
          uVar19 = *(undefined8 *)(lVar13 + 0xb20);
          *(int *)(lVar13 + 0x67c) = iVar10 + 1;
          if (((iVar10 == 0) && (*(longlong *)(lVar13 + 0xb10) != 0)) &&
             (*(int *)(lVar13 + 0xba8) != 0)) {
            uVar16 = 0x180224000;
            uVar17 = 0;
            do {
              (*(code *)puVar3)(*(undefined8 *)(*(longlong *)(lVar13 + 0xba0) + uVar17 * 8),uVar16);
              (*extraout_x11_08)();
              uVar12 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar12;
              uVar16 = extraout_x1_03;
            } while (uVar12 < *(uint *)(lVar13 + 0xba8));
          }
          uVar19 = (*(code *)puVar3)(0x180224000,*(undefined8 *)(lVar13 + 0x688),uVar16,uVar19);
          (*extraout_x11_09)(uVar19,iVar4);
          *(undefined4 *)(lVar13 + 0xb28) = 0;
        }
        iVar4 = *(int *)(lVar13 + 0x67c);
        *(int *)(lVar13 + 0x67c) = iVar4 + 1;
        if (((iVar4 == 0) && (*(longlong *)(lVar13 + 0xb10) != 0)) &&
           (uVar12 = 0, *(int *)(lVar13 + 0xba8) != 0)) {
          do {
            (*(code *)puVar3)();
            (*extraout_x11_10)();
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)(lVar13 + 0xba8));
        }
        uVar19 = (*(code *)puVar3)(0x180225000);
        (*extraout_x11_11)(param_1,uVar19,uVar7,param_5 >> 1 & 3,param_7,param_3,auStack_150);
        cVar2 = *(char *)(lVar13 + 0x674);
        *(undefined1 *)(lVar13 + 0x674) = 0;
        iVar4 = 8;
        if (cVar2 == '\0') {
          iVar4 = 1;
        }
        iVar4 = iVar4 + *(int *)(lVar13 + 0x678);
        *(int *)(lVar13 + 0x678) = iVar4;
        if (((*(int *)(lVar13 + 0x680) <= iVar4) && (*(longlong *)(lVar13 + 0xb10) != 0)) &&
           (*(int *)(lVar13 + 0x684) == 0)) {
          FUN_180207560(lVar13 + 8,0);
        }
      }
      lVar13 = *(longlong *)(*(longlong *)(param_2 + 0xf6e0) + 0x1508);
      iVar4 = *(int *)(lVar13 + 0x684) + -1;
      *(int *)(lVar13 + 0x684) = iVar4;
      if ((iVar4 == 0) && (*(int *)(lVar13 + 0x680) <= *(int *)(lVar13 + 0x678))) {
        FUN_180207560(lVar13 + 8,0);
      }
    }
    else {
      FUN_18014e620(param_2,param_3 * 6,param_5,param_6,param_7,lVar13);
      *(undefined4 *)(param_2 + 0x10180) = 1;
      *(undefined1 *)(param_2 + 0x10184) = 0;
      FUN_180168a00(param_1,param_2,param_3,lStack_168,param_5,param_6,param_7);
    }
    return;
  }
  thunk_FUN_180223720();
  return;
}

