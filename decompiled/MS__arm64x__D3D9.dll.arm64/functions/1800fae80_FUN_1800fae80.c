/*
 * FUN_1800fae80 at 1800fae80
 * undefined FUN_1800fae80(void)
 * Address ranges: 1800fae80-1800fb4f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_1800fae80(longlong param_1,undefined8 *param_2,int param_3,int *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  code *pcVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  longlong *plVar30;
  int iVar32;
  undefined8 uVar31;
  int local_f0;
  int local_ec;
  undefined8 local_e0;
  undefined8 uStack_d8;
  int local_d0;
  undefined8 local_c0;
  longlong lStack_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong *local_58;
  
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x18);
  iVar32 = param_4[8];
  uVar22 = param_4[9];
  plVar30 = (longlong *)0x0;
  if (uVar22 == 0) {
    uVar22 = 1;
  }
  local_60 = (ulonglong)uVar22;
  if (iVar32 - 0x17U < 0x19) goto LAB_1800fafc0;
  if ((iVar32 - 0x5eU < 0x14) || (iVar32 - 0x46U < 0xf)) {
LAB_1800faf5c:
    lVar27 = 1;
    lVar24 = 1;
    lVar26 = 1;
    lVar25 = 1;
  }
  else if (iVar32 - 9U < 0xe) {
    lVar27 = 8;
    lVar24 = 8;
    lVar26 = 8;
    lVar25 = 8;
  }
  else if (iVar32 - 0x30U < 0xc) {
LAB_1800faf98:
    lVar27 = 2;
    lVar24 = 2;
    lVar26 = 2;
    lVar25 = 2;
  }
  else {
    if (iVar32 - 0x3cU < 7) goto LAB_1800faf5c;
    if (iVar32 - 0x57U < 7) {
LAB_1800fafc0:
      lVar27 = 4;
      lVar24 = 4;
      lVar26 = 4;
      lVar25 = 4;
    }
    else if (iVar32 - 1U < 4) {
      lVar27 = 0x10;
      lVar24 = 0x10;
      lVar26 = 0x10;
      lVar25 = 0x10;
    }
    else {
      if (3 < iVar32 - 5U) {
        if (2 < iVar32 - 0x43U) {
          if ((iVar32 - 0x55U < 2) || (iVar32 - 0x72U < 2)) goto LAB_1800faf98;
          goto LAB_1800faf5c;
        }
        goto LAB_1800fafc0;
      }
      lVar27 = 0xc;
      lVar24 = 0xc;
      lVar26 = 0xc;
      lVar25 = 0xc;
    }
  }
  iVar32 = *param_4;
  if (iVar32 == 1) {
    local_60 = *(longlong *)(param_4 + 4) * lVar27;
  }
  else if (iVar32 == 2) {
    local_60 = *(longlong *)(param_4 + 4) * lVar24 * local_60;
  }
  else {
    if (iVar32 == 3) {
      uVar20 = 4;
      local_60 = (ulonglong)(uint)param_4[6] * *(longlong *)(param_4 + 4) * lVar26 * local_60;
      goto LAB_1800fb058;
    }
    if (iVar32 == 4) {
      uVar20 = 8;
      local_60 = (ulonglong)*(ushort *)(param_4 + 7) * (ulonglong)(uint)param_4[6] *
                 *(longlong *)(param_4 + 4) * lVar25 * local_60;
      goto LAB_1800fb058;
    }
    local_60 = 0;
  }
  uVar20 = 2;
LAB_1800fb058:
  uVar22 = 1;
  uVar28 = local_60;
  if (1 < *(ushort *)((longlong)param_4 + 0x1e)) {
    do {
      if (uVar20 == 0) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(0xf004,0x1800fb074);
        (*pcVar18)();
      }
      uVar4 = 0;
      if (uVar20 != 0) {
        uVar4 = uVar28 / uVar20;
      }
      uVar22 = uVar22 + 1;
      local_60 = uVar4 + local_60;
      uVar28 = uVar4;
    } while (uVar22 < *(ushort *)((longlong)param_4 + 0x1e));
  }
  uVar22 = *(uint *)(param_1 + 0x58);
  if (uVar22 != 0) {
    uVar23 = 0;
    uVar19 = uVar22;
    do {
      uVar3 = uVar19 + uVar23 >> 1;
      uVar20 = (ulonglong)uVar3;
      uVar28 = *(ulonglong *)(*(longlong *)(param_1 + 0x50) + uVar20 * 0x18);
      if (uVar28 <= local_60) {
        if (local_60 <= uVar28) break;
        uVar23 = uVar3 + 1;
        uVar20 = (ulonglong)(uVar3 + 1);
        uVar3 = uVar19;
      }
      uVar19 = uVar3;
    } while (uVar19 != uVar23);
    if ((((uint)uVar20 != uVar22) &&
        (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x50) + uVar20 * 0x18), *puVar1 == local_60)
        ) && (puVar1 = puVar1 + 2, puVar1 != (ulonglong *)0x0)) {
      uStack_d8 = param_2[1];
      local_e0 = *param_2;
      iVar2 = *(int *)(param_2 + 2);
      iVar32 = (int)((ulonglong)uStack_d8 >> 0x20);
      lStack_b8 = *(longlong *)(param_4 + 2);
      local_c0 = *(undefined8 *)param_4;
      uVar31 = *(undefined8 *)(param_4 + 6);
      local_b0 = *(longlong *)(param_4 + 4);
      uStack_98 = *(undefined8 *)(param_4 + 10);
      local_a0 = *(undefined8 *)(param_4 + 8);
      if (iVar32 == 0) {
        iVar32 = 1;
      }
      local_90 = *(undefined8 *)(param_4 + 0xc);
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      lVar24 = 0x10000;
      if (lStack_b8 != 0) {
        lVar24 = lStack_b8;
      }
      plVar21 = (longlong *)*puVar1;
      local_a8 = uVar31;
      if ((int)plVar21[1] != 0) {
        iVar15 = (int)uStack_98;
        uStack_98._4_4_ = (int)((ulonglong)uStack_98 >> 0x20);
        iVar16 = uStack_98._4_4_;
        uVar20 = 0;
        local_58 = (longlong *)0x0;
        iVar13 = (int)local_a0;
        local_a0._4_4_ = (int)((ulonglong)local_a0 >> 0x20);
        iVar14 = local_a0._4_4_;
        iVar8 = (int)uStack_d8;
        iVar6 = (int)local_e0;
        local_e0._4_4_ = (int)((ulonglong)local_e0 >> 0x20);
        iVar7 = local_e0._4_4_;
        iVar17 = (int)local_90;
        local_a8._6_2_ = (short)((ulonglong)uVar31 >> 0x30);
        sVar12 = local_a8._6_2_;
        local_a8._4_2_ = (short)((ulonglong)uVar31 >> 0x20);
        sVar11 = local_a8._4_2_;
        local_a8._0_4_ = (int)uVar31;
        iVar10 = (int)local_a8;
        iVar9 = (int)local_c0;
        local_ec = param_3;
        local_80 = param_1;
        local_78 = lVar24;
        local_70 = local_b0;
        local_68 = local_60;
        do {
          plVar30 = *(longlong **)(*plVar21 + uVar20 * 0x10);
          (**(code **)(*plVar30 + 0x50))(plVar30,&local_c0);
          (**(code **)(*plVar30 + 0x70))(plVar30,&local_e0,&local_f0);
          param_1 = local_80;
          uVar22 = (uint)uVar20;
          if ((((((int)local_e0 == iVar6) && (local_e0._4_4_ == iVar7)) &&
               (((int)uStack_d8 == iVar8 && ((uStack_d8._4_4_ == iVar32 && (local_d0 == iVar2))))))
              && (((int)local_c0 == iVar9 &&
                  ((((((lStack_b8 == local_78 && (local_b0 == local_70)) &&
                      ((int)local_a8 == iVar10)) &&
                     ((local_a8._4_2_ == sVar11 && (local_a8._6_2_ == sVar12)))) &&
                    (((int)local_a0 == iVar13 &&
                     ((local_a0._4_4_ == iVar14 && ((int)uStack_98 == iVar15)))))) &&
                   (uStack_98._4_4_ == iVar16)))))) &&
             (((int)local_90 == iVar17 && (local_f0 == local_ec || local_ec == 0)))) {
            uVar23 = *(uint *)(uVar20 * 0x10 + *(longlong *)*puVar1 + 8);
            uVar19 = *(uint *)(local_80 + 0x70);
            if (uVar23 == uVar19) {
              if (uVar19 != 0xffffffff) {
                *(undefined8 *)(*(longlong *)(local_80 + 0x60) + (ulonglong)uVar19 * 0x10) = 0;
                uVar23 = *(uint *)(local_80 + 0x70);
                lVar25 = *(longlong *)(local_80 + 0x60);
                lVar24 = lVar25 + (ulonglong)uVar23 * 0x10;
                uVar19 = *(uint *)(lVar24 + 0xc);
                if ((uVar19 != 0xffffffff) &&
                   (*(longlong *)(lVar25 + (ulonglong)uVar19 * 0x10) != 0)) {
                  *(uint *)(local_80 + 0x70) = uVar19;
                  *(undefined4 *)(lVar24 + 0xc) =
                       *(undefined4 *)(lVar25 + (ulonglong)*(uint *)(local_80 + 0x74) * 0x10 + 0xc);
                  *(undefined4 *)(*(longlong *)(local_80 + 0x60) + (ulonglong)uVar23 * 0x10 + 8) =
                       *(undefined4 *)(local_80 + 0x74);
                  *(uint *)(*(longlong *)(local_80 + 0x60) +
                            (ulonglong)*(uint *)(local_80 + 0x74) * 0x10 + 0xc) = uVar23;
                  uVar19 = *(uint *)(*(longlong *)(local_80 + 0x60) + (ulonglong)uVar23 * 0x10 + 0xc
                                    );
                  if (uVar19 != 0xffffffff) {
                    *(uint *)(*(longlong *)(local_80 + 0x60) + (ulonglong)uVar19 * 0x10 + 8) =
                         uVar23;
                  }
                }
              }
            }
            else {
              lVar25 = (ulonglong)uVar23 * 0x10;
              uVar19 = *(uint *)(local_80 + 0x74);
              *(undefined8 *)(*(longlong *)(local_80 + 0x60) + lVar25) = 0;
              lVar24 = lVar25 + *(longlong *)(local_80 + 0x60);
              uVar3 = *(uint *)(lVar24 + 8);
              if (uVar23 == uVar19) {
                *(uint *)(local_80 + 0x74) = uVar3;
              }
              else {
                *(undefined4 *)(*(longlong *)(local_80 + 0x60) + (ulonglong)uVar3 * 0x10 + 0xc) =
                     *(undefined4 *)(lVar24 + 0xc);
                lVar24 = lVar25 + *(longlong *)(local_80 + 0x60);
                *(undefined4 *)
                 (*(longlong *)(local_80 + 0x60) + (ulonglong)*(uint *)(lVar24 + 0xc) * 0x10 + 8) =
                     *(undefined4 *)(lVar24 + 8);
                *(undefined4 *)(lVar25 + *(longlong *)(local_80 + 0x60) + 0xc) =
                     *(undefined4 *)
                      (*(longlong *)(local_80 + 0x60) + (ulonglong)*(uint *)(local_80 + 0x74) * 0x10
                      + 0xc);
                *(undefined4 *)(lVar25 + *(longlong *)(local_80 + 0x60) + 8) =
                     *(undefined4 *)(local_80 + 0x74);
                *(uint *)(*(longlong *)(local_80 + 0x60) +
                          (ulonglong)*(uint *)(local_80 + 0x74) * 0x10 + 0xc) = uVar23;
                uVar19 = *(uint *)(lVar25 + *(longlong *)(local_80 + 0x60) + 0xc);
                if (uVar19 != 0xffffffff) {
                  *(uint *)(*(longlong *)(local_80 + 0x60) + (ulonglong)uVar19 * 0x10 + 8) = uVar23;
                }
              }
            }
            plVar21 = (longlong *)*puVar1;
            uVar23 = *(uint *)(plVar21 + 1);
            if (uVar22 < uVar23) {
              while (uVar19 = uVar22 + 1, uVar19 < uVar23) {
                puVar29 = (undefined8 *)(*plVar21 + (ulonglong)uVar19 * 0x10);
                uVar31 = *puVar29;
                puVar5 = (undefined8 *)(*plVar21 + (ulonglong)uVar22 * 0x10);
                puVar5[1] = puVar29[1];
                *puVar5 = uVar31;
                uVar22 = uVar19;
                uVar23 = *(uint *)(plVar21 + 1);
              }
              *(uint *)(plVar21 + 1) = uVar23 - 1;
            }
            *(ulonglong *)(local_80 + 0x10) = *(longlong *)(local_80 + 0x10) - local_68;
            puVar29 = (undefined8 *)*puVar1;
            if (*(int *)(puVar29 + 1) == 0) {
              if (puVar29 != (undefined8 *)0x0) {
                thunk_FUN_180102fc0(*puVar29);
                FUN_180102fc0(puVar29,0x10);
              }
              FUN_1800516b8(param_1 + 0x48,&local_60);
            }
            break;
          }
          plVar21 = (longlong *)*puVar1;
          uVar20 = (ulonglong)(uVar22 + 1);
          plVar30 = local_58;
        } while (uVar22 + 1 < *(uint *)(plVar21 + 1));
      }
    }
  }
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0x18);
  return plVar30;
}

