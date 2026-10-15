/*
 * FUN_18004a200 at 18004a200
 * undefined FUN_18004a200(void)
 * Address ranges: 18004a200-18004a923
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004a200(longlong param_1,undefined4 param_2,uint *param_3,undefined8 param_4,
                  uint **param_5,int param_6)

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
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  uint **ppuVar16;
  longlong *plVar17;
  uint **ppuVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint **local_90;
  longlong lStack_88;
  uint local_80;
  uint *local_70;
  uint **local_68;
  uint local_60;
  int local_5c;
  
  lVar20 = *(longlong *)(param_1 + 0xf6e0);
  bVar5 = false;
  local_60 = param_3[2] << 4;
  local_5c = 0;
  local_70 = param_3;
  local_68 = param_5;
  FUN_180101630(lVar20 + 0x12c0);
  if (*(char *)(lVar20 + 0x14c4) != '\0') {
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
          uVar19 = *(uint *)(param_1 + 0xf7c8);
          uVar22 = 0;
          uVar21 = (ulonglong)*param_3;
          if (uVar19 != 0) {
            uVar13 = 0;
            uVar12 = uVar19;
            do {
              uVar4 = uVar12 + uVar13 >> 1;
              uVar22 = (ulonglong)uVar4;
              uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar22 * 0x18);
              if (uVar15 <= uVar21) {
                if (uVar21 <= uVar15) break;
                uVar13 = uVar4 + 1;
                uVar22 = (ulonglong)(uVar4 + 1);
                uVar4 = uVar12;
              }
              uVar12 = uVar4;
            } while (uVar12 != uVar13);
          }
          if (((uint)uVar22 == uVar19) ||
             (puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar22 * 0x18),
             *puVar2 != uVar21)) {
            uVar13 = *(uint *)(param_1 + 0xf7cc);
            if (uVar13 == uVar19) {
              uVar19 = 0x10;
              if (uVar13 != 0) {
                uVar19 = uVar13 << 1;
              }
              local_90 = (uint **)thunk_FUN_180102f80((ulonglong)uVar19 * 0x18 + 0x7f);
              if (local_90 != (uint **)0x0) {
                uVar23 = (longlong)local_90 + 0x7fU & 0xffffffffffffff80;
                uVar15 = 0;
                if (*(int *)(param_1 + 0xf7c8) != 0) {
                  do {
                    uVar13 = (int)uVar15 + 1;
                    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar15 * 0x18);
                    puVar14 = (undefined8 *)(uVar23 + uVar15 * 0x18);
                    uVar10 = *puVar7;
                    puVar14[1] = puVar7[1];
                    *puVar14 = uVar10;
                    puVar14[2] = puVar7[2];
                    uVar15 = (ulonglong)uVar13;
                  } while (uVar13 < *(uint *)(param_1 + 0xf7c8));
                }
                thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0xf7b8));
                *(ulonglong *)(param_1 + 0xf7c0) = uVar23;
                *(uint ***)(param_1 + 0xf7b8) = local_90;
                *(uint *)(param_1 + 0xf7cc) = uVar19;
              }
            }
            uVar15 = (ulonglong)*(uint *)(param_1 + 0xf7c8);
            if (*(uint *)(param_1 + 0xf7cc) != *(uint *)(param_1 + 0xf7c8)) {
              while ((uint)uVar22 < (uint)uVar15) {
                uVar23 = (ulonglong)((uint)uVar15 - 1);
                puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar15 * 0x18);
                puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar23 * 0x18);
                uVar10 = *puVar14;
                puVar7[1] = puVar14[1];
                *puVar7 = uVar10;
                puVar7[2] = puVar14[2];
                uVar15 = uVar23;
              }
              *(int *)(param_1 + 0xf7c8) = *(int *)(param_1 + 0xf7c8) + 1;
              *(uint *)(*(longlong *)(param_1 + 0xf7c0) + uVar22 * 0x18 + 8) = *param_3;
              *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar22 * 0x18 + 0x10) = uVar8;
              *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar22 * 0x18) = uVar21;
            }
          }
          else {
            puVar2[2] = uVar8;
          }
          puVar7 = (undefined8 *)FUN_1800067f8(param_1 + 0xf7b8,param_3);
          if (puVar7 != (undefined8 *)0x0) goto LAB_18004a470;
        }
        local_70 = (uint *)0x0;
      }
      else {
LAB_18004a470:
        local_70 = (uint *)*puVar7;
      }
      *(uint **)(param_1 + 0x100f8) = local_70;
    }
    if (local_70 != (uint *)0x0) {
      uVar8 = 0;
      if (param_3[2] != 0) {
        do {
          lVar20 = uVar8 + 0x214;
          uVar19 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar19;
          local_5c = local_5c +
                     (uint)*(byte *)((longlong)param_3 +
                                    (ulonglong)*(byte *)((longlong)param_3 + lVar20) * 8 + 0x16) *
                     param_6 + 0x10;
        } while (uVar19 < param_3[2]);
      }
    }
    bVar5 = true;
  }
  puVar11 = local_70;
  local_90 = &local_70;
  lStack_88 = CONCAT44(lStack_88._4_4_,param_6);
  iVar1 = local_5c + local_60;
  uVar19 = iVar1 + 0x10;
  if (uVar19 < 0x3f00 && bVar5) {
    lVar20 = *(longlong *)(param_1 + 0xf6e0);
    if (*(char *)(lVar20 + 0x14c4) != '\0') {
      if (uVar19 == 0) {
        uVar13 = 0x20;
      }
      else {
        uVar13 = (iVar1 + 0x17U & 0xfffffff8) + 0x28;
      }
      puVar7 = (undefined8 *)FUN_180101500(lVar20 + 0x12c0,(ulonglong)uVar13);
      pcVar6 = __imp_KERNEL32_dll_Sleep;
      if (puVar7 != (undefined8 *)0x0) {
        FUN_1800015a0(lVar20 + 0x14c0);
        ppuVar18 = local_68;
        puVar7[1] = (ulonglong)uVar13;
        lVar9 = 2;
        if (uVar19 != 0) {
          lVar9 = 3;
        }
        plVar17 = puVar7 + lVar9;
        *plVar17 = param_1;
        *(undefined4 *)(plVar17 + 1) = param_2;
        *(uint **)((longlong)plVar17 + 0xc) = puVar11;
        *(undefined8 *)((longlong)plVar17 + 0x14) = param_4;
        *(int *)((longlong)plVar17 + 0x1c) = param_6;
        ppuVar16 = (uint **)((lVar9 << 3 | 0x27U) + (longlong)puVar7 & 0xfffffffffffffff8);
        if (uVar19 != 0) {
          puVar7[2] = ppuVar16;
          local_68 = ppuVar16;
          if (local_70[2] != 0) {
            uVar8 = 0;
            lVar9 = (longlong)ppuVar16 + (ulonglong)local_60;
            do {
              puVar11 = (uint *)(lVar9 + 0xfU & 0xfffffffffffffff0);
              uVar21 = (ulonglong)*(byte *)((longlong)local_70 + uVar8 + 0x214);
              local_68[uVar8 * 2] = puVar11;
              *(uint *)(local_68 + uVar8 * 2 + 1) =
                   (uint)*(byte *)((longlong)local_70 + uVar21 * 8 + 0x16);
              *(undefined4 *)((longlong)local_68 + uVar8 * 0x10 + 0xc) =
                   *(undefined4 *)((longlong)ppuVar18 + uVar8 * 0x10 + 0xc);
              uVar3 = *(undefined1 *)((longlong)local_70 + uVar21 * 8 + 0x16);
              lVar9 = FUN_180044018(param_6,uVar3,ppuVar18[uVar8 * 2],
                                    *(undefined4 *)(ppuVar18 + uVar8 * 2 + 1),puVar11,uVar3);
              uVar19 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar19;
            } while (uVar19 < local_70[2]);
          }
          ppuVar16 = (uint **)(((ulonglong)(iVar1 + 0x17) & 0xfffffff8) + (longlong)ppuVar16);
        }
        *ppuVar16 = (uint *)0x0;
        *puVar7 = FUN_18004a928;
        *(uint ***)(lVar20 + (ulonglong)*(uint *)(lVar20 + 0x14bc) * 0x28 + 0x1350) = ppuVar16;
        if (*(char *)(lVar20 + 0x14c5) != '\0') {
          *(undefined4 *)(lVar20 + 0x12c0) = 0;
          uVar10 = *(undefined8 *)(lVar20 + 0x1340);
          goto LAB_18004a89c;
        }
        goto LAB_18004a704;
      }
      *(undefined4 *)(lVar20 + 0x12c0) = 0;
      (*pcVar6)(100);
      FUN_180101630(lVar20 + 0x12c0);
    }
    uVar8 = (ulonglong)(uVar19 != 0);
    plVar17 = *(longlong **)(lVar20 + 0x14a0);
    uVar21 = uVar8 * 8;
    plVar17[uVar8] = param_1;
    *(undefined4 *)(plVar17 + uVar8 + 1) = param_2;
    *(uint **)((longlong)plVar17 + uVar21 + 0xc) = puVar11;
    *(undefined8 *)((longlong)plVar17 + uVar21 + 0x14) = param_4;
    *(int *)((longlong)plVar17 + uVar21 + 0x1c) = param_6;
    if (uVar19 != 0) {
      *plVar17 = (uVar21 | 0x20) + (longlong)plVar17;
      FUN_180045cd8(&local_90);
    }
    FUN_18004a928(plVar17);
LAB_18004a704:
    *(undefined4 *)(lVar20 + 0x12c0) = 0;
    return;
  }
  ppuVar18 = (uint **)0x0;
  local_90 = (uint **)0x0;
  lStack_88 = 0;
  local_80 = 0;
  uVar8 = 0;
  if (bVar5) {
    uVar21 = FUN_1800f2fc8(*(longlong *)(param_1 + 0xf6e0) + 0x17f0,uVar19,&local_90);
    ppuVar16 = local_68;
    ppuVar18 = local_90;
    if ((uVar21 & 1) == 0) {
LAB_18004a7f8:
      uVar8 = (ulonglong)local_80;
      goto LAB_18004a800;
    }
    local_68 = local_90;
    uVar19 = local_80;
    if (local_70[2] != 0) {
      lVar20 = (longlong)local_90 + (ulonglong)local_60;
      do {
        puVar11 = (uint *)(lVar20 + 0xfU & 0xfffffffffffffff0);
        uVar21 = (ulonglong)*(byte *)((longlong)local_70 + uVar8 + 0x214);
        local_68[uVar8 * 2] = puVar11;
        *(uint *)(local_68 + uVar8 * 2 + 1) =
             (uint)*(byte *)((longlong)local_70 + uVar21 * 8 + 0x16);
        *(undefined4 *)((longlong)local_68 + uVar8 * 0x10 + 0xc) =
             *(undefined4 *)((longlong)ppuVar16 + uVar8 * 0x10 + 0xc);
        uVar3 = *(undefined1 *)((longlong)local_70 + uVar21 * 8 + 0x16);
        lVar20 = FUN_180044018(param_6,uVar3,ppuVar16[uVar8 * 2],
                               *(undefined4 *)(ppuVar16 + uVar8 * 2 + 1),puVar11,uVar3);
        uVar19 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar19;
      } while (uVar19 < local_70[2]);
      goto LAB_18004a7f8;
    }
  }
  else {
LAB_18004a800:
    uVar19 = (uint)uVar8;
  }
  ppuVar16 = local_68;
  puVar11 = local_70;
  lVar20 = lStack_88;
  lVar9 = *(longlong *)(param_1 + 0xf6e0);
  if (*(char *)(lVar9 + 0x14c4) != '\0') {
    puVar7 = (undefined8 *)FUN_180101500(lVar9 + 0x12c0,0x40);
    pcVar6 = __imp_KERNEL32_dll_Sleep;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar9 + 0x14c0);
      puVar7[1] = 0x40;
      puVar7[2] = param_1;
      *(undefined4 *)(puVar7 + 3) = param_2;
      *(uint **)((longlong)puVar7 + 0x1c) = puVar11;
      *(undefined8 *)((longlong)puVar7 + 0x24) = param_4;
      puVar14 = (undefined8 *)((longlong)puVar7 + 0x53U & 0xfffffffffffffff8);
      *(uint ***)((longlong)puVar7 + 0x2c) = ppuVar16;
      *(int *)((longlong)puVar7 + 0x34) = param_6;
      puVar7[7] = ppuVar18;
      puVar7[8] = lVar20;
      *(uint *)(puVar7 + 9) = uVar19;
      *puVar14 = 0;
      *puVar7 = FUN_18004a948;
      *(undefined8 **)(lVar9 + (ulonglong)*(uint *)(lVar9 + 0x14bc) * 0x28 + 0x1350) = puVar14;
      if (*(char *)(lVar9 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar9 + 0x12c0) = 0;
        uVar10 = *(undefined8 *)(lVar9 + 0x1340);
LAB_18004a89c:
        (*__imp_KERNEL32_dll_SetEvent)(uVar10);
        return;
      }
      goto LAB_18004a904;
    }
    *(undefined4 *)(lVar9 + 0x12c0) = 0;
    (*pcVar6)(100);
    FUN_180101630(lVar9 + 0x12c0);
  }
  plVar17 = *(longlong **)(lVar9 + 0x14a0);
  *plVar17 = param_1;
  *(undefined4 *)(plVar17 + 1) = param_2;
  *(uint **)((longlong)plVar17 + 0xc) = puVar11;
  *(undefined8 *)((longlong)plVar17 + 0x14) = param_4;
  *(uint ***)((longlong)plVar17 + 0x1c) = ppuVar16;
  *(int *)((longlong)plVar17 + 0x24) = param_6;
  plVar17[5] = (longlong)ppuVar18;
  plVar17[6] = lVar20;
  *(uint *)(plVar17 + 7) = uVar19;
  FUN_18004a948();
LAB_18004a904:
  *(undefined4 *)(lVar9 + 0x12c0) = 0;
  return;
}

