/*
 * FUN_1004ddc0 at 1004ddc0
 * undefined FUN_1004ddc0(void)
 * Address ranges: 1004ddc0-1004e387
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004ddc0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,uint param_7,uint param_8,char param_9)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 extraout_x1;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *pcVar14;
  code *extraout_w11_06;
  uint uVar15;
  int iVar16;
  int local_50;
  
  pcVar14 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar15 = 0;
  do {
    if (*(int *)(param_1 + 0xf830 + uVar15 * 4) != 0) {
      iVar16 = param_1 + uVar15 * 4 + 0xc000;
      uVar7 = (*pcVar14)();
      (*extraout_w11)(uVar7,*(undefined4 *)(iVar16 + 0x3844),*(undefined4 *)(iVar16 + 0x3854),0);
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 < 4);
  if (*(int *)(param_1 + 0xf840) != 0) {
    uVar7 = (*pcVar14)();
    (*extraout_w11_00)(uVar7,*(undefined4 *)(param_1 + 0xf864),*(undefined4 *)(param_1 + 0xf868),0);
  }
  FUN_10047f98(param_1,0,0,0);
  uVar7 = *(undefined4 *)(param_1 + 0xfa1c);
  uVar4 = *(undefined4 *)(param_1 + 0x1008);
  uVar5 = *(undefined4 *)(param_1 + 0x104c);
  if (param_2 == 6) {
    if (param_8 < 3) {
      return;
    }
    param_8 = param_8 - 2;
    iVar16 = 0;
    if (param_8 != 0) {
      piVar1 = (int *)(param_1 + 0x6c);
      do {
        iVar8 = *piVar1 + *(int *)(param_1 + 0x68);
        if (0x1000U - iVar8 < 0x10) {
          FUN_10047f98(param_1,0,1,0);
          iVar8 = 0;
        }
        uVar15 = (0x1000U - iVar8) / 3;
        if (param_8 < (0x1000U - iVar8) / 3) {
          uVar15 = param_8;
        }
        if (param_4 == 0) {
          FUN_10048180(param_1,4,param_3);
        }
        else {
          FUN_1004c200(param_1,4,param_4 + -0x18,uVar7,*(undefined4 *)(param_1 + 0xf6d0),uVar5,uVar4
                       ,0,0);
        }
        if (uVar15 != 0) {
          piVar2 = (int *)(param_1 + 100);
          puVar6 = (uint *)*piVar2;
          uVar13 = 0;
          do {
            iVar8 = iVar16 + param_7 + uVar13 + 1;
            iVar3 = iVar16 + param_7 + uVar13;
            if (param_9 == '\0') {
              uVar10 = (uint)*(ushort *)(param_5 + param_7 * 2);
              uVar12 = (uint)*(ushort *)(param_5 + iVar3 * 2 + 4);
              uVar11 = (uint)*(ushort *)(param_5 + iVar8 * 2);
            }
            else {
              uVar10 = *(uint *)(param_5 + param_7 * 4);
              uVar12 = *(uint *)(param_5 + iVar3 * 4 + 8);
              uVar11 = *(uint *)(param_5 + iVar8 * 4);
            }
            *puVar6 = uVar11;
            uVar13 = uVar13 + 1;
            *(uint *)(*piVar2 + 4) = uVar12;
            *(uint *)(*piVar2 + 8) = uVar10;
            puVar6 = (uint *)(*piVar2 + 0xc);
            *piVar2 = (int)puVar6;
          } while (uVar13 < uVar15);
        }
        param_8 = param_8 - uVar15;
        iVar16 = uVar15 + iVar16;
        *piVar1 = uVar15 * 3 + *piVar1;
        *(undefined4 *)(param_1 + 0x70) = param_6;
      } while (param_8 != 0);
    }
    FUN_10047f98(param_1,0,0,0);
    *(undefined4 *)(param_1 + 0x70) = 0;
    return;
  }
  if (*(int *)(param_1 + 0xfa28) == 0) {
    return;
  }
  if (param_4 == 0) {
    uVar15 = 1;
    FUN_10048180(param_1,param_2,param_3);
  }
  else {
    FUN_1004c200(param_1,param_2,param_4 + -0x18,uVar7,*(undefined4 *)(param_1 + 0xfa20),uVar5,uVar4
                 ,0,0);
    uVar15 = *(uint *)(param_4 + 0x20);
  }
  uVar9 = FUN_10042d20(param_1);
  if ((uVar9 & 1) == 0) goto LAB_1004e354;
  iVar16 = *(int *)(param_1 + 0xfa28);
  if (*(int *)(iVar16 + 0x1c) == 1) {
    uVar13 = 1;
    if (*(char *)(iVar16 + 0x20) != '\0') {
      uVar13 = 2;
    }
    uVar10 = param_8 << (ulonglong)uVar13;
    if (*(uint *)(iVar16 + 0x14) < uVar10) goto LAB_1004e354;
    puVar6 = (uint *)(iVar16 + 0x18);
    if (*(uint *)(iVar16 + 0x14) < uVar10 + *puVar6) {
      *puVar6 = 0;
    }
    uVar7 = (*pcVar14)();
    iVar8 = (*extraout_w11_01)(uVar7,*(undefined4 *)(iVar16 + 0x10),0);
    if (iVar8 < 0) goto LAB_1004e354;
    FUN_101325a0(local_50 + *puVar6,(param_7 << (ulonglong)uVar13) + param_5,uVar10);
    uVar7 = (*pcVar14)();
    (*extraout_w11_02)(uVar7,*(undefined4 *)(iVar16 + 0x10),0);
    uVar9 = (ulonglong)(*puVar6 >> (ulonglong)uVar13);
    *puVar6 = *puVar6 + uVar10;
    if (uVar15 < 2) {
      uVar7 = (*pcVar14)(*(undefined4 *)(*(int *)(param_1 + 0xf6b4) + 4),extraout_x1,uVar9);
      uVar9 = uVar9 & 0xffffffff;
      pcVar14 = extraout_w11_04;
      goto LAB_1004e344;
    }
    uVar7 = (*pcVar14)();
    uVar9 = uVar9 & 0xffffffff;
    pcVar14 = extraout_w11_03;
  }
  else {
    if (uVar15 < 2) {
      uVar7 = (*pcVar14)();
      uVar9 = (ulonglong)param_7;
      pcVar14 = extraout_w11_06;
LAB_1004e344:
      (*pcVar14)(uVar7,param_8,uVar9,param_6);
      goto LAB_1004e354;
    }
    uVar7 = (*pcVar14)();
    uVar9 = (ulonglong)param_7;
    pcVar14 = extraout_w11_05;
  }
  (*pcVar14)(uVar7,param_8,uVar15,uVar9,param_6,0);
LAB_1004e354:
  (*(code *)PTR_FUN_1016c0c0)(*(int *)(param_1 + 0xf6b0) + 0x4a0);
  return;
}

