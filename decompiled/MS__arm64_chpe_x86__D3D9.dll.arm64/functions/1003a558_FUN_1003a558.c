/*
 * FUN_1003a558 at 1003a558
 * undefined FUN_1003a558(void)
 * Address ranges: 1003a558-1003ad2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1003a558(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  ulonglong *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  undefined8 *puVar11;
  code *pcVar12;
  bool bVar13;
  undefined4 uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  uint uVar18;
  int *piVar19;
  uint *puVar20;
  undefined4 *puVar21;
  undefined4 *extraout_w8;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  undefined8 *extraout_w10;
  int extraout_w10_00;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar26;
  int iVar27;
  uint extraout_w11_01;
  int iVar28;
  int iVar29;
  uint *puVar30;
  undefined1 auVar31 [12];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 *local_70;
  undefined8 local_68;
  uint *local_60;
  uint local_58;
  uint uStack_54;
  undefined8 *local_50;
  undefined4 *local_4c;
  
  puVar11 = &DAT_10171580 + param_2 * 0x45;
  local_50 = &DAT_1017158c + param_2 * 0x45;
  FUN_101322d0(*(undefined4 *)(&DAT_10171580 + param_2 * 0x45));
  puVar1 = &DAT_10171588 + param_2 * 0x8a;
  (&DAT_10171580)[param_2 * 0x45] = 0;
  *puVar1 = 0;
  puVar30 = (uint *)((int)&DAT_10171580 + param_2 * 0x228 + 4);
  FUN_101322d0(*(undefined4 *)(&DAT_1017158c + param_2 * 0x45));
  local_60 = (uint *)((int)&DAT_1017158c + param_2 * 0x228 + 4);
  (&DAT_1017158c)[param_2 * 0x45] = 0;
  local_4c = &DAT_10171594 + param_2 * 0x8a;
  *local_4c = 0;
  pcVar12 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar21 = (undefined4 *)(DAT_10170ad0 + 0x77c);
  uVar14 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar15 = (*extraout_w11)(uVar14,(&DAT_10171390)[param_2 * 0x8a],(&DAT_10171394)[param_2 * 0x8a],
                           *puVar21);
  if (uVar15 != 0) {
    local_58 = *(uint *)(DAT_10170ad0 + 0x943);
    local_70 = puVar1;
    if (local_58 != 0) {
      if (uVar15 != 0) {
        local_68 = CONCAT44(local_68._4_4_,puVar30);
        uVar18 = 0;
        do {
          uVar14 = (*pcVar12)();
          (*extraout_w11_00)(uVar14,&local_90,(&DAT_10171390)[param_2 * 0x8a],
                             (&DAT_10171394)[param_2 * 0x8a],*extraout_w8,uVar18);
          if ((((int)local_90 != 0) && (local_90._4_4_ != 0)) &&
             (uVar16 = FUN_1003bc38(puVar11,&local_90), (uVar16 & 1) == 0)) {
            puVar30 = (uint *)local_68;
            FUN_101322d0(*(undefined4 *)(&DAT_10171580 + param_2 * 0x45));
            *(undefined4 *)(&DAT_10171580 + param_2 * 0x45) = 0;
            *puVar30 = 0;
            *local_70 = 0;
            goto LAB_1003a6c0;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar15);
        puVar30 = (uint *)local_68;
      }
LAB_1003a6c0:
      if (*puVar30 != 0) {
        if (local_58 == 1) {
          FUN_101322d0(*(undefined4 *)(&DAT_10171580 + param_2 * 0x45));
          *(undefined4 *)(&DAT_10171580 + param_2 * 0x45) = 0;
          *puVar30 = 0;
          iVar29 = 0;
          *local_70 = 0;
          do {
            uStack_88 = 0x10000003c;
            local_80 = 0x3c;
            local_90 = (ulonglong)
                       CONCAT24((&DAT_101613f2)[iVar29 * 2],
                                (uint)(ushort)(&DAT_101613f0)[iVar29 * 2]);
            FUN_1003bc38(puVar11,&local_90);
            iVar29 = iVar29 + 1;
          } while ((&DAT_101613f0)[iVar29 * 2] != 0);
        }
        else {
          iVar29 = 0;
          do {
            uVar18 = *puVar30;
            uVar15 = 0;
            if (uVar18 != 0) {
              do {
                puVar20 = (uint *)(*(int *)(&DAT_10171580 + param_2 * 0x45) + uVar15 * 0x18);
                if ((*puVar20 == (uint)(ushort)(&DAT_101613f0)[iVar29 * 2]) &&
                   (puVar20[1] == (uint)(ushort)(&DAT_101613f2)[iVar29 * 2])) goto LAB_1003a840;
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar18);
            }
            if (uVar15 == uVar18 && (uVar15 == uVar18 && uVar18 != 0)) {
              uVar15 = 0;
              uVar9 = (&DAT_101613f0)[iVar29 * 2];
              do {
                puVar20 = (uint *)(*(int *)(&DAT_10171580 + param_2 * 0x45) + uVar15 * 0x18);
                uVar5 = *puVar20;
                if ((uVar9 < uVar5) ||
                   ((uVar5 == uVar9 && ((uint)(ushort)(&DAT_101613f2)[iVar29 * 2] < puVar20[1])))) {
                  uStack_88 = 0x10000003c;
                  local_80 = 0x3c;
                  local_90 = (ulonglong)CONCAT24((&DAT_101613f2)[iVar29 * 2],(uint)uVar9);
                  FUN_1003bd40(puVar11,uVar15,&local_90);
                  break;
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar18);
            }
LAB_1003a840:
            iVar29 = iVar29 + 1;
          } while ((&DAT_101613f0)[iVar29 * 2] != 0);
        }
      }
    }
    uVar18 = *(uint *)(&DAT_101714e4 + param_2 * 0x45);
    uVar5 = *(uint *)((int)&DAT_101714e4 + param_2 * 0x228 + 4);
    uVar15 = 0;
    local_58 = uVar18;
    uStack_54 = uVar5;
    do {
      iVar29 = DAT_10170ad0 + uVar15 * 0xc;
      puVar20 = (uint *)(iVar29 + 0x86f);
      uVar22 = *puVar20;
      if ((uVar22 != 0) && (uVar6 = *(uint *)(iVar29 + 0x873), uVar6 != 0)) {
        uVar24 = uVar18;
        uVar26 = uVar5;
        if ((uVar22 != 0xffffffff || uVar6 != 0xffffffff) &&
           (uVar24 = uVar22, uVar26 = uVar6, uVar22 == 0xffffffff)) {
          if (uVar6 == 0x100) {
            local_68 = 0x300000004;
          }
          else {
            if (uVar6 != 0x101) goto LAB_1003a8e8;
            local_68 = 0x900000010;
          }
          uVar17 = FUN_1012ed70(&local_68,&local_58,0);
          uVar24 = (uint)uVar17;
          uVar26 = (uint)((ulonglong)uVar17 >> 0x20);
        }
LAB_1003a8e8:
        uVar6 = *puVar30;
        uVar22 = 0;
        if (uVar6 != 0) {
          do {
            puVar2 = (uint *)(*(int *)(&DAT_10171580 + param_2 * 0x45) + uVar22 * 0x18);
            if (((*puVar2 == uVar24) && (puVar2[1] == uVar26)) &&
               ((puVar20[2] == 0 || (puVar20[2] == puVar2[4])))) goto LAB_1003a9cc;
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar6);
        }
        if (uVar22 == uVar6) {
          uVar22 = 0;
          bVar13 = uVar6 == 0;
          do {
            if (bVar13) {
LAB_1003a994:
              local_90 = CONCAT44(uVar26,uVar24);
              uVar6 = puVar20[2];
              if (uVar6 == 0) {
                uStack_88 = 0x10000003c;
                local_80 = 0x3c;
              }
              else {
                local_80 = (ulonglong)uVar6;
                uStack_88 = CONCAT44(1,uVar6);
              }
              FUN_1003bd40(puVar11,uVar22,&local_90);
              break;
            }
            puVar2 = (uint *)(*(int *)(&DAT_10171580 + param_2 * 0x45) + uVar22 * 0x18);
            uVar7 = *puVar2;
            if ((uVar24 < uVar7) || ((uVar7 == uVar24 && (uVar26 < puVar2[1])))) goto LAB_1003a994;
            uVar22 = uVar22 + 1;
            bVar13 = uVar22 == uVar6;
          } while (uVar22 <= uVar6);
        }
      }
LAB_1003a9cc:
      uVar15 = uVar15 + 1;
    } while (uVar15 < 0x10);
    if (*puVar30 != 0) {
      iVar29 = 0;
      do {
        uVar15 = *puVar30;
        if (uVar15 != 0) {
          iVar25 = *(int *)(&DAT_10171580 + param_2 * 0x45);
          piVar3 = (int *)(&DAT_101613a0 + iVar29 * 4);
          uVar18 = 0xffffffff;
          iVar10 = uVar15 * 0x18;
          iVar27 = *(int *)(iVar10 + iVar25 + -0x18);
          iVar28 = *(int *)(iVar10 + iVar25 + -0x14);
          bVar13 = false;
          iVar23 = *piVar3;
          do {
            if ((iVar27 != *(int *)(iVar25 + iVar10 + -0x18)) ||
               (iVar28 != *(int *)(iVar25 + iVar10 + -0x14))) {
              if ((!bVar13) && (uVar18 != 0xffffffff)) {
                iVar25 = iVar25 + uVar18 * 0x18;
                uStack_88 = *(ulonglong *)(iVar25 + -0x10);
                local_90 = *(ulonglong *)(iVar25 + -0x18);
                local_80._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(iVar25 + -8) >> 0x20);
                local_80 = CONCAT44(local_80._4_4_,*piVar3);
                FUN_1003bd40(puVar11,uVar18,&local_90);
                iVar23 = *piVar3;
              }
              iVar25 = *(int *)(&DAT_10171580 + param_2 * 0x45);
              uVar18 = 0xffffffff;
              iVar27 = *(int *)(iVar10 + iVar25 + -0x18);
              iVar28 = *(int *)(iVar10 + iVar25 + -0x14);
              bVar13 = false;
            }
            iVar8 = *(int *)(iVar25 + iVar10 + -8);
            uVar5 = uVar15;
            if ((iVar8 != iVar23 + -1) && (uVar5 = uVar18, iVar8 == iVar23)) {
              bVar13 = true;
            }
            uVar18 = uVar5;
            uVar15 = uVar15 - 1;
            iVar10 = iVar10 + -0x18;
          } while (uVar15 != 0);
          if ((!bVar13) && (uVar18 != 0xffffffff)) {
            puVar4 = (ulonglong *)(iVar25 + uVar18 * 0x18);
            uStack_88 = puVar4[1];
            local_90 = *puVar4;
            local_80._4_4_ = (undefined4)(puVar4[2] >> 0x20);
            local_80 = CONCAT44(local_80._4_4_,iVar23);
            FUN_1003bd40(puVar11,uVar18,&local_90);
          }
        }
        iVar29 = iVar29 + 1;
      } while (*(int *)(&DAT_101613a0 + iVar29 * 4) != 0);
    }
    puVar11 = local_50;
    puVar20 = local_60;
    for (uVar15 = 0; uVar15 < *puVar30; uVar15 = uVar15 + 1) {
      uVar5 = *puVar20;
      uVar18 = 0;
      if (uVar5 != 0) {
        piVar3 = (int *)(*(int *)(&DAT_10171580 + param_2 * 0x45) + uVar15 * 0x18);
        uVar18 = 0;
        do {
          piVar19 = (int *)(*(int *)(&DAT_1017158c + param_2 * 0x45) + uVar18 * 0x18);
          if ((*piVar19 == *piVar3) && (piVar19[1] == piVar3[1])) {
            if (piVar3[4] != 0) {
              auVar31 = FUN_1003a518();
              uVar18 = auVar31._8_4_;
              if ((auVar31._0_8_ & 1) == 0) {
                uVar22 = *(uint *)(&DAT_101714f4 + param_2 * 0x45);
                uVar6 = piVar19[4];
                uVar5 = uVar22 - uVar6;
                if (uVar22 <= uVar6 && uVar6 - uVar22 != 0) {
                  uVar5 = uVar6 - uVar22;
                }
                uVar6 = uVar22 - extraout_w11_01;
                if (uVar22 <= extraout_w11_01 && extraout_w11_01 - uVar22 != 0) {
                  uVar6 = extraout_w11_01 - uVar22;
                }
                if (uVar6 < uVar5) {
                  uVar17 = *extraout_w10;
                  *(undefined8 *)(piVar19 + 2) = extraout_w10[1];
                  *(undefined8 *)piVar19 = uVar17;
                  *(undefined8 *)(piVar19 + 4) = extraout_w10[2];
                }
              }
            }
            break;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar5);
      }
      if (uVar18 == *puVar20) {
        local_80 = local_80 & 0xffffffff;
        local_90 = *(ulonglong *)(*(int *)(&DAT_10171580 + param_2 * 0x45) + uVar15 * 0x18);
        uVar16 = FUN_1003a518();
        if ((uVar16 & 1) == 0) {
          uStack_88 = *(ulonglong *)(extraout_w10_00 + 8);
          uVar18 = *(uint *)(extraout_w10_00 + 0x10);
        }
        else {
          uVar5 = *(uint *)(DAT_10170ad0 + 0x7d8);
          uStack_88 = *(ulonglong *)(DAT_10170ad0 + 0x7d4);
          if (uVar5 == 0) {
            uVar18 = 0;
          }
          else {
            if (uVar5 == 0) {
                    /* WARNING: Does not return */
              uVar17 = SoftwareBreakpoint(0xf004,0x1003ac88);
              (*(code *)uVar17)();
            }
            uVar18 = 0;
            if (uVar5 != 0) {
              uVar18 = *(uint *)(DAT_10170ad0 + 0x7d4) / uVar5;
            }
          }
        }
        local_80 = CONCAT44(local_80._4_4_,uVar18);
        uVar16 = FUN_1003bc38(puVar11,&local_90);
        if ((uVar16 & 1) == 0) {
          FUN_101322d0(*(undefined4 *)(&DAT_10171580 + param_2 * 0x45));
          *(undefined4 *)(&DAT_10171580 + param_2 * 0x45) = 0;
          *puVar30 = 0;
          *local_70 = 0;
          FUN_101322d0(*(undefined4 *)(&DAT_1017158c + param_2 * 0x45));
          *(undefined4 *)(&DAT_1017158c + param_2 * 0x45) = 0;
          *local_60 = 0;
          *local_4c = 0;
          break;
        }
      }
    }
  }
  return *puVar30 != 0;
}

