/*
 * FUN_100e1060 at 100e1060
 * undefined FUN_100e1060(void)
 * Address ranges: 100e1060-100e14bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100e1060(int param_1,char param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  uint uVar15;
  undefined4 local_54;
  undefined4 *local_50;
  ulonglong local_48;
  
  iVar5 = *(int *)(param_1 + 0x8dc);
  uVar12 = 0;
  if ((iVar5 != 0) && (*(int *)(param_1 + 0x630) == 0)) {
    piVar1 = (int *)(param_1 + 0x624);
    uVar15 = 0;
    *piVar1 = *piVar1 + 1;
    pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (*(uint *)(param_1 + 0x954) != 0) {
      do {
        uVar10 = (*pcVar9)();
        (*extraout_w11)(uVar10);
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(uint *)(param_1 + 0x954));
    }
    iVar6 = *piVar1;
    *piVar1 = iVar6 + -1;
    if ((iVar6 + -1 == 0) && (*(int *)(param_1 + 0x8e8) == 0)) {
      puVar14 = (undefined4 *)(iVar5 + 0xc);
      uVar10 = (*pcVar9)();
      (*extraout_w11_00)(uVar10,*puVar14,*(undefined8 *)(param_1 + 0x934));
    }
    else {
      iVar6 = param_1 + -4;
      *(int *)(param_1 + 0x95c) = *(int *)(param_1 + 0x95c) + 1;
      FUN_100e0818(iVar6);
      uVar10 = (*pcVar9)();
      (*extraout_w11_01)(uVar10);
      uVar12 = *(undefined8 *)(param_1 + 0x934);
      local_54 = *(undefined4 *)(param_1 + 0x634);
      uVar10 = (*pcVar9)();
      (*extraout_w11_02)(uVar10,1,&local_54);
      puVar14 = (undefined4 *)(iVar5 + 0xc);
      uVar10 = (*pcVar9)();
      (*extraout_w11_03)(uVar10,*puVar14,uVar12);
      piVar1 = (int *)(param_1 + 0x92c);
      *(undefined8 *)(param_1 + *(int *)(param_1 + 0x92c) * 8 + 0x69c) =
           *(undefined8 *)(param_1 + 0x934);
      puVar2 = (uint *)(param_1 + 0x920);
      uVar15 = *puVar2;
      if (uVar15 == 0) {
                    /* WARNING: Does not return */
        uVar12 = SoftwareBreakpoint(0xf004,0x100e1280);
        (*(code *)uVar12)();
      }
      uVar8 = 0;
      if (uVar15 != 0) {
        uVar8 = (*piVar1 + 1U) / uVar15;
      }
      piVar3 = (int *)(param_1 + 0x928);
      *piVar1 = (*piVar1 + 1U) - uVar8 * uVar15;
      local_48 = *(ulonglong *)(iVar6 + *piVar3 * 8 + 0x6a0);
      local_50 = (undefined4 *)(param_1 + 0x8dc);
      uVar10 = (*pcVar9)();
      uVar13 = (*extraout_w11_04)(uVar10);
      iVar7 = *piVar3;
      if (uVar13 < local_48) {
        if (*piVar1 == iVar7) {
          uVar15 = *puVar2;
          if (uVar15 == 0) {
                    /* WARNING: Does not return */
            uVar12 = SoftwareBreakpoint(0xf004,0x100e1388);
            (*(code *)uVar12)();
          }
          uVar8 = 0;
          if (uVar15 != 0) {
            uVar8 = (iVar7 + 1U) / uVar15;
          }
          *piVar3 = (iVar7 + 1U) - uVar8 * uVar15;
        }
        FUN_100e91a8(*local_50,*(undefined8 *)(iVar6 + *piVar1 * 8 + 0x6a0));
        uVar10 = *(undefined4 *)(iVar6 + *piVar1 * 4 + 0x63c);
      }
      else {
        puVar14 = (undefined4 *)(iVar6 + (iVar7 + 399) * 4);
        uVar10 = *puVar14;
        *puVar14 = *(undefined4 *)(iVar6 + *piVar1 * 4 + 0x63c);
        *(undefined4 *)(iVar6 + *piVar1 * 4 + 0x63c) = uVar10;
        *(undefined8 *)(iVar6 + *piVar3 * 8 + 0x6a0) = *(undefined8 *)(iVar6 + *piVar1 * 8 + 0x6a0);
        uVar15 = *puVar2;
        if (uVar15 == 0) {
                    /* WARNING: Does not return */
          uVar12 = SoftwareBreakpoint(0xf004,0x100e1354);
          (*(code *)uVar12)();
        }
        uVar8 = 0;
        if (uVar15 != 0) {
          uVar8 = (*piVar3 + 1U) / uVar15;
        }
        *piVar3 = (*piVar3 + 1U) - uVar8 * uVar15;
      }
      (*pcVar9)();
      (*extraout_w11_05)(uVar10);
      uVar11 = (*pcVar9)();
      (*extraout_w11_06)(uVar11,uVar10,0);
      *(undefined4 *)(param_1 + 0x924) = 0;
      FUN_100ff690(param_1 + 0xc,0,0x620);
      *(undefined4 *)(param_1 + 0x618) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x614) = 0x7ff00000;
      *(undefined4 *)(param_1 + 0x610) = 0x7ff00000;
      *(undefined4 *)(param_1 + 0x60c) = 0x7ff00000;
      *(undefined4 *)(param_1 + 0x608) = 0x7ff00000;
    }
    puVar4 = (undefined8 *)(param_1 + 0x934);
    FUN_100e0858(param_1 + -4);
    if (param_2 != '\0') {
      FUN_100e91a8(iVar5,*puVar4);
    }
    *(undefined8 *)(param_1 + 0x93c) = *puVar4;
    uVar12 = FUN_100e9170(iVar5);
    *puVar4 = uVar12;
    uVar12 = 1;
    *(undefined4 *)(param_1 + 0x944) = 0;
  }
  return uVar12;
}

