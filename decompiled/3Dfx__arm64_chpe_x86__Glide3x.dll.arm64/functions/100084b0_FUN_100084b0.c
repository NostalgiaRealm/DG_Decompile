/*
 * FUN_100084b0 at 100084b0
 * undefined FUN_100084b0(void)
 * Address ranges: 100084b0-10008c03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100084b0(int param_1,undefined4 param_2,uint param_3,uint *param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
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
  code *extraout_w11_12;
  code *extraout_w11_13;
  uint uVar14;
  float fVar15;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_50;
  uint local_48;
  uint local_44;
  uint local_40;
  
  uVar7 = FUN_10009ae0(param_1);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  uVar14 = 0;
  switch(param_2) {
  case 1:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x23:
  case 0x24:
  case 0x2a:
    uVar14 = 4;
    break;
  case 2:
  case 0x26:
    uVar14 = 0x10;
    break;
  case 3:
  case 0x25:
  case 0x27:
  case 0x28:
    uVar14 = 8;
    break;
  case 0x22:
    uVar14 = 0x18;
  }
  if (param_4 == (uint *)0x0 || param_3 < uVar14) {
    return 0;
  }
  switch(param_2) {
  case 1:
    local_60 = 0x10;
    break;
  case 2:
    param_4[0] = 5;
    param_4[1] = 6;
    param_4[2] = 5;
    param_4[3] = 8;
    return uVar14;
  case 3:
    if (*(char *)(param_1 + 0x3c) == '\0') {
LAB_10008b34:
      param_4[0] = 0;
      param_4[1] = 0;
      return uVar14;
    }
    piVar1 = (int *)(param_1 + 0x38);
    uVar7 = ZEXT48(piVar1);
    do {
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(uVar7,0x10);
      if (bVar2) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar3 = (*extraout_w11)(uVar6);
    if (cVar3 == '\0') {
      uVar5 = 0;
    }
    else {
      fVar15 = (float)FUN_100459f8();
      uVar5 = (int)(fVar15 * 65536.0) << 8;
    }
    *param_4 = uVar5;
    uVar5 = uVar5 >> 8;
    goto LAB_10008600;
  case 4:
    local_60 = 0x40;
    break;
  case 5:
  case 10:
    local_60 = 0x100;
    break;
  case 6:
    local_60 = 0x21f;
    break;
  case 7:
    local_60 = 0x70;
    break;
  case 8:
    if (*(char *)(param_1 + 0x3c) == '\0') goto switchD_10008554_caseD_10;
    piVar1 = (int *)(param_1 + 0x38);
    uVar7 = ZEXT48(piVar1);
    do {
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(uVar7,0x10);
      if (bVar2) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar3 = (*extraout_w11_00)(uVar6);
    *param_4 = (uint)(cVar3 != '\0');
    goto LAB_10008610;
  case 9:
  case 0xf:
  case 0x11:
    local_60 = 1;
    break;
  case 0xb:
    local_60 = 3;
    break;
  case 0xc:
    iVar4 = FUN_1000ae88(param_1);
    if ((&DAT_100a23f1)[iVar4 * 0x18] == '\0') {
      puVar11 = (uint *)(*(int *)(param_1 + 0x1c) + 0x78f);
      goto LAB_100086ec;
    }
LAB_100086d8:
    local_60 = 0;
    break;
  case 0xd:
    iVar4 = FUN_1000ae88(param_1);
    if ((&DAT_100a23f1)[iVar4 * 0x18] != '\0') goto LAB_100086d8;
    puVar11 = (uint *)(*(int *)(param_1 + 0x1c) + 0x793);
    goto LAB_100086ec;
  case 0xe:
    iVar4 = FUN_1000ae88(param_1);
    if ((&DAT_100a23f1)[iVar4 * 0x18] == '\0') goto LAB_100086d8;
    local_60 = *(int *)(*(int *)(param_1 + 0x1c) + 0x793) +
               *(int *)(*(int *)(param_1 + 0x1c) + 0x78f);
    break;
  case 0x10:
  case 0x23:
switchD_10008554_caseD_10:
    *param_4 = 0;
    return uVar14;
  case 0x12:
    local_60 = 6;
    break;
  case 0x13:
    puVar11 = (uint *)(*(int *)(param_1 + 0x1c) + 0x797);
    goto LAB_100086ec;
  case 0x14:
    if (*(char *)(param_1 + 0x3c) == '\0') goto switchD_10008554_caseD_10;
    piVar1 = (int *)(param_1 + 0x38);
    uVar7 = ZEXT48(piVar1);
    do {
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(uVar7,0x10);
      if (bVar2) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar5 = (*extraout_w11_01)(uVar6);
    *param_4 = uVar5;
    goto LAB_10008610;
  case 0x15:
    iVar4 = FUN_1000ae88(param_1);
    puVar12 = (undefined *)0x100a23e8;
    goto LAB_100087f4;
  case 0x16:
    iVar4 = FUN_1000ae88(param_1);
    puVar12 = &DAT_100a23ec;
LAB_100087f4:
    puVar11 = (uint *)(puVar12 + iVar4 * 0x18);
LAB_100086ec:
    local_60 = *puVar11;
    break;
  case 0x17:
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_02)(uVar6,&local_68);
    local_60 = local_64;
    break;
  case 0x18:
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_03)(uVar6,&local_68);
    local_60 = local_5c;
    break;
  case 0x19:
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_04)(uVar6,&local_68);
    local_60 = local_58;
    break;
  case 0x1a:
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_05)(uVar6,&local_68);
    local_60 = local_50;
    break;
  case 0x1b:
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_06)(uVar6,&local_68);
    local_60 = local_48;
    break;
  case 0x1c:
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_07)(uVar6,&local_68);
    local_60 = local_44;
    break;
  default:
    goto switchD_10008554_caseD_1d;
  case 0x1e:
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_08)(uVar6,&local_68);
    local_60 = local_68;
    break;
  case 0x1f:
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_09)(uVar6,&local_68);
    local_60 = local_40;
    break;
  case 0x20:
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_10)(uVar6,&local_68);
    break;
  case 0x22:
    if (*(char *)(param_1 + 0x3c) == '\0') {
      param_4[2] = 0;
      param_4[3] = 0;
      param_4[0] = 0;
      param_4[1] = 0;
      param_4[4] = 0;
      param_4[5] = 0;
      return uVar14;
    }
    piVar1 = (int *)(param_1 + 0x38);
    uVar7 = ZEXT48(piVar1);
    do {
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(uVar7,0x10);
      if (bVar2) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_11)(uVar6,param_4);
    goto LAB_10008610;
  case 0x24:
  case 0x2a:
    local_60 = 8;
    break;
  case 0x25:
    if (*(char *)(param_1 + 0x3c) == '\0') goto LAB_10008b34;
    piVar1 = (int *)(param_1 + 0x38);
    uVar7 = ZEXT48(piVar1);
    do {
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(uVar7,0x10);
      if (bVar2) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar5 = (*extraout_w11_12)(uVar6);
    *param_4 = uVar5;
    iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x98);
    fVar15 = (float)FUN_100459f8();
    uVar5 = (uint)(fVar15 * (float)(iVar4 - 1));
LAB_10008600:
    param_4[1] = uVar5;
    goto LAB_10008610;
  case 0x26:
    piVar1 = (int *)(param_1 + 0x38);
    uVar7 = ZEXT48(piVar1);
    if (*(char *)(param_1 + 0x3c) == '\0') {
      bVar2 = false;
    }
    else {
      do {
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(uVar7,0x10);
        if (bVar2) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      DataMemoryBarrier(2,3);
      bVar2 = true;
    }
    uVar10 = ZEXT48(param_4 + 3);
    uVar9 = ZEXT48(param_4 + 2);
    uVar8 = ZEXT48(param_4 + 1);
    if (!bVar2) {
      param_4[3] = 0;
      param_4[2] = 0;
      param_4[1] = 0;
      goto switchD_10008554_caseD_10;
    }
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_13)(uVar6,param_4,uVar8 & 0xffffffff,uVar9 & 0xffffffff,uVar10 & 0xffffffff);
LAB_10008610:
    do {
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(uVar7,0x10);
      if (bVar2) {
        *(int *)uVar7 = *(int *)uVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    return uVar14;
  case 0x27:
    uVar13 = 0xffff00000000;
    goto LAB_10008be4;
  case 0x28:
    uVar13 = 0xffff;
LAB_10008be4:
    *(undefined8 *)param_4 = uVar13;
    goto switchD_10008554_caseD_1d;
  }
  *param_4 = local_60;
switchD_10008554_caseD_1d:
  return uVar14;
}

