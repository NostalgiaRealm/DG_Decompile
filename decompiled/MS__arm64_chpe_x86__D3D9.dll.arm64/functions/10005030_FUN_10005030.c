/*
 * FUN_10005030 at 10005030
 * undefined FUN_10005030(void)
 * Address ranges: 10005030-1000609f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10005030(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  undefined4 *puVar10;
  int *piVar11;
  ulonglong *puVar12;
  char cVar13;
  undefined4 uVar14;
  ulonglong *puVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  undefined4 *puVar20;
  int *extraout_w1;
  ulonglong uVar21;
  ulonglong extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
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
  code *extraout_w11_14;
  uint uVar26;
  ulonglong *puVar27;
  code *pcVar28;
  uint uVar29;
  ulonglong *puVar30;
  undefined4 extraout_s0;
  float extraout_s0_00;
  double extraout_d0;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float extraout_s21;
  undefined1 auVar36 [16];
  ulonglong *local_410;
  int *local_40c;
  ulonglong *local_408;
  ulonglong *local_404;
  ulonglong *local_400;
  code *local_3fc;
  ulonglong *local_3f8;
  undefined4 *local_3f4;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined4 *local_3d0;
  undefined4 local_3c8;
  ulonglong local_3c4;
  ulonglong uStack_3bc;
  undefined4 local_3a4;
  undefined1 auStack_3a0 [520];
  undefined1 auStack_198 [320];
  ulonglong *local_58;
  
  if (*(char *)((int)param_1 + 0x25) != '\0') {
    if (DAT_10170ab0 == 0) {
      (*(code *)PTR_FUN_1016c094)(DAT_10175b50,auStack_3a0,0x104);
      (*(code *)PTR_FUN_1016c160)(auStack_3a0);
      (*(code *)PTR_FUN_1016c158)(auStack_3a0,&DAT_10160580);
      DAT_10170ab0 = (*(code *)PTR_FUN_1016c0c8)(auStack_3a0);
      if (DAT_10170ab0 == 0) {
        (*(code *)PTR_FUN_1016c094)(0,auStack_3a0,0x104);
        (*(code *)PTR_FUN_1016c160)(auStack_3a0);
        (*(code *)PTR_FUN_1016c158)(auStack_3a0,&DAT_10160580);
        DAT_10170ab0 = (*(code *)PTR_FUN_1016c0c8)(auStack_3a0);
      }
    }
    param_1[2] = *(int *)(DAT_10170ad0 + 0x7bc);
    pcVar28 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar14 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    puVar15 = (ulonglong *)(*extraout_w11)(uVar14);
    if (((uint)puVar15 & 0xff) != 0) {
      uVar18 = 0;
      do {
        cVar13 = FUN_1003ad98((&DAT_101714d8)[uVar18 * 0x8a],0);
        (&DAT_10171568)[uVar18 * 0x228] = cVar13;
        if (((&DAT_10171380)[uVar18 * 0x8a] == 0) && (cVar13 == '\0')) {
          FUN_101325d0(&DAT_10171380 + uVar18 * 0x8a,0,0x228);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < 0x20);
      uVar29 = 0;
      uVar18 = 0;
      uVar14 = (*pcVar28)();
      puVar15 = (ulonglong *)(*extraout_w11_00)(uVar14);
      puVar30 = (ulonglong *)0x0;
      puVar27 = puVar15;
      piVar11 = param_1;
      if (puVar15 != (ulonglong *)0x0) {
        do {
          local_40c = piVar11;
          local_410 = puVar27;
          uVar14 = (*pcVar28)();
          puVar15 = (ulonglong *)(*extraout_w11_01)(uVar14,puVar30);
          puVar27 = (ulonglong *)0x0;
          puVar12 = puVar15;
          if (puVar15 != (ulonglong *)0x0) {
            do {
              local_400 = puVar12;
              local_404 = puVar30;
              if (((0x1f < uVar29) ||
                  ((1 << (ulonglong)(uVar29 & 0x1f) & *(uint *)(DAT_10170ad0 + 0x953)) != 0)) &&
                 ((*(int *)(DAT_10170ad0 + 0x76c) == 0 ||
                  ((ulonglong *)(*(int *)(DAT_10170ad0 + 0x76c) + -1) == puVar27)))) {
                uVar14 = (*pcVar28)();
                puVar15 = local_404;
                iVar16 = (*extraout_w11_02)(uVar14,local_404);
                uVar14 = (*pcVar28)();
                puVar15 = (ulonglong *)(*extraout_w11_03)(uVar14,auStack_198,puVar15,puVar27);
                uVar26 = 0;
                do {
                  if (((iVar16 == (&DAT_10171390)[uVar26 * 0x8a]) &&
                      (puVar27 == (ulonglong *)(&DAT_10171394)[uVar26 * 0x8a])) &&
                     (puVar15 = (ulonglong *)FUN_1003ad98((&DAT_101714d8)[uVar26 * 0x8a],0),
                     ((uint)puVar15 & 1) != 0)) break;
                  uVar26 = uVar26 + 1;
                } while (uVar26 < 0x20);
                if ((uVar26 == 0x20) && (puVar15 = local_58, local_58 != (ulonglong *)0x0)) {
                  local_3c8 = 0x28;
                  puVar15 = (ulonglong *)(*(code *)PTR_FUN_1016c1d8)(local_58,&local_3c8);
                  if (uVar18 < 0x20 && puVar15 != (ulonglong *)0x0) {
                    do {
                      if ((&DAT_101714d8)[uVar18 * 0x8a] == 0) {
                        local_408 = (ulonglong *)(&DAT_10171380 + uVar18 * 0x8a);
                        uVar14 = (*pcVar28)();
                        (*extraout_w11_04)(uVar14,&local_3f0,iVar16,puVar27);
                        puVar30 = local_408;
                        (&DAT_10171380)[uVar18 * 0x8a] = 0;
                        *(undefined4 *)((int)local_408 + 4) = 0;
                        *(int *)(local_408 + 2) = iVar16;
                        *(ulonglong **)((int)local_408 + 0x14) = puVar27;
                        FUN_101325a0(uVar18 * 0x228 + 0x10171398,auStack_198,0x14c);
                        puVar30[0x3a] = 0;
                        *(undefined1 *)((int)puVar30 + 0x1ea) = 0;
                        (&DAT_101714ec)[uVar18 * 0x45] = uStack_3e8;
                        (&DAT_101714e4)[uVar18 * 0x45] = local_3f0;
                        (&DAT_101714f4)[uVar18 * 0x45] = local_3e0;
                        *(undefined1 *)(puVar30 + 0x3d) = 1;
                        puVar30[0x39] = uStack_3bc;
                        puVar30[0x38] = local_3c4;
                        *(byte *)((int)puVar30 + 0x1e9) = (byte)local_3a4 & 1;
                        uVar14 = (*pcVar28)();
                        puVar15 = (ulonglong *)(*extraout_w11_05)(uVar14,local_404);
                        uVar18 = uVar18 + 1;
                        *(char *)((int)puVar30 + 0x1eb) = (char)puVar15;
                        break;
                      }
                      uVar18 = uVar18 + 1;
                    } while (uVar18 < 0x20);
                  }
                }
              }
              puVar27 = (ulonglong *)((int)puVar27 + 1);
              uVar29 = uVar29 + 1;
              puVar30 = local_404;
              puVar12 = local_400;
            } while (puVar27 < local_400);
          }
          puVar30 = (ulonglong *)((int)puVar30 + 1);
          puVar27 = local_410;
          piVar11 = local_40c;
          param_1 = local_40c;
        } while (puVar30 < local_410);
      }
    }
    do {
      iVar16 = DAT_10170ad4 + 1;
      cVar13 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(0x10170ad4,0x10);
      if (bVar9) {
        cVar13 = ExclusiveMonitorsStatus();
        DAT_10170ad4 = iVar16;
      }
    } while (cVar13 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar16 == 1) {
      DAT_10170adc = (*(code *)PTR_FUN_1016c044)(1,FUN_1003b3e0);
      DAT_10170ae0 = (ulonglong *)(*(code *)PTR_FUN_1016c040)(1,FUN_1003b3e0);
      puVar15 = DAT_10170ae0;
    }
    local_408 = (ulonglong *)0x0;
    do {
      puVar30 = local_408;
      if ((&DAT_10171568)[(int)local_408 * 0x228] != '\0') {
        iVar16 = (int)local_408 * 0x228;
        piVar8 = &DAT_10171380 + (int)local_408 * 0x8a;
        piVar11 = &DAT_10171384 + (int)local_408 * 0x8a;
        do {
          cVar13 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar11),0x10);
          if (bVar9) {
            *piVar11 = *piVar11 + 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
          iVar19 = DAT_10170ad0;
        } while (cVar13 != '\0');
        DataMemoryBarrier(2,3);
        if (*piVar8 == 0) {
          if ((uint)param_1[2] < 7) {
            piVar1 = &DAT_10171390 + (int)local_408 * 0x8a;
            uVar18 = 0;
            do {
              if (((&DAT_10171390)[uVar18 * 0x8a] == *piVar1) &&
                 (iVar23 = (&DAT_10171380)[uVar18 * 0x8a], iVar23 != 0)) goto LAB_10005594;
              uVar18 = uVar18 + 1;
            } while (uVar18 < 0x20);
            iVar23 = 0;
LAB_10005594:
            local_404 = &DAT_10171570 + (int)local_408 * 0x45;
            *local_404 = *(ulonglong *)(DAT_10170ad0 + 0x7c0);
            if ((int *)param_1[1] != (int *)0x0) {
              *(int *)param_1[1] = iVar19 + 0x9c;
            }
            if (iVar23 == 0) {
              local_40c = piVar1;
              uVar14 = (*pcVar28)();
              iVar19 = (*extraout_w11_08)(uVar14);
              if (iVar19 == 2) {
                local_410 = (ulonglong *)*piVar1;
                uVar18 = FUN_101321c0(0x1d084);
                puVar27 = (ulonglong *)(uVar18 + 0x13 & 0xfffffff0);
                *(uint *)((int)puVar27 + -4) = uVar18;
                local_400 = puVar27;
                puVar15 = (ulonglong *)FUN_100cadc0(puVar27,local_410);
                *(undefined ***)puVar27 = &PTR_FUN_1015f21c;
                *(undefined ***)((int)puVar27 + 0xc) = &PTR_FUN_1015ee58;
                puVar27[0x39e0] = 0;
                *(uint *)(puVar27 + 0x39e1) = 0;
                ((uint *)((int)puVar27 + 0x1cf7c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cf7c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d02c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d02c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d034))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d034))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d03c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d03c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d044))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d044))[1] = 0xffffffff;
                ((uint *)((int)puVar27 + 0x1d04c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d04c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d054))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d054))[1] = 0;
                *(uint *)((int)puVar27 + 0x1d05c) = 0;
                *(uint *)(puVar27 + 0x3a0c) = 0;
                ((uint *)((int)puVar27 + 0x1cf14))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cf14))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cf0c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cf0c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cf24))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cf24))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cf1c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cf1c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cf34))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cf34))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cf2c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cf2c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cf44))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cf44))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cf3c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cf3c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cf54))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cf54))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cf4c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cf4c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cf64))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cf64))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cf5c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cf5c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cf74))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cf74))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cf6c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cf6c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cf8c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cf8c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cf84))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cf84))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cf9c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cf9c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cf94))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cf94))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cfac))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cfac))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cfa4))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cfa4))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cfbc))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cfbc))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cfb4))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cfb4))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cfcc))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cfcc))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cfc4))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cfc4))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cfdc))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cfdc))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cfd4))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cfd4))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cfec))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cfec))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cfe4))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cfe4))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cffc))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cffc))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cff4))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cff4))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d00c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d00c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d004))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d004))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d01c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d01c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d014))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d014))[1] = 0;
                *(uint *)((int)puVar27 + 0x1d024) = 0;
                *(uint *)(puVar27 + 0x3a05) = 0;
                *piVar8 = (int)puVar27;
              }
              else {
                local_410 = (ulonglong *)*piVar1;
                uVar18 = FUN_101321c0(0x1d224);
                puVar27 = (ulonglong *)(uVar18 + 0x13 & 0xfffffff0);
                *(uint *)((int)puVar27 + -4) = uVar18;
                local_400 = puVar27;
                FUN_100cadc0(puVar27,local_410);
                *(undefined ***)puVar27 = &PTR_FUN_1015ee5c;
                *(undefined ***)((int)puVar27 + 0xc) = &PTR_FUN_1015ee58;
                puVar27[0x39e0] = 0;
                puVar27[0x39f6] = 0;
                puVar27[0x39f7] = 0;
                puVar27[0x39f8] = 0;
                local_410 = puVar27 + 0x39f9;
                uVar18 = FUN_101322b0(0x80);
                *(uint *)local_410 = uVar18;
                ((uint *)((int)local_410 + 4))[0] = 8;
                ((uint *)((int)local_410 + 4))[1] = 0;
                *(uint *)((int)local_410 + 0xc) = 0;
                *(undefined1 *)(local_410 + 2) = 0;
                ((uint *)((int)puVar27 + 0x1d1dc))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d1dc))[1] = 0;
                local_410 = (ulonglong *)((int)puVar27 + 0x1d1e4);
                uVar18 = FUN_101322b0(0x4000);
                *(uint *)local_410 = uVar18;
                ((uint *)((int)local_410 + 4))[0] = 0x100;
                ((uint *)((int)local_410 + 4))[1] = 0;
                ((uint *)((int)local_410 + 0xc))[0] = 0;
                ((uint *)((int)local_410 + 0xc))[1] = 0;
                ((uint *)((int)local_410 + 0x14))[0] = 0;
                ((uint *)((int)local_410 + 0x14))[1] = 0;
                *(uint *)(puVar27 + 0x3a40) = 0;
                puVar27[0x39e2] = 0;
                puVar27[0x39e1] = 0;
                puVar27[0x39e4] = 0;
                puVar27[0x39e3] = 0;
                puVar27[0x39e6] = 0;
                puVar27[0x39e5] = 0;
                puVar27[0x39e8] = 0;
                puVar27[0x39e7] = 0;
                puVar27[0x39ea] = 0;
                puVar27[0x39e9] = 0;
                puVar27[0x39ec] = 0;
                puVar27[0x39eb] = 0;
                puVar27[0x39ee] = 0;
                puVar27[0x39ed] = 0;
                puVar27[0x39f0] = 0;
                puVar27[0x39ef] = 0;
                puVar27[0x39f2] = 0;
                puVar27[0x39f1] = 0;
                puVar27[0x39f4] = 0;
                puVar27[0x39f3] = 0;
                *(uint *)(puVar27 + 0x39f5) = 0;
                *(uint *)((int)puVar27 + 0x1cfac) = 0;
                ((uint *)((int)puVar27 + 0x1cfe4))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cfe4))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cfdc))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cfdc))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cff4))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cff4))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cfec))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cfec))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d004))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d004))[1] = 0;
                ((uint *)((int)puVar27 + 0x1cffc))[0] = 0;
                ((uint *)((int)puVar27 + 0x1cffc))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d014))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d014))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d00c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d00c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d024))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d024))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d01c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d01c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d034))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d034))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d02c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d02c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d044))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d044))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d03c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d03c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d054))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d054))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d04c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d04c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d064))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d064))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d05c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d05c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d074))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d074))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d06c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d06c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d084))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d084))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d07c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d07c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d094))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d094))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d08c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d08c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d0a4))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d0a4))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d09c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d09c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d0b4))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d0b4))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d0ac))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d0ac))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d0c4))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d0c4))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d0bc))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d0bc))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d0d4))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d0d4))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d0cc))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d0cc))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d0e4))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d0e4))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d0dc))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d0dc))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d0f4))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d0f4))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d0ec))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d0ec))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d104))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d104))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d0fc))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d0fc))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d114))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d114))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d10c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d10c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d124))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d124))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d11c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d11c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d134))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d134))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d12c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d12c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d144))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d144))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d13c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d13c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d154))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d154))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d14c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d14c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d164))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d164))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d15c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d15c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d174))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d174))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d16c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d16c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d184))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d184))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d17c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d17c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d194))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d194))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d18c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d18c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d1a4))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d1a4))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d19c))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d19c))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d1b4))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d1b4))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d1ac))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d1ac))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d1c4))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d1c4))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d1bc))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d1bc))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d1d4))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d1d4))[1] = 0;
                ((uint *)((int)puVar27 + 0x1d1cc))[0] = 0;
                ((uint *)((int)puVar27 + 0x1d1cc))[1] = 0;
                puVar15 = (ulonglong *)FUN_101325d0(puVar27 + 0x2015,0,0xc180);
                *piVar8 = (int)puVar27;
              }
              if (puVar27 != (ulonglong *)0x0) {
                switch(*(undefined4 *)(DAT_10170ad0 + 0x93f)) {
                case 0:
                  switch(*(undefined4 *)(DAT_10170ad0 + 0x836)) {
                  case 0:
                    uVar21 = 0x2a;
                    break;
                  default:
                    goto switchD_10005dc8_caseD_1;
                  case 2:
                  case 3:
                  case 4:
                    goto switchD_10005dc8_caseD_3;
                  }
                  break;
                default:
switchD_10005dc8_caseD_1:
                  uVar21 = 6;
                  break;
                case 2:
                  uVar21 = 0x15;
                  break;
                case 3:
switchD_10005dc8_caseD_3:
                  uVar21 = 0x16;
                }
                (*pcVar28)(puVar15,DAT_10170ad0 + 0x764);
                uVar21 = (*extraout_w11_09)(puVar27,extraout_x1_00,&DAT_1016e0c8,uVar21 & 0xffffffff
                                           );
                if ((uVar21 & 0xff) != 0) {
                  uVar21 = FUN_1003b520(uVar21,puVar30,(&DAT_10171394)[(int)puVar30 * 0x8a]);
                  if ((uVar21 & 1) != 0) {
                    uVar18 = *(uint *)(&DAT_101714fc + (int)puVar30 * 0x45);
                    uVar29 = *(uint *)((int)&DAT_101714fc + iVar16 + 4);
                    if (0x500 < uVar18) {
                      uVar18 = 0x500;
                    }
                    if (0x400 < uVar29) {
                      uVar29 = 0x400;
                    }
                    uVar18 = uVar18 * uVar29 * (*(uint *)((int)&DAT_1017150c + iVar16 + 4) >> 3);
                    lVar5 = 0;
                    if ((ulonglong)uVar18 < *local_404) {
                      lVar5 = *local_404 - (ulonglong)uVar18;
                    }
                    (&DAT_10171578)[(int)puVar30 * 0x45] = lVar5;
                    uVar14 = (*pcVar28)();
                    piVar11 = local_40c;
                    uVar14 = (*extraout_w11_10)(uVar14,*local_40c);
                    (&DAT_10171550)[(int)puVar30 * 0x8a] = uVar14;
                    uVar14 = (*pcVar28)();
                    puVar20 = (undefined4 *)(*extraout_w11_11)(uVar14,&local_3f4,*piVar11);
                    (&DAT_10171564)[(int)puVar30 * 0x8a] = *puVar20;
                    if (*(int *)(DAT_10170ad0 + 0x93b) == 1) {
                      uVar14 = 0x18;
                    }
                    else {
                      uVar14 = 0;
                      if (*(int *)(DAT_10170ad0 + 0x93b) == 2) {
                        uVar14 = 0x20;
                      }
                    }
                    auVar36 = (*pcVar28)(*piVar8,uVar14);
                    (*extraout_w11_12)(auVar36._0_8_ & 0xffffffff,auVar36._8_8_ & 0xffffffff);
                    goto LAB_10005634;
                  }
                  uVar14 = (*pcVar28)();
                  (*extraout_w11_13)(uVar14);
                }
                uVar14 = (*pcVar28)();
                puVar15 = (ulonglong *)(*extraout_w11_14)(uVar14);
              }
              *piVar8 = 0;
            }
            else {
              *piVar8 = iVar23;
              puVar15 = (ulonglong *)
                        FUN_1003b520(puVar15,local_408,(&DAT_10171394)[(int)local_408 * 0x8a]);
              if (((uint)puVar15 & 1) != 0) {
                uVar18 = *(uint *)(&DAT_101714fc + (int)puVar30 * 0x45);
                uVar29 = *(uint *)((int)&DAT_101714fc + iVar16 + 4);
                if (0x500 < uVar18) {
                  uVar18 = 0x500;
                }
                if (0x400 < uVar29) {
                  uVar29 = 0x400;
                }
                uVar18 = uVar18 * uVar29 * (*(uint *)((int)&DAT_1017150c + iVar16 + 4) >> 3);
                lVar5 = 0;
                if ((ulonglong)uVar18 < *local_404) {
                  lVar5 = *local_404 - (ulonglong)uVar18;
                }
                (&DAT_10171578)[(int)puVar30 * 0x45] = lVar5;
                goto LAB_10005634;
              }
            }
          }
          do {
            cVar13 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar11),0x10);
            if (bVar9) {
              *piVar11 = *piVar11 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          DataMemoryBarrier(2,3);
        }
        else {
LAB_10005634:
          puVar15 = (ulonglong *)FUN_10007100(param_1 + 0x12,&local_408);
        }
      }
      local_408 = (ulonglong *)((int)puVar30 + 1);
    } while (local_408 < (ulonglong *)0x20);
    puVar2 = (uint *)(param_1 + 0x13);
    puVar30 = (ulonglong *)(param_1 + 0x12);
    uVar18 = 0;
    local_404 = (ulonglong *)puVar2;
    if (*puVar2 != 0) {
      piVar11 = param_1 + 0x15;
      local_408 = (ulonglong *)(param_1 + 0x17);
      puVar27 = (ulonglong *)(param_1 + 0x16);
      local_3fc = pcVar28;
      uVar29 = 0;
      uVar18 = *puVar2;
      local_410 = puVar30;
      local_40c = param_1;
      local_400 = local_408;
      local_3f8 = puVar30;
      puVar15 = puVar27;
      do {
        local_3f0 = 0;
        uStack_3e8 = 0;
        if (uVar18 != 0) {
          uVar26 = 0;
          uVar24 = 0x7fffffff;
          iVar23 = *(int *)((uint)*local_410 + uVar29 * 4);
          uStack_3e8._0_4_ = 0;
          uStack_3e8._4_4_ = 0;
          local_3f0._0_4_ = 0;
          local_3f0._4_4_ = 0;
          iVar16 = (int)uStack_3e8;
          uVar22 = uStack_3e8._4_4_;
          uVar25 = (uint)local_3f0;
          iVar19 = local_3f0._4_4_;
          do {
            iVar6 = *(int *)((uint)*local_410 + uVar26 * 4);
            if ((&DAT_10171390)[iVar23 * 0x8a] == (&DAT_10171390)[iVar6 * 0x8a]) {
              uVar7 = (&DAT_10171394)[iVar6 * 0x8a];
              iVar16 = iVar16 + 1;
              uStack_3e8 = CONCAT44(uStack_3e8._4_4_,iVar16);
              if (uVar7 < uVar24) {
                uVar24 = uVar7;
                uVar25 = uVar26;
              }
              if (uVar7 < (uint)(&DAT_10171394)[iVar23 * 0x8a]) {
                iVar19 = iVar19 + 1;
                local_3f0._4_4_ = iVar19;
              }
              local_3f0 = CONCAT44(local_3f0._4_4_,uVar25);
              if (uVar29 != uVar26) {
                uVar22 = 1 << (ulonglong)(uVar26 & 0x1f) | uVar22;
                uStack_3e8 = CONCAT44(uVar22,iVar16);
              }
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < uVar18);
        }
        uVar18 = (uint)*local_400;
        if ((uint)*puVar27 == uVar18) {
          uVar26 = uVar18 << 1;
          if (uVar18 == 0) {
            uVar26 = 0x10;
          }
          iVar16 = uVar26 * 0x10;
          if (uVar26 >> 0x1c != 0) {
            iVar16 = -1;
          }
          iVar16 = FUN_101322b0(iVar16);
          puVar15 = (ulonglong *)0x0;
          if (iVar16 != 0) {
            FUN_101325a0(iVar16,*piVar11,((ulonglong)(uint)*local_408 & 0xfffffff) << 4);
            puVar15 = (ulonglong *)FUN_101322d0(*piVar11);
            *piVar11 = iVar16;
            *(uint *)local_408 = uVar26;
            goto LAB_100057b8;
          }
        }
        else {
LAB_100057b8:
          puVar4 = (undefined8 *)(*piVar11 + (uint)*puVar27 * 0x10);
          puVar4[1] = uStack_3e8;
          *puVar4 = local_3f0;
          *(uint *)puVar27 = (uint)*puVar27 + 1;
        }
        uVar18 = *puVar2;
        uVar29 = uVar29 + 1;
        param_1 = local_40c;
        puVar30 = local_3f8;
        pcVar28 = local_3fc;
      } while (uVar29 < uVar18);
    }
    puVar27 = local_408;
    if (uVar18 != 0) {
      uVar29 = 0;
      local_408 = puVar30;
      if (uVar18 != 0) {
        local_3fc = (code *)(param_1 + 1);
        local_40c = param_1;
        local_3f8 = puVar30;
        while (puVar15 = (ulonglong *)
                         FUN_1003a558(local_3fc,*(undefined4 *)((uint)*local_3f8 + uVar29 * 4)),
              param_1 = local_40c, ((uint)puVar15 & 1) != 0) {
          iVar16 = *(int *)((uint)*local_408 + uVar29 * 4);
          local_400 = (ulonglong *)(&DAT_10171380 + iVar16 * 0x8a);
          FUN_101322d0(*(undefined4 *)(&DAT_10171598 + iVar16 * 0x45));
          local_3d0 = (undefined4 *)((int)&DAT_10171598 + iVar16 * 0x228 + 4);
          local_3f4 = &DAT_101715a0 + iVar16 * 0x8a;
          *local_3f4 = 0;
          (&DAT_10171598)[iVar16 * 0x45] = 0;
          uVar14 = (&DAT_10171390)[iVar16 * 0x8a];
          uVar17 = (*pcVar28)();
          uVar18 = (*extraout_w11_06)(uVar17,uVar14);
          puVar15 = (ulonglong *)0x0;
          if (uVar18 != 0) {
            uVar26 = 0;
            do {
              uVar17 = (*pcVar28)();
              local_410 = (ulonglong *)(*extraout_w11_07)(uVar17,uVar14,uVar26);
              puVar15 = (ulonglong *)FUN_10007100(&DAT_10171598 + iVar16 * 0x45,&local_410);
              puVar10 = local_3d0;
              puVar20 = local_3f4;
              puVar30 = local_400;
              param_1 = local_40c;
              if (((uint)puVar15 & 1) == 0) {
                puVar15 = (ulonglong *)FUN_101322d0((uint)local_400[0x43]);
                *(uint *)(puVar30 + 0x43) = 0;
                *puVar10 = 0;
                *puVar20 = 0;
                goto LAB_10005928;
              }
              uVar26 = uVar26 + 1;
            } while (uVar26 < uVar18);
          }
          uVar29 = uVar29 + 1;
          param_1 = local_40c;
          if ((uint)*local_404 <= uVar29) break;
        }
      }
LAB_10005928:
      puVar27 = local_408;
      if (uVar29 == (uint)*local_404) {
        piVar11 = param_1 + 3;
        iVar16 = FUN_101322b0(0x1004);
        *piVar11 = iVar16;
        puVar15 = (ulonglong *)0x0;
        puVar27 = local_408;
        if (iVar16 != 0) {
          iVar16 = FUN_101322b0(0x1004);
          piVar8 = param_1 + 4;
          *piVar8 = iVar16;
          if (iVar16 != 0) {
            iVar16 = FUN_101322b0(0x1004);
            piVar1 = param_1 + 5;
            *piVar1 = iVar16;
            if (iVar16 != 0) {
              iVar16 = FUN_101322b0(0x1004);
              piVar3 = param_1 + 6;
              *piVar3 = iVar16;
              if (iVar16 != 0) {
                iVar16 = FUN_101322b0(0x1004);
                param_1[7] = iVar16;
                if (iVar16 != 0) {
                  fVar32 = 1.0;
                  uVar21 = ZEXT48(param_1 + 7);
                  fVar34 = 0.0009765625;
                  uVar18 = 0;
                  fVar31 = 1.0;
                  do {
                    FUN_101318f0((double)((float)uVar18 * fVar34),uVar18,uVar21);
                    iVar16 = FUN_101318f0(0x4000000000000000);
                    *(float *)(*piVar11 + iVar16 * 4) = extraout_s21 / (float)extraout_d0;
                    iVar16 = FUN_10131618(0x40000000);
                    *(undefined4 *)(*piVar8 + iVar16 * 4) = extraout_s0;
                    uVar18 = iVar16 + 1;
                    *(float *)(*piVar1 + iVar16 * 4) = fVar31;
                    fVar31 = fVar31 + fVar31;
                    uVar21 = extraout_x1;
                  } while (uVar18 < 0x401);
                  uVar18 = 0;
                  fVar33 = 2.7182817;
                  fVar31 = fVar32;
                  do {
                    iVar16 = FUN_10131618(fVar33,(float)uVar18 * fVar34);
                    *(float *)(*piVar3 + iVar16 * 4) = fVar31 / extraout_s0_00;
                    fVar35 = fVar31 / fVar32;
                    fVar32 = fVar32 * fVar33;
                    uVar18 = iVar16 + 1;
                    *(float *)(*extraout_w1 + iVar16 * 4) = fVar35;
                  } while (uVar18 < 0x401);
                  *(undefined1 *)(param_1 + 9) = 1;
                  return 1;
                }
                FUN_101322d0(*piVar3);
                *piVar3 = 0;
              }
              FUN_101322d0(*piVar1);
              *piVar1 = 0;
            }
            FUN_101322d0(*piVar8);
            *piVar8 = 0;
          }
          puVar15 = (ulonglong *)FUN_101322d0(*piVar11);
          *piVar11 = 0;
          puVar27 = local_408;
        }
      }
      for (; puVar30 = local_408, uVar29 != 0; uVar29 = uVar29 - 1) {
        uVar21 = *local_408;
        local_408 = puVar27;
        puVar15 = (ulonglong *)FUN_1003a3b0(puVar15,*(undefined4 *)((uint)uVar21 + uVar29 * 4 + -4))
        ;
        puVar27 = local_408;
        local_408 = puVar30;
      }
    }
    local_408 = puVar27;
    FUN_1003b650();
  }
  return 0;
}

