/*
 * FUN_1008b0e8 at 1008b0e8
 * undefined FUN_1008b0e8(void)
 * Address ranges: 1008b0e8-1008b443
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1008b0e8(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,
                 char param_7)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong extraout_x1;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *pcVar10;
  code *extraout_w11_02;
  code *extraout_w11_03;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  piVar1 = (int *)(param_1 + 0x14);
  uVar5 = **(undefined4 **)(param_1 + 8);
  *piVar1 = 0;
  uVar6 = FUN_1008afd8(param_1,param_5,param_6);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar11 = (uint)uVar6 & 0xff;
  if (((uVar6 & 0xff) != 0) && (param_2 != 0)) {
    iVar3 = *(int *)(param_1 + 0x10);
    if ((iVar3 == 0) || (param_7 == '\0')) {
      iVar3 = *(int *)(param_1 + 0xc);
    }
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(uVar6,iVar3);
    iVar3 = (*extraout_w11)(uVar5,extraout_x1 & 0xffffffff,param_2,piVar1);
    uVar11 = 0;
    if (-1 < iVar3) {
      uVar11 = (uint)uVar6 & 0xff;
    }
  }
  if (uVar11 != 0) {
    if ((param_3 == 0) && (param_4 == 0)) {
      return uVar11;
    }
    iVar3 = *(int *)(param_1 + 0x10);
    if (param_6 == 0) {
      return uVar11;
    }
    uVar12 = 0;
    do {
      uVar13 = 0;
      if (param_5 != 0) {
        do {
          if (param_3 == 0) {
            if (iVar3 == 0) {
              *(undefined4 *)(param_4 + 0x14) = 1;
              uVar8 = uVar13;
              uVar9 = uVar12;
            }
            else {
              uVar8 = uVar12;
              uVar9 = 1;
            }
            *(uint *)(param_4 + 0xc) = uVar8;
            *(uint *)(param_4 + 0x10) = uVar9;
            iVar4 = 0x10;
            if (iVar3 == 0) {
              iVar4 = 0xc;
            }
            puVar7 = (undefined4 *)(iVar4 + param_1);
            (*pcVar2)();
            iVar4 = param_4;
            pcVar10 = extraout_w11_01;
          }
          else {
            if (iVar3 == 0) {
              *(undefined4 *)(param_3 + 0x10) = 1;
              uVar8 = uVar13;
              uVar9 = uVar12;
            }
            else {
              uVar8 = uVar12;
              uVar9 = 1;
            }
            *(uint *)(param_3 + 8) = uVar8;
            *(uint *)(param_3 + 0xc) = uVar9;
            iVar4 = 0x10;
            if (iVar3 == 0) {
              iVar4 = 0xc;
            }
            puVar7 = (undefined4 *)(iVar4 + param_1);
            (*pcVar2)();
            iVar4 = param_3;
            pcVar10 = extraout_w11_00;
          }
          iVar4 = (*pcVar10)(uVar5,*puVar7,iVar4);
          if (iVar4 < 0) {
            uVar11 = 0;
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < param_5);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < param_6);
    if (uVar11 != 0) {
      return uVar11;
    }
  }
  uVar11 = 0;
  if (param_6 != 0) {
    do {
      if (param_5 != 0) {
        uVar12 = 0;
        do {
          iVar3 = uVar12 + uVar11 * param_5;
          if (*(int *)(*(int *)(param_1 + 0x18) + iVar3 * 0x1c) != 0) {
            uVar5 = (*pcVar2)();
            (*extraout_w11_02)(uVar5);
            *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar3 * 0x1c) = 0;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < param_5);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_6);
  }
  if (*piVar1 != 0) {
    uVar5 = (*pcVar2)();
    (*extraout_w11_03)(uVar5);
    *piVar1 = 0;
  }
  return 0;
}

