/*
 * FUN_18012bd08 at 18012bd08
 * undefined FUN_18012bd08(void)
 * Address ranges: 18012bd08-18012c3eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18012bd08(undefined8 param_1,ulonglong param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  uint uVar16;
  int *piVar17;
  undefined8 *puVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  longlong extraout_x10;
  int iVar23;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar24;
  uint extraout_w12;
  longlong lVar25;
  longlong lVar26;
  undefined8 *puVar27;
  uint uVar28;
  ulonglong uVar29;
  undefined1 auVar30 [16];
  undefined8 *local_a0;
  uint local_98;
  uint uStack_94;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_60;
  undefined4 uStack_5c;
  undefined8 *local_50;
  
  param_2 = param_2 & 0xffffffff;
  puVar27 = &DAT_18024ea68 + param_2 * 0x4b;
  local_50 = &DAT_18024ea78;
  FUN_1802229d8((&DAT_18024ea68)[param_2 * 0x4b]);
  (&DAT_18024ea68)[param_2 * 0x4b] = 0;
  (&DAT_18024ea70)[param_2 * 0x4b] = 0;
  FUN_1802229d8((&DAT_18024ea78)[param_2 * 0x4b]);
  (&DAT_18024ea78)[param_2 * 0x4b] = 0;
  (&DAT_18024ea80)[param_2 * 0x4b] = 0;
  puVar6 = __hybrid_os_arm64x_dispatch_icall;
  local_78 = &DAT_18024e85c + param_2 * 0x96;
  lVar26 = DAT_18024d928;
  uVar14 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  uVar12 = (*extraout_x11)(uVar14,(&DAT_18024e85c)[param_2 * 0x96],(&DAT_18024e860)[param_2 * 0x96],
                           *(undefined4 *)(lVar26 + 0x818));
  if (uVar12 != 0) {
    local_80 = CONCAT44(local_80._4_4_,*(int *)(DAT_18024d928 + 0x9df));
    if (*(int *)(DAT_18024d928 + 0x9df) != 0) {
      uVar28 = 0;
      if (uVar12 != 0) {
        do {
          local_a0 = puVar27;
          lVar26 = DAT_18024d928;
          uVar14 = (*(code *)puVar6)(0x180224000);
          (*extraout_x11_00)(uVar14,&local_70,(&DAT_18024e85c)[param_2 * 0x96],
                             (&DAT_18024e860)[param_2 * 0x96],*(undefined4 *)(lVar26 + 0x818),uVar28
                            );
          if ((((int)local_70 != 0) && (local_70._4_4_ != 0)) &&
             (uVar15 = FUN_18012d108(&DAT_18024ea68 + param_2 * 0x4b,&local_70), puVar27 = local_a0,
             (uVar15 & 1) == 0)) {
            FUN_1802229d8((&DAT_18024ea68)[param_2 * 0x4b]);
            (&DAT_18024ea68)[param_2 * 0x4b] = 0;
            puVar27[1] = 0;
            break;
          }
          uVar28 = uVar28 + 1;
          puVar27 = local_a0;
        } while (uVar28 < uVar12);
      }
      if (*(int *)(puVar27 + 1) != 0) {
        if ((int)local_80 == 1) {
          FUN_1802229d8((&DAT_18024ea68)[param_2 * 0x4b]);
          puVar27[1] = 0;
          uVar15 = 0;
          (&DAT_18024ea68)[param_2 * 0x4b] = 0;
          local_a0 = puVar27;
          do {
            local_90 = 0x10000003c;
            local_88 = 0x3c;
            local_98 = (uint)(ushort)(&DAT_18022a7d0)[uVar15 * 2];
            uStack_94 = (uint)(ushort)(&DAT_18022a7d2)[uVar15 * 2];
            FUN_18012d108(&DAT_18024ea68 + param_2 * 0x4b,&local_98);
            uVar15 = (ulonglong)((int)uVar15 + 1);
            puVar27 = local_a0;
          } while ((&DAT_18022a7d0)[uVar15 * 2] != 0);
        }
        else {
          uVar15 = 0;
          do {
            uVar12 = *(uint *)(puVar27 + 1);
            uVar21 = 0;
            if (uVar12 != 0) {
              do {
                if ((*(uint *)((&DAT_18024ea68)[param_2 * 0x4b] + uVar21 * 0x18) ==
                     (uint)(ushort)(&DAT_18022a7d0)[uVar15 * 2]) &&
                   (*(uint *)((&DAT_18024ea68)[param_2 * 0x4b] + 4 + uVar21 * 0x18) ==
                    (uint)(ushort)(&DAT_18022a7d2)[uVar15 * 2])) goto LAB_18012bfa8;
                uVar28 = (int)uVar21 + 1;
                uVar21 = (ulonglong)uVar28;
              } while (uVar28 < uVar12);
            }
            if (((uint)uVar21 == uVar12) && (uVar12 != 0)) {
              uVar5 = (&DAT_18022a7d0)[uVar15 * 2];
              uVar21 = 0;
              do {
                uVar28 = *(uint *)((&DAT_18024ea68)[param_2 * 0x4b] + uVar21 * 0x18);
                if ((uVar5 < uVar28) ||
                   ((uVar28 == uVar5 &&
                    ((uint)(ushort)(&DAT_18022a7d2)[uVar15 * 2] <
                     *(uint *)((&DAT_18024ea68)[param_2 * 0x4b] + 4 + uVar21 * 0x18))))) {
                  local_90 = 0x10000003c;
                  local_88 = 0x3c;
                  local_98 = (uint)uVar5;
                  uStack_94 = (uint)(ushort)(&DAT_18022a7d2)[uVar15 * 2];
                  FUN_18012d1f8(&DAT_18024ea68 + param_2 * 0x4b,uVar21,&local_98);
                  break;
                }
                uVar28 = (int)uVar21 + 1;
                uVar21 = (ulonglong)uVar28;
              } while (uVar28 < uVar12);
            }
LAB_18012bfa8:
            uVar15 = (ulonglong)((int)uVar15 + 1);
          } while ((&DAT_18022a7d0)[uVar15 * 2] != 0);
        }
      }
    }
    lVar26 = 0;
    uVar12 = local_78[0x57];
    uVar28 = local_78[0x58];
    local_a0 = *(undefined8 **)(local_78 + 0x57);
    do {
      lVar25 = DAT_18024d928 + lVar26 * 0xc;
      uVar16 = *(uint *)(lVar25 + 0x90b);
      if ((uVar16 != 0) && (uVar13 = *(uint *)(lVar25 + 0x90f), uVar13 != 0)) {
        uVar1 = uVar12;
        if (uVar16 != 0xffffffff || uVar13 != 0xffffffff) {
          uVar1 = uVar16;
        }
        uVar15 = (ulonglong)uVar1;
        uVar20 = uVar28;
        if ((uVar16 != 0xffffffff || uVar13 != 0xffffffff) && (uVar20 = uVar13, uVar1 == 0xffffffff)
           ) {
          if (uVar13 == 0x100) {
            local_80 = 0x300000004;
          }
          else {
            if (uVar13 != 0x101) goto LAB_18012c044;
            local_80 = 0x900000010;
          }
          uVar15 = FUN_18021fbc0(&local_80,&local_a0,0);
          uVar20 = (uint)(uVar15 >> 0x20);
        }
LAB_18012c044:
        uVar16 = *(uint *)(puVar27 + 1);
        uVar21 = 0;
        uVar13 = (uint)uVar15;
        if (uVar16 != 0) {
          lVar24 = (&DAT_18024ea68)[param_2 * 0x4b];
          do {
            lVar19 = uVar21 * 0x18;
            if (((*(uint *)(lVar24 + lVar19) == uVar13) &&
                (*(uint *)(lVar24 + 4 + lVar19) == uVar20)) &&
               ((*(int *)(lVar25 + 0x913) == 0 ||
                (*(int *)(lVar25 + 0x913) == *(int *)(lVar24 + 0x10 + lVar19))))) break;
            uVar1 = (int)uVar21 + 1;
            uVar21 = (ulonglong)uVar1;
          } while (uVar1 < uVar16);
        }
        if ((uint)uVar21 == uVar16) {
          uVar15 = 0;
          bVar10 = uVar16 == 0;
          do {
            if (bVar10) {
LAB_18012c0f4:
              uVar16 = *(uint *)(lVar25 + 0x913);
              if (uVar16 == 0) {
                local_90 = 0x10000003c;
                local_88 = 0x3c;
              }
              else {
                local_88 = (ulonglong)uVar16;
                local_90 = CONCAT44(1,uVar16);
              }
              local_98 = uVar13;
              uStack_94 = uVar20;
              FUN_18012d1f8(&DAT_18024ea68 + param_2 * 0x4b,uVar15,&local_98);
              break;
            }
            puVar2 = (uint *)((&DAT_18024ea68)[param_2 * 0x4b] + uVar15 * 0x18);
            uVar1 = *puVar2;
            if ((uVar13 < uVar1) || ((uVar1 == uVar13 && (uVar20 < puVar2[1])))) goto LAB_18012c0f4;
            uVar1 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar1;
            bVar10 = uVar1 == uVar16;
          } while (uVar1 <= uVar16);
        }
      }
      lVar26 = lVar26 + 1;
    } while (lVar26 != 0x10);
    if (*(int *)(puVar27 + 1) != 0) {
      uVar15 = 0;
      local_a0 = puVar27;
      do {
        uVar12 = *(uint *)(local_a0 + 1);
        if (uVar12 != 0) {
          lVar26 = (&DAT_18024ea68)[param_2 * 0x4b];
          uVar21 = 0xffffffff;
          piVar17 = (int *)(lVar26 + (ulonglong)(uVar12 - 1) * 0x18);
          iVar22 = *piVar17;
          iVar23 = piVar17[1];
          bVar10 = false;
          do {
            uVar16 = (uint)uVar21;
            uVar28 = uVar12 - 1;
            uVar29 = (ulonglong)uVar28;
            piVar17 = (int *)(lVar26 + uVar29 * 0x18);
            if ((iVar22 != *piVar17) || (iVar23 != piVar17[1])) {
              if ((!bVar10) && (uVar16 != 0xffffffff)) {
                puVar27 = (undefined8 *)(lVar26 + (ulonglong)(uVar16 - 1) * 0x18);
                uStack_68 = puVar27[1];
                local_70 = *puVar27;
                uStack_5c = (undefined4)((ulonglong)puVar27[2] >> 0x20);
                _local_60 = CONCAT44(uStack_5c,(&DAT_18022a790)[uVar15]);
                FUN_18012d1f8(&DAT_18024ea68 + param_2 * 0x4b,uVar21,&local_70);
              }
              lVar26 = (&DAT_18024ea68)[param_2 * 0x4b];
              uVar16 = 0xffffffff;
              piVar17 = (int *)(lVar26 + uVar29 * 0x18);
              iVar22 = *piVar17;
              iVar23 = piVar17[1];
              bVar10 = false;
            }
            iVar4 = (&DAT_18022a790)[uVar15];
            iVar3 = *(int *)(lVar26 + uVar29 * 0x18 + 0x10);
            bVar11 = iVar3 != iVar4 + -1;
            uVar13 = uVar12;
            if (bVar11) {
              uVar13 = uVar16;
            }
            uVar21 = (ulonglong)uVar13;
            if ((bVar11) && (iVar3 == iVar4)) {
              bVar10 = true;
            }
            uVar12 = uVar28;
          } while (uVar28 != 0);
          if ((!bVar10) && (uVar13 != 0xffffffff)) {
            puVar27 = (undefined8 *)(lVar26 + uVar21 * 0x18);
            uStack_68 = puVar27[1];
            local_70 = *puVar27;
            uStack_5c = (undefined4)((ulonglong)puVar27[2] >> 0x20);
            _local_60 = CONCAT44(uStack_5c,iVar4);
            FUN_18012d1f8(&DAT_18024ea68 + param_2 * 0x4b,uVar21,&local_70);
          }
        }
        uVar15 = (ulonglong)((int)uVar15 + 1);
        puVar27 = local_a0;
      } while ((&DAT_18022a790)[uVar15] != 0);
    }
    puVar8 = local_50;
    puVar7 = local_78;
    for (uVar15 = 0; (uint)uVar15 < *(uint *)(puVar27 + 1); uVar15 = (ulonglong)((uint)uVar15 + 1))
    {
      uVar21 = 0;
      if (*(uint *)(puVar27 + 3) != 0) {
        piVar17 = (int *)((&DAT_18024ea68)[param_2 * 0x4b] + uVar15 * 0x18);
        lVar26 = puVar27[2];
        do {
          lVar25 = uVar21 * 0x18;
          puVar18 = (undefined8 *)(lVar25 + lVar26);
          if ((*(int *)(lVar25 + lVar26) == *piVar17) &&
             (*(int *)(lVar26 + 4 + lVar25) == piVar17[1])) {
            if (piVar17[4] != 0) {
              auVar30 = FUN_18012bcd8();
              uVar21 = auVar30._8_8_;
              if ((auVar30._0_8_ & 1) == 0) {
                uVar28 = puVar7[0x5b];
                uVar16 = *(uint *)(puVar18 + 2);
                uVar12 = uVar28 - uVar16;
                if (uVar28 <= uVar16 && uVar16 - uVar28 != 0) {
                  uVar12 = uVar16 - uVar28;
                }
                uVar16 = uVar28 - extraout_w12;
                if (uVar28 <= extraout_w12 && extraout_w12 - uVar28 != 0) {
                  uVar16 = extraout_w12 - uVar28;
                }
                if (uVar16 < uVar12) {
                  uVar14 = *(undefined8 *)piVar17;
                  puVar18[1] = *(undefined8 *)(piVar17 + 2);
                  *puVar18 = uVar14;
                  puVar18[2] = *(undefined8 *)(piVar17 + 4);
                }
              }
            }
            break;
          }
          uVar12 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(puVar27 + 3));
      }
      if ((int)uVar21 == *(int *)(puVar27 + 3)) {
        local_88 = local_88 & 0xffffffff;
        puVar2 = (uint *)((&DAT_18024ea68)[param_2 * 0x4b] + uVar15 * 0x18);
        local_98 = *puVar2;
        uStack_94 = puVar2[1];
        uVar21 = FUN_18012bcd8();
        if ((uVar21 & 1) == 0) {
          local_90 = *(undefined8 *)(extraout_x10 + 8);
          uVar12 = *(uint *)(extraout_x10 + 0x10);
        }
        else {
          uVar28 = *(uint *)(DAT_18024d928 + 0x874);
          local_90 = *(undefined8 *)(DAT_18024d928 + 0x870);
          if (uVar28 == 0) {
            uVar12 = 0;
          }
          else {
            if (uVar28 == 0) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(0xf004,0x18012c374);
              (*pcVar9)();
            }
            uVar12 = 0;
            if (uVar28 != 0) {
              uVar12 = *(uint *)(DAT_18024d928 + 0x870) / uVar28;
            }
          }
        }
        local_88 = CONCAT44(local_88._4_4_,uVar12);
        uVar21 = FUN_18012d108(puVar8 + param_2 * 0x4b,&local_98);
        if ((uVar21 & 1) == 0) {
          FUN_1802229d8((&DAT_18024ea68)[param_2 * 0x4b]);
          (&DAT_18024ea68)[param_2 * 0x4b] = 0;
          puVar27[1] = 0;
          FUN_1802229d8(puVar27[2]);
          puVar27[2] = 0;
          puVar27[3] = 0;
          break;
        }
      }
    }
  }
  return *(int *)(puVar27 + 1) != 0;
}

