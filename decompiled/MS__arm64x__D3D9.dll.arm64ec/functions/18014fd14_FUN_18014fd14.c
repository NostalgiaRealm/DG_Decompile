/*
 * FUN_18014fd14 at 18014fd14
 * undefined FUN_18014fd14(void)
 * Address ranges: 18014fd14-180150527
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18014fd14(longlong param_1,undefined4 param_2,longlong param_3,uint param_4,
                  longlong param_5,uint param_6,uint param_7,undefined4 param_8,longlong param_9)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
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
  longlong lVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong in_x9;
  longlong lVar15;
  undefined4 in_w10;
  uint uVar16;
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
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  uint uStack000000000000001c;
  undefined4 uStack0000000000000034;
  longlong lStack0000000000000040;
  longlong lStack0000000000000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  longlong lStack0000000000000058;
  undefined8 in_stack_00000060;
  uint uStack0000000000000068;
  uint uStack000000000000006c;
  
  uStack000000000000001c = param_7;
  uStack0000000000000034 = param_8;
  lStack0000000000000040 = param_1;
  lStack0000000000000048 = in_x9;
  lStack0000000000000058 = param_5;
  FUN_18014c730();
  uVar3 = uStack0000000000000034;
  uVar13 = uStack000000000000001c;
  lVar15 = 0;
  if (param_9 != 0) {
    lVar15 = param_9 + -0x100;
  }
  lVar11 = param_3 + 0xfcc0;
  lVar19 = *(longlong *)(param_3 + 0xfcc0);
  if (lVar19 == 0) {
    lVar19 = *(longlong *)(param_3 + 0xfce0);
  }
  if ((param_9 == 0) && (lVar19 != 0)) {
    FUN_18014e9a0(param_3,0,0,0);
    lVar15 = *(longlong *)(*(longlong *)(param_3 + 0xf6e0) + 0x1508);
    *(int *)(lVar15 + 0x684) = *(int *)(lVar15 + 0x684) + 1;
    puVar2 = __hybrid_os_arm64x_dispatch_icall;
    if ((param_6 & 1) != 0) {
      lVar15 = 0;
      do {
        lVar6 = *(longlong *)(lVar11 + lVar15 * 8);
        if (lVar6 != 0) {
          in_stack_00000060 = 0;
          uVar13 = *(uint *)(param_3 + 0xfce8 + lVar15 * 4);
          uStack0000000000000068 = *(uint *)(lVar6 + 0x24) >> (ulonglong)(uVar13 & 0x1f);
          if (uStack0000000000000068 == 0) {
            uStack0000000000000068 = 1;
          }
          uStack000000000000006c = *(uint *)(lVar6 + 0x28) >> (ulonglong)(uVar13 & 0x1f);
          if (uStack000000000000006c == 0) {
            uStack000000000000006c = 1;
          }
          auVar23 = (*(code *)puVar2)(0x180224000,lVar6,
                                      uVar13 + *(int *)(lVar6 + 0x3c) *
                                               *(int *)(param_3 + 0xfcf8 + lVar15 * 4));
          (*extraout_x11)(auVar23._0_8_,auVar23._8_8_,&stack0x00000060);
          lVar17 = *(longlong *)(lVar11 + lVar15 * 8);
          (*(code *)puVar2)(0x180224000);
          lVar6 = (*extraout_x11_00)(lVar17);
          iVar10 = *(int *)(param_3 + 0xfcf8 + lVar15 * 4);
          iVar4 = *(int *)(lVar17 + 0x3c);
          iVar12 = *(int *)(param_3 + 0xfce8 + lVar15 * 4);
          FUN_180147a60(param_3,lVar6,iVar10,iVar4);
          *(undefined1 *)(param_3 + 0x1018b) = 1;
          lVar17 = *(longlong *)(*(longlong *)(param_3 + 0xf6e0) + 0x1508);
          if ((*(longlong *)(lVar17 + 0xb10) != 0) && (lVar6 != 0)) {
            iVar12 = iVar12 + iVar10 * iVar4;
            iVar4 = FUN_18020e268(*(undefined8 *)(lVar17 + 0xb18),extraout_x1,iVar12,0,
                                  *(longlong *)(lVar17 + 0xb10),lVar17,4,
                                  *(undefined8 *)(lVar17 + 0xb78));
            if (*(int *)(*(longlong *)(lVar17 + 0xb10) + 0x30) != 3 && iVar4 != 4) {
              FUN_180206e88(lVar17,lVar6,iVar12,iVar4,4);
            }
          }
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 != 4);
    }
    if (((param_6 & 6) != 0) && (*(longlong *)(param_3 + 0xfce0) != 0)) {
      FUN_1801471e0(param_3);
      lVar6 = *(longlong *)(param_3 + 0xfce0);
      (*(code *)puVar2)(0x180224000);
      uVar7 = (*extraout_x11_01)();
      lVar15 = param_3 + 0x10000;
      if ((param_6 >> 1 & 1) != 0) {
        FUN_180147a60(param_3,uVar7,
                      *(int *)(lStack0000000000000048 + 0x3d08) +
                      *(int *)(lStack0000000000000048 + 0x3d0c) * *(int *)(lVar6 + 0x3c));
        *(undefined1 *)(lVar15 + 0x18b) = 1;
        FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_3 + 0xf6e0) + 0x1508));
      }
      if ((param_6 >> 2 & 1) != 0) {
        FUN_180147a60(param_3,uVar7,
                      *(int *)(lStack0000000000000048 + 0x3d08) +
                      (*(int *)(lStack0000000000000048 + 0x3d0c) + *(int *)(lVar6 + 0x34)) *
                      *(int *)(lVar6 + 0x3c));
        *(undefined1 *)(param_3 + 0x1018b) = 1;
        FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_3 + 0xf6e0) + 0x1508));
      }
    }
    uVar13 = *(uint *)(lVar19 + 0x24);
    (*(code *)puVar2)(0x180224000);
    uVar5 = (*extraout_x11_02)(lVar19,0);
    uVar8 = *(uint *)(lVar19 + 0x28);
    fVar22 = (float)uVar5 / (float)uVar13;
    (*(code *)puVar2)(0x180224000);
    auVar23 = (*extraout_x11_03)(lVar19,0);
    uVar18 = auVar23._8_8_;
    uVar14 = 0;
    fVar21 = (float)(auVar23._0_8_ & 0xffffffff) / (float)uVar8;
    if (param_4 != 0) {
      do {
        lVar15 = uVar14 * 0x10;
        iVar4 = *(int *)(lStack0000000000000058 + 4 + lVar15);
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        iVar10 = *(int *)(lStack0000000000000058 + 0xc + lVar15);
        uVar8 = (uint)((float)*(int *)(lStack0000000000000058 + 8 + lVar15) * fVar22);
        uVar18 = (ulonglong)uVar8;
        *(int *)(&stack0x00000070 + lVar15) =
             (int)((float)*(int *)(lStack0000000000000058 + lVar15) * fVar22);
        *(int *)(&stack0x00000074 + lVar15) = (int)((float)iVar4 * fVar21);
        *(uint *)(&stack0x00000078 + lVar15) = uVar8;
        *(int *)(&stack0x0000007c + lVar15) = (int)((float)iVar10 * fVar21);
      } while (uVar13 < param_4);
    }
    if ((param_6 & 1) != 0) {
      if (*(int *)(lStack0000000000000040 + 0x299c) == 0) {
        uVar16 = 0xff;
        uVar8 = uStack000000000000001c >> 0x10 & 0xff;
        uVar5 = uStack000000000000001c >> 8 & 0xff;
        uVar13 = uStack000000000000001c & 0xff;
      }
      else {
        uVar8 = *(uint *)(lStack0000000000000040 + 0x29b0) & uStack000000000000001c >> 0x10;
        uVar5 = *(uint *)(lStack0000000000000040 + 0x29b4) & uStack000000000000001c >> 8;
        uVar16 = *(uint *)(lStack0000000000000040 + 0x29bc);
        uVar13 = *(uint *)(lStack0000000000000040 + 0x29b8) & uStack000000000000001c;
      }
      lVar15 = 0;
      lStack0000000000000048 = CONCAT44((float)uVar5 / 255.0,(float)uVar8 / 255.0);
      fStack0000000000000050 = (float)uVar13 / 255.0;
      fStack0000000000000054 = (float)(uVar16 & uStack000000000000001c >> 0x18) / 255.0;
      lStack0000000000000040 = param_3;
      do {
        if (*(longlong *)(lVar11 + lVar15 * 8) != 0) {
          uVar7 = *(undefined8 *)(lStack0000000000000040 + 0xfba0 + lVar15 * 8);
          lVar19 = *(longlong *)(*(longlong *)(param_3 + 0xf6e0) + 0x1508);
          iVar4 = *(int *)(lVar19 + 0xb28);
          if (iVar4 != 0) {
            iVar10 = *(int *)(lVar19 + 0x67c);
            uVar20 = *(undefined8 *)(lVar19 + 0xb20);
            *(int *)(lVar19 + 0x67c) = iVar10 + 1;
            if (((iVar10 == 0) && (*(longlong *)(lVar19 + 0xb10) != 0)) &&
               (*(int *)(lVar19 + 0xba8) != 0)) {
              uVar9 = 0x180224000;
              uVar18 = 0;
              do {
                (*(code *)puVar2)(*(undefined8 *)(*(longlong *)(lVar19 + 0xba0) + uVar18 * 8),uVar9)
                ;
                (*extraout_x11_04)();
                uVar13 = (int)uVar18 + 1;
                uVar18 = (ulonglong)uVar13;
                uVar9 = extraout_x1_00;
              } while (uVar13 < *(uint *)(lVar19 + 0xba8));
            }
            uVar9 = (*(code *)puVar2)(0x180224000);
            (*extraout_x11_05)(uVar9,iVar4,uVar20);
            *(undefined4 *)(lVar19 + 0xb28) = 0;
          }
          iVar4 = *(int *)(lVar19 + 0x67c);
          *(int *)(lVar19 + 0x67c) = iVar4 + 1;
          if (((iVar4 == 0) && (*(longlong *)(lVar19 + 0xb10) != 0)) &&
             (uVar13 = 0, *(int *)(lVar19 + 0xba8) != 0)) {
            do {
              (*(code *)puVar2)();
              (*extraout_x11_06)();
              uVar13 = uVar13 + 1;
            } while (uVar13 < *(uint *)(lVar19 + 0xba8));
          }
          uVar20 = (*(code *)puVar2)(0x180225000);
          (*extraout_x11_07)(uVar20,uVar7,&stack0x00000048,param_4,&stack0x00000070);
          cVar1 = *(char *)(lVar19 + 0x674);
          *(undefined1 *)(lVar19 + 0x674) = 0;
          iVar4 = 8;
          if (cVar1 == '\0') {
            iVar4 = 1;
          }
          iVar4 = iVar4 + *(int *)(lVar19 + 0x678);
          *(int *)(lVar19 + 0x678) = iVar4;
          uVar18 = extraout_x1_01;
          if (((*(int *)(lVar19 + 0x680) <= iVar4) && (*(longlong *)(lVar19 + 0xb10) != 0)) &&
             (*(int *)(lVar19 + 0x684) == 0)) {
            FUN_180207560(lVar19 + 8,0);
            uVar18 = extraout_x1_02;
          }
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 != 4);
    }
    if (((param_6 & 6) != 0) && (*(longlong *)(param_3 + 0xfce0) != 0)) {
      uVar7 = *(undefined8 *)(param_3 + 0xfcb0);
      lVar15 = *(longlong *)(*(longlong *)(param_3 + 0xf6e0) + 0x1508);
      iVar4 = *(int *)(lVar15 + 0xb28);
      if (iVar4 != 0) {
        iVar10 = *(int *)(lVar15 + 0x67c);
        lVar11 = *(longlong *)(lVar15 + 0xb20);
        *(int *)(lVar15 + 0x67c) = iVar10 + 1;
        if (((iVar10 == 0) && (*(longlong *)(lVar15 + 0xb10) != 0)) &&
           (*(int *)(lVar15 + 0xba8) != 0)) {
          uVar18 = 0x180224000;
          uVar14 = 0;
          lStack0000000000000040 = lVar11;
          do {
            (*(code *)puVar2)(*(undefined8 *)(*(longlong *)(lVar15 + 0xba0) + uVar14 * 8),uVar18);
            (*extraout_x11_08)();
            uVar13 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar13;
            uVar18 = extraout_x1_03;
            lVar11 = lStack0000000000000040;
          } while (uVar13 < *(uint *)(lVar15 + 0xba8));
        }
        uVar20 = (*(code *)puVar2)(0x180224000,*(undefined8 *)(lVar15 + 0x688),uVar18,lVar11);
        (*extraout_x11_09)(uVar20,iVar4);
        *(undefined4 *)(lVar15 + 0xb28) = 0;
      }
      iVar4 = *(int *)(lVar15 + 0x67c);
      *(int *)(lVar15 + 0x67c) = iVar4 + 1;
      if (((iVar4 == 0) && (*(longlong *)(lVar15 + 0xb10) != 0)) &&
         (uVar13 = 0, *(int *)(lVar15 + 0xba8) != 0)) {
        do {
          (*(code *)puVar2)();
          (*extraout_x11_10)();
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(uint *)(lVar15 + 0xba8));
      }
      uVar20 = (*(code *)puVar2)(0x180225000);
      (*extraout_x11_11)(param_2,uVar20,uVar7,param_6 >> 1 & 3,uStack0000000000000034,param_4,
                         &stack0x00000070);
      cVar1 = *(char *)(lVar15 + 0x674);
      *(undefined1 *)(lVar15 + 0x674) = 0;
      iVar4 = 8;
      if (cVar1 == '\0') {
        iVar4 = 1;
      }
      iVar4 = iVar4 + *(int *)(lVar15 + 0x678);
      *(int *)(lVar15 + 0x678) = iVar4;
      if (((*(int *)(lVar15 + 0x680) <= iVar4) && (*(longlong *)(lVar15 + 0xb10) != 0)) &&
         (*(int *)(lVar15 + 0x684) == 0)) {
        FUN_180207560(lVar15 + 8,0);
      }
    }
    lVar15 = *(longlong *)(*(longlong *)(param_3 + 0xf6e0) + 0x1508);
    iVar4 = *(int *)(lVar15 + 0x684) + -1;
    *(int *)(lVar15 + 0x684) = iVar4;
    if ((iVar4 == 0) && (*(int *)(lVar15 + 0x680) <= *(int *)(lVar15 + 0x678))) {
      FUN_180207560(lVar15 + 8,0);
    }
  }
  else {
    FUN_18014e620(param_3,in_w10,param_6,uStack000000000000001c,uStack0000000000000034,lVar15);
    *(undefined4 *)(param_3 + 0x10180) = 1;
    *(undefined1 *)(param_3 + 0x10184) = 0;
    FUN_180168a00(param_2,param_3,param_4,lStack0000000000000058,param_6,uVar13,uVar3);
  }
  return;
}

