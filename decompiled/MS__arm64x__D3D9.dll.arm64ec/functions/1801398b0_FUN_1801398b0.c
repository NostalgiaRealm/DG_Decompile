/*
 * FUN_1801398b0 at 1801398b0
 * undefined FUN_1801398b0(void)
 * Address ranges: 1801398b0-1801398cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801398b0(undefined4 param_1,longlong param_2,int param_3,int *param_4,uint param_5,
                  uint param_6,int param_7,longlong param_8)

{
  longlong lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  uint uVar4;
  longlong lVar7;
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
  undefined8 uStack_60;
  float fStack_58;
  float fStack_54;
  int *piStack_50;
  uint uStack_48;
  uint uStack_44;
  uint uVar5;
  uint uVar6;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  uStack_60 = param_2 + 0x4000;
  uVar4 = param_3 * 6;
  if (0x1000 < uVar4) {
    thunk_FUN_180223720();
    return;
  }
  piStack_50 = param_4;
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
  if ((((param_8 == 0) && (lVar9 != 0 && param_3 == 1)) && (*piStack_50 == 0)) &&
     (piStack_50[1] == 0)) {
    uVar6 = *(uint *)(lVar9 + 0x24) >> (ulonglong)(*(uint *)(param_2 + lVar1) & 0x1f);
    if (uVar6 == 0) {
      uVar6 = 1;
    }
    if (piStack_50[2] == uVar6) {
      uVar6 = *(uint *)(lVar9 + 0x28) >> (ulonglong)(*(uint *)(param_2 + lVar1) & 0x1f);
      if (uVar6 == 0) {
        uVar6 = 1;
      }
      if (piStack_50[3] == uVar6) {
        FUN_180137af0(param_2,0,0,0);
        if ((param_5 & 1) != 0) {
          if (*(int *)(uStack_60 + 0x299c) == 0) {
            uVar8 = 0xff;
            uVar6 = param_6 >> 0x10 & 0xff;
            uVar5 = param_6 >> 8 & 0xff;
            uVar4 = param_6 & 0xff;
          }
          else {
            uVar6 = *(uint *)(uStack_60 + 0x29b0) & param_6 >> 0x10;
            uVar5 = *(uint *)(uStack_60 + 0x29b4) & param_6 >> 8;
            uVar8 = *(uint *)(uStack_60 + 0x29bc);
            uVar4 = *(uint *)(uStack_60 + 0x29b8) & param_6;
          }
          uStack_60 = CONCAT44((float)uVar5 / 255.0,(float)uVar6 / 255.0);
          fStack_58 = (float)uVar4 / 255.0;
          fStack_54 = (float)(uVar8 & param_6 >> 0x18) / 255.0;
          if (*(longlong *)(param_2 + 0xfb00) != 0) {
            lVar10 = *(longlong *)(param_2 + 0xf9b0);
            uVar4 = *(uint *)(param_2 + 0xf9d8);
            piStack_50 = (int *)0x0;
            uStack_48 = *(uint *)(lVar10 + 0x24) >> (ulonglong)(uVar4 & 0x1f);
            if (uStack_48 == 0) {
              uStack_48 = 1;
            }
            uStack_44 = *(uint *)(lVar10 + 0x28) >> (ulonglong)(uVar4 & 0x1f);
            if (uStack_44 == 0) {
              uStack_44 = 1;
            }
            auVar11 = (*(code *)puVar2)(0x180224000,lVar10,
                                        uVar4 + *(int *)(lVar10 + 0x3c) * *(int *)(param_2 + 0xf9e8)
                                       );
            (*extraout_x11_05)(auVar11._0_8_,auVar11._8_8_,&piStack_50);
            uVar3 = (*(code *)puVar2)(0x180224000);
            (*extraout_x11_06)(uVar3,*(undefined8 *)(param_2 + 0xfb00),&uStack_60);
          }
          if (*(longlong *)(param_2 + 0xfb08) != 0) {
            lVar10 = *(longlong *)(param_2 + 0xf9b8);
            uVar4 = *(uint *)(param_2 + 0xf9dc);
            piStack_50 = (int *)0x0;
            uStack_48 = *(uint *)(lVar10 + 0x24) >> (ulonglong)(uVar4 & 0x1f);
            if (uStack_48 == 0) {
              uStack_48 = 1;
            }
            uStack_44 = *(uint *)(lVar10 + 0x28) >> (ulonglong)(uVar4 & 0x1f);
            if (uStack_44 == 0) {
              uStack_44 = 1;
            }
            auVar11 = (*(code *)puVar2)(0x180224000,lVar10,
                                        uVar4 + *(int *)(lVar10 + 0x3c) * *(int *)(param_2 + 0xf9ec)
                                       );
            (*extraout_x11_07)(auVar11._0_8_,auVar11._8_8_,&piStack_50);
            uVar3 = (*(code *)puVar2)(0x180224000);
            (*extraout_x11_08)(uVar3,*(undefined8 *)(param_2 + 0xfb08),&uStack_60);
          }
          if (*(longlong *)(param_2 + 0xfb10) != 0) {
            uVar4 = *(uint *)(param_2 + 0xf9e0);
            lVar10 = *(longlong *)(param_2 + 0xf9c0);
            piStack_50 = (int *)0x0;
            uStack_48 = *(uint *)(lVar10 + 0x24) >> (ulonglong)(uVar4 & 0x1f);
            if (uStack_48 == 0) {
              uStack_48 = 1;
            }
            uStack_44 = *(uint *)(lVar10 + 0x28) >> (ulonglong)(uVar4 & 0x1f);
            if (uStack_44 == 0) {
              uStack_44 = 1;
            }
            auVar11 = (*(code *)puVar2)(0x180224000,lVar10,
                                        uVar4 + *(int *)(lVar10 + 0x3c) * *(int *)(param_2 + 0xf9f0)
                                       );
            (*extraout_x11_09)(auVar11._0_8_,auVar11._8_8_,&piStack_50);
            uVar3 = (*(code *)puVar2)(0x180224000);
            (*extraout_x11_10)(uVar3,*(undefined8 *)(param_2 + 0xfb10),&uStack_60);
          }
          if (*(longlong *)(param_2 + 0xfb18) != 0) {
            uVar4 = *(uint *)(param_2 + 0xf9e4);
            lVar10 = *(longlong *)(param_2 + 0xf9c8);
            piStack_50 = (int *)0x0;
            uStack_48 = *(uint *)(lVar10 + 0x24) >> (ulonglong)(uVar4 & 0x1f);
            if (uStack_48 == 0) {
              uStack_48 = 1;
            }
            uStack_44 = *(uint *)(lVar10 + 0x28) >> (ulonglong)(uVar4 & 0x1f);
            if (uStack_44 == 0) {
              uStack_44 = 1;
            }
            auVar11 = (*(code *)puVar2)(0x180224000,lVar10,
                                        uVar4 + *(int *)(lVar10 + 0x3c) * *(int *)(param_2 + 0xf9f4)
                                       );
            (*extraout_x11_11)(auVar11._0_8_,auVar11._8_8_,&piStack_50);
            uVar3 = (*(code *)puVar2)(0x180224000);
            (*extraout_x11_12)(uVar3,*(undefined8 *)(param_2 + 0xfb18),&uStack_60);
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
        piStack_50 = (int *)0x0;
        uStack_48 = *(uint *)(lVar10 + 0x24) >> (ulonglong)(uVar4 & 0x1f);
        if (uStack_48 == 0) {
          uStack_48 = 1;
        }
        uStack_44 = *(uint *)(lVar10 + 0x28) >> (ulonglong)(uVar4 & 0x1f);
        if (uStack_44 == 0) {
          uStack_44 = 1;
        }
        auVar11 = (*(code *)puVar2)(0x180224000,lVar10,
                                    uVar4 + *(int *)(lVar10 + 0x3c) * *(int *)(param_2 + 0xf9fc));
        (*extraout_x11_13)(auVar11._0_8_,auVar11._8_8_,&piStack_50);
        uVar3 = (*(code *)puVar2)(0x180225000,*(undefined8 *)(*(longlong *)(param_2 + 0xf6d8) + 8),
                                  extraout_x1,param_5 >> 1 & 3);
        (*extraout_x11_14)(param_1,uVar3,*(undefined8 *)(param_2 + 0xfcb0));
        return;
      }
    }
  }
  if ((((*(char *)(param_2 + 0x7662) == '\0') || (param_5 != *(uint *)(param_2 + 0x7640))) ||
      ((param_6 != *(uint *)(uStack_60 + 0x3644) ||
       ((param_7 != *(int *)(uStack_60 + 0x3648) || (lVar10 != *(longlong *)(param_2 + 0xf9a8)))))))
     || ((uint)((0x1000 - *(int *)(param_2 + 0x74)) - *(int *)(param_2 + 0x70)) < uVar4)) {
    FUN_180137af0(param_2,(uint)((0x1000 - *(int *)(param_2 + 0x74)) - *(int *)(param_2 + 0x70)) <
                          uVar4,0,0x14);
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
  FUN_180168a00(param_1,param_2,param_3,piStack_50,param_5,param_6,param_7);
  return;
}

