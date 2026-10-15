/*
 * FUN_1800f0470 at 1800f0470
 * undefined FUN_1800f0470(void)
 * Address ranges: 1800f0470-1800f0b2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

bool FUN_1800f0470(longlong *param_1,uint param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  int *piVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  longlong *local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  uint uStack_d8;
  uint uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  uint uStack_b0;
  undefined8 local_ac;
  ulonglong local_a0 [3];
  undefined4 local_88 [2];
  undefined8 local_80;
  ulonglong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  
  pcVar5 = __imp_KERNEL32_dll_EnterCriticalSection;
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  uVar19 = (ulonglong)param_2;
  (*pcVar5)(param_1 + 2);
  if (*(uint *)(param_1 + 9) == 0) {
    fVar25 = 0.0;
  }
  else {
    fVar25 = (float)((double)*(uint *)(param_1 + 10) / (double)*(uint *)(param_1 + 9));
  }
  uVar9 = 3;
  if (0.9 <= fVar25) {
    uVar9 = 0xffffffff;
  }
  FUN_1800f01d0(param_1,uVar9,uVar19,param_3);
  if (param_3[1] == 0) {
    if ((int)param_1[0xd] != 0) {
      uVar20 = 0;
      if ((int)param_1[0xd] == 0) goto LAB_1800f0578;
      do {
        lVar11 = param_1[0xc] + uVar20 * 0x48;
        if ((lVar11 != -8) && (uVar19 <= *(ulonglong *)(lVar11 + 0x20))) {
          iVar6 = FUN_1800efe50(param_1,lVar11 + 0x10,uVar19);
          if (iVar6 == -1) {
            FUN_1800f01d0(param_1,0xffffffff,0,0);
            iVar6 = FUN_1800efe50(param_1,lVar11 + 0x10,uVar19);
            if (iVar6 == -1) goto LAB_1800f0578;
          }
          FUN_1800f0400(param_1,param_3,lVar11 + 0x10,iVar6);
          break;
        }
LAB_1800f0578:
        uVar8 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(param_1 + 0xd));
    }
    if (param_3[1] == 0) {
      FUN_1800f01d0(param_1,0xffffffff,0,0);
      local_c0 = param_3;
      do {
        uVar8 = *(uint *)((longlong)param_1 + 0x44);
        if (uVar8 < param_2 << 1) {
          uVar3 = *(uint *)(param_1 + 9);
          iVar6 = 2;
          if (param_2 <= uVar8 * 3) {
            iVar6 = 3;
          }
          uVar13 = iVar6 * param_2;
          uVar8 = uVar13;
          if (((uVar3 != 0) && (uVar3 < *(int *)((longlong)param_1 + 0x4c) + uVar13)) &&
             (uVar8 = param_2, uVar3 - *(int *)((longlong)param_1 + 0x4c) < param_2)) {
            uVar8 = uVar13;
          }
        }
        uVar3 = *(uint *)(param_1 + 8);
        uVar8 = (uVar3 + uVar8) - 1 & -uVar3;
        uVar19 = (ulonglong)uVar8;
        if ((*(uint *)(param_1 + 9) == 0) ||
           (*(int *)((longlong)param_1 + 0x4c) + uVar8 <= *(uint *)(param_1 + 9))) {
          local_f0 = uVar19;
          if (uVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1800f0640);
            (*pcVar5)();
          }
          uVar13 = 0;
          if (uVar3 != 0) {
            uVar13 = uVar8 / uVar3;
          }
          lVar11 = -1L << ((ulonglong)uVar13 & 0x3f);
          if ((uVar13 & 0x3f) == 0) {
            lVar11 = 0;
          }
          uVar13 = uVar13 + 0x3f;
          uVar3 = uVar13 >> 6;
          uVar10 = (uVar13 & 0xffffffc0) >> 3;
          lVar12 = -1L << ((ulonglong)uVar3 & 0x3f);
          if ((uVar3 & 0x3f) == 0) {
            lVar12 = 0;
          }
          uVar2 = uVar3 + 0x3f >> 3 & 0x1ffffff8;
          local_e8 = thunk_FUN_180102f80(uVar10);
          local_e0 = thunk_FUN_180102f80(uVar2);
          local_d0 = 0;
          uStack_d8 = uVar10;
          uStack_d4 = uVar2;
          if ((local_e8 != 0) && (local_e0 != 0)) {
            func_0x000180222c50(local_e8,0,uVar10);
            func_0x000180222c50(local_e0,0,uVar2);
            *(longlong *)(local_e8 + (ulonglong)(uVar13 >> 6) * 8 + -8) = lVar11;
            *(longlong *)(local_e0 + (ulonglong)(uVar3 + 0x3f >> 6) * 8 + -8) = lVar12;
            iVar6 = *(int *)((longlong)param_1 + 0xc);
            if (iVar6 == 0) {
              local_b8 = 5;
              if ((char)param_1[0x11] == '\0') {
                local_b8 = 2;
              }
            }
            else {
              local_b8 = 4;
            }
            local_b4 = 0;
            if (iVar6 != 0) {
              local_b4 = 3;
            }
            local_ac = 0;
            local_58 = 0;
            uStack_b0 = (uint)(iVar6 != 0);
            local_88[0] = 1;
            local_80 = 0x10000;
            local_70 = 0x1000100000001;
            uStack_68 = 0x100000000;
            local_60 = 0x100000000;
            plVar7 = *(longlong **)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x20);
            uVar9 = 0x400;
            if (iVar6 != 1) {
              uVar9 = 0xac3;
            }
            uStack_78 = uVar19;
            iVar6 = (**(code **)(*plVar7 + 0xd8))
                              (plVar7,&local_b8,0,local_88,uVar9,0,&DAT_180235458,&local_100);
            if (-1 < iVar6) {
              local_a0[1] = 0;
              local_a0[2] = 0;
              iVar6 = (**(code **)(*local_100 + 0x40))(local_100,0,local_a0 + 1,&uStack_f8);
              if (-1 < iVar6) {
                uVar19 = (**(code **)(*local_100 + 0x58))();
                uVar3 = *(uint *)(param_1 + 0xd);
                uVar20 = 0;
                local_a0[0] = uVar19;
                if (uVar3 == 0) {
LAB_1800f085c:
                  uVar13 = *(uint *)((longlong)param_1 + 0x6c);
                  plVar7 = param_1 + 0xc;
                  if (uVar13 == uVar3) {
                    uVar3 = 0x10;
                    if (uVar13 != 0) {
                      uVar3 = uVar13 << 1;
                    }
                    lVar11 = thunk_FUN_180102f80((ulonglong)uVar3 * 0x48);
                    if (lVar11 != 0) {
                      uVar15 = 0;
                      if ((int)param_1[0xd] != 0) {
                        do {
                          uVar13 = (int)uVar15 + 1;
                          puVar18 = (undefined8 *)(param_1[0xc] + uVar15 * 0x48);
                          puVar14 = (undefined8 *)(lVar11 + uVar15 * 0x48);
                          uVar26 = *puVar18;
                          uVar24 = puVar18[3];
                          uVar23 = puVar18[2];
                          puVar14[1] = puVar18[1];
                          *puVar14 = uVar26;
                          puVar14[3] = uVar24;
                          puVar14[2] = uVar23;
                          uVar26 = puVar18[4];
                          uVar24 = puVar18[7];
                          uVar23 = puVar18[6];
                          puVar14[5] = puVar18[5];
                          puVar14[4] = uVar26;
                          puVar14[7] = uVar24;
                          puVar14[6] = uVar23;
                          puVar14[8] = puVar18[8];
                          uVar15 = (ulonglong)uVar13;
                        } while (uVar13 < *(uint *)(param_1 + 0xd));
                      }
                      thunk_FUN_180102fc0(param_1[0xb]);
                      param_1[0xb] = lVar11;
                      param_1[0xc] = lVar11;
                      *(uint *)((longlong)param_1 + 0x6c) = uVar3;
                    }
                  }
                  uVar15 = (ulonglong)*(uint *)(param_1 + 0xd);
                  if (*(uint *)((longlong)param_1 + 0x6c) != *(uint *)(param_1 + 0xd)) {
                    while ((uint)uVar20 < (uint)uVar15) {
                      uVar17 = (ulonglong)((uint)uVar15 - 1);
                      puVar18 = (undefined8 *)(param_1[0xc] + uVar15 * 0x48);
                      puVar14 = (undefined8 *)(param_1[0xc] + uVar17 * 0x48);
                      uVar26 = *puVar14;
                      uVar24 = puVar14[3];
                      uVar23 = puVar14[2];
                      puVar18[1] = puVar14[1];
                      *puVar18 = uVar26;
                      puVar18[3] = uVar24;
                      puVar18[2] = uVar23;
                      uVar26 = puVar14[4];
                      uVar24 = puVar14[7];
                      uVar23 = puVar14[6];
                      puVar18[5] = puVar14[5];
                      puVar18[4] = uVar26;
                      puVar18[7] = uVar24;
                      puVar18[6] = uVar23;
                      puVar18[8] = puVar14[8];
                      uVar15 = uVar17;
                    }
                    *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
                    *(ulonglong *)(*plVar7 + uVar20 * 0x48 + 8) = uVar19;
                    lVar11 = *plVar7 + uVar20 * 0x48;
                    *(ulonglong *)(lVar11 + 0x18) = uStack_f8;
                    *(longlong **)(lVar11 + 0x10) = local_100;
                    *(ulonglong *)(lVar11 + 0x28) = local_e8;
                    *(ulonglong *)(lVar11 + 0x20) = local_f0;
                    *(ulonglong *)(lVar11 + 0x38) = CONCAT44(uStack_d4,uStack_d8);
                    *(ulonglong *)(lVar11 + 0x30) = local_e0;
                    *(ulonglong *)(lVar11 + 0x40) = CONCAT44(uStack_cc,local_d0);
                    *(ulonglong *)(*plVar7 + uVar20 * 0x48) = uVar19;
                  }
                }
                else {
                  uVar13 = 0;
                  uVar10 = uVar3;
                  do {
                    uVar2 = uVar10 + uVar13 >> 1;
                    uVar20 = (ulonglong)uVar2;
                    uVar15 = *(ulonglong *)(param_1[0xc] + uVar20 * 0x48);
                    if (uVar15 <= uVar19) {
                      if (uVar19 <= uVar15) break;
                      uVar13 = uVar2 + 1;
                      uVar20 = (ulonglong)(uVar2 + 1);
                      uVar2 = uVar10;
                    }
                    uVar10 = uVar2;
                  } while (uVar10 != uVar13);
                  if (((uint)uVar20 == uVar3) ||
                     (puVar1 = (ulonglong *)(param_1[0xc] + uVar20 * 0x48), *puVar1 != uVar19))
                  goto LAB_1800f085c;
                  puVar1[3] = uStack_f8;
                  puVar1[2] = (ulonglong)local_100;
                  puVar1[5] = local_e8;
                  puVar1[4] = local_f0;
                  puVar1[7] = CONCAT44(uStack_d4,uStack_d8);
                  puVar1[6] = local_e0;
                  puVar1[8] = CONCAT44(uStack_cc,local_d0);
                }
                lVar11 = FUN_1800f0f08(param_1 + 0xb,local_a0);
                param_3 = local_c0;
                if (lVar11 != 0) {
                  *(uint *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) + uVar8;
                  iVar6 = FUN_1800efe50(param_1,lVar11,param_2);
                  if (iVar6 != -1) {
                    FUN_1800f0400(param_1,param_3,lVar11,iVar6);
                  }
                  break;
                }
              }
              (**(code **)(*local_100 + 0x10))();
            }
          }
          thunk_FUN_180102fc0(local_e8);
          thunk_FUN_180102fc0(local_e0);
        }
        uVar8 = *(uint *)(param_1 + 0xd);
        param_3 = local_c0;
        if (uVar8 == 0) break;
        bVar4 = false;
        uVar3 = uVar8;
        do {
          uVar13 = uVar3 - 1;
          if (uVar13 < uVar8) {
            lVar11 = param_1[0xc] + (ulonglong)uVar13 * 0x48;
            puVar18 = (undefined8 *)(lVar11 + 0x10);
            piVar16 = (int *)(lVar11 + 0x40);
            puVar14 = (undefined8 *)(lVar11 + 0x20);
            puVar22 = (undefined8 *)(lVar11 + 0x28);
            puVar21 = (undefined8 *)(lVar11 + 0x30);
          }
          else {
            puVar18 = (undefined8 *)&DAT_00000008;
            piVar16 = (int *)&DAT_00000038;
            puVar14 = (undefined8 *)&DAT_00000018;
            puVar22 = (undefined8 *)&DAT_00000020;
            puVar21 = (undefined8 *)&DAT_00000028;
          }
          if (*piVar16 == 0) {
            *(int *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) - (int)*puVar14;
            FUN_1800f1570(param_1[7],*puVar18,1);
            (**(code **)(*(longlong *)*puVar18 + 0x10))();
            thunk_FUN_180102fc0(*puVar22);
            thunk_FUN_180102fc0(*puVar21);
            while( true ) {
              uVar19 = (ulonglong)uVar3;
              if (*(uint *)(param_1 + 0xd) <= uVar3) break;
              puVar18 = (undefined8 *)(param_1[0xc] + (ulonglong)(uVar3 - 1) * 0x48);
              uVar3 = uVar3 + 1;
              puVar14 = (undefined8 *)(param_1[0xc] + uVar19 * 0x48);
              uVar26 = *puVar14;
              uVar24 = puVar14[3];
              uVar23 = puVar14[2];
              puVar18[1] = puVar14[1];
              *puVar18 = uVar26;
              puVar18[3] = uVar24;
              puVar18[2] = uVar23;
              uVar26 = puVar14[4];
              uVar24 = puVar14[7];
              uVar23 = puVar14[6];
              puVar18[5] = puVar14[5];
              puVar18[4] = uVar26;
              puVar18[7] = uVar24;
              puVar18[6] = uVar23;
              puVar18[8] = puVar14[8];
            }
            uVar8 = *(uint *)(param_1 + 0xd) - 1;
            *(uint *)(param_1 + 0xd) = uVar8;
            bVar4 = true;
          }
          uVar3 = uVar13;
        } while (uVar13 != 0);
        param_3 = local_c0;
      } while (bVar4);
    }
  }
  lVar11 = param_3[1];
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 2);
  return lVar11 != 0;
}

