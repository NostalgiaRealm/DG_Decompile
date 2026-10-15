/*
 * FUN_100d90a0 at 100d90a0
 * undefined FUN_100d90a0(void)
 * Address ranges: 100d90a0-100d9737
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100d90a0(int param_1,int *param_2,int param_3)

{
  short *psVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  undefined8 uVar19;
  int iVar20;
  int *piVar21;
  undefined1 auVar22 [16];
  undefined1 local_60;
  int local_50;
  int *local_4c;
  int *local_48;
  
  local_50 = param_1 + 0x4000;
  local_60 = 1;
  if (param_2 != (int *)0x0) {
    piVar21 = param_2 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar21),0x10);
      if (bVar6) {
        *piVar21 = *piVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    DataMemoryBarrier(2,3);
  }
  pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_48 = param_2;
  if (*(int *)(param_1 + 0xc284) != 0) {
    iVar9 = FUN_100e5750(param_1 + 0x6750,*(int *)(param_1 + 0xc284));
    if ((iVar9 != 0) && (*(char *)(param_1 + 0x11) == '\0')) {
      psVar1 = (short *)(iVar9 + 0xc);
      iVar20 = 0;
      if (*psVar1 != -1) {
        local_4c = (int *)(param_1 + 0x14);
        do {
          uVar2 = psVar1[iVar20 * 2];
          uVar3 = *(ushort *)(iVar9 + 0xe + iVar20 * 4);
          uVar11 = (ulonglong)uVar3;
          uVar12 = (ulonglong)(param_1 + 0x52ac + (uint)uVar2 * 0x10);
          puVar16 = (undefined8 *)(param_1 + (uVar2 + 0xb33) * 0x10);
          uVar4 = (uint)uVar3 - (uint)uVar2 & 0x3fffffff;
          uVar14 = 0;
          uVar18 = uVar12;
          if (uVar4 != 0) {
            do {
              puVar17 = (undefined8 *)uVar18;
              uVar14 = uVar14 + 1;
              uVar18 = ZEXT48(puVar17 + 1);
              *puVar16 = *puVar17;
              puVar16 = puVar16 + 1;
            } while (uVar14 < uVar4 << 1);
          }
          auVar22 = (*pcVar8)();
          (*extraout_w11)(auVar22._0_8_ & 0xffffffff,auVar22._8_8_ & 0xffffffff,uVar11 & 0xffffffff,
                          uVar12 & 0xffffffff);
          iVar20 = iVar20 + 1;
        } while (psVar1[iVar20 * 2] != -1);
      }
      iVar20 = 0;
      psVar1 = (short *)(iVar9 + 0x1d0);
      if (*psVar1 != -1) {
        local_4c = (int *)(param_1 + 0x14);
        do {
          uVar2 = psVar1[iVar20 * 2];
          uVar3 = *(ushort *)(iVar9 + 0x1d2 + iVar20 * 4);
          uVar11 = (ulonglong)uVar3;
          uVar12 = (ulonglong)(param_1 + 0x6868 + (uint)uVar2 * 0x10);
          puVar16 = (undefined8 *)(param_1 + (uVar2 + 0xc13) * 0x10);
          uVar4 = (uint)uVar3 - (uint)uVar2 & 0x3fffffff;
          uVar14 = 0;
          uVar18 = uVar12;
          if (uVar4 != 0) {
            do {
              puVar17 = (undefined8 *)uVar18;
              uVar14 = uVar14 + 1;
              uVar18 = ZEXT48(puVar17 + 1);
              *puVar16 = *puVar17;
              puVar16 = puVar16 + 1;
            } while (uVar14 < uVar4 << 1);
          }
          auVar22 = (*pcVar8)();
          (*extraout_w11_00)(auVar22._0_8_ & 0xffffffff,auVar22._8_8_ & 0xffffffff,
                             uVar11 & 0xffffffff,uVar12 & 0xffffffff);
          iVar20 = iVar20 + 1;
        } while (psVar1[iVar20 * 2] != -1);
      }
      iVar20 = 0;
      psVar1 = (short *)(iVar9 + 500);
      if (*psVar1 != -1) {
        do {
          uVar14 = 0;
          uVar2 = psVar1[iVar20 * 2];
          uVar3 = *(ushort *)(iVar9 + 0x1f6 + iVar20 * 4);
          uVar11 = (ulonglong)uVar3;
          puVar16 = (undefined8 *)(param_1 + (uVar2 + 0x1a0a) * 4);
          uVar12 = ZEXT48(puVar16);
          uVar7 = (uint)uVar3 - (uint)uVar2;
          puVar17 = (undefined8 *)(param_1 + (uVar2 + 0x308c) * 4);
          uVar4 = uVar7 >> 1;
          uVar18 = uVar12;
          if (uVar4 != 0) {
            do {
              puVar15 = (undefined8 *)uVar18;
              uVar14 = uVar14 + 1;
              puVar16 = puVar15 + 1;
              uVar18 = ZEXT48(puVar16);
              *puVar17 = *puVar15;
              puVar17 = puVar17 + 1;
            } while (uVar14 < uVar4);
          }
          if ((uVar7 & 1) != 0) {
            *(undefined4 *)puVar17 = *(undefined4 *)puVar16;
          }
          auVar22 = (*pcVar8)();
          (*extraout_w11_01)(auVar22._0_8_ & 0xffffffff,auVar22._8_8_ & 0xffffffff,
                             uVar11 & 0xffffffff,uVar12 & 0xffffffff);
          iVar20 = iVar20 + 1;
        } while (psVar1[iVar20 * 2] != -1);
      }
    }
    FUN_100e6f00(*(undefined4 *)(param_1 + 0xc284));
  }
  if (local_48 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc284) = 0;
    *(undefined4 *)(local_50 + 0x2670) = 0;
    uVar10 = (*pcVar8)();
    (*extraout_w11_06)(uVar10,0);
  }
  else if (param_3 == 0) {
    local_60 = 0;
  }
  else {
    *(int **)(param_1 + 0xc284) = local_48;
    puVar13 = (undefined4 *)(param_3 + 4);
    *(undefined4 *)(local_50 + 0x2670) = *puVar13;
    uVar10 = (*pcVar8)();
    (*extraout_w11_02)(uVar10,*puVar13);
    FUN_10157940(&local_50);
    if (*(char *)(param_1 + 0x11) == '\0') {
      psVar1 = (short *)(param_3 + 0xc);
      iVar9 = 0;
      if (*psVar1 == -1) {
        piVar21 = (int *)(param_3 + 8);
      }
      else {
        local_48 = (int *)(param_3 + 8);
        do {
          uVar2 = psVar1[iVar9 * 2];
          uVar3 = *(ushort *)(param_3 + 0xe + iVar9 * 4);
          uVar18 = (ulonglong)uVar3;
          puVar16 = (undefined8 *)(*(int *)(param_3 + 8) + (uint)uVar2 * 0x10 + 0x414);
          puVar17 = (undefined8 *)(param_1 + (uVar2 + 0xb33) * 0x10);
          uVar4 = (uint)uVar3 - (uint)uVar2 & 0x3fffffff;
          uVar14 = 0;
          if (uVar4 != 0) {
            do {
              uVar19 = *puVar16;
              uVar14 = uVar14 + 1;
              puVar16 = puVar16 + 1;
              *puVar17 = uVar19;
              puVar17 = puVar17 + 1;
            } while (uVar14 < uVar4 << 1);
          }
          auVar22 = (*pcVar8)();
          (*extraout_w11_03)(auVar22._0_8_ & 0xffffffff,auVar22._8_8_ & 0xffffffff,
                             uVar18 & 0xffffffff);
          iVar9 = iVar9 + 1;
          piVar21 = local_48;
        } while (psVar1[iVar9 * 2] != -1);
      }
      iVar9 = 0;
      psVar1 = (short *)(param_3 + 0x1d0);
      if (*psVar1 != -1) {
        local_4c = (int *)(param_3 + 8);
        local_48 = (int *)(param_1 + 0x14);
        do {
          uVar2 = psVar1[iVar9 * 2];
          uVar3 = *(ushort *)(param_3 + 0x1d2 + iVar9 * 4);
          uVar18 = (ulonglong)uVar3;
          puVar16 = (undefined8 *)(*(int *)(param_3 + 8) + (uVar2 + 0x1a) * 0x10);
          puVar17 = (undefined8 *)(param_1 + (uVar2 + 0xc13) * 0x10);
          uVar4 = (uint)uVar3 - (uint)uVar2 & 0x3fffffff;
          uVar14 = 0;
          if (uVar4 != 0) {
            do {
              uVar19 = *puVar16;
              uVar14 = uVar14 + 1;
              puVar16 = puVar16 + 1;
              *puVar17 = uVar19;
              puVar17 = puVar17 + 1;
            } while (uVar14 < uVar4 << 1);
          }
          auVar22 = (*pcVar8)();
          (*extraout_w11_04)(auVar22._0_8_ & 0xffffffff,auVar22._8_8_ & 0xffffffff,
                             uVar18 & 0xffffffff);
          iVar9 = iVar9 + 1;
          piVar21 = local_4c;
        } while (psVar1[iVar9 * 2] != -1);
      }
      iVar9 = 0;
      psVar1 = (short *)(param_3 + 500);
      if (*psVar1 != -1) {
        do {
          uVar14 = 0;
          uVar2 = psVar1[iVar9 * 2];
          uVar3 = *(ushort *)(param_3 + 0x1f6 + iVar9 * 4);
          uVar18 = (ulonglong)uVar3;
          uVar7 = (uint)uVar3 - (uint)uVar2;
          puVar16 = (undefined8 *)(*piVar21 + (uVar2 + 0xac) * 4);
          puVar17 = (undefined8 *)(param_1 + (uVar2 + 0x308c) * 4);
          uVar4 = uVar7 >> 1;
          if (uVar4 != 0) {
            do {
              uVar19 = *puVar16;
              uVar14 = uVar14 + 1;
              puVar16 = puVar16 + 1;
              *puVar17 = uVar19;
              puVar17 = puVar17 + 1;
            } while (uVar14 < uVar4);
          }
          if ((uVar7 & 1) != 0) {
            *(undefined4 *)puVar17 = *(undefined4 *)puVar16;
          }
          auVar22 = (*pcVar8)();
          (*extraout_w11_05)(auVar22._0_8_ & 0xffffffff,auVar22._8_8_ & 0xffffffff,
                             uVar18 & 0xffffffff);
          iVar9 = iVar9 + 1;
        } while (psVar1[iVar9 * 2] != -1);
      }
    }
    FUN_101579f0(&local_50);
  }
  *(undefined1 *)(param_1 + 0xcc4) = 1;
  return local_60;
}

