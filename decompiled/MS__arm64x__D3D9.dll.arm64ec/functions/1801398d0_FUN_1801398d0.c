/*
 * FUN_1801398d0 at 1801398d0
 * undefined FUN_1801398d0(void)
 * Address ranges: 1801398d0-180139e93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801398d0(undefined4 param_1,longlong param_2,int param_3,int *param_4,uint param_5,
                  uint param_6,int param_7,longlong param_8)

{
  longlong lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  uint uVar4;
  longlong lVar7;
  longlong in_x9;
  uint in_w10;
  uint uVar8;
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
  code *extraout_x11_12;
  code *extraout_x11_13;
  code *extraout_x11_14;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  uint uStack0000000000000010;
  int iStack0000000000000014;
  uint uStack0000000000000018;
  int iStack000000000000001c;
  longlong lStack0000000000000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  int *piStack0000000000000030;
  uint in_stack_00000038;
  uint uStack000000000000003c;
  uint uVar5;
  uint uVar6;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  uStack0000000000000010 = param_6;
  iStack0000000000000014 = param_7;
  uStack0000000000000018 = in_w10;
  iStack000000000000001c = param_3;
  lStack0000000000000020 = in_x9;
  piStack0000000000000030 = param_4;
  if (*(longlong *)(param_2 + 0xf9b0) != 0) {
    uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar3,*(undefined4 *)(param_2 + 0xf9d8),*(undefined4 *)(param_2 + 0xf9e8),0);
  }
  if (*(longlong *)(param_2 + 0xf9b8) != 0) {
    uVar3 = (*(code *)puVar2)(0x180224000);
    (*extraout_x11_00)(uVar3,*(undefined4 *)(param_2 + 0xf9dc),*(undefined4 *)(param_2 + 0xf9ec),0);
  }
  if (*(longlong *)(param_2 + 0xf9c0) != 0) {
    uVar3 = (*(code *)puVar2)(0x180224000);
    (*extraout_x11_01)(uVar3,*(undefined4 *)(param_2 + 0xf9e0),*(undefined4 *)(param_2 + 0xf9f0),0);
  }
  if (*(longlong *)(param_2 + 0xf9c8) != 0) {
    uVar3 = (*(code *)puVar2)(0x180224000);
    (*extraout_x11_02)(uVar3,*(undefined4 *)(param_2 + 0xf9e4),*(undefined4 *)(param_2 + 0xf9f4),0);
  }
  if (*(longlong *)(param_2 + 0xf9d0) != 0) {
    uVar3 = (*(code *)puVar2)(0x180224000);
    (*extraout_x11_03)(uVar3,*(undefined4 *)(param_2 + 0xf9f8),*(undefined4 *)(param_2 + 0xf9fc),0);
  }
  lVar10 = 0;
  if (param_8 != 0) {
    (*(code *)puVar2)(0x180224000);
    lVar10 = (*extraout_x11_04)(param_8 + -0xe0,0);
  }
  lVar7 = *(longlong *)(param_2 + 0xf9b0);
  lVar9 = lVar7;
  if (lVar7 == 0) {
    lVar9 = *(longlong *)(param_2 + 0xf9d0);
  }
  lVar1 = 0xf9f8;
  if (lVar7 != 0) {
    lVar1 = 0xf9d8;
  }
  if ((((param_8 == 0) && (lVar9 != 0 && iStack000000000000001c == 1)) &&
      (*piStack0000000000000030 == 0)) && (piStack0000000000000030[1] == 0)) {
    uVar4 = *(uint *)(lVar9 + 0x24) >> (ulonglong)(*(uint *)(param_2 + lVar1) & 0x1f);
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    if (piStack0000000000000030[2] == uVar4) {
      uVar4 = *(uint *)(lVar9 + 0x28) >> (ulonglong)(*(uint *)(param_2 + lVar1) & 0x1f);
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      if (piStack0000000000000030[3] == uVar4) {
        FUN_180137af0(param_2,0,0,0);
        if ((param_5 & 1) != 0) {
          if (*(int *)(lStack0000000000000020 + 0x299c) == 0) {
            uVar8 = 0xff;
            uVar6 = uStack0000000000000010 >> 0x10 & 0xff;
            uVar5 = uStack0000000000000010 >> 8 & 0xff;
            uVar4 = uStack0000000000000010 & 0xff;
          }
          else {
            uVar6 = *(uint *)(lStack0000000000000020 + 0x29b0) & uStack0000000000000010 >> 0x10;
            uVar5 = *(uint *)(lStack0000000000000020 + 0x29b4) & uStack0000000000000010 >> 8;
            uVar8 = *(uint *)(lStack0000000000000020 + 0x29bc);
            uVar4 = *(uint *)(lStack0000000000000020 + 0x29b8) & uStack0000000000000010;
          }
          lStack0000000000000020 = CONCAT44((float)uVar5 / 255.0,(float)uVar6 / 255.0);
          fStack0000000000000028 = (float)uVar4 / 255.0;
          fStack000000000000002c = (float)(uVar8 & uStack0000000000000010 >> 0x18) / 255.0;
          if (*(longlong *)(param_2 + 0xfb00) != 0) {
            lVar10 = *(longlong *)(param_2 + 0xf9b0);
            uVar4 = *(uint *)(param_2 + 0xf9d8);
            piStack0000000000000030 = (int *)0x0;
            in_stack_00000038 = *(uint *)(lVar10 + 0x24) >> (ulonglong)(uVar4 & 0x1f);
            if (in_stack_00000038 == 0) {
              in_stack_00000038 = 1;
            }
            uStack000000000000003c = *(uint *)(lVar10 + 0x28) >> (ulonglong)(uVar4 & 0x1f);
            if (uStack000000000000003c == 0) {
              uStack000000000000003c = 1;
            }
            auVar11 = (*(code *)puVar2)(0x180224000,lVar10,
                                        uVar4 + *(int *)(lVar10 + 0x3c) * *(int *)(param_2 + 0xf9e8)
                                       );
            (*extraout_x11_05)(auVar11._0_8_,auVar11._8_8_,&stack0x00000030);
            uVar3 = (*(code *)puVar2)(0x180224000);
            (*extraout_x11_06)(uVar3,*(undefined8 *)(param_2 + 0xfb00),&stack0x00000020);
          }
          if (*(longlong *)(param_2 + 0xfb08) != 0) {
            lVar10 = *(longlong *)(param_2 + 0xf9b8);
            uVar4 = *(uint *)(param_2 + 0xf9dc);
            piStack0000000000000030 = (int *)0x0;
            in_stack_00000038 = *(uint *)(lVar10 + 0x24) >> (ulonglong)(uVar4 & 0x1f);
            if (in_stack_00000038 == 0) {
              in_stack_00000038 = 1;
            }
            uStack000000000000003c = *(uint *)(lVar10 + 0x28) >> (ulonglong)(uVar4 & 0x1f);
            if (uStack000000000000003c == 0) {
              uStack000000000000003c = 1;
            }
            auVar11 = (*(code *)puVar2)(0x180224000,lVar10,
                                        uVar4 + *(int *)(lVar10 + 0x3c) * *(int *)(param_2 + 0xf9ec)
                                       );
            (*extraout_x11_07)(auVar11._0_8_,auVar11._8_8_,&stack0x00000030);
            uVar3 = (*(code *)puVar2)(0x180224000);
            (*extraout_x11_08)(uVar3,*(undefined8 *)(param_2 + 0xfb08),&stack0x00000020);
          }
          if (*(longlong *)(param_2 + 0xfb10) != 0) {
            uVar4 = *(uint *)(param_2 + 0xf9e0);
            lVar10 = *(longlong *)(param_2 + 0xf9c0);
            piStack0000000000000030 = (int *)0x0;
            in_stack_00000038 = *(uint *)(lVar10 + 0x24) >> (ulonglong)(uVar4 & 0x1f);
            if (in_stack_00000038 == 0) {
              in_stack_00000038 = 1;
            }
            uStack000000000000003c = *(uint *)(lVar10 + 0x28) >> (ulonglong)(uVar4 & 0x1f);
            if (uStack000000000000003c == 0) {
              uStack000000000000003c = 1;
            }
            auVar11 = (*(code *)puVar2)(0x180224000,lVar10,
                                        uVar4 + *(int *)(lVar10 + 0x3c) * *(int *)(param_2 + 0xf9f0)
                                       );
            (*extraout_x11_09)(auVar11._0_8_,auVar11._8_8_,&stack0x00000030);
            uVar3 = (*(code *)puVar2)(0x180224000);
            (*extraout_x11_10)(uVar3,*(undefined8 *)(param_2 + 0xfb10),&stack0x00000020);
          }
          if (*(longlong *)(param_2 + 0xfb18) != 0) {
            uVar4 = *(uint *)(param_2 + 0xf9e4);
            lVar10 = *(longlong *)(param_2 + 0xf9c8);
            piStack0000000000000030 = (int *)0x0;
            in_stack_00000038 = *(uint *)(lVar10 + 0x24) >> (ulonglong)(uVar4 & 0x1f);
            if (in_stack_00000038 == 0) {
              in_stack_00000038 = 1;
            }
            uStack000000000000003c = *(uint *)(lVar10 + 0x28) >> (ulonglong)(uVar4 & 0x1f);
            if (uStack000000000000003c == 0) {
              uStack000000000000003c = 1;
            }
            auVar11 = (*(code *)puVar2)(0x180224000,lVar10,
                                        uVar4 + *(int *)(lVar10 + 0x3c) * *(int *)(param_2 + 0xf9f4)
                                       );
            (*extraout_x11_11)(auVar11._0_8_,auVar11._8_8_,&stack0x00000030);
            uVar3 = (*(code *)puVar2)(0x180224000);
            (*extraout_x11_12)(uVar3,*(undefined8 *)(param_2 + 0xfb18),&stack0x00000020);
          }
        }
        if ((param_5 & 6) == 0) {
          return;
        }
        if (*(longlong *)(param_2 + 0xfcb0) == 0) {
          return;
        }
        lVar10 = *(longlong *)(param_2 + 0xf9d0);
        uVar4 = *(uint *)(param_2 + 0xf9f8);
        piStack0000000000000030 = (int *)0x0;
        in_stack_00000038 = *(uint *)(lVar10 + 0x24) >> (ulonglong)(uVar4 & 0x1f);
        if (in_stack_00000038 == 0) {
          in_stack_00000038 = 1;
        }
        uStack000000000000003c = *(uint *)(lVar10 + 0x28) >> (ulonglong)(uVar4 & 0x1f);
        if (uStack000000000000003c == 0) {
          uStack000000000000003c = 1;
        }
        auVar11 = (*(code *)puVar2)(0x180224000,lVar10,
                                    uVar4 + *(int *)(lVar10 + 0x3c) * *(int *)(param_2 + 0xf9fc));
        (*extraout_x11_13)(auVar11._0_8_,auVar11._8_8_,&stack0x00000030);
        uVar3 = (*(code *)puVar2)(0x180225000,*(undefined8 *)(*(longlong *)(param_2 + 0xf6d8) + 8),
                                  extraout_x1,param_5 >> 1 & 3);
        (*extraout_x11_14)(param_1,uVar3,*(undefined8 *)(param_2 + 0xfcb0));
        return;
      }
    }
  }
  if ((((*(char *)(param_2 + 0x7662) == '\0') || (param_5 != *(uint *)(param_2 + 0x7640))) ||
      ((uStack0000000000000010 != *(uint *)(lStack0000000000000020 + 0x3644) ||
       ((iStack0000000000000014 != *(int *)(lStack0000000000000020 + 0x3648) ||
        (lVar10 != *(longlong *)(param_2 + 0xf9a8))))))) ||
     ((uint)((0x1000 - *(int *)(param_2 + 0x74)) - *(int *)(param_2 + 0x70)) <
      uStack0000000000000018)) {
    FUN_180137af0(param_2,(uint)((0x1000 - *(int *)(param_2 + 0x74)) - *(int *)(param_2 + 0x70)) <
                          uStack0000000000000018,0,0x14);
    if ((((*(char *)(param_2 + 0x7662) == '\0') || (param_5 != *(uint *)(param_2 + 0x7640))) ||
        (lVar10 != *(longlong *)(param_2 + 0xf9a8))) ||
       ((*(int *)(param_2 + 0xfe8) != 0x14 ||
        (*(int *)(param_2 + 0x102c) != *(int *)(param_2 + 0x7c))))) {
      *(uint *)(param_2 + 0x7640) = param_5;
      if (*(char *)(param_2 + 0x7662) == '\0') {
        *(undefined1 *)(param_2 + 0xf68e) = 1;
      }
      if (*(longlong *)(param_2 + 0xfcd8) != *(longlong *)(param_2 + 0xf718)) {
        *(longlong *)(param_2 + 0xfcd8) = *(longlong *)(param_2 + 0xf718);
        *(undefined1 *)(param_2 + 0xf68f) = 1;
      }
      if (*(int *)(param_2 + 0xfe8) != 0x14) {
        *(undefined4 *)(param_2 + 0xfe8) = 0x14;
        *(undefined1 *)(param_2 + 0xf68f) = 1;
      }
      if (*(int *)(param_2 + 0x102c) != *(int *)(param_2 + 0x7c)) {
        *(int *)(param_2 + 0x102c) = *(int *)(param_2 + 0x7c);
        *(undefined1 *)(param_2 + 0xf68f) = 1;
      }
      if ((lVar10 != 0) && (lVar10 != *(longlong *)(param_2 + 0xf9a8))) {
        *(undefined1 *)(param_2 + 0xf689) = 1;
        *(byte *)(param_2 + 0xf684) = *(byte *)(param_2 + 0xf684) | 1;
      }
      *(longlong *)(param_2 + 0xf9a8) = lVar10;
      *(undefined8 *)(param_2 + 0xfcb8) = *(undefined8 *)(*(longlong *)(param_2 + 0xf6e0) + 0x228);
      uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 0xf6e0) + 0x230);
      *(undefined8 *)(param_2 + 0xfcd0) = 0;
      *(undefined1 *)(param_2 + 0xf688) = 1;
      *(undefined8 *)(param_2 + 0xfcc0) = uVar3;
      *(undefined4 *)(param_2 + 0xfd80) = 4;
      *(undefined1 *)(param_2 + 0x10588) = 1;
      *(undefined1 *)(param_2 + 0x7668) = 0;
      if (*(char *)(param_2 + 0x7662) == '\0') {
        *(undefined1 *)(param_2 + 0x7662) = 1;
        FUN_180164290(param_2);
      }
    }
  }
  FUN_180168a00(param_1,param_2,iStack000000000000001c,piStack0000000000000030,param_5,
                uStack0000000000000010,iStack0000000000000014);
  return;
}

