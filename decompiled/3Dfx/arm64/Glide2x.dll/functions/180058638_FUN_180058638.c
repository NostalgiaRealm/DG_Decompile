/*
 * FUN_180058638 at 180058638
 * bool __cdecl FUN_180058638(longlong * param_1, uint param_2, longlong * param_3)
 * Address ranges: 180058638-180058cf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

bool FUN_180058638(longlong *param_1,uint param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong *puVar7;
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
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 uVar25;
  longlong *local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  uint uStack_d8;
  uint uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  longlong *local_c0;
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
  
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if (*(uint *)(param_1 + 9) == 0) {
    fVar24 = 0.0;
  }
  else {
    fVar24 = (float)((double)*(uint *)(param_1 + 10) / (double)*(uint *)(param_1 + 9));
  }
  iVar5 = 3;
  if (0.9 <= fVar24) {
    iVar5 = -1;
  }
  FUN_180058398((longlong)param_1,iVar5,param_2,param_3);
  if (param_3[1] == 0) {
    if ((int)param_1[0xd] != 0) {
      uVar18 = 0;
      if ((int)param_1[0xd] == 0) goto LAB_180058740;
      do {
        lVar11 = param_1[0xc] + uVar18 * 0x48;
        if ((lVar11 != -8) && ((ulonglong)param_2 <= *(ulonglong *)(lVar11 + 0x20))) {
          iVar5 = FUN_180058018((longlong)param_1,lVar11 + 0x10,param_2);
          if (iVar5 == -1) {
            FUN_180058398((longlong)param_1,-1,0,(longlong *)0x0);
            iVar5 = FUN_180058018((longlong)param_1,lVar11 + 0x10,param_2);
            if (iVar5 == -1) goto LAB_180058740;
          }
          FUN_1800585c8((longlong)param_1,param_3,(longlong *)(lVar11 + 0x10),iVar5);
          break;
        }
LAB_180058740:
        uVar8 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(param_1 + 0xd));
    }
    if (param_3[1] == 0) {
      FUN_180058398((longlong)param_1,-1,0,(longlong *)0x0);
      local_c0 = param_3;
      do {
        uVar8 = *(uint *)((longlong)param_1 + 0x44);
        if (uVar8 < param_2 << 1) {
          uVar2 = *(uint *)(param_1 + 9);
          iVar5 = 2;
          if (param_2 <= uVar8 * 3) {
            iVar5 = 3;
          }
          uVar13 = iVar5 * param_2;
          uVar8 = uVar13;
          if (((uVar2 != 0) && (uVar2 < *(int *)((longlong)param_1 + 0x4c) + uVar13)) &&
             (uVar8 = param_2, uVar2 - *(int *)((longlong)param_1 + 0x4c) < param_2)) {
            uVar8 = uVar13;
          }
        }
        uVar2 = *(uint *)(param_1 + 8);
        uVar8 = (uVar2 + uVar8) - 1 & -uVar2;
        uVar18 = (ulonglong)uVar8;
        if ((*(uint *)(param_1 + 9) == 0) ||
           (*(int *)((longlong)param_1 + 0x4c) + uVar8 <= *(uint *)(param_1 + 9))) {
          local_f0 = uVar18;
          if (uVar2 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180058808);
            (*pcVar4)();
          }
          uVar13 = 0;
          if (uVar2 != 0) {
            uVar13 = uVar8 / uVar2;
          }
          lVar11 = -1L << ((ulonglong)uVar13 & 0x3f);
          if ((uVar13 & 0x3f) == 0) {
            lVar11 = 0;
          }
          uVar13 = uVar13 + 0x3f;
          uVar2 = uVar13 >> 6;
          uVar10 = (uVar13 & 0xffffffc0) >> 3;
          lVar12 = -1L << ((ulonglong)uVar2 & 0x3f);
          if ((uVar2 & 0x3f) == 0) {
            lVar12 = 0;
          }
          uVar1 = uVar2 + 0x3f >> 3 & 0x1ffffff8;
          local_e8 = (undefined1 *)thunk_FUN_18005fb88((ulonglong)uVar10);
          local_e0 = (undefined1 *)thunk_FUN_18005fb88((ulonglong)uVar1);
          local_d0 = 0;
          uStack_d8 = uVar10;
          uStack_d4 = uVar1;
          if ((local_e8 != (undefined1 *)0x0) && (local_e0 != (undefined1 *)0x0)) {
            FUN_180060360(local_e8,0,(ulonglong)uVar10);
            FUN_180060360(local_e0,0,(ulonglong)uVar1);
            *(longlong *)(local_e8 + (ulonglong)(uVar13 >> 6) * 8 + -8) = lVar11;
            *(longlong *)(local_e0 + (ulonglong)(uVar2 + 0x3f >> 6) * 8 + -8) = lVar12;
            iVar5 = *(int *)((longlong)param_1 + 0xc);
            if (iVar5 == 0) {
              local_b8 = 5;
              if ((char)param_1[0x11] == '\0') {
                local_b8 = 2;
              }
            }
            else {
              local_b8 = 4;
            }
            local_b4 = 0;
            if (iVar5 != 0) {
              local_b4 = 3;
            }
            local_ac = 0;
            local_58 = 0;
            uStack_b0 = (uint)(iVar5 != 0);
            local_88[0] = 1;
            local_80 = 0x10000;
            local_70 = 0x1000100000001;
            uStack_68 = 0x100000000;
            local_60 = 0x100000000;
            plVar6 = *(longlong **)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x20);
            uVar9 = 0x400;
            if (iVar5 != 1) {
              uVar9 = 0xac3;
            }
            uStack_78 = uVar18;
            iVar5 = (**(code **)(*plVar6 + 0xd8))
                              (plVar6,&local_b8,0,local_88,uVar9,0,&DAT_180063c58,&local_100);
            if (-1 < iVar5) {
              local_a0[1] = 0;
              local_a0[2] = 0;
              iVar5 = (**(code **)(*local_100 + 0x40))(local_100,0,local_a0 + 1,&uStack_f8);
              if (-1 < iVar5) {
                uVar18 = (**(code **)(*local_100 + 0x58))();
                uVar2 = *(uint *)(param_1 + 0xd);
                uVar19 = 0;
                local_a0[0] = uVar18;
                if (uVar2 == 0) {
LAB_180058a24:
                  uVar13 = *(uint *)((longlong)param_1 + 0x6c);
                  plVar6 = param_1 + 0xc;
                  if (uVar13 == uVar2) {
                    uVar2 = 0x10;
                    if (uVar13 != 0) {
                      uVar2 = uVar13 << 1;
                    }
                    lVar11 = thunk_FUN_18005fb88((ulonglong)uVar2 * 0x48);
                    if (lVar11 != 0) {
                      uVar15 = 0;
                      if ((int)param_1[0xd] != 0) {
                        do {
                          uVar13 = (int)uVar15 + 1;
                          puVar14 = (undefined8 *)(param_1[0xc] + uVar15 * 0x48);
                          puVar21 = (undefined8 *)(lVar11 + uVar15 * 0x48);
                          uVar25 = *puVar14;
                          uVar23 = puVar14[3];
                          uVar22 = puVar14[2];
                          puVar21[1] = puVar14[1];
                          *puVar21 = uVar25;
                          puVar21[3] = uVar23;
                          puVar21[2] = uVar22;
                          uVar25 = puVar14[4];
                          uVar23 = puVar14[7];
                          uVar22 = puVar14[6];
                          puVar21[5] = puVar14[5];
                          puVar21[4] = uVar25;
                          puVar21[7] = uVar23;
                          puVar21[6] = uVar22;
                          puVar21[8] = puVar14[8];
                          uVar15 = (ulonglong)uVar13;
                        } while (uVar13 < *(uint *)(param_1 + 0xd));
                      }
                      thunk_FUN_18005fbc8((LPVOID)param_1[0xb]);
                      param_1[0xb] = lVar11;
                      param_1[0xc] = lVar11;
                      *(uint *)((longlong)param_1 + 0x6c) = uVar2;
                    }
                  }
                  uVar15 = (ulonglong)*(uint *)(param_1 + 0xd);
                  if (*(uint *)((longlong)param_1 + 0x6c) != *(uint *)(param_1 + 0xd)) {
                    while ((uint)uVar19 < (uint)uVar15) {
                      uVar17 = (ulonglong)((uint)uVar15 - 1);
                      puVar14 = (undefined8 *)(param_1[0xc] + uVar15 * 0x48);
                      puVar21 = (undefined8 *)(param_1[0xc] + uVar17 * 0x48);
                      uVar25 = *puVar21;
                      uVar23 = puVar21[3];
                      uVar22 = puVar21[2];
                      puVar14[1] = puVar21[1];
                      *puVar14 = uVar25;
                      puVar14[3] = uVar23;
                      puVar14[2] = uVar22;
                      uVar25 = puVar21[4];
                      uVar23 = puVar21[7];
                      uVar22 = puVar21[6];
                      puVar14[5] = puVar21[5];
                      puVar14[4] = uVar25;
                      puVar14[7] = uVar23;
                      puVar14[6] = uVar22;
                      puVar14[8] = puVar21[8];
                      uVar15 = uVar17;
                    }
                    *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
                    *(ulonglong *)(*plVar6 + uVar19 * 0x48 + 8) = uVar18;
                    lVar11 = *plVar6 + uVar19 * 0x48;
                    *(ulonglong *)(lVar11 + 0x18) = uStack_f8;
                    *(longlong **)(lVar11 + 0x10) = local_100;
                    *(undefined1 **)(lVar11 + 0x28) = local_e8;
                    *(ulonglong *)(lVar11 + 0x20) = local_f0;
                    *(ulonglong *)(lVar11 + 0x38) = CONCAT44(uStack_d4,uStack_d8);
                    *(undefined1 **)(lVar11 + 0x30) = local_e0;
                    *(ulonglong *)(lVar11 + 0x40) = CONCAT44(uStack_cc,local_d0);
                    *(ulonglong *)(*plVar6 + uVar19 * 0x48) = uVar18;
                  }
                }
                else {
                  uVar13 = 0;
                  uVar10 = uVar2;
                  do {
                    uVar1 = uVar10 + uVar13 >> 1;
                    uVar19 = (ulonglong)uVar1;
                    uVar15 = *(ulonglong *)(param_1[0xc] + uVar19 * 0x48);
                    if (uVar15 <= uVar18) {
                      if (uVar18 <= uVar15) break;
                      uVar13 = uVar1 + 1;
                      uVar19 = (ulonglong)(uVar1 + 1);
                      uVar1 = uVar10;
                    }
                    uVar10 = uVar1;
                  } while (uVar10 != uVar13);
                  if (((uint)uVar19 == uVar2) ||
                     (puVar7 = (ulonglong *)(param_1[0xc] + uVar19 * 0x48), *puVar7 != uVar18))
                  goto LAB_180058a24;
                  puVar7[3] = uStack_f8;
                  puVar7[2] = (ulonglong)local_100;
                  puVar7[5] = (ulonglong)local_e8;
                  puVar7[4] = local_f0;
                  puVar7[7] = CONCAT44(uStack_d4,uStack_d8);
                  puVar7[6] = (ulonglong)local_e0;
                  puVar7[8] = CONCAT44(uStack_cc,local_d0);
                }
                puVar7 = FUN_1800590d0((longlong)(param_1 + 0xb),local_a0);
                param_3 = local_c0;
                if (puVar7 != (ulonglong *)0x0) {
                  *(uint *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) + uVar8;
                  iVar5 = FUN_180058018((longlong)param_1,(longlong)puVar7,param_2);
                  if (iVar5 != -1) {
                    FUN_1800585c8((longlong)param_1,param_3,(longlong *)puVar7,iVar5);
                  }
                  break;
                }
              }
              (**(code **)(*local_100 + 0x10))();
            }
          }
          thunk_FUN_18005fbc8(local_e8);
          thunk_FUN_18005fbc8(local_e0);
        }
        uVar8 = *(uint *)(param_1 + 0xd);
        param_3 = local_c0;
        if (uVar8 == 0) break;
        bVar3 = false;
        uVar2 = uVar8;
        do {
          uVar13 = uVar2 - 1;
          if (uVar13 < uVar8) {
            lVar11 = param_1[0xc] + (ulonglong)uVar13 * 0x48;
            puVar7 = (ulonglong *)(lVar11 + 0x10);
            piVar16 = (int *)(lVar11 + 0x40);
            puVar14 = (undefined8 *)(lVar11 + 0x20);
            puVar21 = (undefined8 *)(lVar11 + 0x28);
            puVar20 = (undefined8 *)(lVar11 + 0x30);
          }
          else {
            puVar7 = (ulonglong *)&DAT_00000008;
            piVar16 = (int *)&DAT_00000038;
            puVar14 = (undefined8 *)&DAT_00000018;
            puVar21 = (undefined8 *)&DAT_00000020;
            puVar20 = (undefined8 *)&DAT_00000028;
          }
          if (*piVar16 == 0) {
            *(int *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) - (int)*puVar14;
            FUN_180045e18((longlong *)param_1[7],*puVar7,1);
            (**(code **)(*(longlong *)*puVar7 + 0x10))();
            thunk_FUN_18005fbc8((LPVOID)*puVar21);
            thunk_FUN_18005fbc8((LPVOID)*puVar20);
            while( true ) {
              uVar18 = (ulonglong)uVar2;
              if (*(uint *)(param_1 + 0xd) <= uVar2) break;
              puVar14 = (undefined8 *)(param_1[0xc] + (ulonglong)(uVar2 - 1) * 0x48);
              uVar2 = uVar2 + 1;
              puVar21 = (undefined8 *)(param_1[0xc] + uVar18 * 0x48);
              uVar25 = *puVar21;
              uVar23 = puVar21[3];
              uVar22 = puVar21[2];
              puVar14[1] = puVar21[1];
              *puVar14 = uVar25;
              puVar14[3] = uVar23;
              puVar14[2] = uVar22;
              uVar25 = puVar21[4];
              uVar23 = puVar21[7];
              uVar22 = puVar21[6];
              puVar14[5] = puVar21[5];
              puVar14[4] = uVar25;
              puVar14[7] = uVar23;
              puVar14[6] = uVar22;
              puVar14[8] = puVar21[8];
            }
            uVar8 = *(uint *)(param_1 + 0xd) - 1;
            *(uint *)(param_1 + 0xd) = uVar8;
            bVar3 = true;
          }
          uVar2 = uVar13;
        } while (uVar13 != 0);
        param_3 = local_c0;
      } while (bVar3);
    }
  }
  lVar11 = param_3[1];
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return lVar11 != 0;
}

