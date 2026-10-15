/*
 * FUN_1800e8c50 at 1800e8c50
 * undefined FUN_1800e8c50(void)
 * Address ranges: 1800e8c50-1800e9283
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e8c50(longlong param_1,ulonglong param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  int extraout_w10;
  ulonglong uVar11;
  longlong extraout_x10;
  longlong extraout_x10_00;
  longlong extraout_x10_01;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  uint *puVar15;
  longlong *plVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  uint *puVar19;
  ulonglong *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  uint local_cc;
  uint local_c8;
  undefined4 local_c4;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong *plStack_98;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  longlong local_80;
  longlong lStack_78;
  uint local_70;
  uint uStack_6c;
  ulonglong local_68;
  longlong *local_60;
  
  pcVar5 = __imp_KERNEL32_dll_EnterCriticalSection;
  lVar14 = *(longlong *)(param_1 + 0xb10);
  if (lVar14 == 0) {
    return;
  }
  plVar16 = *(longlong **)(param_1 + 0xb18);
  *(undefined4 *)(param_1 + 0xb38) = 0;
  uVar18 = *(ulonglong *)(param_1 + 0xb78);
  local_c0 = param_2;
  (*pcVar5)(plVar16 + 5);
  uVar17 = 0;
  if ((char)plVar16[10] == '\0') {
    uVar13 = *(uint *)((longlong)plVar16 + 0xc);
    if (uVar13 == 0) goto LAB_1800e9118;
    uVar10 = 0;
    uVar9 = uVar13;
    do {
      uVar4 = uVar9 + uVar10 >> 1;
      uVar11 = (ulonglong)uVar4;
      uVar12 = *(ulonglong *)(*plVar16 + uVar11 * 0x18);
      if (uVar12 <= param_2) {
        if (param_2 <= uVar12) break;
        uVar10 = uVar4 + 1;
        uVar11 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar9;
      }
      uVar9 = uVar4;
    } while (uVar9 != uVar10);
    if (((uint)uVar11 == uVar13) || (*(ulonglong *)(*plVar16 + uVar11 * 0x18) != param_2))
    goto LAB_1800e9118;
  }
  puVar6 = (undefined4 *)FUN_1800f2540(plVar16,&local_c0);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0;
    local_c8 = 0xffffffff;
    lVar7 = FUN_1800f2718(puVar6 + 2,&local_c8);
    if (lVar7 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(uint *)(lVar7 + 0x14);
    }
    uVar10 = puVar6[6];
    uVar11 = (ulonglong)uVar10;
    uVar12 = 0;
    if (uVar10 != 0) {
      local_c4 = 0;
      local_a8 = 0;
      local_cc = uVar10;
      local_c8 = uVar13;
      local_c0 = uVar18;
      local_b0 = lVar14;
      local_a0 = param_2;
      plStack_98 = plVar16;
      local_60 = param_5;
      do {
        uVar18 = (ulonglong)local_cc;
        local_cc = local_cc - 1;
        if (local_cc < (uint)puVar6[6]) {
          lVar14 = *(longlong *)(puVar6 + 4) + (ulonglong)local_cc * 0x30;
          plVar16 = (longlong *)(lVar14 + 0x10);
          puVar15 = (uint *)(lVar14 + 0x20);
          plVar8 = (longlong *)(lVar14 + 0x18);
          puVar19 = (uint *)(lVar14 + 0x24);
          puVar20 = (ulonglong *)(lVar14 + 0x28);
        }
        else {
          plVar16 = (longlong *)&DAT_00000008;
          puVar15 = (uint *)&DAT_00000018;
          plVar8 = (longlong *)&DAT_00000010;
          puVar19 = (uint *)&DAT_0000001c;
          puVar20 = (ulonglong *)&DAT_00000020;
        }
        if (*puVar15 != 0xffffffff) {
          uVar11 = FUN_1800f1800(uVar11,plVar16);
          uVar13 = (uint)uVar11;
          uVar10 = param_4;
          if ((local_60 != (longlong *)0x0) && (*(uint *)(local_60 + 1) != 0)) {
            uVar12 = 0;
            local_b8 = CONCAT44(local_b8._4_4_,param_4);
            do {
              if (*puVar15 == *(uint *)(*local_60 + 4 + uVar12 * 8)) {
                local_a8 = 1L << (uVar12 & 0x3f) | local_a8;
                uVar10 = *(uint *)(*local_60 + uVar12 * 8);
                break;
              }
              uVar9 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar9;
            } while (uVar9 < *(uint *)(local_60 + 1));
          }
          if (uVar13 != local_c8 || uVar10 != param_4) {
            iVar3 = *(int *)(param_1 + 0xb3c);
            uVar9 = *puVar15;
            if (*(int *)(param_1 + 0xb38) == iVar3) {
              local_90 = iVar3 << 1;
              if (iVar3 == 0) {
                local_90 = 0x10;
              }
              lVar14 = (ulonglong)local_90 * 0xc;
              if (SUB168(ZEXT416(local_90) * ZEXT816(0xc),8) != 0) {
                lVar14 = -1;
              }
              uVar11 = thunk_FUN_180102f80(lVar14);
              local_b8 = uVar11;
              if (uVar11 != 0) {
                thunk_FUN_180001218(uVar11,*(undefined8 *)(param_1 + 0xb30),
                                    (ulonglong)*(uint *)(param_1 + 0xb3c) * 0xc);
                thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0xb30));
                *(ulonglong *)(param_1 + 0xb30) = local_b8;
                *(uint *)(param_1 + 0xb3c) = local_90;
                uVar11 = local_b8;
                goto LAB_1800e8ed8;
              }
            }
            else {
LAB_1800e8ed8:
              puVar15 = (uint *)(*(longlong *)(param_1 + 0xb30) +
                                (ulonglong)*(uint *)(param_1 + 0xb38) * 0xc);
              *puVar15 = uVar13;
              puVar15[1] = uVar10;
              puVar15[2] = uVar9;
              *(int *)(param_1 + 0xb38) = *(int *)(param_1 + 0xb38) + 1;
            }
            if (uVar10 != param_4) {
              *plVar8 = param_1;
              *puVar19 = uVar10;
              *plVar16 = local_b0;
              *puVar20 = local_c0;
              goto LAB_1800e8f68;
            }
          }
          while( true ) {
            uVar13 = (uint)uVar18;
            if ((uint)puVar6[6] <= uVar13) break;
            uVar11 = *(ulonglong *)(puVar6 + 4);
            puVar1 = (undefined8 *)(uVar11 + (ulonglong)(uVar13 - 1) * 0x30);
            puVar2 = (undefined8 *)(uVar11 + uVar18 * 0x30);
            uVar23 = *puVar2;
            uVar22 = puVar2[3];
            uVar21 = puVar2[2];
            puVar1[1] = puVar2[1];
            *puVar1 = uVar23;
            puVar1[3] = uVar22;
            puVar1[2] = uVar21;
            uVar21 = puVar2[4];
            puVar1[5] = puVar2[5];
            puVar1[4] = uVar21;
            uVar18 = (ulonglong)(uVar13 + 1);
          }
          puVar6[6] = puVar6[6] - 1;
        }
LAB_1800e8f68:
        uVar12 = local_a8;
        lVar14 = local_b0;
        param_5 = local_60;
        param_2 = local_a0;
        plVar16 = plStack_98;
        uVar18 = local_c0;
        uVar13 = local_c8;
        uVar17 = local_c4;
      } while (local_cc != 0);
    }
    if ((param_5 != (longlong *)0x0) && ((int)param_5[1] != 0)) {
      uVar11 = 0;
      local_c4 = uVar17;
      local_a0 = param_2;
      plStack_98 = plVar16;
      do {
        if ((1L << (uVar11 & 0x3f) & uVar12) == 0) {
          puVar15 = (uint *)(*param_5 + uVar11 * 8);
          uVar10 = *puVar15;
          if (uVar10 != uVar13) {
            local_70 = puVar15[1];
            local_80 = lVar14;
            lStack_78 = param_1;
            uStack_6c = uVar10;
            local_68 = uVar18;
            FUN_1800f2798(puVar6 + 2,puVar15 + 1,&local_80);
            local_88 = local_70;
            local_90 = uVar13;
            uStack_8c = uVar10;
            FUN_1800f2400(param_1 + 0xb30,&local_90);
          }
        }
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        param_2 = local_a0;
        plVar16 = plStack_98;
        uVar17 = local_c4;
      } while (uVar10 < *(uint *)(param_5 + 1));
    }
    local_cc = 0xffffffff;
    plVar8 = (longlong *)FUN_1800f2718(puVar6 + 2,&local_cc);
    if (plVar8 == (longlong *)0x0) {
      local_70 = 0xffffffff;
      local_cc = 0xffffffff;
      local_80 = lVar14;
      lStack_78 = param_1;
      uStack_6c = param_4;
      local_68 = uVar18;
      FUN_1800f2798(puVar6 + 2,&local_cc,&local_80);
    }
    else {
      uVar17 = *(undefined4 *)((longlong)plVar8 + 0x14);
      uVar11 = (**(code **)(**(longlong **)(*plVar8 + 0x18) + 0x40))();
      if (uVar11 < (ulonglong)plVar8[3]) {
        lVar7 = plVar8[1];
        if (lVar14 == *plVar8) {
          if (param_1 == lVar7) {
            uVar17 = *(undefined4 *)((longlong)plVar8 + 0x14);
          }
          else if (lVar7 != -1) {
            FUN_1800e8548(lVar7 + 8,0);
          }
        }
        else {
          if (lVar7 != -1) {
            FUN_1800e8548(lVar7 + 8,0);
          }
          if (param_1 != -1) {
            FUN_1800e8548(param_1 + 8,0);
          }
          (**(code **)(**(longlong **)(lVar14 + 0x10) + 0x78))
                    (*(longlong **)(lVar14 + 0x10),*(undefined8 *)(*plVar8 + 0x18),plVar8[3]);
        }
      }
      *plVar8 = lVar14;
      plVar8[1] = param_1;
      *(undefined4 *)(plVar8 + 2) = 0xffffffff;
      *(uint *)((longlong)plVar8 + 0x14) = param_4;
      plVar8[3] = uVar18;
    }
  }
LAB_1800e9118:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(plVar16 + 5);
  if (*(int *)(*(longlong *)(param_1 + 0xb10) + 0x30) != 3) {
    uVar18 = func_0x00018020d9b8(uVar17,param_4,0);
    if ((uVar18 & 1) == 0) {
      uVar18 = 0;
      if (extraout_w10 != 0) {
        do {
          puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0xb30) + uVar18 * 0xc);
          uVar11 = func_0x00018020d9b8(*puVar6,puVar6[1],0);
          if ((uVar11 & 1) != 0) {
            FUN_1800e7f80(param_1,param_2,*(undefined4 *)(extraout_x10_01 + 8));
          }
          uVar13 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar13;
        } while (uVar13 < *(uint *)(param_1 + 0xb38));
      }
    }
    else {
      uVar18 = 0;
      if (extraout_w10 != 0) {
        do {
          uVar11 = func_0x00018020d9b8(*(undefined4 *)
                                        (*(longlong *)(param_1 + 0xb30) + uVar18 * 0xc),uVar17,0);
          if ((uVar11 & 1) != 0) {
            FUN_1800e7f80(param_1,param_2,*(undefined4 *)(extraout_x10 + 8));
          }
          uVar13 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar13;
        } while (uVar13 < *(uint *)(param_1 + 0xb38));
      }
      FUN_1800e7f80(param_1,param_2,0xffffffff,uVar17,param_4);
      uVar18 = 0;
      if (*(int *)(param_1 + 0xb38) != 0) {
        do {
          auVar24 = func_0x00018020d9b8(param_4,*(undefined4 *)
                                                 (*(longlong *)(param_1 + 0xb30) + uVar18 * 0xc + 4)
                                        ,0);
          if ((auVar24._0_8_ & 1) != 0) {
            FUN_1800e7f80(param_1,param_2,*(undefined4 *)(extraout_x10_00 + 8),param_4,
                          auVar24._8_8_ & 0xffffffff);
          }
          uVar13 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar13;
        } while (uVar13 < *(uint *)(param_1 + 0xb38));
      }
    }
  }
  return;
}

