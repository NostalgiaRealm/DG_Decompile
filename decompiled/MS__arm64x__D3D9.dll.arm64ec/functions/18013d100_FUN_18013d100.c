/*
 * FUN_18013d100 at 18013d100
 * undefined FUN_18013d100(void)
 * Address ranges: 18013d100-18013d48b;18013d50c-18013d593
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013d100(longlong param_1,int param_2,undefined8 param_3,longlong param_4,longlong param_5
                  ,undefined4 param_6,uint param_7,uint param_8,char param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  uint uVar13;
  longlong lVar14;
  
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  lVar14 = 0;
  do {
    if (*(longlong *)(param_1 + 0xf9b0 + lVar14 * 8) != 0) {
      uVar5 = (*(code *)puVar3)();
      (*extraout_x11)(uVar5,*(undefined4 *)(param_1 + 0xf9d8 + lVar14 * 4),
                      *(undefined4 *)(param_1 + 0xf9e8 + lVar14 * 4),0);
    }
    lVar14 = lVar14 + 1;
  } while (lVar14 != 4);
  if (*(longlong *)(param_1 + 0xf9d0) != 0) {
    uVar5 = (*(code *)puVar3)(0x180224000);
    (*extraout_x11_00)(uVar5,*(undefined4 *)(param_1 + 0xf9f8),*(undefined4 *)(param_1 + 0xf9fc),0);
  }
  FUN_180137af0(param_1,0,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x1028);
  uVar2 = *(undefined4 *)(param_1 + 0x106c);
  uVar5 = *(undefined8 *)(param_1 + 0xfd60);
  if (param_2 == 6) {
    if (2 < param_8) {
      iVar4 = 0;
      for (param_8 = param_8 - 2; param_8 != 0; param_8 = param_8 - uVar11) {
        iVar9 = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90);
        if (0x1000U - iVar9 < 0x10) {
          FUN_180137af0(param_1,0,1,0);
          iVar9 = 0;
        }
        uVar11 = (0x1000U - iVar9) / 3;
        if (param_8 < (0x1000U - iVar9) / 3) {
          uVar11 = param_8;
        }
        if (param_4 == 0) {
          FUN_180137c90(param_1,4,param_3);
        }
        else {
          FUN_18013b478(param_1,4,param_4 + -0x30,uVar5,*(undefined8 *)(param_1 + 0xf710),uVar2,
                        uVar1,0,0,uVar11 * 3 != 0,0);
        }
        if (uVar11 != 0) {
          puVar12 = *(uint **)(param_1 + 0x88);
          uVar10 = 0;
          do {
            uVar7 = uVar10 + iVar4 + param_7 + 1;
            if (param_9 == '\0') {
              uVar7 = (uint)*(ushort *)(param_5 + (ulonglong)uVar7 * 2);
            }
            else {
              uVar7 = *(uint *)(param_5 + (ulonglong)uVar7 * 4);
            }
            uVar13 = uVar10 + iVar4 + param_7 + 2;
            if (param_9 == '\0') {
              uVar8 = (uint)*(ushort *)(param_5 + (ulonglong)param_7 * 2);
              uVar13 = (uint)*(ushort *)(param_5 + (ulonglong)uVar13 * 2);
            }
            else {
              uVar8 = *(uint *)(param_5 + (ulonglong)param_7 * 4);
              uVar13 = *(uint *)(param_5 + (ulonglong)uVar13 * 4);
            }
            *puVar12 = uVar7;
            uVar10 = uVar10 + 1;
            *(uint *)(*(longlong *)(param_1 + 0x88) + 4) = uVar13;
            *(uint *)(*(longlong *)(param_1 + 0x88) + 8) = uVar8;
            puVar12 = (uint *)(*(longlong *)(param_1 + 0x88) + 0xc);
            *(uint **)(param_1 + 0x88) = puVar12;
          } while (uVar10 < uVar11);
        }
        iVar4 = uVar11 + iVar4;
        *(uint *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + uVar11 * 3;
        *(undefined4 *)(param_1 + 0x98) = param_6;
      }
      FUN_180137af0(param_1,0,0,0);
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
  }
  else if (*(longlong *)(param_1 + 0xfd78) != 0) {
    if (param_4 == 0) {
      uVar11 = 1;
      FUN_180137c90(param_1,param_2,param_3);
    }
    else {
      FUN_18013b478(param_1,param_2,param_4 + -0x30,uVar5,*(undefined8 *)(param_1 + 0xfd68),uVar2,
                    uVar1,0,0,0,*(undefined1 *)(param_4 + 0x1c));
      uVar11 = *(uint *)(param_4 + 0x2c);
    }
    uVar6 = FUN_1801336b0(param_1);
    if ((uVar6 & 1) != 0) {
      lVar14 = *(longlong *)(param_1 + 0xfd78);
      if (*(int *)(lVar14 + 0x30) == 1) {
        uVar11 = 1;
        if (*(char *)(lVar14 + 0x34) != '\0') {
          uVar11 = 2;
        }
        param_8 = param_8 << (ulonglong)uVar11;
        if (param_8 <= *(uint *)(lVar14 + 0x28)) {
          if (*(uint *)(lVar14 + 0x28) < *(int *)(lVar14 + 0x2c) + param_8) {
            *(undefined4 *)(lVar14 + 0x2c) = 0;
          }
          uVar5 = (*(code *)puVar3)(0x180224000);
          iVar4 = (*extraout_x11_01)(uVar5,*(undefined8 *)(lVar14 + 0x20),0);
          if (-1 < iVar4) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_180104c48(param_4 + (ulonglong)*(uint *)(lVar14 + 0x2c),
                                param_5 + (ulonglong)(param_7 << (ulonglong)uVar11),param_8);
          }
        }
      }
      else if (uVar11 < 2) {
        uVar5 = (*(code *)puVar3)(0x180224000);
        (*extraout_x11_03)(uVar5,param_8,param_7,param_6);
      }
      else {
        uVar5 = (*(code *)puVar3)(0x180225000);
        (*extraout_x11_02)(uVar5,param_8,uVar11,param_7,param_6,0);
      }
    }
    thunk_FUN_18022370c(*(longlong *)(param_1 + 0xf6d0) + 0x620);
  }
  return;
}

