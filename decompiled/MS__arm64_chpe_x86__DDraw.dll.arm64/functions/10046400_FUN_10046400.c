/*
 * FUN_10046400 at 10046400
 * undefined FUN_10046400(void)
 * Address ranges: 10046400-10046813
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10046400(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  uint uVar14;
  int iVar15;
  int aiStack_80 [16];
  
  iVar6 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar6 == 0) {
    FUN_10001c10(0);
  }
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar6 = -0x7ff8ffa9;
  if ((param_2 != 0) || (iVar6 = -0x7789fe3e, *(char *)(param_1 + 8) != '\0')) goto LAB_100467e4;
  iVar6 = -0x7789fe34;
  piVar1 = (int *)(param_1 + 0x118);
  if (((param_3 == 0) || (*piVar1 == param_3)) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x10c) = 0;
    uVar7 = (*pcVar5)();
    (*extraout_w11)(uVar7);
    *piVar1 = 0;
    iVar6 = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  piVar1 = (int *)(param_1 + 0x110);
  iVar8 = *piVar1;
  if ((iVar8 == 0) || (iVar8 != param_3 && param_3 != 0)) goto LAB_10046784;
  iVar6 = -0x7789ffec;
  param_3 = iVar8;
  if (((*(uint *)(iVar8 + 0x1b8) >> 0xc & 1) == 0) ||
     (iVar15 = param_1, (*(uint *)(iVar8 + 0x1bc) >> 9 & 1) != 0)) {
    if ((*(uint *)(iVar8 + 0x1b8) & 0x18) != 0x10) goto LAB_10046784;
    iVar6 = *(int *)(iVar8 + 0x110);
    iVar15 = *(int *)(iVar8 + 0x114);
    if (iVar15 != 0) {
      (*pcVar5)();
      (*extraout_w11_01)(iVar15);
    }
    uVar10 = *(uint *)(*piVar1 + 0x1b8);
    if ((uVar10 >> 6 & 1) != 0) {
      *(uint *)(*piVar1 + 0x1b8) = uVar10 & 0xffffffdb;
    }
    *(uint *)(*piVar1 + 0x1b8) = *(uint *)(*piVar1 + 0x1b8) & 0xffffffef;
    *(undefined4 *)(iVar8 + 0x10c) = 0;
    uVar7 = (*pcVar5)();
    (*extraout_w11_02)(uVar7);
    if (iVar15 == 0) {
LAB_100466dc:
      iVar15 = 0;
      iVar6 = 0;
    }
    else {
      (*pcVar5)();
      iVar8 = (*extraout_w11_03)(iVar15);
      if (iVar8 == 0) goto LAB_100466dc;
    }
    *piVar1 = iVar6;
    *(int *)(param_1 + 0x114) = iVar15;
    for (iVar6 = param_1; *(int *)(iVar6 + 0x10c) != 0; iVar6 = *(int *)(iVar6 + 0x10c)) {
    }
    uVar10 = 0;
    iVar8 = iVar6;
    do {
      iVar8 = *(int *)(iVar8 + 0x110);
      uVar10 = uVar10 + 1;
    } while (iVar8 != 0);
    if (uVar10 != 0) {
      puVar3 = (uint *)(iVar6 + 0x1b8);
      uVar13 = 0;
      do {
        if (uVar10 == 1) {
          *puVar3 = *puVar3 & 0xffffffef;
        }
        uVar14 = *puVar3;
        if (uVar13 == 0) {
          uVar14 = uVar14 & 0xffffffdf;
        }
        else if (uVar13 == 1) {
          uVar14 = uVar14 | 4;
        }
        else {
          uVar14 = uVar14 & 0xfffffffb;
        }
        uVar13 = uVar13 + 1;
        *puVar3 = uVar14;
      } while (uVar13 < uVar10);
    }
LAB_10046780:
    iVar6 = 0;
  }
  else {
    for (; *(int *)(iVar15 + 0x10c) != 0; iVar15 = *(int *)(iVar15 + 0x10c)) {
    }
    if ((*(uint *)(iVar15 + 0x1b8) >> 3 & 1) == 0) {
      bVar4 = true;
      uVar10 = 0;
      for (; iVar12 = iVar8, uVar13 = uVar10, iVar15 != iVar8; iVar15 = *(int *)(iVar15 + 0x110)) {
        piVar2 = aiStack_80 + uVar10;
        uVar10 = uVar10 + 1;
        *piVar2 = iVar15;
        if (0x10 < uVar10) {
          bVar4 = false;
          uVar13 = uVar10;
          break;
        }
      }
      do {
        piVar2 = aiStack_80 + uVar10;
        uVar10 = uVar10 + 1;
        *piVar2 = iVar12;
        if (0x10 < uVar10) goto LAB_10046784;
        piVar2 = (int *)(iVar12 + 0x110);
        iVar12 = *piVar2;
      } while (*piVar2 != 0);
      if ((bVar4) && (uVar9 = FUN_1004bbf0(param_1,aiStack_80,uVar10,uVar13), (uVar9 & 1) != 0)) {
        *(undefined4 *)(iVar8 + 0x10c) = 0;
        uVar7 = (*pcVar5)();
        (*extraout_w11_00)(uVar7);
        *piVar1 = 0;
        *(undefined4 *)(param_1 + 0x114) = 0;
        goto LAB_10046780;
      }
    }
  }
LAB_10046784:
  if (((*(uint *)(param_1 + 0x1b8) >> 0x11 & 1) == 0) || (param_3 != 0)) {
    if (iVar6 < 0) goto LAB_100467e4;
  }
  else {
    iVar6 = 0;
  }
  if (DAT_100c291c != 0) {
    puVar11 = (undefined4 *)(*(int *)(param_1 + 0xfc) + 0xc);
    uVar7 = (*pcVar5)();
    (*extraout_w11_04)(uVar7,*puVar11,param_1);
  }
LAB_100467e4:
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return iVar6;
}

