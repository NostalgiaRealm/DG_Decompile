/*
 * FUN_18013ce18 at 18013ce18
 * undefined FUN_18013ce18(void)
 * Address ranges: 18013ce18-18013d0f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013ce18(longlong param_1,int param_2,undefined8 param_3,longlong param_4,int param_5,
                  uint param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  int iVar9;
  longlong lVar10;
  
  puVar4 = __hybrid_os_arm64x_dispatch_icall;
  lVar10 = 0;
  do {
    if (*(longlong *)(param_1 + 0xf9b0 + lVar10 * 8) != 0) {
      uVar5 = (*(code *)puVar4)();
      (*extraout_x11)(uVar5,*(undefined4 *)(param_1 + 0xf9d8 + lVar10 * 4),
                      *(undefined4 *)(param_1 + 0xf9e8 + lVar10 * 4),0);
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 4);
  if (*(longlong *)(param_1 + 0xf9d0) != 0) {
    uVar5 = (*(code *)puVar4)(0x180224000);
    (*extraout_x11_00)(uVar5,*(undefined4 *)(param_1 + 0xf9f8),*(undefined4 *)(param_1 + 0xf9fc),0);
  }
  FUN_180137af0(param_1,0,0,0);
  uVar2 = *(undefined4 *)(param_1 + 0x1028);
  uVar3 = *(undefined4 *)(param_1 + 0x106c);
  uVar5 = *(undefined8 *)(param_1 + 0xfd60);
  if (param_2 == 6) {
    if (2 < param_6) {
      iVar9 = 0;
      for (param_6 = param_6 - 2; param_6 != 0; param_6 = param_6 - uVar1) {
        iVar7 = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90);
        if (0x1000U - iVar7 < 0x10) {
          FUN_180137af0(param_1,0,1,0);
          iVar7 = 0;
        }
        uVar1 = (0x1000U - iVar7) / 3;
        if (param_6 < (0x1000U - iVar7) / 3) {
          uVar1 = param_6;
        }
        if (param_4 == 0) {
          FUN_180137c90(param_1,4,param_3);
        }
        else {
          FUN_18013b478(param_1,4,param_4 + -0x30,uVar5,*(undefined8 *)(param_1 + 0xf710),uVar3,
                        uVar2,0,uVar1 * 3,0,0);
        }
        uVar8 = 0;
        if (uVar1 != 0) {
          do {
            **(int **)(param_1 + 0x88) = uVar8 + param_5 + 1 + iVar9;
            iVar7 = uVar8 + param_5 + 2 + iVar9;
            uVar8 = uVar8 + 1;
            *(int *)(*(longlong *)(param_1 + 0x88) + 4) = iVar7;
            *(int *)(*(longlong *)(param_1 + 0x88) + 8) = param_5;
            *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 0xc;
          } while (uVar8 < uVar1);
        }
        iVar9 = uVar1 + iVar9;
        *(uint *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + uVar1 * 3;
      }
      FUN_180137af0(param_1,0,0,0);
    }
  }
  else {
    if (param_4 == 0) {
      FUN_180137c90(param_1,param_2,param_3);
    }
    else {
      FUN_18013b478(param_1,param_2,param_4 + -0x30,uVar5,*(undefined8 *)(param_1 + 0xfd68),uVar3,
                    uVar2,0,0,0,*(undefined1 *)(param_4 + 0x1c));
    }
    uVar6 = FUN_1801336b0(param_1);
    if ((uVar6 & 1) != 0) {
      uVar5 = (*(code *)puVar4)(0x180224000);
      (*extraout_x11_01)(uVar5,param_6,param_5);
    }
    thunk_FUN_18022370c(*(longlong *)(param_1 + 0xf6d0) + 0x620);
  }
  return;
}

