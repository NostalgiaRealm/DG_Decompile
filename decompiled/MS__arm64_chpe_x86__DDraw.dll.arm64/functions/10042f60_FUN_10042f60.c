/*
 * FUN_10042f60 at 10042f60
 * undefined FUN_10042f60(void)
 * Address ranges: 10042f60-100435b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10042f60(int param_1,char param_2,char param_3)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
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
  code *pcVar14;
  code *extraout_w11_12;
  ulonglong extraout_x11;
  uint uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  
  uVar12 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if ((int)uVar12 == 0) {
    uVar12 = FUN_10001c10(uVar12 & 0xffffffff);
  }
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((((*(uint *)(param_1 + 0x1b8) >> 3 & 1) == 0) || (*(int *)(param_1 + 0x10c) == 0)) ||
     (param_2 != '\0')) {
    if (*(int *)(param_1 + 0xfc) != 0) {
      if (*(int *)(param_1 + 0x10) != 0) {
        auVar17 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(auVar17._0_8_ & 0xffffffff,auVar17._8_8_ & 0xffffffff);
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        auVar17 = (*pcVar6)();
        (*extraout_w11_00)(auVar17._0_8_ & 0xffffffff,auVar17._8_8_ & 0xffffffff);
      }
      if (*(int *)(param_1 + 0x104) != 0) {
        uVar7 = (*pcVar6)();
        (*extraout_w11_01)(uVar7);
      }
      if (*(int *)(param_1 + 0x108) != 0) {
        uVar7 = (*pcVar6)();
        (*extraout_w11_02)(uVar7);
      }
      *(undefined1 *)(param_1 + 8) = 0;
      if (((*(uint *)(param_1 + 0x1b8) >> 3 & 1) == 0) || (*(int *)(param_1 + 0x10c) != 0)) {
        if (param_3 == '\0') {
          FUN_10046400(param_1,0,0);
        }
      }
      else {
        FUN_10046400(param_1,0,*(undefined4 *)(param_1 + 0x118));
        iVar5 = *(int *)(param_1 + 0x110);
        while (iVar5 != 0) {
          iVar8 = *(int *)(iVar5 + 0x110);
          *(int *)(iVar5 + 0x110) = 0;
          *(undefined1 *)(iVar5 + 8) = 0;
          uVar7 = (*pcVar6)();
          (*extraout_w11_03)(uVar7,1,0);
          iVar5 = iVar8;
        }
        uVar16 = 0;
        do {
          iVar5 = *(int *)(param_1 + 0x120 + uVar16 * 4);
          if (iVar5 != 0) {
            *(undefined1 *)(iVar5 + 8) = 0;
            uVar7 = (*pcVar6)();
            (*extraout_w11_04)(uVar7,1,0);
            *(undefined4 *)(param_1 + uVar16 * 4 + 0x120) = 0;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < 5);
      }
      iVar5 = *(int *)(param_1 + 0xfc);
      if (*(char *)(iVar5 + 0x14f) == '\0') {
        if (*(uint *)(iVar5 + 300) != 0) {
          uVar16 = 0;
          do {
            piVar2 = (int *)(*(int *)(iVar5 + 0x128) + uVar16 * 4);
            if (*piVar2 == param_1) {
              *piVar2 = 0;
              break;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < *(uint *)(iVar5 + 300));
        }
      }
      else {
        if (param_1 == *(int *)(iVar5 + 0xf4)) {
          *(int *)(iVar5 + 0xf4) = 0;
        }
        if (*(uint *)(iVar5 + 300) != 0) {
          uVar16 = 0;
LAB_10043200:
          if (*(int *)(*(int *)(iVar5 + 0x128) + uVar16 * 4) != param_1) goto code_r0x10043210;
          if (DAT_100c291c != 0) {
            puVar13 = (undefined4 *)(iVar5 + 0xc);
            uVar7 = (*pcVar6)();
            (*extraout_w11_05)(uVar7,*puVar13,param_1);
          }
          (*pcVar6)();
          iVar8 = (*extraout_w11_06)(param_1);
          uVar7 = DAT_100be0c0;
          if ((*(uint *)(iVar8 + 0x68) & 0x21040) == 0x1000) {
            (*pcVar6)();
            uVar9 = (*extraout_w11_07)(uVar7,&DAT_100b17c0);
            if (uVar9 != 0) {
              (*pcVar6)();
              iVar8 = (*extraout_w11_08)(param_1);
              if (((*(uint *)(iVar8 + 0x68) & 0x2001) == 0) && (uVar9 != 0)) {
                uVar15 = 0;
                do {
                  (*pcVar6)();
                  iVar10 = (*extraout_w11_09)(uVar7,&DAT_100b17c0,uVar15);
                  if (iVar10 != 0) {
                    if ((*(uint *)(iVar8 + 0x6c) >> 9 & 1) == 0) {
                      iVar3 = 0;
                      if (param_1 != 0) {
                        iVar3 = param_1 + 0x1e8;
                      }
                      iVar4 = 0;
                      if (iVar5 != 0) {
                        iVar4 = iVar5 + 0x154;
                      }
                      uVar11 = (*pcVar6)(iVar10,iVar4,iVar3);
                      pcVar14 = extraout_w11_11;
                    }
                    else {
                      iVar3 = 0;
                      if (iVar5 != 0) {
                        iVar3 = iVar5 + 0x154;
                      }
                      uVar11 = (*pcVar6)(iVar10,iVar3);
                      pcVar14 = extraout_w11_10;
                    }
                    (*pcVar14)(uVar11);
                  }
                  uVar15 = uVar15 + 1;
                } while (uVar15 < uVar9);
              }
            }
          }
          puVar1 = (uint *)(iVar5 + 300);
          uVar9 = *puVar1;
          if (uVar16 < uVar9) {
            uVar16 = uVar16 + 1;
            if (uVar16 < uVar9) {
              do {
                puVar13 = (undefined4 *)(*(int *)(iVar5 + 0x128) + uVar16 * 4);
                uVar16 = uVar16 + 1;
                puVar13[-1] = *puVar13;
                uVar9 = *puVar1;
              } while (uVar16 < uVar9);
            }
            *puVar1 = uVar9 - 1;
          }
          if (((*(int *)(*(int *)(param_1 + 4) + 0xcc) == 1) && (*(char *)(iVar5 + 0x14c) == '\0'))
             && (uVar12 = FUN_1004d750(param_1 + 0x150), (uVar12 & 1) != 0)) {
            iVar8 = *(int *)(iVar5 + 0x11c) * 0x228;
            uVar12 = FUN_10038de8(extraout_x11 & 0xffffffff);
            *(ulonglong *)(&DAT_100be348 + iVar8) =
                 *(longlong *)(&DAT_100be348 + iVar8) + (uVar12 & 0xffffffff);
          }
          (*pcVar6)();
          iVar10 = (*extraout_w11_12)(param_1);
          iVar8 = *(int *)(iVar5 + 0x124) + -1;
          if (iVar10 == iVar8) {
            *(int *)(iVar5 + 0x124) = iVar8;
          }
        }
      }
LAB_10043528:
      uVar12 = FUN_10042af0(param_1);
    }
    uVar16 = 0;
    do {
      iVar5 = *(int *)(param_1 + 0x4c + uVar16 * 0x1c);
      if (iVar5 != 0) {
        iVar8 = param_1 + 0x34 + uVar16 * 0x1c;
        uVar12 = FUN_10041c18(uVar12,iVar8,iVar5);
        *(undefined4 *)(iVar8 + 0x18) = 0;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < 7);
    FUN_10041b60(param_1);
    FUN_10091460(param_1,0x1e8);
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return;
code_r0x10043210:
  uVar16 = uVar16 + 1;
  if (*(uint *)(iVar5 + 300) <= uVar16) goto LAB_10043528;
  goto LAB_10043200;
}

