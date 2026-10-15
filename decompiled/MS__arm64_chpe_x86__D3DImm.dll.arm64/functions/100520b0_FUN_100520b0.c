/*
 * FUN_100520b0 at 100520b0
 * undefined FUN_100520b0(void)
 * Address ranges: 100520b0-100528c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100520b0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *extraout_w8;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  int iVar11;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  code *extraout_w11_13;
  code *pcVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_50;
  int local_4c;
  undefined4 *local_48;
  
  pcVar12 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar4 = *(int *)(param_1 + param_2 * 4 + 0x290);
  if (iVar4 == param_3) {
    return;
  }
  iVar8 = param_3;
  if (param_2 < 0x16) {
    switch(param_2) {
    case 1:
      if (param_3 == 0) {
        iVar4 = 0;
        local_50 = 0;
      }
      else {
        iVar4 = FUN_10053b40(param_1,param_3);
        local_50 = 0;
        if (iVar4 != 0) {
          (*pcVar12)();
          (*extraout_w11)(iVar4,&DAT_1009c580,&local_50,0);
        }
      }
      if (*(int *)(param_1 + 0x14f4) != 0) {
        uVar6 = (*pcVar12)();
        (*extraout_w11_00)(uVar6);
      }
      *(int *)(param_1 + 0x14f4) = local_50;
      *(int *)(param_1 + 0x14d4) = iVar4;
      if ((bool)*(char *)(param_1 + 0x8f4) != (iVar4 != 0)) {
        *(uint *)(param_1 + 0x934) = *(uint *)(param_1 + 0x934) | 1;
      }
      *(char *)(param_1 + 0x8f4) = iVar4 != 0;
      *(undefined1 *)(param_1 + 0xa89) = 1;
      if (iVar4 == 0) {
        uVar6 = (*pcVar12)();
        (*extraout_w11_04)(uVar6,0,0,0,0,0,0,0);
      }
      else {
        (*pcVar12)();
        iVar4 = (*extraout_w11_01)(iVar4);
        uVar6 = *(undefined4 *)(iVar4 + 0x40);
        uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14d4) + 4) + 0x50);
        local_48 = (undefined4 *)(param_1 + 0x14);
        local_4c = *(int *)*local_48 + 0x74;
        uVar5 = (*pcVar12)();
        (*extraout_w11_02)(uVar5);
        (*pcVar12)();
        (*extraout_w11_03)(*local_48,0,*extraout_w8,uVar1,uVar6);
        *(uint *)(param_1 + 0x938) = *(uint *)(param_1 + 0x938) | 1;
      }
      goto switchD_10052110_caseD_c;
    default:
      goto switchD_10052110_caseD_2;
    case 3:
      uVar7 = 0xc;
      break;
    case 5:
      uVar6 = *(undefined4 *)(param_1 + 0x14);
      bVar3 = 2;
      if (*(int *)(param_1 + 0x2a8) == 0) {
        bVar3 = 0;
      }
      bVar2 = param_3 != 0;
      goto LAB_10052540;
    case 6:
      uVar6 = *(undefined4 *)(param_1 + 0x14);
      bVar3 = *(int *)(param_1 + 0x2a4) != 0;
      bVar2 = 2;
      if (param_3 == 0) {
        bVar2 = 0;
      }
LAB_10052540:
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(uVar6,param_2,bVar3 | bVar2);
      uVar7 = 0x80;
      pcVar12 = extraout_w11_07;
      goto LAB_10052894;
    case 0xb:
      if (*(int *)(*(int *)(param_1 + 0xa58) + 0x30) == 1) goto switchD_10052110_caseD_c;
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar7 = 0xb;
      pcVar12 = extraout_w11_08;
      goto LAB_10052894;
    case 0xc:
      goto switchD_10052110_caseD_c;
    case 0x11:
      if (1 < param_3 - 1U) goto switchD_10052110_caseD_c;
      iVar8 = 1;
      if (param_3 == 2) {
        iVar8 = 2;
      }
      uVar7 = 0x10;
      break;
    case 0x12:
      if (param_3 - 1U < 6) {
        if (((param_3 == 1) || (param_3 == 3)) || (param_3 == 5)) goto LAB_100525f0;
        uVar7 = 2;
      }
      else {
        param_3 = 1;
LAB_100525f0:
        uVar7 = 1;
      }
      FUN_10002110(param_1,0,0x11,uVar7);
      if (param_3 - 1U < 2) {
        iVar8 = 1;
      }
      else {
        iVar8 = 2;
        if (param_3 != 3 && param_3 != 4) {
          iVar8 = 3;
        }
      }
      uVar7 = 0x12;
      break;
    case 0x15:
      iVar4 = *(int *)(param_1 + 0x500);
      iVar8 = *(int *)(param_1 + 0x508);
      iVar15 = *(int *)(param_1 + 0x50c);
      *(undefined1 *)(param_1 + 0xa84) = 0;
      switch(param_3) {
      case 1:
      case 7:
        iVar13 = 2;
        iVar10 = 2;
        iVar14 = iVar4;
        goto LAB_100523f0;
      default:
        *(undefined1 *)(param_1 + 0xa84) = 1;
        *(undefined1 *)(param_1 + 0xa89) = 1;
        iVar13 = 4;
        iVar10 = iVar8;
        goto LAB_100523ec;
      case 3:
        iVar13 = 0xd;
        break;
      case 4:
        iVar13 = 4;
        iVar14 = 0;
        iVar11 = 4;
        iVar10 = 2;
        iVar15 = 0;
        goto LAB_100523f4;
      case 8:
        iVar13 = 7;
      }
      iVar10 = 0;
LAB_100523ec:
      iVar14 = 0;
LAB_100523f0:
      iVar11 = 2;
LAB_100523f4:
      if (((*(int *)(param_1 + 0x4f8) != iVar13) || (*(int *)(param_1 + 0x4fc) != 2)) ||
         (*(int *)(param_1 + 0x504) != iVar11 || iVar8 != iVar10)) {
        *(uint *)(param_1 + 0x934) = *(uint *)(param_1 + 0x934) | 1;
      }
      *(int *)(param_1 + 0x4f8) = iVar13;
      *(undefined4 *)(param_1 + 0x4fc) = 2;
      pcVar12 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      *(int *)(param_1 + 0x504) = iVar11;
      *(int *)(param_1 + 0x508) = iVar10;
      if (iVar4 != iVar14) {
        local_48 = (undefined4 *)(param_1 + 0x14);
        uVar6 = (*pcVar12)();
        (*extraout_w11_05)(uVar6,0,3,iVar14);
        *(int *)(param_1 + 0x500) = iVar14;
      }
      if (*(int *)(param_1 + 0x50c) != iVar15) {
        uVar6 = (*pcVar12)();
        (*extraout_w11_06)(uVar6,0,6,iVar15);
        *(int *)(param_1 + 0x50c) = iVar15;
      }
      goto switchD_10052110_caseD_c;
    }
    goto LAB_10052504;
  }
  if (0x33 < param_2) {
    if (param_2 == 0x90) {
      if (((*(uint *)(*(int *)(param_1 + 0xa58) + 0x74) >> 0xc & 1) == 0) &&
         ((*(uint *)(*(int *)(param_1 + 0xa58) + 0xac) >> 0xc & 1) == 0))
      goto switchD_10052110_caseD_c;
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar7 = 0x90;
      pcVar12 = extraout_w11_13;
      goto LAB_10052894;
    }
switchD_10052110_caseD_2:
    FUN_10001dc0(param_1,param_2,param_3);
    goto switchD_10052110_caseD_c;
  }
  switch(param_2) {
  case 0x23:
    if (*(int *)(param_1 + 0xa5c) != 0) {
      if (iVar4 == 0) {
        if (param_3 != 0) goto LAB_10052820;
LAB_100527b8:
        bVar3 = 0;
      }
      else {
        if (param_3 != 0) goto LAB_100527b8;
LAB_10052820:
        bVar3 = 1;
      }
      *(byte *)(param_1 + 0xa86) = *(byte *)(param_1 + 0xa86) | bVar3;
      *(byte *)(param_1 + 0xa87) = *(byte *)(param_1 + 0xa87) | bVar3;
      *(byte *)(param_1 + 0xa88) = *(byte *)(param_1 + 0xa88) | bVar3;
    }
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar7 = 0x23;
    pcVar12 = extraout_w11_12;
    goto LAB_10052894;
  case 0x24:
    if (*(int *)(param_1 + 0xa5c) != 0) {
      puVar9 = (undefined1 *)(param_1 + 0xa86);
LAB_100526e0:
      *puVar9 = 1;
      goto switchD_10052110_caseD_c;
    }
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar7 = 0x24;
    pcVar12 = extraout_w11_09;
    goto LAB_10052894;
  case 0x25:
    if (*(int *)(param_1 + 0xa5c) != 0) {
      puVar9 = (undefined1 *)(param_1 + 0xa87);
      goto LAB_100526e0;
    }
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar7 = 0x25;
    pcVar12 = extraout_w11_10;
    goto LAB_10052894;
  case 0x26:
    if (*(int *)(param_1 + 0xa5c) != 0) {
      puVar9 = (undefined1 *)(param_1 + 0xa88);
      goto LAB_100526e0;
    }
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar7 = 0x26;
    pcVar12 = extraout_w11_11;
LAB_10052894:
    (*pcVar12)(uVar6,uVar7);
    goto switchD_10052110_caseD_c;
  default:
    goto switchD_10052110_caseD_2;
  case 0x2b:
    uVar7 = 0xf;
    break;
  case 0x2c:
    uVar7 = 0xd;
    break;
  case 0x2d:
    uVar7 = 0xe;
    break;
  case 0x2e:
    uVar7 = 0x13;
    break;
  case 0x31:
    uVar7 = 0x15;
    break;
  case 0x32:
  case 0x33:
    goto switchD_10052110_caseD_c;
  }
LAB_10052504:
  FUN_10002110(param_1,0,uVar7,iVar8);
switchD_10052110_caseD_c:
  *(int *)(param_1 + param_2 * 4 + 0x290) = param_3;
  return;
}

