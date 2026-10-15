/*
 * FUN_1800455b8 at 1800455b8
 * undefined FUN_1800455b8(void)
 * Address ranges: 1800455b8-180045cd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800455b8(longlong param_1,undefined4 param_2,uint *param_3,uint **param_4,int param_5,
                  undefined1 param_6)

{
  int iVar1;
  ulonglong *puVar2;
  undefined1 uVar3;
  uint uVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  uint **ppuVar17;
  longlong *plVar18;
  uint **ppuVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint **local_90;
  undefined8 uStack_88;
  uint local_80;
  uint *local_70;
  uint **local_68;
  uint local_60;
  int local_5c;
  
  lVar21 = *(longlong *)(param_1 + 0xf6e0);
  bVar5 = false;
  local_60 = param_3[2] << 4;
  local_5c = 0;
  local_70 = param_3;
  local_68 = param_4;
  FUN_180101630(lVar21 + 0x12c0);
  if (*(char *)(lVar21 + 0x14c4) != '\0') {
    if (*param_3 == *(uint *)(param_1 + 0x100f0)) {
      local_70 = *(uint **)(param_1 + 0x100f8);
    }
    else {
      *(uint *)(param_1 + 0x100f0) = *param_3;
      puVar7 = (undefined8 *)FUN_1800067f8(param_1 + 0xf7b8,param_3);
      if (puVar7 == (undefined8 *)0x0) {
        uVar8 = FUN_180102f80(0x254);
        if (uVar8 != 0) {
          thunk_FUN_180001218(uVar8,param_3,0x254);
          uVar20 = *(uint *)(param_1 + 0xf7c8);
          uVar23 = 0;
          uVar22 = (ulonglong)*param_3;
          if (uVar20 != 0) {
            uVar14 = 0;
            uVar13 = uVar20;
            do {
              uVar4 = uVar13 + uVar14 >> 1;
              uVar23 = (ulonglong)uVar4;
              uVar16 = *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar23 * 0x18);
              if (uVar16 <= uVar22) {
                if (uVar22 <= uVar16) break;
                uVar14 = uVar4 + 1;
                uVar23 = (ulonglong)(uVar4 + 1);
                uVar4 = uVar13;
              }
              uVar13 = uVar4;
            } while (uVar13 != uVar14);
          }
          if (((uint)uVar23 == uVar20) ||
             (puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar23 * 0x18),
             *puVar2 != uVar22)) {
            uVar14 = *(uint *)(param_1 + 0xf7cc);
            if (uVar14 == uVar20) {
              uVar20 = 0x10;
              if (uVar14 != 0) {
                uVar20 = uVar14 << 1;
              }
              local_90 = (uint **)thunk_FUN_180102f80((ulonglong)uVar20 * 0x18 + 0x7f);
              if (local_90 != (uint **)0x0) {
                uVar24 = (longlong)local_90 + 0x7fU & 0xffffffffffffff80;
                uVar16 = 0;
                if (*(int *)(param_1 + 0xf7c8) != 0) {
                  do {
                    uVar14 = (int)uVar16 + 1;
                    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar16 * 0x18);
                    puVar15 = (undefined8 *)(uVar24 + uVar16 * 0x18);
                    uVar10 = *puVar7;
                    puVar15[1] = puVar7[1];
                    *puVar15 = uVar10;
                    puVar15[2] = puVar7[2];
                    uVar16 = (ulonglong)uVar14;
                  } while (uVar14 < *(uint *)(param_1 + 0xf7c8));
                }
                thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0xf7b8));
                *(ulonglong *)(param_1 + 0xf7c0) = uVar24;
                *(uint ***)(param_1 + 0xf7b8) = local_90;
                *(uint *)(param_1 + 0xf7cc) = uVar20;
              }
            }
            uVar16 = (ulonglong)*(uint *)(param_1 + 0xf7c8);
            if (*(uint *)(param_1 + 0xf7cc) != *(uint *)(param_1 + 0xf7c8)) {
              while ((uint)uVar23 < (uint)uVar16) {
                uVar24 = (ulonglong)((uint)uVar16 - 1);
                puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar16 * 0x18);
                puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar24 * 0x18);
                uVar10 = *puVar15;
                puVar7[1] = puVar15[1];
                *puVar7 = uVar10;
                puVar7[2] = puVar15[2];
                uVar16 = uVar24;
              }
              *(int *)(param_1 + 0xf7c8) = *(int *)(param_1 + 0xf7c8) + 1;
              *(uint *)(*(longlong *)(param_1 + 0xf7c0) + uVar23 * 0x18 + 8) = *param_3;
              *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar23 * 0x18 + 0x10) = uVar8;
              *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar23 * 0x18) = uVar22;
            }
          }
          else {
            puVar2[2] = uVar8;
          }
          puVar7 = (undefined8 *)FUN_1800067f8(param_1 + 0xf7b8,param_3);
          if (puVar7 != (undefined8 *)0x0) goto LAB_180045828;
        }
        local_70 = (uint *)0x0;
      }
      else {
LAB_180045828:
        local_70 = (uint *)*puVar7;
      }
      *(uint **)(param_1 + 0x100f8) = local_70;
    }
    if (local_70 != (uint *)0x0) {
      uVar8 = 0;
      if (param_3[2] != 0) {
        do {
          lVar21 = uVar8 + 0x214;
          uVar20 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar20;
          local_5c = local_5c +
                     (uint)*(byte *)((longlong)param_3 +
                                    (ulonglong)*(byte *)((longlong)param_3 + lVar21) * 8 + 0x16) *
                     param_5 + 0x10;
        } while (uVar20 < param_3[2]);
      }
    }
    bVar5 = true;
  }
  puVar12 = local_70;
  local_90 = &local_70;
  uStack_88 = CONCAT44(uStack_88._4_4_,param_5);
  iVar1 = local_5c + local_60;
  uVar20 = iVar1 + 0x10;
  if (uVar20 < 0x3f00 && bVar5) {
    lVar21 = *(longlong *)(param_1 + 0xf6e0);
    if (*(char *)(lVar21 + 0x14c4) != '\0') {
      if (uVar20 == 0) {
        uVar14 = 0x20;
      }
      else {
        uVar14 = (iVar1 + 0x17U & 0xfffffff8) + 0x28;
      }
      puVar7 = (undefined8 *)FUN_180101500(lVar21 + 0x12c0,(ulonglong)uVar14);
      pcVar6 = __imp_KERNEL32_dll_Sleep;
      if (puVar7 != (undefined8 *)0x0) {
        FUN_1800015a0(lVar21 + 0x14c0);
        ppuVar19 = local_68;
        puVar7[1] = (ulonglong)uVar14;
        lVar9 = 2;
        if (uVar20 != 0) {
          lVar9 = 3;
        }
        plVar11 = puVar7 + lVar9;
        *plVar11 = param_1;
        *(undefined4 *)(plVar11 + 1) = param_2;
        *(uint **)((longlong)plVar11 + 0xc) = puVar12;
        *(int *)((longlong)plVar11 + 0x14) = param_5;
        *(undefined1 *)(plVar11 + 3) = param_6;
        ppuVar17 = (uint **)((lVar9 << 3 | 0x23U) + (longlong)puVar7 & 0xfffffffffffffff8);
        if (uVar20 != 0) {
          puVar7[2] = ppuVar17;
          local_68 = ppuVar17;
          if (local_70[2] != 0) {
            uVar8 = 0;
            lVar9 = (longlong)ppuVar17 + (ulonglong)local_60;
            do {
              puVar12 = (uint *)(lVar9 + 0xfU & 0xfffffffffffffff0);
              uVar22 = (ulonglong)*(byte *)((longlong)local_70 + uVar8 + 0x214);
              local_68[uVar8 * 2] = puVar12;
              *(uint *)(local_68 + uVar8 * 2 + 1) =
                   (uint)*(byte *)((longlong)local_70 + uVar22 * 8 + 0x16);
              *(undefined4 *)((longlong)local_68 + uVar8 * 0x10 + 0xc) =
                   *(undefined4 *)((longlong)ppuVar19 + uVar8 * 0x10 + 0xc);
              uVar3 = *(undefined1 *)((longlong)local_70 + uVar22 * 8 + 0x16);
              lVar9 = FUN_180044018(param_5,uVar3,ppuVar19[uVar8 * 2],
                                    *(undefined4 *)(ppuVar19 + uVar8 * 2 + 1),puVar12,uVar3);
              uVar20 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar20;
            } while (uVar20 < local_70[2]);
          }
          ppuVar17 = (uint **)(((ulonglong)(iVar1 + 0x17) & 0xfffffff8) + (longlong)ppuVar17);
        }
        *ppuVar17 = (uint *)0x0;
        *puVar7 = FUN_180045dc0;
        *(uint ***)(lVar21 + (ulonglong)*(uint *)(lVar21 + 0x14bc) * 0x28 + 0x1350) = ppuVar17;
        if (*(char *)(lVar21 + 0x14c5) != '\0') {
          *(undefined4 *)(lVar21 + 0x12c0) = 0;
          uVar10 = *(undefined8 *)(lVar21 + 0x1340);
          goto LAB_180045c4c;
        }
        goto LAB_180045ab4;
      }
      *(undefined4 *)(lVar21 + 0x12c0) = 0;
      (*pcVar6)(100);
      FUN_180101630(lVar21 + 0x12c0);
    }
    plVar18 = *(longlong **)(lVar21 + 0x14a0);
    plVar11 = plVar18 + (uVar20 != 0);
    *plVar11 = param_1;
    *(undefined4 *)(plVar11 + 1) = param_2;
    *(uint **)((longlong)plVar11 + 0xc) = puVar12;
    *(int *)((longlong)plVar11 + 0x14) = param_5;
    *(undefined1 *)(plVar11 + 3) = param_6;
    if (uVar20 != 0) {
      *plVar18 = (longlong)plVar11 + 0x1c;
      FUN_180045cd8(&local_90);
    }
    FUN_180045dc0(plVar18);
LAB_180045ab4:
    *(undefined4 *)(lVar21 + 0x12c0) = 0;
    return;
  }
  ppuVar19 = (uint **)0x0;
  local_90 = (uint **)0x0;
  uStack_88 = 0;
  local_80 = 0;
  uVar8 = 0;
  if (bVar5) {
    uVar22 = FUN_1800f2fc8(*(longlong *)(param_1 + 0xf6e0) + 0x17f0,uVar20,&local_90);
    ppuVar17 = local_68;
    ppuVar19 = local_90;
    if ((uVar22 & 1) == 0) {
LAB_180045ba8:
      uVar8 = (ulonglong)local_80;
      goto LAB_180045bb0;
    }
    local_68 = local_90;
    uVar20 = local_80;
    if (local_70[2] != 0) {
      lVar21 = (longlong)local_90 + (ulonglong)local_60;
      do {
        puVar12 = (uint *)(lVar21 + 0xfU & 0xfffffffffffffff0);
        uVar22 = (ulonglong)*(byte *)((longlong)local_70 + uVar8 + 0x214);
        local_68[uVar8 * 2] = puVar12;
        *(uint *)(local_68 + uVar8 * 2 + 1) =
             (uint)*(byte *)((longlong)local_70 + uVar22 * 8 + 0x16);
        *(undefined4 *)((longlong)local_68 + uVar8 * 0x10 + 0xc) =
             *(undefined4 *)((longlong)ppuVar17 + uVar8 * 0x10 + 0xc);
        uVar3 = *(undefined1 *)((longlong)local_70 + uVar22 * 8 + 0x16);
        lVar21 = FUN_180044018(param_5,uVar3,ppuVar17[uVar8 * 2],
                               *(undefined4 *)(ppuVar17 + uVar8 * 2 + 1),puVar12,uVar3);
        uVar20 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar20;
      } while (uVar20 < local_70[2]);
      goto LAB_180045ba8;
    }
  }
  else {
LAB_180045bb0:
    uVar20 = (uint)uVar8;
  }
  ppuVar17 = local_68;
  puVar12 = local_70;
  uVar10 = uStack_88;
  lVar21 = *(longlong *)(param_1 + 0xf6e0);
  if (*(char *)(lVar21 + 0x14c4) != '\0') {
    puVar7 = (undefined8 *)FUN_180101500(lVar21 + 0x12c0,0x38);
    pcVar6 = __imp_KERNEL32_dll_Sleep;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar21 + 0x14c0);
      puVar7[1] = 0x38;
      puVar7[2] = param_1;
      *(undefined4 *)(puVar7 + 3) = param_2;
      *(uint **)((longlong)puVar7 + 0x1c) = puVar12;
      *(uint ***)((longlong)puVar7 + 0x24) = ppuVar17;
      *(int *)((longlong)puVar7 + 0x2c) = param_5;
      *(undefined1 *)(puVar7 + 6) = param_6;
      *(uint ***)((longlong)puVar7 + 0x34) = ppuVar19;
      *(undefined8 *)((longlong)puVar7 + 0x3c) = uVar10;
      puVar15 = (undefined8 *)((longlong)puVar7 + 0x4fU & 0xfffffffffffffff8);
      *(uint *)((longlong)puVar7 + 0x44) = uVar20;
      *puVar15 = 0;
      *puVar7 = FUN_180045e40;
      *(undefined8 **)(lVar21 + (ulonglong)*(uint *)(lVar21 + 0x14bc) * 0x28 + 0x1350) = puVar15;
      if (*(char *)(lVar21 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar21 + 0x12c0) = 0;
        uVar10 = *(undefined8 *)(lVar21 + 0x1340);
LAB_180045c4c:
        (*__imp_KERNEL32_dll_SetEvent)(uVar10);
        return;
      }
      goto LAB_180045cb4;
    }
    *(undefined4 *)(lVar21 + 0x12c0) = 0;
    (*pcVar6)(100);
    FUN_180101630(lVar21 + 0x12c0);
  }
  plVar11 = *(longlong **)(lVar21 + 0x14a0);
  *plVar11 = param_1;
  *(undefined4 *)(plVar11 + 1) = param_2;
  *(uint **)((longlong)plVar11 + 0xc) = puVar12;
  *(uint ***)((longlong)plVar11 + 0x14) = ppuVar17;
  *(int *)((longlong)plVar11 + 0x1c) = param_5;
  *(undefined1 *)(plVar11 + 4) = param_6;
  *(uint ***)((longlong)plVar11 + 0x24) = ppuVar19;
  *(undefined8 *)((longlong)plVar11 + 0x2c) = uVar10;
  *(uint *)((longlong)plVar11 + 0x34) = uVar20;
  FUN_180045e40();
LAB_180045cb4:
  *(undefined4 *)(lVar21 + 0x12c0) = 0;
  return;
}

