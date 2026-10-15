/*
 * FUN_10080008 at 10080008
 * undefined FUN_10080008(void)
 * Address ranges: 10080008-1008049f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_10080008(undefined8 param_1,uint *param_2,undefined8 param_3,uint param_4,int param_5,
                   int param_6,undefined8 param_7,char param_8,char param_9)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  undefined4 *extraout_w12;
  
  *(undefined4 *)(param_6 + 0x3e0) = 0;
  uVar9 = *param_2;
  uVar10 = uVar9 & 0x1fff;
  uVar14 = uVar9 & 0x70000000;
  uVar9 = (uint)((ulonglong)param_3 >> 0x10) & 0xffff & uVar9 >> 0x10 & 0xf;
  uVar8 = (undefined1)uVar9;
  if (uVar14 < 0x40000000) {
    if (uVar14 == 0) {
      piVar15 = (int *)(param_6 + (uVar10 + 0x4b) * 4);
      iVar6 = *piVar15;
      if (iVar6 == 0) {
        iVar6 = FUN_100ee580(param_6 + 0x18,4,1);
        *piVar15 = iVar6;
      }
      *(undefined1 *)(param_6 + 0x284) = uVar8;
      *(undefined8 *)(param_6 + 0x290) = 0xffffffffffffffff;
      *(int *)(param_6 + 0x280) = iVar6;
    }
    else {
      if (uVar14 != 0x30000000) goto switchD_10080088_default;
      *(undefined4 *)(param_6 + 0x280) = *(undefined4 *)(param_6 + 0x224);
      *(undefined1 *)(param_6 + 0x284) = 1;
      *(undefined8 *)(param_6 + 0x290) = 0xffffffffffffffff;
    }
    *(undefined8 *)(param_6 + 0x298) = 0xffffffffffffffff;
    goto switchD_10080088_default;
  }
  if (uVar14 < 0x40000001) {
    switch(uVar10) {
    case 0:
      puVar11 = (undefined4 *)(param_6 + 0x1e8);
      break;
    case 1:
      puVar11 = (undefined4 *)(param_6 + 0x1ec);
      uVar9 = 1;
      break;
    case 2:
      puVar11 = (undefined4 *)(param_6 + 0x1f0);
      uVar9 = 2;
      break;
    default:
      goto switchD_10080088_default;
    }
  }
  else {
    if (uVar14 == 0x50000000) {
      FUN_1007ff80(param_1,param_6,*(undefined4 *)(param_6 + uVar10 * 4 + 500),uVar9,param_6 + 0x280
                  );
      *extraout_w12 = 0x2000;
      goto switchD_10080088_default;
    }
    if (uVar14 != 0x60000000) goto switchD_10080088_default;
    puVar11 = (undefined4 *)(param_6 + uVar10 * 4 + 0x1fc);
  }
  FUN_1007ff80(param_1,param_6,*puVar11,uVar9,param_6 + 0x280);
switchD_10080088_default:
  uVar10 = 0;
  if (param_4 != 0) {
    iVar6 = 0x11;
    do {
      iVar7 = param_5;
      if (uVar10 != 1) {
        iVar7 = 0;
      }
      uVar9 = param_2[uVar10 + 1];
      iVar7 = iVar7 + (uVar9 & 0x1fff);
      bVar5 = (uVar9 & 0xf000000) == 0x1000000;
      uVar14 = uVar9 >> 0x10 & 0xff;
      if (param_8 != '\0') {
        uVar14 = uVar9 >> 0x10 & 0xc0 | (uVar14 >> 6 | (uVar14 >> 6) << 2) << 2 | uVar14 >> 6;
      }
      uVar12 = uVar9 & 0x70000000;
      uVar8 = (undefined1)uVar14;
      if (uVar12 < 0x20000000) {
        if (uVar12 == 0) {
          piVar15 = (int *)(param_6 + (iVar7 + 0x4b) * 4);
          iVar7 = *piVar15;
          if (iVar7 == 0) {
            iVar7 = FUN_100ee580(param_6 + 0x18,4,1);
            *piVar15 = iVar7;
          }
          piVar15 = (int *)(param_6 + iVar6 * 0x30);
          *piVar15 = iVar7;
          *(undefined1 *)(piVar15 + 1) = uVar8;
LAB_10080428:
          piVar15[4] = -1;
          piVar15[5] = -1;
        }
        else {
          if (uVar12 != 0x10000000) goto LAB_1008043c;
          piVar15 = (int *)(param_6 + iVar6 * 0x30);
          *piVar15 = *(int *)(param_6 + iVar7 * 4 + 0xec);
          *(undefined1 *)(piVar15 + 1) = uVar8;
          piVar15[4] = -1;
          piVar15[5] = -1;
        }
        piVar15[6] = -1;
        piVar15[7] = -1;
      }
      else if (uVar12 < 0x20000001) {
        uVar12 = uVar9 >> 0xd & 1;
        if (((*(char *)(param_6 + 200) == '\0') || (uVar12 != 0)) ||
           (iVar2 = *(int *)(param_6 + 0x10), *(char *)(iVar2 + iVar7 + 0x44f) == '\0')) {
          puVar1 = (uint *)(param_6 + iVar6 * 0x30);
          *puVar1 = uVar12 << 0x1e | 0x410804;
          *(undefined1 *)(puVar1 + 1) = uVar8;
          puVar1[4] = iVar7 * 0x10;
          puVar1[7] = 0xffffffff;
          puVar1[5] = 0xffffffff;
          puVar1[6] = 0xffffffff;
          if (uVar12 != 0) {
            iVar7 = param_6 + uVar10 * 0x30;
            *(uint *)(iVar7 + 0x350) = *(uint *)(param_6 + 0x224) | 0x10000000;
            *(undefined1 *)(iVar7 + 0x354) = 0;
          }
        }
        else {
          uVar12 = 0x7fffffff;
          if (param_9 == '\0') {
            uVar12 = 0xffffffff;
          }
          iVar7 = iVar7 + 0x85;
          param_9 = '\0';
          bVar5 = false;
          uVar13 = 0x80000000;
          if ((uVar9 & 0xf000000) != 0x1000000) {
            uVar13 = 0;
          }
          uVar9 = *(uint *)(iVar2 + (uVar14 >> 6 | iVar7 * 4) * 4);
          uVar3 = *(uint *)(iVar2 + (uVar14 >> 4 & 3 | iVar7 * 4) * 4);
          uVar4 = *(uint *)(iVar2 + (uVar14 >> 2 & 3 | iVar7 * 4) * 4);
          uVar14 = *(uint *)(iVar2 + (uVar14 & 3 | iVar7 * 4) * 4);
          puVar11 = (undefined4 *)(param_6 + iVar6 * 0x30);
          *puVar11 = 0x410400;
          *(undefined1 *)(puVar11 + 1) = 0xe4;
          puVar11[4] = uVar12 & uVar14 ^ uVar13;
          puVar11[5] = uVar12 & uVar4 ^ uVar13;
          puVar11[6] = uVar12 & uVar3 ^ uVar13;
          puVar11[7] = uVar12 & uVar9 ^ uVar13;
        }
      }
      else if (uVar12 == 0x30000000) {
        piVar15 = (int *)(param_6 + iVar6 * 0x30);
        *piVar15 = *(int *)(param_6 + 0x224);
        *(undefined1 *)(piVar15 + 1) = 0xe4;
        goto LAB_10080428;
      }
LAB_1008043c:
      uVar10 = uVar10 + 1;
      puVar1 = (uint *)(param_6 + iVar6 * 0x30);
      uVar14 = 0x8000000;
      if (param_9 == '\0') {
        uVar14 = 0;
      }
      uVar9 = 0x80000000;
      if (!bVar5) {
        uVar9 = uVar14;
      }
      *puVar1 = uVar9 | *puVar1;
      iVar6 = iVar6 + 1;
    } while (uVar10 < param_4);
  }
  return param_2 + param_4 + 1;
}

