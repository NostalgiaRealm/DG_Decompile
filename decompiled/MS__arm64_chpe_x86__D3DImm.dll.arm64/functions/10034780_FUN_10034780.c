/*
 * FUN_10034780 at 10034780
 * undefined FUN_10034780(void)
 * Address ranges: 10034780-100351e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10034780(int param_1,uint param_2,int param_3,int param_4,uint param_5,code *param_6,
                 code *param_7,code param_8,undefined4 param_9,undefined4 param_10,char param_11)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  code *pcVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  code cVar16;
  char cVar17;
  char cVar18;
  byte bVar19;
  uint uVar20;
  undefined8 uVar21;
  ulonglong extraout_x1;
  ulonglong uVar22;
  int iVar23;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  code *local_5c;
  code *local_58;
  code *local_54;
  code *local_50;
  code *local_4c [3];
  
  puVar1 = (uint *)(param_1 + 0x998);
  uVar22 = (ulonglong)param_5;
  uVar26 = *puVar1 & ((*(uint *)(&DAT_1009def8 + param_2 * 4) |
                      *(uint *)(&DAT_1009dee8 + param_2 * 4)) ^ 0xffffffff);
  iVar15 = (int)param_2 >> 3;
  local_50 = param_6;
  local_4c[0] = param_7;
  if (param_4 == 0) {
    if (param_5 == 0) {
      piVar6 = (int *)(param_1 + param_2 * 4 + 0x1810);
      if ((*piVar6 + 0xfbU & 0xff) < 2) {
        pbVar14 = (byte *)(iVar15 + param_1 + 0x1d34);
        *pbVar14 = *pbVar14 | (byte)(1 << (ulonglong)(param_2 & 7));
      }
      puVar2 = (ulonglong *)(param_1 + 0x4a8);
      *piVar6 = 0;
      uVar24 = *puVar2 & (7L << ((ulonglong)(param_2 * 3) & 0x3f) ^ 0xffffffffffffffffU);
      uVar20 = *(uint *)(param_1 + 0x1830) & (1 << (ulonglong)(param_2 & 0x1f) ^ 0xffffffffU);
      *(uint *)(param_1 + 0x1830) = uVar20;
      uVar22 = 0x1000000000000000;
      if (uVar20 == 0) {
        uVar22 = 0;
      }
      *puVar2 = (*puVar2 ^ uVar24) & 0xefffffffff000000 ^ uVar24 & 0xefffffffffffffff | uVar22;
      *(undefined1 *)(param_2 + param_1 + 0x1909) = 0;
      *puVar2 = *puVar2 & 0xfffffe0003ffffff;
      goto LAB_10035178;
    }
LAB_100348b4:
    piVar6 = (int *)(param_1 + param_2 * 8 + 0x224);
    if (*piVar6 != param_3) {
      *piVar6 = param_3;
      pbVar14 = (byte *)(iVar15 + param_1 + 0x1d34);
      *pbVar14 = *pbVar14 | (byte)(1 << (ulonglong)(param_2 & 7));
    }
    piVar6 = (int *)(param_1 + param_2 * 4 + 0x1810);
    if ((*piVar6 + 0xfbU & 0xff) < 2) {
      pbVar14 = (byte *)(iVar15 + param_1 + 0x1d34);
      *pbVar14 = *pbVar14 | (byte)(1 << (ulonglong)(param_2 & 7));
    }
    *piVar6 = 3;
    uVar24 = *(ulonglong *)(param_1 + 0x4a8);
    *(ulonglong *)(param_1 + 0x4a8) =
         (uVar24 & (7L << ((ulonglong)(param_2 * 3) & 0x3f) ^ 0xffffffffffffffffU) |
         3L << ((ulonglong)(param_2 * 3) & 0x3f)) & 0xffffff | uVar24 & 0xffffffffff000000;
    if (param_11 == '\0') goto LAB_10035178;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar21 = (*extraout_w11)(uVar22 & 0xffffffff,&local_58,&local_5c);
    if ((((*(uint *)local_58 == 0xffffffff) && (*(uint *)(local_58 + 4) == 0xffffffff)) &&
        (*(uint *)(local_58 + 8) == 0xffffffff)) &&
       (((*(uint *)(local_58 + 0xc) == 0xffffffff && (*(int *)local_5c == 0)) &&
        ((*(int *)(local_5c + 4) == 0 &&
         ((*(int *)(local_5c + 8) == 0 && (*(int *)(local_5c + 0xc) == 0)))))))) {
      uVar20 = *(uint *)(param_1 + 0x1830) & (1 << (ulonglong)(param_2 & 0x1f) ^ 0xffffffffU);
    }
    else {
      uVar20 = 1 << (ulonglong)(param_2 & 0x1f) | *(uint *)(param_1 + 0x1830);
    }
    *(uint *)(param_1 + 0x1830) = uVar20;
    uVar22 = 0x1000000000000000;
    if (uVar20 == 0) {
      uVar22 = 0;
    }
    *(ulonglong *)(param_1 + 0x4a8) = uVar22 | *(ulonglong *)(param_1 + 0x4a8) & 0xefffffffffffffff;
    pcVar11 = local_58;
    pcVar10 = local_5c;
  }
  else {
    if (param_5 != 0) goto LAB_100348b4;
    local_54 = (code *)(param_4 + 0x34);
    uVar26 = uVar26 | *(uint *)(&DAT_1009def8 + param_2 * 4);
    if ((*(uint *)local_54 == 2) || (*(uint *)local_54 == 5)) {
      uVar26 = uVar26 | *(uint *)(&DAT_1009dee8 + param_2 * 4);
    }
    piVar6 = (int *)(param_1 + param_2 * 8 + 0x224);
    if (*piVar6 != param_3) {
      *piVar6 = param_3;
      pbVar14 = (byte *)(iVar15 + param_1 + 0x1d34);
      *pbVar14 = *pbVar14 | (byte)(1 << (ulonglong)(param_2 & 7));
    }
    local_58 = (code *)(param_2 + param_1);
    local_58[0x1909] = param_8;
    local_5c = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar16 = (code)(*extraout_w11_00)(param_4);
    local_58[0x1911] = cVar16;
    local_58 = local_54;
    if (param_2 == 0) {
      uVar12 = *(uint *)(param_4 + 0x20);
      *(uint *)(param_1 + 0x141c) = uVar12;
      uVar20 = 0;
      if (3 < uVar12) {
        puVar3 = (uint *)(param_4 + 0x14);
        puVar4 = (uint *)(param_4 + 0x18);
        do {
          *(float *)(param_1 + (uVar20 + 0x137) * 0x10) =
               (float)(*puVar3 >> (ulonglong)(uVar20 & 0x1f));
          *(float *)(param_1 + 0x1374 + uVar20 * 0x10) =
               (float)(*puVar4 >> (ulonglong)(uVar20 & 0x1f));
          *(float *)(param_1 + (uVar20 + 0x138) * 0x10) =
               (float)(*puVar3 >> (ulonglong)(uVar20 + 1 & 0x1f));
          *(float *)(param_1 + 0x1384 + uVar20 * 0x10) =
               (float)(*puVar4 >> (ulonglong)(uVar20 + 1 & 0x1f));
          *(float *)(param_1 + (uVar20 + 0x139) * 0x10) =
               (float)(*puVar3 >> (ulonglong)(uVar20 + 2 & 0x1f));
          *(float *)(param_1 + 0x1394 + uVar20 * 0x10) =
               (float)(*puVar4 >> (ulonglong)(uVar20 + 2 & 0x1f));
          uVar5 = uVar20 + 3;
          *(float *)(param_1 + (uVar20 + 0x13a) * 0x10) =
               (float)(*puVar3 >> (ulonglong)(uVar5 & 0x1f));
          iVar7 = uVar20 * 0x10;
          uVar20 = uVar20 + 4;
          *(float *)(param_1 + 0x13a4 + iVar7) = (float)(*puVar4 >> (ulonglong)(uVar5 & 0x1f));
        } while (uVar20 < uVar12 - 3);
      }
      if (uVar20 < uVar12) {
        do {
          *(float *)(param_1 + (uVar20 + 0x137) * 0x10) =
               (float)(*(uint *)(param_4 + 0x14) >> (ulonglong)(uVar20 & 0x1f));
          uVar5 = uVar20 & 0x1f;
          iVar7 = uVar20 * 0x10;
          uVar20 = uVar20 + 1;
          *(float *)(param_1 + 0x1374 + iVar7) =
               (float)(*(uint *)(param_4 + 0x18) >> (ulonglong)uVar5);
        } while (uVar20 < uVar12);
      }
      uVar12 = uVar12 - 1;
      uVar20 = *(uint *)(param_1 + 0x224);
      if (uVar20 < *(byte *)(param_1 + 0x223)) {
        uVar20 = (uint)*(byte *)(param_1 + 0x223);
      }
      if (uVar12 < uVar20) {
        uVar20 = uVar12;
      }
      *(float *)(param_1 + 0x1414) = (float)uVar20;
      if (*(char *)(param_1 + 0x220) == '\x02') {
        uVar12 = uVar20;
      }
      *(float *)(param_1 + 0x1418) = (float)uVar12;
      *(uint *)(param_1 + 0x1488) = (uint)local_50 & (uint)local_4c[0];
      *(code **)(param_1 + 0x148c) = local_4c[0];
      local_58 = local_5c;
      (*local_5c)();
      local_4c[0] = (code *)(*extraout_w11_01)(param_4,extraout_x1 & 0xffffffff);
      (*local_58)();
      uVar20 = (*extraout_w11_02)(param_4,local_50);
      *(uint *)(param_1 + 0x144c) = uVar20 & (uint)local_4c[0];
      *(code **)(param_1 + 0x146c) = local_4c[0];
      (*local_58)();
      (*extraout_w11_03)(param_4,&local_54);
      uVar22 = 2;
      if (((uint)local_54 & 0xff) != 4) {
        uVar22 = (ulonglong)(((uint)local_54 & 0xff) == 2);
      }
      uVar24 = 3;
      if (*(char *)(param_1 + 0x1911) == '\0') {
        uVar24 = uVar22;
      }
      if ((uVar24 != 3) || (uVar22 = 0x4000000000000, ((uint)local_54 & 0x300000) == 0)) {
        uVar22 = 0;
      }
      uVar25 = (ulonglong)((uint)local_54 >> 8) << 0x1c;
      uVar22 = (uVar22 | *(ulonglong *)(param_1 + 0x4a8) & 0xfffbff0003ffffff | uVar24 << 0x1a) ^
               (uVar25 ^ (ulonglong)((uint)local_54 >> 0x10) << 0x24) & 0xffffff0fffffffff;
      if (((uint)uVar22 >> 0x1b & 1) == 0) {
        uVar24 = 0;
      }
      else {
        uVar24 = (ulonglong)((uint)local_54 >> 0x16);
      }
      *(ulonglong *)(param_1 + 0x4a8) =
           (uVar22 ^ uVar25 & 0xffffff000fffffff ^ (ulonglong)((uint)local_54 >> 0x10) << 0x24 ^
           uVar24 << 0x28) & 0xfffffeffffffffff ^ uVar24 << 0x28;
      *(byte *)(param_1 + 0x1d41) = *(byte *)(param_1 + 0x1d41) | (byte)param_8;
      local_58 = (code *)(param_4 + 0x34);
    }
    pcVar10 = local_5c;
    (*local_5c)();
    cVar17 = (*extraout_w11_04)(param_4);
    (*pcVar10)();
    cVar18 = (*extraout_w11_05)(param_4);
    uVar20 = *(uint *)local_58;
    if (uVar20 == 0) {
      uVar20 = (uint)(*(char *)(param_1 + 0x79) != '\0');
    }
    puVar3 = (uint *)(param_1 + param_2 * 4 + 0x1810);
    bVar19 = *(byte *)(uVar20 + 0x1009dee0);
    if ((*puVar3 + 0xfb & 0xff) < 2 != (bVar19 + 0xfb & 0xff) < 2) {
      pbVar14 = (byte *)(iVar15 + param_1 + 0x1d34);
      *pbVar14 = *pbVar14 | (byte)(1 << (ulonglong)(param_2 & 7));
    }
    *puVar3 = (uint)bVar19;
    puVar2 = (ulonglong *)(param_1 + 0x4a8);
    *puVar2 = (((ulonglong)bVar19 & 7) << ((ulonglong)(param_2 * 3) & 0x3f) |
              *puVar2 & (7L << ((ulonglong)(param_2 * 3) & 0x3f) ^ 0xffffffffffffffffU)) & 0xffffff
              | *puVar2 & 0xffffffffff000000;
    if (param_11 == '\0') goto LAB_10035178;
    if (param_2 < 4) {
      iVar13 = param_1 + param_2 * 0x120;
      iVar23 = -1;
      iVar7 = iVar23;
      if (cVar17 == '\0') {
        iVar7 = 0;
      }
      iVar8 = 0;
      if (cVar17 == '\0') {
        iVar8 = 0x3f800000;
      }
      iVar9 = 0;
      if (cVar18 == '\0') {
        iVar9 = 0x3f800000;
      }
      if (cVar18 == '\0') {
        iVar23 = 0;
      }
      if ((((iVar7 == *(int *)(iVar13 + 0x1430)) && (iVar23 == *(int *)(iVar13 + 0x1434))) &&
          (iVar8 == *(int *)(iVar13 + 0x1438))) && (iVar9 == *(int *)(iVar13 + 0x143c))) {
        bVar19 = 0;
      }
      else {
        bVar19 = 1;
      }
      *(int *)(iVar13 + 0x143c) = iVar9;
      *(int *)(iVar13 + 0x1438) = iVar8;
      *(int *)(iVar13 + 0x1430) = iVar7;
      *(int *)(iVar13 + 0x1434) = iVar23;
      *(byte *)(param_1 + 0x1d41) = bVar19 | *(byte *)(param_1 + 0x1d41);
    }
    (*local_5c)();
    uVar21 = (*extraout_w11_06)(param_4,local_4c,&local_50);
    if (((((*(uint *)local_4c[0] == 0xffffffff) && (*(uint *)(local_4c[0] + 4) == 0xffffffff)) &&
         ((*(uint *)(local_4c[0] + 8) == 0xffffffff &&
          ((*(uint *)(local_4c[0] + 0xc) == 0xffffffff && (*(int *)local_50 == 0)))))) &&
        (*(int *)(local_50 + 4) == 0)) &&
       ((*(int *)(local_50 + 8) == 0 && (*(int *)(local_50 + 0xc) == 0)))) {
      uVar20 = *(uint *)(param_1 + 0x1830) & (1 << (ulonglong)(param_2 & 0x1f) ^ 0xffffffffU);
    }
    else {
      uVar20 = 1 << (ulonglong)(param_2 & 0x1f) | *(uint *)(param_1 + 0x1830);
    }
    *(uint *)(param_1 + 0x1830) = uVar20;
    uVar22 = 0x1000000000000000;
    if (uVar20 == 0) {
      uVar22 = 0;
    }
    *puVar2 = uVar22 | *puVar2 & 0xefffffffffffffff;
    pcVar11 = local_4c[0];
    pcVar10 = local_50;
  }
  iVar7 = param_1 + param_2 * 0x20;
  bVar19 = FUN_10032e98(uVar21,iVar7 + 0x780,iVar7 + 0x790,pcVar11,pcVar10);
  *(byte *)(param_1 + 0x1d48) = *(byte *)(param_1 + 0x1d48) | bVar19;
LAB_10035178:
  *(undefined2 *)(param_1 + 0x1d38) = 0x101;
  pbVar14 = (byte *)(iVar15 + param_1 + 0x1d30);
  *pbVar14 = *pbVar14 | (byte)(1 << (ulonglong)(param_2 & 7));
  if (uVar26 != *puVar1) {
    *puVar1 = uVar26;
    *(undefined1 *)(param_1 + 0x1d41) = 1;
  }
  return;
}

