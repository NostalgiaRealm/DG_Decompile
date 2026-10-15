/*
 * FUN_18020fa48 at 18020fa48
 * undefined FUN_18020fa48(void)
 * Address ranges: 18020fa48-18021012b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

bool FUN_18020fa48(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 in_x7;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  undefined8 *puVar17;
  code *extraout_x11_02;
  ulonglong uVar18;
  int *piVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulonglong local_f0;
  ulonglong uStack_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  uint uStack_c8;
  uint uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  uint uStack_a0;
  undefined8 local_9c;
  ulonglong local_90 [3];
  undefined4 local_78 [2];
  undefined8 local_70;
  ulonglong uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  uVar20 = (ulonglong)param_2;
  thunk_FUN_1802236f8(param_1 + 2);
  if (*(uint *)(param_1 + 9) == 0) {
    fVar25 = 0.0;
  }
  else {
    fVar25 = (float)((double)*(uint *)(param_1 + 10) / (double)*(uint *)(param_1 + 9));
  }
  uVar12 = 3;
  if (0.9 <= fVar25) {
    uVar12 = 0xffffffff;
  }
  FUN_18020f778(param_1,uVar12,uVar20,param_3);
  if (param_3[1] == 0) {
    if (*(int *)(param_1 + 0xd) != 0) {
      uVar22 = 0;
      if (*(int *)(param_1 + 0xd) == 0) goto LAB_18020fb48;
      do {
        lVar14 = param_1[0xc] + uVar22 * 0x48;
        if ((lVar14 != -8) && (uVar20 <= *(ulonglong *)(lVar14 + 0x20))) {
          iVar8 = FUN_18020f3e0(param_1,lVar14 + 0x10,uVar20);
          if (iVar8 == -1) {
            FUN_18020f778(param_1,0xffffffff,0,0);
            iVar8 = FUN_18020f3e0(param_1,lVar14 + 0x10,uVar20);
            if (iVar8 == -1) goto LAB_18020fb48;
          }
          FUN_18020f9c8(param_1,param_3,lVar14 + 0x10,iVar8);
          break;
        }
LAB_18020fb48:
        uVar11 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar11;
      } while (uVar11 < *(uint *)(param_1 + 0xd));
    }
    if (param_3[1] == 0) {
      FUN_18020f778(param_1,0xffffffff,0,0);
      puVar6 = __hybrid_os_arm64x_dispatch_icall;
      local_b0 = param_3;
      do {
        uVar11 = *(uint *)((longlong)param_1 + 0x44);
        if (uVar11 < param_2 << 1) {
          uVar4 = *(uint *)(param_1 + 9);
          iVar8 = 2;
          if (param_2 <= uVar11 * 3) {
            iVar8 = 3;
          }
          uVar16 = iVar8 * param_2;
          uVar11 = uVar16;
          if (((uVar4 != 0) && (uVar4 < *(int *)((longlong)param_1 + 0x4c) + uVar16)) &&
             (uVar11 = param_2, uVar4 - *(int *)((longlong)param_1 + 0x4c) < param_2)) {
            uVar11 = uVar16;
          }
        }
        uVar4 = *(uint *)(param_1 + 8);
        uVar11 = (uVar4 + uVar11) - 1 & -uVar4;
        if ((*(uint *)(param_1 + 9) == 0) ||
           (*(int *)((longlong)param_1 + 0x4c) + uVar11 <= *(uint *)(param_1 + 9))) {
          uVar20 = (ulonglong)uVar11;
          local_e0 = uVar20;
          if (uVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x18020fc28);
            (*pcVar7)();
          }
          uVar16 = 0;
          if (uVar4 != 0) {
            uVar16 = uVar11 / uVar4;
          }
          lVar14 = -1L << ((ulonglong)uVar16 & 0x3f);
          if ((uVar16 & 0x3f) == 0) {
            lVar14 = 0;
          }
          uVar16 = uVar16 + 0x3f;
          uVar4 = uVar16 >> 6;
          uVar13 = (uVar16 & 0xffffffc0) >> 3;
          lVar15 = -1L << ((ulonglong)uVar4 & 0x3f);
          if ((uVar4 & 0x3f) == 0) {
            lVar15 = 0;
          }
          uVar3 = uVar4 + 0x3f >> 3 & 0x1ffffff8;
          local_d8 = FUN_1802229a8(uVar13);
          local_d0 = FUN_1802229a8(uVar3);
          local_c0 = 0;
          uStack_c8 = uVar13;
          uStack_c4 = uVar3;
          if ((local_d8 != 0) && (local_d0 != 0)) {
            FUN_180222c50(local_d8,0,uVar13);
            FUN_180222c50(local_d0,0,uVar3);
            *(longlong *)(local_d8 + (ulonglong)(uVar16 >> 6) * 8 + -8) = lVar14;
            *(longlong *)(local_d0 + (ulonglong)(uVar4 + 0x3f >> 6) * 8 + -8) = lVar15;
            iVar8 = *(int *)((longlong)param_1 + 0xc);
            if (iVar8 == 0) {
              local_a8 = 5;
              if (*(char *)(param_1 + 0x11) == '\0') {
                local_a8 = 2;
              }
            }
            else {
              local_a8 = 4;
            }
            local_a4 = 0;
            if (iVar8 != 0) {
              local_a4 = 3;
            }
            local_9c = 0;
            local_48 = 0;
            uStack_a0 = (uint)(iVar8 != 0);
            local_78[0] = 1;
            local_70 = 0x10000;
            local_60 = 0x1000100000001;
            uStack_58 = 0x100000000;
            local_50 = 0x100000000;
            uVar12 = 0x400;
            if (iVar8 != 1) {
              uVar12 = 0xac3;
            }
            uStack_68 = uVar20;
            uVar20 = FUN_18020d338(*param_1,*(undefined4 *)(param_1 + 1),&local_a8,0,local_78,uVar12
                                   ,0,in_x7,&local_f0);
            if ((uVar20 & 1) != 0) {
              local_90[1] = 0;
              local_90[2] = 0;
              uVar9 = (*(code *)puVar6)(0x180224000);
              iVar8 = (*extraout_x11)(uVar9,0,local_90 + 1,&uStack_e8);
              if (-1 < iVar8) {
                (*(code *)puVar6)(0x180224000);
                uVar20 = (*extraout_x11_00)();
                uVar4 = *(uint *)(param_1 + 0xd);
                uVar22 = 0;
                local_90[0] = uVar20;
                if (uVar4 == 0) {
LAB_18020fe48:
                  uVar16 = *(uint *)((longlong)param_1 + 0x6c);
                  plVar1 = param_1 + 0xc;
                  if (uVar16 == uVar4) {
                    uVar4 = 0x10;
                    if (uVar16 != 0) {
                      uVar4 = uVar16 << 1;
                    }
                    lVar14 = FUN_1802229a8((ulonglong)uVar4 * 0x48);
                    if (lVar14 != 0) {
                      uVar18 = 0;
                      if (*(int *)(param_1 + 0xd) != 0) {
                        do {
                          uVar16 = (int)uVar18 + 1;
                          puVar21 = (undefined8 *)(param_1[0xc] + uVar18 * 0x48);
                          puVar17 = (undefined8 *)(lVar14 + uVar18 * 0x48);
                          uVar9 = *puVar21;
                          uVar27 = puVar21[3];
                          uVar26 = puVar21[2];
                          puVar17[1] = puVar21[1];
                          *puVar17 = uVar9;
                          puVar17[3] = uVar27;
                          puVar17[2] = uVar26;
                          uVar9 = puVar21[4];
                          uVar27 = puVar21[7];
                          uVar26 = puVar21[6];
                          puVar17[5] = puVar21[5];
                          puVar17[4] = uVar9;
                          puVar17[7] = uVar27;
                          puVar17[6] = uVar26;
                          puVar17[8] = puVar21[8];
                          uVar18 = (ulonglong)uVar16;
                        } while (uVar16 < *(uint *)(param_1 + 0xd));
                      }
                      FUN_1802229d8(param_1[0xb]);
                      param_1[0xb] = lVar14;
                      param_1[0xc] = lVar14;
                      *(uint *)((longlong)param_1 + 0x6c) = uVar4;
                    }
                  }
                  uVar18 = (ulonglong)*(uint *)(param_1 + 0xd);
                  if (*(uint *)((longlong)param_1 + 0x6c) != *(uint *)(param_1 + 0xd)) {
                    while ((uint)uVar22 < (uint)uVar18) {
                      uVar10 = (ulonglong)((uint)uVar18 - 1);
                      puVar21 = (undefined8 *)(param_1[0xc] + uVar18 * 0x48);
                      puVar17 = (undefined8 *)(param_1[0xc] + uVar10 * 0x48);
                      uVar9 = *puVar17;
                      uVar27 = puVar17[3];
                      uVar26 = puVar17[2];
                      puVar21[1] = puVar17[1];
                      *puVar21 = uVar9;
                      puVar21[3] = uVar27;
                      puVar21[2] = uVar26;
                      uVar9 = puVar17[4];
                      uVar27 = puVar17[7];
                      uVar26 = puVar17[6];
                      puVar21[5] = puVar17[5];
                      puVar21[4] = uVar9;
                      puVar21[7] = uVar27;
                      puVar21[6] = uVar26;
                      puVar21[8] = puVar17[8];
                      uVar18 = uVar10;
                    }
                    *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) + 1;
                    *(ulonglong *)(*plVar1 + uVar22 * 0x48 + 8) = uVar20;
                    lVar14 = *plVar1 + uVar22 * 0x48;
                    *(ulonglong *)(lVar14 + 0x18) = uStack_e8;
                    *(ulonglong *)(lVar14 + 0x10) = local_f0;
                    *(ulonglong *)(lVar14 + 0x28) = local_d8;
                    *(ulonglong *)(lVar14 + 0x20) = local_e0;
                    *(ulonglong *)(lVar14 + 0x38) = CONCAT44(uStack_c4,uStack_c8);
                    *(ulonglong *)(lVar14 + 0x30) = local_d0;
                    *(ulonglong *)(lVar14 + 0x40) = CONCAT44(uStack_bc,local_c0);
                    *(ulonglong *)(*plVar1 + uVar22 * 0x48) = uVar20;
                  }
                }
                else {
                  uVar16 = 0;
                  uVar13 = uVar4;
                  do {
                    uVar3 = uVar13 + uVar16 >> 1;
                    uVar22 = (ulonglong)uVar3;
                    uVar18 = *(ulonglong *)(param_1[0xc] + uVar22 * 0x48);
                    if (uVar18 <= uVar20) {
                      if (uVar20 <= uVar18) break;
                      uVar16 = uVar3 + 1;
                      uVar22 = (ulonglong)(uVar3 + 1);
                      uVar3 = uVar13;
                    }
                    uVar13 = uVar3;
                  } while (uVar13 != uVar16);
                  if (((uint)uVar22 == uVar4) ||
                     (puVar2 = (ulonglong *)(param_1[0xc] + uVar22 * 0x48), *puVar2 != uVar20))
                  goto LAB_18020fe48;
                  puVar2[3] = uStack_e8;
                  puVar2[2] = local_f0;
                  puVar2[5] = local_d8;
                  puVar2[4] = local_e0;
                  puVar2[7] = CONCAT44(uStack_c4,uStack_c8);
                  puVar2[6] = local_d0;
                  puVar2[8] = CONCAT44(uStack_bc,local_c0);
                }
                lVar14 = FUN_180210518(param_1 + 0xb,local_90);
                param_3 = local_b0;
                if (lVar14 != 0) {
                  *(uint *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) + uVar11;
                  iVar8 = FUN_18020f3e0(param_1,lVar14,param_2);
                  if (iVar8 != -1) {
                    FUN_18020f9c8(param_1,param_3,lVar14,iVar8);
                  }
                  break;
                }
              }
              (*(code *)puVar6)(0x180224000);
              (*extraout_x11_01)();
            }
          }
          FUN_1802229d8(local_d8);
          FUN_1802229d8(local_d0);
        }
        uVar11 = *(uint *)(param_1 + 0xd);
        param_3 = local_b0;
        if (uVar11 == 0) break;
        bVar5 = false;
        uVar4 = uVar11;
        do {
          uVar16 = uVar4 - 1;
          if (uVar16 < uVar11) {
            lVar14 = param_1[0xc] + (ulonglong)uVar16 * 0x48;
            puVar21 = (undefined8 *)(lVar14 + 0x10);
            piVar19 = (int *)(lVar14 + 0x40);
            puVar17 = (undefined8 *)(lVar14 + 0x20);
            puVar24 = (undefined8 *)(lVar14 + 0x28);
            puVar23 = (undefined8 *)(lVar14 + 0x30);
          }
          else {
            puVar21 = (undefined8 *)&DAT_00000008;
            piVar19 = (int *)&DAT_00000038;
            puVar17 = (undefined8 *)&DAT_00000018;
            puVar24 = (undefined8 *)&DAT_00000020;
            puVar23 = (undefined8 *)&DAT_00000028;
          }
          if (*piVar19 == 0) {
            *(int *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) - (int)*puVar17;
            FUN_18020dc08(param_1[7],*puVar21,1);
            (*(code *)puVar6)(0x180224000);
            (*extraout_x11_02)();
            FUN_1802229d8(*puVar24);
            FUN_1802229d8(*puVar23);
            while( true ) {
              uVar20 = (ulonglong)uVar4;
              if (*(uint *)(param_1 + 0xd) <= uVar4) break;
              puVar21 = (undefined8 *)(param_1[0xc] + (ulonglong)(uVar4 - 1) * 0x48);
              uVar4 = uVar4 + 1;
              puVar17 = (undefined8 *)(param_1[0xc] + uVar20 * 0x48);
              uVar9 = *puVar17;
              uVar27 = puVar17[3];
              uVar26 = puVar17[2];
              puVar21[1] = puVar17[1];
              *puVar21 = uVar9;
              puVar21[3] = uVar27;
              puVar21[2] = uVar26;
              uVar9 = puVar17[4];
              uVar27 = puVar17[7];
              uVar26 = puVar17[6];
              puVar21[5] = puVar17[5];
              puVar21[4] = uVar9;
              puVar21[7] = uVar27;
              puVar21[6] = uVar26;
              puVar21[8] = puVar17[8];
            }
            uVar11 = *(uint *)(param_1 + 0xd) - 1;
            *(uint *)(param_1 + 0xd) = uVar11;
            bVar5 = true;
          }
          uVar4 = uVar16;
        } while (uVar16 != 0);
        param_3 = local_b0;
      } while (bVar5);
    }
  }
  lVar14 = param_3[1];
  thunk_FUN_18022370c(param_1 + 2);
  return lVar14 != 0;
}

