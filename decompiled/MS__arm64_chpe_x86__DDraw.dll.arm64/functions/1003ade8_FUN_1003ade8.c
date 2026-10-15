/*
 * FUN_1003ade8 at 1003ade8
 * undefined FUN_1003ade8(void)
 * Address ranges: 1003ade8-1003c04f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1003ade8(int param_1,undefined8 *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  int *piVar3;
  longlong lVar4;
  char *pcVar5;
  uint *puVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined *puVar19;
  int extraout_w10;
  ulonglong extraout_x10;
  ulonglong extraout_x10_00;
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
  ulonglong extraout_x11;
  ulonglong extraout_x11_00;
  ulonglong extraout_x11_01;
  ulonglong extraout_x11_02;
  ulonglong extraout_x11_03;
  ulonglong extraout_x11_04;
  ulonglong extraout_x12;
  int *piVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_98 [4];
  int *local_94;
  uint *local_90;
  int *local_8c;
  char *local_88;
  int *local_84;
  int *local_80;
  int *local_7c;
  undefined8 *local_78;
  uint *local_74;
  char *local_70;
  undefined1 auStack_6c [12];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  FUN_10037888(auStack_98);
  uVar13 = 0x88760082;
  if (param_1 == 0) goto LAB_1003b760;
  local_70 = (char *)(param_1 + 0x14f);
  uVar13 = 0x88760005;
  if (*local_70 != '\0') goto LAB_1003b760;
  uVar13 = 0x80004005;
  uVar17 = FUN_10001cf8();
  if ((uVar17 & 1) == 0) goto LAB_1003b760;
  FUN_10040968();
  FUN_10003630();
  if (*(char *)(param_1 + 0x150) == '\0') goto LAB_1003b760;
  uStack_58 = 0;
  local_60 = 0;
  if ((undefined8 *)0x2 < param_2) {
    uStack_58 = param_2[1];
    local_60 = *param_2;
  }
  uStack_48 = 0;
  local_50 = 0;
  iVar10 = FUN_10091750(&local_60,&local_50,0x10);
  if (iVar10 != 0) {
    uVar13 = 0x88760231;
    uVar21 = 0;
    local_78 = param_2;
    do {
      iVar10 = FUN_10091750(&DAT_100bbc50 + uVar21 * 0xa4,&local_60,0x10);
      if ((iVar10 == 0) && (param_2 = local_78, (&DAT_100be338)[uVar21 * 0x228] != '\0'))
      goto LAB_1003af38;
      uVar21 = uVar21 + 1;
    } while (uVar21 < 0x20);
    goto LAB_1003b760;
  }
  uVar21 = 0xffffffff;
  uVar12 = 0;
  do {
    uVar16 = uVar21;
    if (((&DAT_100be2a8)[uVar12 * 0x8a] != 0) && ((&DAT_100be338)[uVar12 * 0x228] != '\0')) {
      if (uVar21 == 0xffffffff) {
        uVar16 = uVar12;
      }
      uVar21 = uVar12;
      if ((&DAT_100be339)[uVar12 * 0x228] != '\0') break;
    }
    uVar21 = uVar16;
    uVar12 = uVar12 + 1;
  } while (uVar12 < 0x20);
LAB_1003af38:
  if (uVar21 == 0xffffffff) goto LAB_1003b760;
  local_88 = (char *)(param_1 + 0x14c);
  *local_88 = param_2 == (undefined8 *)0x2;
  *(char *)(param_1 + 0x14d) = param_2 == (undefined8 *)0x1;
  if (DAT_100be0c0 != 0) {
    do {
      iVar10 = DAT_100be0b0 + 1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(0x100be0b0,0x10);
      if (bVar8) {
        cVar7 = ExclusiveMonitorsStatus();
        DAT_100be0b0 = iVar10;
      }
    } while (cVar7 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar10 == 1) {
      DAT_100be0b8 = (*(code *)PTR_FUN_100ba068)(1,FUN_10003350);
      DAT_100be0bc = (*(code *)PTR_FUN_100ba064)(1,FUN_10003350);
    }
    do {
      iVar10 = DAT_100be0c8 + 1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(0x100be0c8,0x10);
      if (bVar8) {
        cVar7 = ExclusiveMonitorsStatus();
        DAT_100be0c8 = iVar10;
      }
    } while (cVar7 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar10 == 1) {
      puVar11 = (undefined4 *)FUN_100913c0(0x5c);
      iVar10 = DAT_100be0c0;
      uVar18 = 0;
      if (puVar11 == (undefined4 *)0x0) {
        DAT_100be0b4 = (undefined4 *)0x0;
      }
      else {
        *puVar11 = &PTR_FUN_100b1a50;
        piVar3 = puVar11 + 5;
        piVar20 = puVar11 + 1;
        puVar11[1] = iVar10;
        *(undefined8 *)(puVar11 + 2) = 0;
        puVar11[4] = 0;
        *(undefined8 *)(puVar11 + 7) = 0;
        *(undefined8 *)(puVar11 + 5) = 0;
        *(undefined8 *)(puVar11 + 0xb) = 0;
        *(undefined8 *)(puVar11 + 9) = 0;
        puVar11[0xd] = 0;
        *(undefined8 *)(puVar11 + 0x10) = 0;
        *(undefined8 *)(puVar11 + 0xe) = 0;
        *(undefined8 *)(puVar11 + 0x14) = 0;
        *(undefined8 *)(puVar11 + 0x12) = 0;
        puVar11[0x16] = 0;
        local_84 = puVar11 + 0xe;
        DAT_100be0b4 = puVar11;
        *(undefined8 *)(puVar11 + 7) = 0;
        piVar3[0] = 0;
        piVar3[1] = 0;
        *(undefined8 *)(puVar11 + 0xb) = 0;
        *(undefined8 *)(puVar11 + 9) = 0;
        puVar11[0xd] = 0;
        *(undefined8 *)(puVar11 + 0x10) = 0;
        local_84[0] = 0;
        local_84[1] = 0;
        *(undefined8 *)(puVar11 + 0x14) = 0;
        *(undefined8 *)(puVar11 + 0x12) = 0;
        puVar11[0x16] = 0;
        iVar10 = *piVar20;
        if ((*(uint *)(iVar10 + 0x846) & 1) == 0) {
          bVar8 = true;
        }
        else {
          iVar10 = FUN_1008db48(iVar10 + 0x60,0,0x100b3268,1,puVar11);
          *piVar3 = iVar10;
          uVar18 = extraout_x1;
          if (iVar10 != 0) {
            iVar10 = FUN_1008db48(*piVar20 + 0x60,extraout_x1,0x100b3280,3,puVar11);
            local_8c = puVar11 + 6;
            *local_8c = iVar10;
            if (iVar10 != 0) {
              uVar12 = FUN_1008db48(*piVar20 + 0x60,extraout_x1_00,s_GetWindowDC_100b3288,1,puVar11)
              ;
              local_90 = puVar11 + 7;
              *local_90 = uVar12;
              if (uVar12 != 0) {
                iVar10 = FUN_1008db48(*piVar20 + 0x60,extraout_x1_01,s_ReleaseDC_100b3298,2,puVar11)
                ;
                local_94 = puVar11 + 8;
                *local_94 = iVar10;
                if (iVar10 != 0) {
                  iVar10 = FUN_1008db48(*piVar20 + 0x60,extraout_x1_02,s_BeginPaint_100b32a8,2,
                                        puVar11);
                  local_7c = puVar11 + 9;
                  *local_7c = iVar10;
                  if (iVar10 != 0) {
                    iVar10 = FUN_1008db48(*piVar20 + 0x60,extraout_x1_03,s_EndPaint_100b32b8,2,
                                          puVar11);
                    puVar11[10] = iVar10;
                    if (iVar10 != 0) {
                      iVar10 = FUN_1008e0a0(*piVar20 + 0x60,*piVar3);
                      *local_84 = iVar10;
                      uVar13 = FUN_1008e0a0(extraout_x11 & 0xffffffff,*local_8c);
                      puVar11[0xf] = uVar13;
                      uVar13 = FUN_1008e0a0(extraout_x11_00 & 0xffffffff,*local_90);
                      puVar11[0x10] = uVar13;
                      uVar13 = FUN_1008e0a0(extraout_x11_01 & 0xffffffff,*local_94);
                      puVar11[0x11] = uVar13;
                      uVar13 = FUN_1008e0a0(extraout_x11_02 & 0xffffffff,*local_7c);
                      puVar11[0x12] = uVar13;
                      uVar13 = FUN_1008e0a0(extraout_x11_03 & 0xffffffff,extraout_x12 & 0xffffffff);
                      puVar11[0x13] = uVar13;
                      bVar8 = true;
                      uVar18 = extraout_x1_04;
                      iVar10 = extraout_w10;
                      goto LAB_1003b2c8;
                    }
                    FUN_1008dee0(*piVar20 + 0x60,*local_7c,puVar11);
                  }
                  FUN_1008dee0(*piVar20 + 0x60,*local_94,puVar11);
                }
                FUN_1008dee0(*piVar20 + 0x60,*local_90,puVar11);
              }
              FUN_1008dee0(*piVar20 + 0x60,*local_8c,puVar11);
            }
            FUN_1008dee0(*piVar20 + 0x60,*piVar3,puVar11);
            uVar18 = extraout_x1_05;
          }
          iVar10 = *piVar20;
          bVar8 = false;
        }
LAB_1003b2c8:
        if ((*(uint *)(iVar10 + 0x846) >> 1 & 1) == 0) {
LAB_1003b3d8:
          if (bVar8) goto LAB_1003b3f8;
        }
        else if (bVar8) {
          iVar10 = FUN_1008db48(iVar10 + 0x60,uVar18,s_SetCursor_100b32c8,1,puVar11);
          piVar3 = puVar11 + 0xb;
          *piVar3 = iVar10;
          if (iVar10 != 0) {
            iVar10 = FUN_1008db48(*piVar20 + 0x60,extraout_x1_06,s_DefWindowProcA_100b32d8,4,puVar11
                                 );
            piVar1 = puVar11 + 0xc;
            *piVar1 = iVar10;
            if (iVar10 != 0) {
              iVar10 = FUN_1008db48(*piVar20 + 0x60,extraout_x1_07,s_DefWindowProcW_100b32e8,4,
                                    puVar11);
              puVar11[0xd] = iVar10;
              if (iVar10 != 0) {
                uVar13 = FUN_1008e0a0(*piVar20 + 0x60,*piVar3);
                puVar11[0x14] = uVar13;
                uVar13 = FUN_1008e0a0(extraout_x10 & 0xffffffff,*piVar1);
                puVar11[0x15] = uVar13;
                uVar13 = FUN_1008e0a0(extraout_x10_00 & 0xffffffff,extraout_x11_04 & 0xffffffff);
                puVar11[0x16] = uVar13;
                bVar8 = true;
                goto LAB_1003b3d8;
              }
              FUN_1008dee0(*piVar20 + 0x60,*piVar1,puVar11);
            }
            FUN_1008dee0(*piVar20 + 0x60,*piVar3,puVar11);
          }
          bVar8 = false;
          goto LAB_1003b3d8;
        }
        FUN_100014f8(puVar11);
      }
    }
LAB_1003b3f8:
    do {
      iVar10 = DAT_100c297c + 1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(0x100c297c,0x10);
      if (bVar8) {
        cVar7 = ExclusiveMonitorsStatus();
        DAT_100c297c = iVar10;
      }
    } while (cVar7 != '\0');
    DataMemoryBarrier(2,3);
    if (((iVar10 == 1) && (DAT_100c2974 = (*(code *)PTR_FUN_100ba074)(0,0,0,0), DAT_100c2974 != 0))
       && (DAT_100c2978 = (*(code *)PTR_FUN_100ba088)(0,0,FUN_100419d0,0,0,0), DAT_100c2978 == 0)) {
      (*(code *)PTR_FUN_100ba06c)(DAT_100c2974);
    }
    *(uint *)(param_1 + 0x1c) = *(uint *)(DAT_100be0c0 + 0x826) >> 2 & 1;
    *(uint *)(param_1 + 0x20) = *(uint *)(DAT_100be0c0 + 0x82a) & 1;
    iVar14 = DAT_100be0c0;
    iVar10 = *(int *)(DAT_100be0c0 + 0xf8);
    *(int *)(DAT_100be0c0 + 0xf8) = iVar10 + 1;
    if ((iVar10 == 0) && (*(char *)(iVar14 + 0x789) != '\0')) {
      uVar13 = (*(code *)PTR_FUN_100ba134)(0x80000002);
      *(undefined4 *)(iVar14 + 0xf4) = uVar13;
    }
    if (*(int *)(DAT_100be0c0 + 0x7bc) == 0) {
      *local_88 = '\x01';
    }
    local_90 = (uint *)(param_1 + 0x11c);
    *local_90 = uVar21;
    cVar7 = *local_88;
    if (cVar7 == '\0') {
      iVar10 = *(int *)(DAT_100be0c0 + 0x7bc);
    }
    else {
      iVar10 = 0;
    }
    local_80 = (int *)(param_1 + 0x40);
    *local_80 = iVar10;
    *(undefined4 *)(param_1 + 0x120) = (&DAT_100be164)[uVar21 * 0x8a];
    *(int *)(param_1 + 0x18) = (&DAT_100be164)[uVar21 * 0x8a] + 1;
    if ((cVar7 == '\0') || (uVar13 = 0x80004001, *(char *)(param_1 + 0x14d) == '\0')) {
      uVar18 = FUN_100a9d50(&local_78);
      local_74 = (uint *)(param_1 + 0x3c);
      pcVar5 = (char *)*local_90;
      iVar10 = (int)pcVar5 * 0x228;
      puVar6 = &DAT_100be150 + (int)pcVar5 * 0x8a;
      local_7c = &DAT_100be154 + (int)pcVar5 * 0x8a;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(local_7c),0x10);
        if (bVar8) {
          *local_7c = *local_7c + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        iVar14 = DAT_100be0c0;
        pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      } while (cVar7 != '\0');
      DataMemoryBarrier(2,3);
      local_88 = pcVar5;
      if (*puVar6 == 0) {
        if (*(uint *)(param_1 + 0x40) < 7) {
          piVar3 = &DAT_100be160 + (int)pcVar5 * 0x8a;
          uVar21 = 0;
          do {
            if (((&DAT_100be160)[uVar21 * 0x8a] == *piVar3) &&
               (uVar12 = (&DAT_100be150)[uVar21 * 0x8a], uVar12 != 0)) goto LAB_1003b620;
            uVar21 = uVar21 + 1;
          } while (uVar21 < 0x20);
          uVar12 = 0;
LAB_1003b620:
          puVar2 = (ulonglong *)(&DAT_100be340 + iVar10);
          *puVar2 = *(ulonglong *)(DAT_100be0c0 + 0x7c0);
          if ((int *)*local_74 != (int *)0x0) {
            *(int *)*local_74 = iVar14 + 0x9c;
          }
          if (uVar12 == 0) {
            local_8c = piVar3;
            uVar13 = (*pcVar9)();
            iVar14 = (*extraout_w11)(uVar13);
            if (iVar14 == 2) {
              iVar14 = *local_8c;
              iVar15 = FUN_100913c0(0xd094);
              piVar3 = (int *)(iVar15 + 0x13U & 0xfffffff0);
              local_84 = piVar3 + 0x3000;
              piVar3[-1] = iVar15;
              local_94 = piVar3;
              FUN_10030360(piVar3,iVar14);
              piVar3[0x33c2] = 0;
              *piVar3 = (int)&PTR_FUN_100b1eb8;
              piVar3[3] = (int)&PTR_FUN_100b1b34;
              piVar3[0x33c0] = 0;
              piVar3[0x33c1] = 0;
              piVar3[0x33df] = 0;
              piVar3[0x33e0] = 0;
              piVar3[0x340b] = 0;
              piVar3[0x340c] = 0;
              piVar3[0x340d] = 0;
              piVar3[0x340e] = 0;
              piVar3[0x340f] = 0;
              piVar3[0x3410] = 0;
              piVar3[0x3411] = 0;
              piVar3[0x3412] = -1;
              piVar3[0x3413] = 0;
              piVar3[0x3414] = 0;
              piVar3[0x3415] = 0;
              piVar3[0x3416] = 0;
              piVar3[0x3417] = 0;
              piVar3[0x3418] = 0;
              uVar18 = FUN_100914b0(0x5000);
              piVar3[0x3419] = (int)uVar18;
              piVar3[0x341a] = 0x100;
              piVar3[0x341b] = 0;
              piVar3[0x341c] = 0;
              piVar3[0x341d] = 0;
              piVar3[0x341e] = 0;
              piVar3[0x33c5] = 0;
              piVar3[0x33c6] = 0;
              piVar3[0x33c3] = 0;
              piVar3[0x33c4] = 0;
              piVar3[0x33c9] = 0;
              piVar3[0x33ca] = 0;
              piVar3[0x33c7] = 0;
              piVar3[0x33c8] = 0;
              piVar3[0x33cd] = 0;
              piVar3[0x33ce] = 0;
              piVar3[0x33cb] = 0;
              piVar3[0x33cc] = 0;
              piVar3[0x33d1] = 0;
              piVar3[0x33d2] = 0;
              piVar3[0x33cf] = 0;
              piVar3[0x33d0] = 0;
              piVar3[0x33d5] = 0;
              piVar3[0x33d6] = 0;
              piVar3[0x33d3] = 0;
              piVar3[0x33d4] = 0;
              piVar3[0x33d9] = 0;
              piVar3[0x33da] = 0;
              piVar3[0x33d7] = 0;
              piVar3[0x33d8] = 0;
              piVar3[0x33dd] = 0;
              piVar3[0x33de] = 0;
              piVar3[0x33db] = 0;
              piVar3[0x33dc] = 0;
              piVar3[0x33e3] = 0;
              piVar3[0x33e4] = 0;
              piVar3[0x33e1] = 0;
              piVar3[0x33e2] = 0;
              piVar3[0x33e7] = 0;
              piVar3[0x33e8] = 0;
              piVar3[0x33e5] = 0;
              piVar3[0x33e6] = 0;
              piVar3[0x33eb] = 0;
              piVar3[0x33ec] = 0;
              piVar3[0x33e9] = 0;
              piVar3[0x33ea] = 0;
              piVar3[0x33ef] = 0;
              piVar3[0x33f0] = 0;
              piVar3[0x33ed] = 0;
              piVar3[0x33ee] = 0;
              piVar3[0x33f3] = 0;
              piVar3[0x33f4] = 0;
              piVar3[0x33f1] = 0;
              piVar3[0x33f2] = 0;
              piVar3[0x33f7] = 0;
              piVar3[0x33f8] = 0;
              piVar3[0x33f5] = 0;
              piVar3[0x33f6] = 0;
              piVar3[0x33fb] = 0;
              piVar3[0x33fc] = 0;
              piVar3[0x33f9] = 0;
              piVar3[0x33fa] = 0;
              piVar3[0x33ff] = 0;
              piVar3[0x3400] = 0;
              piVar3[0x33fd] = 0;
              piVar3[0x33fe] = 0;
              piVar3[0x3403] = 0;
              piVar3[0x3404] = 0;
              piVar3[0x3401] = 0;
              piVar3[0x3402] = 0;
              piVar3[0x3407] = 0;
              piVar3[0x3408] = 0;
              piVar3[0x3405] = 0;
              piVar3[0x3406] = 0;
              local_84[0x409] = 0;
              local_84[0x40a] = 0;
              piVar20 = local_94;
            }
            else {
              iVar14 = *piVar3;
              iVar15 = FUN_100913c0(0xd224);
              piVar3 = (int *)(iVar15 + 0x13U & 0xfffffff0);
              local_84 = piVar3 + 0x2000;
              piVar3[-1] = iVar15;
              local_94 = piVar3;
              FUN_10030360(piVar3,iVar14);
              *piVar3 = (int)&PTR_FUN_100b1b38;
              piVar3[3] = (int)&PTR_FUN_100b1b34;
              local_84[0x13c0] = 0;
              local_84[0x13c1] = 0;
              local_84[0x13ec] = 0;
              local_84[0x13ed] = 0;
              piVar3[0x33ee] = 0;
              piVar3[0x33ef] = 0;
              piVar3[0x33f0] = 0;
              piVar3[0x33f1] = 0;
              iVar14 = FUN_100914b0(0x80);
              piVar3[0x33f2] = iVar14;
              piVar3[0x33f3] = 8;
              piVar3[0x33f4] = 0;
              piVar3[0x33f5] = 0;
              *(undefined1 *)(piVar3 + 0x33f6) = 0;
              piVar3[0x3477] = 0;
              piVar3[0x3478] = 0;
              iVar14 = FUN_100914b0(0x4000);
              piVar20 = local_94;
              piVar3[0x3479] = iVar14;
              piVar3[0x347a] = 0x100;
              piVar3[0x347b] = 0;
              piVar3[0x347c] = 0;
              piVar3[0x347d] = 0;
              piVar3[0x347e] = 0;
              piVar3[0x347f] = 0;
              piVar3[0x3480] = 0;
              piVar3[0x33c4] = 0;
              piVar3[0x33c5] = 0;
              piVar3[0x33c2] = 0;
              piVar3[0x33c3] = 0;
              piVar3[0x33c8] = 0;
              piVar3[0x33c9] = 0;
              piVar3[0x33c6] = 0;
              piVar3[0x33c7] = 0;
              piVar3[0x33cc] = 0;
              piVar3[0x33cd] = 0;
              piVar3[0x33ca] = 0;
              piVar3[0x33cb] = 0;
              piVar3[0x33d0] = 0;
              piVar3[0x33d1] = 0;
              piVar3[0x33ce] = 0;
              piVar3[0x33cf] = 0;
              piVar3[0x33d4] = 0;
              piVar3[0x33d5] = 0;
              piVar3[0x33d2] = 0;
              piVar3[0x33d3] = 0;
              piVar3[0x33d8] = 0;
              piVar3[0x33d9] = 0;
              piVar3[0x33d6] = 0;
              piVar3[0x33d7] = 0;
              piVar3[0x33dc] = 0;
              piVar3[0x33dd] = 0;
              piVar3[0x33da] = 0;
              piVar3[0x33db] = 0;
              piVar3[0x33e0] = 0;
              piVar3[0x33e1] = 0;
              piVar3[0x33de] = 0;
              piVar3[0x33df] = 0;
              piVar3[0x33e4] = 0;
              piVar3[0x33e5] = 0;
              piVar3[0x33e2] = 0;
              piVar3[0x33e3] = 0;
              piVar3[0x33e8] = 0;
              piVar3[0x33e9] = 0;
              piVar3[0x33e6] = 0;
              piVar3[0x33e7] = 0;
              piVar3[0x33ea] = 0;
              piVar3[0x33eb] = 0;
              piVar3[0x33f9] = 0;
              piVar3[0x33fa] = 0;
              piVar3[0x33f7] = 0;
              piVar3[0x33f8] = 0;
              piVar3[0x33fd] = 0;
              piVar3[0x33fe] = 0;
              piVar3[0x33fb] = 0;
              piVar3[0x33fc] = 0;
              piVar3[0x3401] = 0;
              piVar3[0x3402] = 0;
              piVar3[0x33ff] = 0;
              piVar3[0x3400] = 0;
              piVar3[0x3405] = 0;
              piVar3[0x3406] = 0;
              piVar3[0x3403] = 0;
              piVar3[0x3404] = 0;
              piVar3[0x3409] = 0;
              piVar3[0x340a] = 0;
              piVar3[0x3407] = 0;
              piVar3[0x3408] = 0;
              piVar3[0x340d] = 0;
              piVar3[0x340e] = 0;
              piVar3[0x340b] = 0;
              piVar3[0x340c] = 0;
              piVar3[0x3411] = 0;
              piVar3[0x3412] = 0;
              piVar3[0x340f] = 0;
              piVar3[0x3410] = 0;
              piVar3[0x3415] = 0;
              piVar3[0x3416] = 0;
              piVar3[0x3413] = 0;
              piVar3[0x3414] = 0;
              piVar3[0x3419] = 0;
              piVar3[0x341a] = 0;
              piVar3[0x3417] = 0;
              piVar3[0x3418] = 0;
              piVar3[0x341d] = 0;
              piVar3[0x341e] = 0;
              piVar3[0x341b] = 0;
              piVar3[0x341c] = 0;
              piVar3[0x3421] = 0;
              piVar3[0x3422] = 0;
              piVar3[0x341f] = 0;
              piVar3[0x3420] = 0;
              piVar3[0x3425] = 0;
              piVar3[0x3426] = 0;
              piVar3[0x3423] = 0;
              piVar3[0x3424] = 0;
              piVar3[0x3429] = 0;
              piVar3[0x342a] = 0;
              piVar3[0x3427] = 0;
              piVar3[0x3428] = 0;
              piVar3[0x342d] = 0;
              piVar3[0x342e] = 0;
              piVar3[0x342b] = 0;
              piVar3[0x342c] = 0;
              piVar3[0x3431] = 0;
              piVar3[0x3432] = 0;
              piVar3[0x342f] = 0;
              piVar3[0x3430] = 0;
              piVar3[0x3435] = 0;
              piVar3[0x3436] = 0;
              piVar3[0x3433] = 0;
              piVar3[0x3434] = 0;
              local_94[0x3439] = 0;
              local_94[0x343a] = 0;
              local_94[0x3437] = 0;
              local_94[0x3438] = 0;
              local_94[0x343d] = 0;
              local_94[0x343e] = 0;
              local_94[0x343b] = 0;
              local_94[0x343c] = 0;
              local_94[0x3441] = 0;
              local_94[0x3442] = 0;
              local_94[0x343f] = 0;
              local_94[0x3440] = 0;
              local_94[0x3445] = 0;
              local_94[0x3446] = 0;
              local_94[0x3443] = 0;
              local_94[0x3444] = 0;
              local_94[0x3449] = 0;
              local_94[0x344a] = 0;
              local_94[0x3447] = 0;
              local_94[0x3448] = 0;
              local_94[0x344d] = 0;
              local_94[0x344e] = 0;
              local_94[0x344b] = 0;
              local_94[0x344c] = 0;
              local_94[0x3451] = 0;
              local_94[0x3452] = 0;
              local_94[0x344f] = 0;
              local_94[0x3450] = 0;
              local_94[0x3455] = 0;
              local_94[0x3456] = 0;
              local_94[0x3453] = 0;
              local_94[0x3454] = 0;
              local_94[0x3459] = 0;
              local_94[0x345a] = 0;
              local_94[0x3457] = 0;
              local_94[0x3458] = 0;
              local_94[0x345d] = 0;
              local_94[0x345e] = 0;
              local_94[0x345b] = 0;
              local_94[0x345c] = 0;
              local_94[0x3461] = 0;
              local_94[0x3462] = 0;
              local_94[0x345f] = 0;
              local_94[0x3460] = 0;
              local_94[0x3465] = 0;
              local_94[0x3466] = 0;
              local_94[0x3463] = 0;
              local_94[0x3464] = 0;
              local_94[0x3469] = 0;
              local_94[0x346a] = 0;
              local_94[0x3467] = 0;
              local_94[0x3468] = 0;
              local_94[0x346d] = 0;
              local_94[0x346e] = 0;
              local_94[0x346b] = 0;
              local_94[0x346c] = 0;
              local_94[0x3471] = 0;
              local_94[0x3472] = 0;
              local_94[0x346f] = 0;
              local_94[0x3470] = 0;
              local_94[0x3475] = 0;
              local_94[0x3476] = 0;
              local_94[0x3473] = 0;
              local_94[0x3474] = 0;
              uVar18 = FUN_100917d0(local_94 + 0x2a,0,0xc180);
            }
            *puVar6 = (uint)piVar20;
            if (piVar20 != (int *)0x0) {
              switch(*(undefined4 *)(DAT_100be0c0 + 0x93f)) {
              case 0:
                switch(*(undefined4 *)(DAT_100be0c0 + 0x836)) {
                case 0:
                  uVar17 = 0x1c;
                  break;
                default:
                  goto switchD_1003bad8_caseD_1;
                case 2:
                case 3:
                case 4:
                  goto switchD_1003bad8_caseD_3;
                }
                break;
              default:
switchD_1003bad8_caseD_1:
                uVar17 = 6;
                break;
              case 2:
                uVar17 = 0x15;
                break;
              case 3:
switchD_1003bad8_caseD_3:
                uVar17 = 0x16;
              }
              (*pcVar9)(uVar18,DAT_100be0c0 + 0x764);
              uVar17 = (*extraout_w11_00)(piVar20,extraout_x1_08,&DAT_100bb2c4,uVar17 & 0xffffffff);
              if ((uVar17 & 0xff) != 0) {
                uVar17 = FUN_100039d0(uVar17,local_88,(&DAT_100be164)[(int)pcVar5 * 0x8a]);
                if ((uVar17 & 1) != 0) {
                  uVar21 = *(uint *)(&DAT_100be2cc + (int)pcVar5 * 0x45);
                  uVar12 = *(uint *)((int)&DAT_100be2cc + iVar10 + 4);
                  if (0x500 < uVar21) {
                    uVar21 = 0x500;
                  }
                  if (0x400 < uVar12) {
                    uVar12 = 0x400;
                  }
                  uVar21 = uVar21 * uVar12 * (*(uint *)((int)&DAT_100be2dc + iVar10 + 4) >> 3);
                  lVar4 = 0;
                  if ((ulonglong)uVar21 < *puVar2) {
                    lVar4 = *puVar2 - (ulonglong)uVar21;
                  }
                  *(longlong *)(&DAT_100be348 + iVar10) = lVar4;
                  uVar13 = (*pcVar9)();
                  piVar3 = local_8c;
                  uVar13 = (*extraout_w11_01)(uVar13,*local_8c);
                  *(undefined4 *)(&DAT_100be320 + iVar10) = uVar13;
                  uVar13 = (*pcVar9)();
                  puVar11 = (undefined4 *)(*extraout_w11_02)(uVar13,auStack_6c,*piVar3);
                  *(undefined4 *)(&DAT_100be334 + iVar10) = *puVar11;
                  if (*(int *)(DAT_100be0c0 + 0x93b) == 1) {
                    uVar13 = 0x18;
                  }
                  else {
                    uVar13 = 0;
                    if (*(int *)(DAT_100be0c0 + 0x93b) == 2) {
                      uVar13 = 0x20;
                    }
                  }
                  auVar22 = (*pcVar9)(*puVar6,uVar13);
                  (*extraout_w11_03)(auVar22._0_8_ & 0xffffffff,auVar22._8_8_ & 0xffffffff);
                  goto LAB_1003b6bc;
                }
                uVar13 = (*pcVar9)();
                (*extraout_w11_04)(uVar13);
              }
              uVar13 = (*pcVar9)();
              (*extraout_w11_05)(uVar13);
            }
            *puVar6 = 0;
          }
          else {
            *puVar6 = uVar12;
            uVar17 = FUN_100039d0(uVar18,pcVar5,(&DAT_100be164)[(int)pcVar5 * 0x8a]);
            if ((uVar17 & 1) != 0) {
              uVar21 = *(uint *)(&DAT_100be2cc + (int)pcVar5 * 0x45);
              uVar12 = *(uint *)((int)&DAT_100be2cc + iVar10 + 4);
              if (0x500 < uVar21) {
                uVar21 = 0x500;
              }
              if (0x400 < uVar12) {
                uVar12 = 0x400;
              }
              uVar21 = uVar21 * uVar12 * (*(uint *)((int)&DAT_100be2dc + iVar10 + 4) >> 3);
              lVar4 = 0;
              if ((ulonglong)uVar21 < *puVar2) {
                lVar4 = *puVar2 - (ulonglong)uVar21;
              }
              *(longlong *)(&DAT_100be348 + iVar10) = lVar4;
              goto LAB_1003b6bc;
            }
          }
        }
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(local_7c),0x10);
          if (bVar8) {
            *local_7c = *local_7c + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        DataMemoryBarrier(2,3);
      }
      else {
LAB_1003b6bc:
        puVar6 = local_90;
        uVar21 = *local_90;
        *(undefined4 *)(param_1 + 0x118) = (&DAT_100be150)[uVar21 * 0x8a];
        if ((*(int *)((int)&DAT_100be350 + uVar21 * 0x228 + 4) != 0) ||
           (uVar17 = FUN_10002510(local_74,uVar21), (uVar17 & 1) != 0)) {
          pcVar5 = local_70;
          piVar3 = local_80;
          iVar14 = DAT_100be0c0;
          iVar10 = *(int *)(DAT_100be0c0 + 0x308);
          *(int *)(DAT_100be0c0 + 0x308) = iVar10 + 1;
          if (iVar10 == 0) {
            *(undefined1 *)(iVar14 + 0x758) = 0;
            DAT_100c2a80 = (*(code *)PTR_FUN_100ba074)(0,0,0,0);
            if (DAT_100c2a80 != 0) {
              (*(code *)PTR_FUN_100ba0ec)(iVar14 + 0x318);
              uVar13 = (*(code *)PTR_FUN_100ba088)(0,0,FUN_1008e8c0,iVar14,0,iVar14 + 0x30c);
              *(undefined4 *)(iVar14 + 0x310) = uVar13;
              (*(code *)PTR_FUN_100ba168)(DAT_100c2a80,0xffffffff);
            }
          }
          if (DAT_100be0b4 != (undefined4 *)0x0) {
            piVar20 = DAT_100be0b4 + 2;
            local_74 = DAT_100be0b4 + 3;
            puVar6 = DAT_100be0b4 + 4;
            uVar21 = *puVar6;
            if (*local_74 == uVar21) {
              local_70 = (char *)(uVar21 << 1);
              if (uVar21 == 0) {
                local_70 = &DAT_00000010;
              }
              iVar10 = (int)local_70 * 4;
              if ((uint)local_70 >> 0x1e != 0) {
                iVar10 = -1;
              }
              local_80 = (int *)FUN_100914b0(iVar10);
              if (local_80 == (int *)0x0) goto LAB_1003be5c;
              FUN_100917a0(local_80,*piVar20,((ulonglong)*puVar6 & 0x3fffffff) << 2);
              FUN_100914d0(*piVar20);
              *piVar20 = (int)local_80;
              *puVar6 = (uint)local_70;
            }
            *(int *)(*piVar20 + *local_74 * 4) = param_1 + 0x38;
            *local_74 = *local_74 + 1;
          }
LAB_1003be5c:
          puVar19 = &DAT_100bd694 + *piVar3 * 0x1a8;
          uVar13 = (*pcVar9)();
          (*extraout_w11_06)(uVar13,*puVar19);
          uVar13 = (*pcVar9)();
          iVar10 = (*extraout_w11_07)(uVar13);
          *(bool *)(param_1 + 0x35) = iVar10 == 1;
          *(undefined1 *)(param_1 + 0x36) = 0;
          *pcVar5 = '\x01';
          iVar10 = DAT_100be0c0;
          puVar11 = (undefined4 *)(param_1 + 0x158);
          (*pcVar9)();
          uVar12 = (*extraout_w11_08)(iVar10,&DAT_100b17a0);
          for (uVar21 = 0; uVar21 < uVar12; uVar21 = uVar21 + 1) {
            (*pcVar9)();
            local_80 = (int *)(*extraout_w11_09)(iVar10,&DAT_100b17a0,uVar21);
            if ((local_80 == (int *)0x0) ||
               (uVar17 = FUN_100013d8(puVar11,&local_80), (uVar17 & 1) == 0)) goto LAB_1003c040;
          }
          uVar12 = 1;
          for (uVar21 = 0; uVar21 < *(uint *)(param_1 + 0x15c); uVar21 = uVar21 + 1) {
            uVar13 = (*pcVar9)();
            uVar16 = (*extraout_w11_10)(uVar13,param_1 + 0x154);
            uVar12 = uVar16 & 0xff & uVar12;
            if (uVar12 == 0) goto joined_r0x1003bfe0;
          }
          goto LAB_1003c040;
        }
        FUN_10002100(uVar17,*puVar6);
        *(undefined4 *)(param_1 + 0x118) = 0;
      }
      uVar13 = 0x80004005;
      FUN_100a9ca0(&local_78);
    }
    iVar14 = DAT_100be0c0;
    iVar10 = *(int *)(DAT_100be0c0 + 0xf8) + -1;
    *(int *)(DAT_100be0c0 + 0xf8) = iVar10;
    if ((iVar10 == 0) && (*(char *)(iVar14 + 0x789) != '\0')) {
      puVar11 = (undefined4 *)(iVar14 + 0xf4);
      (*(code *)PTR_FUN_100ba134)(*puVar11);
      *puVar11 = 0;
    }
  }
  FUN_10003b78();
  FUN_10003cd0();
  FUN_100418e0(0);
  goto LAB_1003b760;
joined_r0x1003bfe0:
  for (; uVar21 != 0; uVar21 = uVar21 - 1) {
    uVar13 = (*pcVar9)();
    (*extraout_w11_11)(uVar13,param_1 + 0x154);
  }
  FUN_100914d0(*puVar11);
  *puVar11 = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(uint *)(param_1 + 0x15c) = 0;
LAB_1003c040:
  FUN_100a9ca0(&local_78);
  uVar13 = 0;
LAB_1003b760:
  FUN_10037900(auStack_98);
  return uVar13;
}

