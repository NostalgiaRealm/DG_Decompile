/*
 * FUN_180085398 at 180085398
 * undefined FUN_180085398(void)
 * Address ranges: 180085398-180085853
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180085398(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined4 param_5,uint *param_6,longlong param_7,int param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  code *pcVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined8 local_108;
  uint local_100;
  uint uStack_fc;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  uint local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  longlong local_b0;
  uint *local_a8;
  longlong *local_a0;
  longlong local_98;
  int local_90;
  undefined1 auStack_88 [16];
  uint local_78;
  
  lVar24 = *(longlong *)(param_1 + 0x110);
  local_e8 = param_7;
  local_a0 = param_4;
  if (*(char *)(lVar24 + 0x1d0b0) == '\0') goto LAB_180085808;
  (**(code **)(*param_4 + 0x50))(param_4,auStack_88);
  uVar25 = (ulonglong)(int)local_78;
  uVar21 = 0;
  uVar23 = *(uint *)(lVar24 + 0x1d0a4);
  if (uVar23 == 0) {
LAB_180085470:
    if (uVar23 == *(uint *)(lVar24 + 0x1d0a0)) {
      uVar18 = CONCAT44(0,*(uint *)(lVar24 + 0x1d0a0) << 1);
      lVar15 = uVar18 * 0x18;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar18;
      if (SUB168(auVar9 * ZEXT816(0x18),8) != 0) {
        lVar15 = -1;
      }
      lVar15 = thunk_FUN_180102f80(lVar15);
      if (lVar15 != 0) {
        uVar18 = 0;
        if (*(int *)(lVar24 + 0x1d0a0) != 0) {
          do {
            uVar23 = (int)uVar18 + 1;
            puVar1 = (undefined8 *)(*(longlong *)(lVar24 + 0x1d098) + uVar18 * 0x18);
            puVar2 = (undefined8 *)(lVar15 + uVar18 * 0x18);
            uVar27 = *puVar1;
            puVar2[1] = puVar1[1];
            *puVar2 = uVar27;
            puVar2[2] = puVar1[2];
            uVar18 = (ulonglong)uVar23;
          } while (uVar23 < *(uint *)(lVar24 + 0x1d0a0));
        }
        thunk_FUN_180102fc0(*(undefined8 *)(lVar24 + 0x1d098));
        *(longlong *)(lVar24 + 0x1d098) = lVar15;
        *(int *)(lVar24 + 0x1d0a0) = *(int *)(lVar24 + 0x1d0a0) << 1;
      }
    }
    uVar18 = (ulonglong)*(uint *)(lVar24 + 0x1d0a4);
    while ((uint)uVar21 < (uint)uVar18) {
      uVar19 = (ulonglong)((uint)uVar18 - 1);
      puVar1 = (undefined8 *)(*(longlong *)(lVar24 + 0x1d098) + uVar18 * 0x18);
      puVar2 = (undefined8 *)(*(longlong *)(lVar24 + 0x1d098) + uVar19 * 0x18);
      uVar27 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar27;
      puVar1[2] = puVar2[2];
      uVar18 = uVar19;
    }
    local_108 = 0;
    *(ulonglong *)(*(longlong *)(lVar24 + 0x1d098) + uVar21 * 0x18) = uVar25;
    *(uint *)(*(longlong *)(lVar24 + 0x1d098) + uVar21 * 0x18 + 8) = local_78;
    local_e0 = 0x40000000400;
    local_d8 = 0x100000001;
    local_d0 = local_78;
    local_cc = 1;
    local_c4 = 3;
    local_bc = 0x10000;
    (**(code **)(*(longlong *)**(undefined8 **)(lVar24 + 0x1d0a8) + 0x28))
              ((longlong *)**(undefined8 **)(lVar24 + 0x1d0a8),&local_e0,0,&local_108);
    *(undefined8 *)(*(longlong *)(lVar24 + 0x1d098) + uVar21 * 0x18 + 0x10) = local_108;
    *(int *)(lVar24 + 0x1d0a4) = *(int *)(lVar24 + 0x1d0a4) + 1;
  }
  else {
    uVar13 = 0;
    uVar22 = uVar23;
    do {
      uVar5 = uVar22 + uVar13 >> 1;
      uVar21 = (ulonglong)uVar5;
      uVar18 = *(ulonglong *)(*(longlong *)(lVar24 + 0x1d098) + uVar21 * 0x18);
      if (uVar18 <= uVar25) {
        if (uVar25 <= uVar18) break;
        uVar13 = uVar5 + 1;
        uVar21 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar22;
      }
      uVar22 = uVar5;
    } while (uVar22 != uVar13);
    if (((uint)uVar21 == uVar23) ||
       (*(ulonglong *)(*(longlong *)(lVar24 + 0x1d098) + uVar21 * 0x18) != uVar25))
    goto LAB_180085470;
  }
  lVar24 = *(longlong *)(uVar21 * 0x18 + *(longlong *)(lVar24 + 0x1d098) + 0x10);
  if (lVar24 != 0) {
    if (param_6[3] <= *param_6) {
      return;
    }
    if (param_6[4] <= param_6[1]) {
      return;
    }
    if (param_6[5] <= param_6[2]) {
      return;
    }
    uVar23 = param_6[3] - *param_6;
    uVar13 = param_6[4] - param_6[1];
    uVar22 = 0;
    local_a8 = param_6;
    if (uVar13 == 0) {
      return;
    }
    do {
      local_f0 = 0x400;
      if (uVar13 - uVar22 < 0x401) {
        local_f0 = uVar13 - uVar22;
      }
      uVar5 = local_f0 + uVar22;
      uVar20 = 0;
      if (uVar23 != 0) {
        local_108 = CONCAT44(local_108._4_4_,uVar13);
        do {
          uVar13 = 0x400;
          if (uVar23 - uVar20 < 0x401) {
            uVar13 = uVar23 - uVar20;
          }
          plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
          uVar26 = uVar13 + uVar20;
          iVar11 = (**(code **)(*plVar12 + 0x70))(plVar12,lVar24,0,2,0,&local_98);
          if (-1 < iVar11) {
            uVar16 = *(uint *)(param_1 + 0x2c);
            bVar3 = (&DAT_180231708)[uVar16];
            bVar4 = (&DAT_1802316d8)[uVar16];
            if (*(uint *)(&DAT_180231470 + (ulonglong)uVar16 * 4) < 8) {
              uVar16 = *(uint *)(&DAT_180231630 + (ulonglong)uVar16 * 4);
            }
            else {
              uVar16 = *(uint *)(&DAT_180231470 + (ulonglong)uVar16 * 4) >> 3;
            }
            if (bVar4 == 0) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(0xf004,0x1800856d8);
              (*pcVar10)();
            }
            uVar6 = 0;
            uVar14 = (uint)bVar4;
            if (bVar4 != 0) {
              uVar6 = uVar20 / uVar14;
            }
            if (bVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(0xf004,0x1800856e4);
              (*pcVar10)();
            }
            uVar7 = 0;
            uVar17 = (uint)bVar3;
            if (bVar3 != 0) {
              uVar7 = uVar22 / uVar17;
            }
            uVar8 = 0;
            if (uVar14 != 0) {
              uVar8 = uVar26 / uVar14;
            }
            uVar14 = 0;
            if (uVar17 != 0) {
              uVar14 = uVar5 / uVar17;
            }
            if (uVar14 != uVar7) {
              uVar17 = 0;
              lVar15 = local_e8 + (ulonglong)(uVar6 * uVar16);
              local_100 = uVar23;
              uStack_fc = uVar20;
              local_f8 = uVar13;
              uStack_f4 = uVar26;
              local_b0 = lVar24;
              do {
                thunk_FUN_180001218(local_98 + (ulonglong)(local_90 * uVar17),
                                    lVar15 + (ulonglong)((uVar17 + uVar7) * param_8),
                                    (uVar8 - uVar6) * uVar16);
                uVar17 = uVar17 + 1;
                lVar24 = local_b0;
                uVar23 = local_100;
                uVar20 = uStack_fc;
                uVar13 = local_f8;
                uVar26 = uStack_f4;
              } while (uVar17 < uVar14 - uVar7);
            }
            plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
            (**(code **)(*plVar12 + 0x78))(plVar12,lVar24,0);
            local_e0 = 0;
            local_d8 = (ulonglong)uVar13 << 0x20;
            local_d0 = local_f0;
            local_cc = CONCAT44(local_cc._4_4_,1);
            plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
            (**(code **)(*plVar12 + 0x170))
                      (plVar12,local_a0,param_5,uVar20 + *local_a8,local_a8[1] + uVar22,0,lVar24,0,
                       &local_e0);
          }
          uVar20 = uVar26;
        } while (uVar20 < uVar23);
        uVar13 = (uint)local_108;
      }
      uVar22 = uVar5;
      if (uVar13 <= uVar5) {
        return;
      }
    } while( true );
  }
LAB_180085808:
  plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
  (**(code **)(*plVar12 + 0x180))
            (plVar12,*(undefined8 *)(param_1 + 0x78),param_5,param_6,local_e8,param_8,0);
  return;
}

