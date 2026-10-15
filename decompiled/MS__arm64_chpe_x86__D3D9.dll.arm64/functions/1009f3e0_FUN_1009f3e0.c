/*
 * FUN_1009f3e0 at 1009f3e0
 * undefined FUN_1009f3e0(void)
 * Address ranges: 1009f3e0-1009f8b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1009f3e0(undefined8 param_1,uint *param_2,ulonglong param_3,uint param_4,int param_5,
                   int param_6,undefined4 param_7,char param_8,char param_9)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  undefined4 *extraout_w12;
  
  if (1 < *(byte *)(*(int *)(param_6 + 0x10) + 0x4a6c)) {
    puVar6 = (uint *)FUN_10096358(param_1,param_2,param_3 & 0xffffffff,param_4,param_5,param_6,
                                  param_7,param_8,param_9);
    return puVar6;
  }
  *(undefined4 *)(param_6 + 0x470) = 0;
  uVar10 = *param_2;
  uVar14 = (uVar10 & 0x1800 | uVar10 >> 0x14 & 0x7ff) >> 8;
  if (6 < uVar14) goto switchD_1009f4ac_caseD_1;
  uVar1 = uVar10 & 0x7ff;
  uVar10 = (uint)(param_3 >> 0x10) & 0xffff & uVar10 >> 0x10 & 0xf;
  uVar9 = (undefined1)uVar10;
  switch(uVar14) {
  case 0:
    piVar15 = (int *)(param_6 + (uVar1 + 0x4b) * 4);
    iVar7 = *piVar15;
    if (iVar7 == 0) {
      iVar7 = FUN_10121590(param_6 + 0x18,4,1);
      *piVar15 = iVar7;
    }
    *(undefined1 *)(param_6 + 0x314) = uVar9;
    *(undefined8 *)(param_6 + 800) = 0xffffffffffffffff;
    *(int *)(param_6 + 0x310) = iVar7;
    break;
  default:
    goto switchD_1009f4ac_caseD_1;
  case 3:
    *(undefined4 *)(param_6 + 0x310) = *(undefined4 *)(param_6 + 0x224);
    *(undefined1 *)(param_6 + 0x314) = 1;
    *(undefined8 *)(param_6 + 800) = 0xffffffffffffffff;
    break;
  case 4:
    switch(uVar1) {
    case 0:
      puVar11 = (undefined4 *)(param_6 + 0x1e8);
      break;
    case 1:
      puVar11 = (undefined4 *)(param_6 + 0x1ec);
      uVar10 = 1;
      break;
    case 2:
      puVar11 = (undefined4 *)(param_6 + 0x1f0);
      uVar10 = 2;
      break;
    default:
      goto switchD_1009f4ac_caseD_1;
    }
    goto LAB_1009f598;
  case 5:
    FUN_1009f358(param_1,param_6,*(undefined4 *)(param_6 + uVar1 * 4 + 500),uVar10,param_6 + 0x310);
    *extraout_w12 = 0x2000;
    goto switchD_1009f4ac_caseD_1;
  case 6:
    puVar11 = (undefined4 *)(param_6 + uVar1 * 4 + 0x1fc);
LAB_1009f598:
    FUN_1009f358(param_1,param_6,*puVar11,uVar10,param_6 + 0x310);
    goto switchD_1009f4ac_caseD_1;
  }
  *(undefined8 *)(param_6 + 0x328) = 0xffffffffffffffff;
switchD_1009f4ac_caseD_1:
  uVar10 = 0;
  if (param_4 != 0) {
    iVar7 = 0x14;
    do {
      iVar8 = param_5;
      if (uVar10 != 1) {
        iVar8 = 0;
      }
      uVar1 = param_2[uVar10 + 1];
      bVar5 = (uVar1 & 0xf000000) == 0x1000000;
      uVar14 = uVar1 >> 0x10 & 0xff;
      if (param_8 != '\0') {
        uVar14 = uVar1 >> 0x10 & 0xc0 | (uVar14 >> 6 | (uVar14 >> 6) << 2) << 2 | uVar14 >> 6;
      }
      uVar12 = (uVar1 & 0x1800 | uVar1 >> 0x14 & 0x7ff) >> 8;
      if (uVar12 < 4) {
        iVar8 = (uVar1 & 0x7ff) + iVar8;
        uVar9 = (undefined1)uVar14;
        switch(uVar12) {
        case 0:
          piVar15 = (int *)(param_6 + (iVar8 + 0x4b) * 4);
          iVar8 = *piVar15;
          if (iVar8 == 0) {
            iVar8 = FUN_10121590(param_6 + 0x18,4,1);
            *piVar15 = iVar8;
          }
          piVar15 = (int *)(param_6 + iVar7 * 0x30);
          *piVar15 = iVar8;
          *(undefined1 *)(piVar15 + 1) = uVar9;
          piVar15[4] = -1;
          piVar15[5] = -1;
          goto LAB_1009f84c;
        case 1:
          piVar15 = (int *)(param_6 + iVar7 * 0x30);
          *piVar15 = *(int *)(param_6 + iVar8 * 4 + 0xec);
          *(undefined1 *)(piVar15 + 1) = uVar9;
          break;
        case 2:
          uVar12 = uVar1 >> 0xd & 1;
          if (((*(char *)(param_6 + 200) == '\0') || (uVar12 != 0)) ||
             (iVar2 = *(int *)(param_6 + 0x10), *(char *)(iVar8 + iVar2 + 0x44f) == '\0')) {
            puVar6 = (uint *)(param_6 + iVar7 * 0x30);
            *puVar6 = uVar12 << 0x1e | 0x410804;
            *(undefined1 *)(puVar6 + 1) = uVar9;
            puVar6[4] = (iVar8 + 0x14) * 0x10;
            puVar6[7] = 0xffffffff;
            puVar6[5] = 0xffffffff;
            puVar6[6] = 0xffffffff;
            if (uVar12 != 0) {
              iVar8 = param_6 + uVar10 * 0x30;
              *(uint *)(iVar8 + 0x3e0) = *(uint *)(param_6 + 0x224) | 0x10000000;
              *(undefined1 *)(iVar8 + 0x3e4) = 0;
            }
          }
          else {
            uVar12 = 0x7fffffff;
            if (param_9 == '\0') {
              uVar12 = 0xffffffff;
            }
            iVar8 = iVar8 + 0x85;
            param_9 = '\0';
            bVar5 = false;
            uVar13 = 0x80000000;
            if ((uVar1 & 0xf000000) != 0x1000000) {
              uVar13 = 0;
            }
            uVar1 = *(uint *)(iVar2 + (uVar14 >> 6 | iVar8 * 4) * 4);
            uVar3 = *(uint *)(iVar2 + (uVar14 >> 4 & 3 | iVar8 * 4) * 4);
            uVar4 = *(uint *)(iVar2 + (uVar14 >> 2 & 3 | iVar8 * 4) * 4);
            uVar14 = *(uint *)(iVar2 + (uVar14 & 3 | iVar8 * 4) * 4);
            puVar11 = (undefined4 *)(param_6 + iVar7 * 0x30);
            *puVar11 = 0x410400;
            *(undefined1 *)(puVar11 + 1) = 0xe4;
            puVar11[4] = uVar12 & uVar14 ^ uVar13;
            puVar11[5] = uVar12 & uVar4 ^ uVar13;
            puVar11[6] = uVar12 & uVar3 ^ uVar13;
            puVar11[7] = uVar12 & uVar1 ^ uVar13;
          }
          goto LAB_1009f850;
        case 3:
          piVar15 = (int *)(param_6 + iVar7 * 0x30);
          *piVar15 = *(int *)(param_6 + 0x224);
          *(undefined1 *)(piVar15 + 1) = 0xe4;
        }
        piVar15[4] = -1;
        piVar15[5] = -1;
LAB_1009f84c:
        piVar15[6] = -1;
        piVar15[7] = -1;
      }
LAB_1009f850:
      uVar10 = uVar10 + 1;
      puVar6 = (uint *)(param_6 + iVar7 * 0x30);
      uVar14 = 0x8000000;
      if (param_9 == '\0') {
        uVar14 = 0;
      }
      uVar1 = 0x80000000;
      if (!bVar5) {
        uVar1 = uVar14;
      }
      *puVar6 = uVar1 | *puVar6;
      iVar7 = iVar7 + 1;
    } while (uVar10 < param_4);
  }
  return param_2 + param_4 + 1;
}

