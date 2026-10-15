/*
 * FUN_18021a1e8 at 18021a1e8
 * undefined FUN_18021a1e8(void)
 * Address ranges: 18021a1e8-18021a877
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18021a1e8(longlong param_1,undefined8 *param_2,int param_3,int *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  code *pcVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  int iVar33;
  int local_e0;
  int local_dc;
  undefined8 local_d0;
  undefined8 uStack_c8;
  int local_c0;
  undefined8 local_b0;
  longlong lStack_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_dc = param_3;
  thunk_FUN_1802236f8(param_1 + 0x18);
  puVar6 = __hybrid_os_arm64x_dispatch_icall;
  iVar33 = param_4[8];
  uVar23 = param_4[9];
  local_68 = 0;
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  local_48 = (ulonglong)uVar23;
  if (iVar33 - 0x17U < 0x19) goto LAB_18021a31c;
  if ((iVar33 - 0x5eU < 0x14) || (iVar33 - 0x46U < 0xf)) {
LAB_18021a2b8:
    lVar28 = 1;
    lVar25 = 1;
    lVar27 = 1;
    lVar26 = 1;
  }
  else if (iVar33 - 9U < 0xe) {
    lVar28 = 8;
    lVar25 = 8;
    lVar27 = 8;
    lVar26 = 8;
  }
  else if (iVar33 - 0x30U < 0xc) {
LAB_18021a2f4:
    lVar28 = 2;
    lVar25 = 2;
    lVar27 = 2;
    lVar26 = 2;
  }
  else {
    if (iVar33 - 0x3cU < 7) goto LAB_18021a2b8;
    if (iVar33 - 0x57U < 7) {
LAB_18021a31c:
      lVar28 = 4;
      lVar25 = 4;
      lVar27 = 4;
      lVar26 = 4;
    }
    else if (iVar33 - 1U < 4) {
      lVar28 = 0x10;
      lVar25 = 0x10;
      lVar27 = 0x10;
      lVar26 = 0x10;
    }
    else {
      if (3 < iVar33 - 5U) {
        if (2 < iVar33 - 0x43U) {
          if ((iVar33 - 0x55U < 2) || (iVar33 - 0x72U < 2)) goto LAB_18021a2f4;
          goto LAB_18021a2b8;
        }
        goto LAB_18021a31c;
      }
      lVar28 = 0xc;
      lVar25 = 0xc;
      lVar27 = 0xc;
      lVar26 = 0xc;
    }
  }
  iVar33 = *param_4;
  if (iVar33 == 1) {
    local_48 = *(longlong *)(param_4 + 4) * lVar28;
  }
  else if (iVar33 == 2) {
    local_48 = *(longlong *)(param_4 + 4) * lVar25 * local_48;
  }
  else {
    if (iVar33 == 3) {
      uVar21 = 4;
      local_48 = (ulonglong)(uint)param_4[6] * *(longlong *)(param_4 + 4) * lVar27 * local_48;
      goto LAB_18021a3b4;
    }
    if (iVar33 == 4) {
      uVar21 = 8;
      local_48 = (ulonglong)*(ushort *)(param_4 + 7) * (ulonglong)(uint)param_4[6] *
                 *(longlong *)(param_4 + 4) * lVar26 * local_48;
      goto LAB_18021a3b4;
    }
    local_48 = 0;
  }
  uVar21 = 2;
LAB_18021a3b4:
  uVar23 = 1;
  uVar29 = local_48;
  if (1 < *(ushort *)((longlong)param_4 + 0x1e)) {
    do {
      if (uVar21 == 0) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(0xf004,0x18021a3d0);
        (*pcVar19)();
      }
      uVar4 = 0;
      if (uVar21 != 0) {
        uVar4 = uVar29 / uVar21;
      }
      uVar23 = uVar23 + 1;
      local_48 = uVar4 + local_48;
      uVar29 = uVar4;
    } while (uVar23 < *(ushort *)((longlong)param_4 + 0x1e));
  }
  uVar23 = *(uint *)(param_1 + 0x58);
  if (uVar23 != 0) {
    uVar24 = 0;
    uVar20 = uVar23;
    do {
      uVar3 = uVar20 + uVar24 >> 1;
      uVar21 = (ulonglong)uVar3;
      uVar29 = *(ulonglong *)(*(longlong *)(param_1 + 0x50) + uVar21 * 0x18);
      if (uVar29 <= local_48) {
        if (local_48 <= uVar29) break;
        uVar24 = uVar3 + 1;
        uVar21 = (ulonglong)(uVar3 + 1);
        uVar3 = uVar20;
      }
      uVar20 = uVar3;
    } while (uVar20 != uVar24);
    if ((((uint)uVar21 != uVar23) &&
        (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x50) + uVar21 * 0x18), *puVar1 == local_48)
        ) && (puVar1 = puVar1 + 2, puVar1 != (ulonglong *)0x0)) {
      uStack_c8 = param_2[1];
      local_d0 = *param_2;
      iVar2 = *(int *)(param_2 + 2);
      iVar33 = (int)((ulonglong)uStack_c8 >> 0x20);
      lStack_a8 = *(longlong *)(param_4 + 2);
      local_b0 = *(undefined8 *)param_4;
      uVar30 = *(undefined8 *)(param_4 + 6);
      local_a0 = *(longlong *)(param_4 + 4);
      uStack_88 = *(undefined8 *)(param_4 + 10);
      local_90 = *(undefined8 *)(param_4 + 8);
      if (iVar33 == 0) {
        iVar33 = 1;
      }
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      local_80 = *(undefined8 *)(param_4 + 0xc);
      lVar25 = 0x10000;
      if (lStack_a8 != 0) {
        lVar25 = lStack_a8;
      }
      plVar22 = (longlong *)*puVar1;
      local_98 = uVar30;
      if ((int)plVar22[1] != 0) {
        iVar9 = (int)uStack_c8;
        iVar18 = (int)local_80;
        uVar21 = 0;
        iVar16 = (int)uStack_88;
        uStack_88._4_4_ = (int)((ulonglong)uStack_88 >> 0x20);
        iVar17 = uStack_88._4_4_;
        iVar14 = (int)local_90;
        local_90._4_4_ = (int)((ulonglong)local_90 >> 0x20);
        iVar15 = local_90._4_4_;
        local_98._6_2_ = (short)((ulonglong)uVar30 >> 0x30);
        sVar13 = local_98._6_2_;
        local_98._4_2_ = (short)((ulonglong)uVar30 >> 0x20);
        sVar12 = local_98._4_2_;
        local_98._0_4_ = (int)uVar30;
        iVar11 = (int)local_98;
        iVar10 = (int)local_b0;
        iVar7 = (int)local_d0;
        local_d0._4_4_ = (int)((ulonglong)local_d0 >> 0x20);
        iVar8 = local_d0._4_4_;
        local_70 = param_1;
        local_60 = lVar25;
        local_58 = local_a0;
        local_50 = local_48;
        do {
          uVar30 = *(undefined8 *)(*plVar22 + uVar21 * 0x10);
          (*(code *)puVar6)(0x180224000);
          (*extraout_x11)(uVar30,&local_b0);
          (*(code *)puVar6)(0x180224000);
          (*extraout_x11_00)(uVar30,&local_d0,&local_e0);
          param_1 = local_70;
          uVar23 = (uint)uVar21;
          if ((((((int)local_d0 == iVar7) && (local_d0._4_4_ == iVar8)) &&
               (((int)uStack_c8 == iVar9 && ((uStack_c8._4_4_ == iVar33 && (local_c0 == iVar2))))))
              && (((int)local_b0 == iVar10 &&
                  ((((((lStack_a8 == local_60 && (local_a0 == local_58)) &&
                      ((int)local_98 == iVar11)) &&
                     ((local_98._4_2_ == sVar12 && (local_98._6_2_ == sVar13)))) &&
                    (((int)local_90 == iVar14 &&
                     ((local_90._4_4_ == iVar15 && ((int)uStack_88 == iVar16)))))) &&
                   (uStack_88._4_4_ == iVar17)))))) &&
             (((int)local_80 == iVar18 && (local_e0 == local_dc || local_dc == 0)))) {
            uVar24 = *(uint *)(uVar21 * 0x10 + *(longlong *)*puVar1 + 8);
            uVar20 = *(uint *)(local_70 + 0x70);
            if (uVar24 == uVar20) {
              if (uVar20 != 0xffffffff) {
                *(undefined8 *)(*(longlong *)(local_70 + 0x60) + (ulonglong)uVar20 * 0x10) = 0;
                uVar24 = *(uint *)(local_70 + 0x70);
                lVar26 = *(longlong *)(local_70 + 0x60);
                lVar25 = lVar26 + (ulonglong)uVar24 * 0x10;
                uVar20 = *(uint *)(lVar25 + 0xc);
                if ((uVar20 != 0xffffffff) &&
                   (*(longlong *)(lVar26 + (ulonglong)uVar20 * 0x10) != 0)) {
                  *(uint *)(local_70 + 0x70) = uVar20;
                  *(undefined4 *)(lVar25 + 0xc) =
                       *(undefined4 *)(lVar26 + (ulonglong)*(uint *)(local_70 + 0x74) * 0x10 + 0xc);
                  *(undefined4 *)(*(longlong *)(local_70 + 0x60) + (ulonglong)uVar24 * 0x10 + 8) =
                       *(undefined4 *)(local_70 + 0x74);
                  *(uint *)(*(longlong *)(local_70 + 0x60) +
                            (ulonglong)*(uint *)(local_70 + 0x74) * 0x10 + 0xc) = uVar24;
                  uVar20 = *(uint *)(*(longlong *)(local_70 + 0x60) + (ulonglong)uVar24 * 0x10 + 0xc
                                    );
                  if (uVar20 != 0xffffffff) {
                    *(uint *)(*(longlong *)(local_70 + 0x60) + (ulonglong)uVar20 * 0x10 + 8) =
                         uVar24;
                  }
                }
              }
            }
            else {
              lVar26 = (ulonglong)uVar24 * 0x10;
              uVar20 = *(uint *)(local_70 + 0x74);
              *(undefined8 *)(*(longlong *)(local_70 + 0x60) + lVar26) = 0;
              lVar25 = lVar26 + *(longlong *)(local_70 + 0x60);
              uVar3 = *(uint *)(lVar25 + 8);
              if (uVar24 == uVar20) {
                *(uint *)(local_70 + 0x74) = uVar3;
              }
              else {
                *(undefined4 *)(*(longlong *)(local_70 + 0x60) + (ulonglong)uVar3 * 0x10 + 0xc) =
                     *(undefined4 *)(lVar25 + 0xc);
                lVar25 = lVar26 + *(longlong *)(local_70 + 0x60);
                *(undefined4 *)
                 (*(longlong *)(local_70 + 0x60) + (ulonglong)*(uint *)(lVar25 + 0xc) * 0x10 + 8) =
                     *(undefined4 *)(lVar25 + 8);
                *(undefined4 *)(lVar26 + *(longlong *)(local_70 + 0x60) + 0xc) =
                     *(undefined4 *)
                      (*(longlong *)(local_70 + 0x60) + (ulonglong)*(uint *)(local_70 + 0x74) * 0x10
                      + 0xc);
                *(undefined4 *)(lVar26 + *(longlong *)(local_70 + 0x60) + 8) =
                     *(undefined4 *)(local_70 + 0x74);
                *(uint *)(*(longlong *)(local_70 + 0x60) +
                          (ulonglong)*(uint *)(local_70 + 0x74) * 0x10 + 0xc) = uVar24;
                uVar20 = *(uint *)(lVar26 + *(longlong *)(local_70 + 0x60) + 0xc);
                if (uVar20 != 0xffffffff) {
                  *(uint *)(*(longlong *)(local_70 + 0x60) + (ulonglong)uVar20 * 0x10 + 8) = uVar24;
                }
              }
            }
            plVar22 = (longlong *)*puVar1;
            uVar24 = *(uint *)(plVar22 + 1);
            if (uVar23 < uVar24) {
              while (uVar20 = uVar23 + 1, uVar20 < uVar24) {
                puVar31 = (undefined8 *)(*plVar22 + (ulonglong)uVar20 * 0x10);
                uVar32 = *puVar31;
                puVar5 = (undefined8 *)(*plVar22 + (ulonglong)uVar23 * 0x10);
                puVar5[1] = puVar31[1];
                *puVar5 = uVar32;
                uVar23 = uVar20;
                uVar24 = *(uint *)(plVar22 + 1);
              }
              *(uint *)(plVar22 + 1) = uVar24 - 1;
            }
            *(ulonglong *)(local_70 + 0x10) = *(longlong *)(local_70 + 0x10) - local_50;
            puVar31 = (undefined8 *)*puVar1;
            local_68 = uVar30;
            if (*(int *)(puVar31 + 1) == 0) {
              if (puVar31 != (undefined8 *)0x0) {
                FUN_1802229d8(*puVar31);
                FUN_1802229d8(puVar31,0x10);
              }
              FUN_1801613b0(param_1 + 0x48,&local_48);
            }
            break;
          }
          plVar22 = (longlong *)*puVar1;
          uVar21 = (ulonglong)(uVar23 + 1);
        } while (uVar23 + 1 < *(uint *)(plVar22 + 1));
      }
    }
  }
  thunk_FUN_18022370c(param_1 + 0x18);
  return local_68;
}

