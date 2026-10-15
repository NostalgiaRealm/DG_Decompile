/*
 * FUN_18004a9b0 at 18004a9b0
 * undefined FUN_18004a9b0(void)
 * Address ranges: 18004a9b0-18004b26f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004a9b0(longlong param_1,uint param_2,uint *param_3,undefined8 param_4,uint **param_5,
                  uint param_6,uint *param_7,uint param_8,uint param_9,byte param_10)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  code *pcVar7;
  uint **ppuVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint *puVar11;
  longlong lVar12;
  uint *puVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong *plVar19;
  uint **ppuVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined4 uVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  uint local_e0;
  uint local_dc;
  uint *local_d8;
  uint **local_d0;
  uint *local_c8;
  uint local_c0;
  int local_bc;
  uint local_b8;
  undefined8 local_b4;
  uint *local_a8;
  uint **local_a0;
  undefined8 local_98;
  uint **local_90;
  longlong lStack_88;
  undefined8 local_80;
  byte bStack_78;
  undefined7 uStack_77;
  longlong local_70;
  uint *local_68;
  undefined8 *puStack_60;
  
  lVar21 = *(longlong *)(param_1 + 0xf6e0);
  bVar6 = false;
  local_c0 = param_3[2] << 4;
  local_bc = 0;
  local_b4 = 0;
  local_b8 = param_9;
  local_dc = param_2;
  local_d8 = param_3;
  local_d0 = param_5;
  local_c8 = param_7;
  local_a8 = param_3;
  local_98 = param_4;
  local_68 = param_7;
  puVar9 = (undefined8 *)FUN_180101630(lVar21 + 0x12c0);
  if (*(char *)(lVar21 + 0x14c4) == '\0') {
    iVar17 = local_b4._4_4_;
  }
  else {
    if (*param_3 == *(uint *)(param_1 + 0x100f0)) {
      local_d8 = *(uint **)(param_1 + 0x100f8);
    }
    else {
      *(uint *)(param_1 + 0x100f0) = *param_3;
      puVar9 = (undefined8 *)FUN_1800067f8(param_1 + 0xf7b8,param_3);
      if (puVar9 == (undefined8 *)0x0) {
        local_a0 = (uint **)FUN_180102f80(0x254);
        puVar9 = (undefined8 *)0x0;
        if (local_a0 != (uint **)0x0) {
          thunk_FUN_180001218(local_a0,param_3,0x254);
          uVar23 = *(uint *)(param_1 + 0xf7c8);
          uVar25 = 0;
          uVar27 = (ulonglong)*param_3;
          if (uVar23 != 0) {
            uVar16 = 0;
            uVar15 = uVar23;
            do {
              uVar5 = uVar15 + uVar16 >> 1;
              uVar25 = (ulonglong)uVar5;
              uVar18 = *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar25 * 0x18);
              if (uVar18 <= uVar27) {
                if (uVar27 <= uVar18) break;
                uVar16 = uVar5 + 1;
                uVar25 = (ulonglong)(uVar5 + 1);
                uVar5 = uVar15;
              }
              uVar15 = uVar5;
            } while (uVar15 != uVar16);
          }
          if (((uint)uVar25 == uVar23) ||
             (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar25 * 0x18),
             *puVar1 != uVar27)) {
            uVar16 = *(uint *)(param_1 + 0xf7cc);
            if (uVar16 == uVar23) {
              local_e0 = 0x10;
              if (uVar16 != 0) {
                local_e0 = uVar16 << 1;
              }
              local_70 = thunk_FUN_180102f80((ulonglong)local_e0 * 0x18 + 0x7f);
              if (local_70 != 0) {
                uVar22 = local_70 + 0x7fU & 0xffffffffffffff80;
                uVar18 = 0;
                if (*(int *)(param_1 + 0xf7c8) != 0) {
                  do {
                    uVar23 = (int)uVar18 + 1;
                    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar18 * 0x18);
                    puVar2 = (undefined8 *)(uVar22 + uVar18 * 0x18);
                    uVar28 = *puVar9;
                    puVar2[1] = puVar9[1];
                    *puVar2 = uVar28;
                    puVar2[2] = puVar9[2];
                    uVar18 = (ulonglong)uVar23;
                  } while (uVar23 < *(uint *)(param_1 + 0xf7c8));
                }
                thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0xf7b8));
                *(ulonglong *)(param_1 + 0xf7c0) = uVar22;
                *(longlong *)(param_1 + 0xf7b8) = local_70;
                *(uint *)(param_1 + 0xf7cc) = local_e0;
              }
            }
            uVar18 = (ulonglong)*(uint *)(param_1 + 0xf7c8);
            if (*(uint *)(param_1 + 0xf7cc) != *(uint *)(param_1 + 0xf7c8)) {
              while ((uint)uVar25 < (uint)uVar18) {
                uVar22 = (ulonglong)((uint)uVar18 - 1);
                puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar18 * 0x18);
                puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar22 * 0x18);
                uVar28 = *puVar2;
                puVar9[1] = puVar2[1];
                *puVar9 = uVar28;
                puVar9[2] = puVar2[2];
                uVar18 = uVar22;
              }
              *(int *)(param_1 + 0xf7c8) = *(int *)(param_1 + 0xf7c8) + 1;
              *(uint *)(*(longlong *)(param_1 + 0xf7c0) + uVar25 * 0x18 + 8) = *local_a8;
              *(uint ***)(*(longlong *)(param_1 + 0xf7c0) + uVar25 * 0x18 + 0x10) = local_a0;
              *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar25 * 0x18) = uVar27;
            }
          }
          else {
            puVar1[2] = (ulonglong)local_a0;
          }
          puVar9 = (undefined8 *)FUN_1800067f8(param_1 + 0xf7b8,local_a8);
          if (puVar9 != (undefined8 *)0x0) goto LAB_18004ac44;
        }
        local_d8 = (uint *)0x0;
      }
      else {
LAB_18004ac44:
        local_d8 = (uint *)*puVar9;
      }
      *(uint **)(param_1 + 0x100f8) = local_d8;
    }
    if (local_d8 == (uint *)0x0) {
      iVar17 = local_b4._4_4_;
    }
    else {
      local_e0 = 0;
      FUN_180041720(puVar9,local_68,param_8,param_10,&local_b4,&local_e0);
      param_6 = (local_e0 - (int)local_b4) + 1;
      uVar25 = 0;
      if (local_a8[2] != 0) {
        do {
          lVar21 = uVar25 + 0x214;
          uVar23 = (int)uVar25 + 1;
          uVar25 = (ulonglong)uVar23;
          local_bc = local_bc +
                     *(byte *)((longlong)local_a8 +
                              (ulonglong)*(byte *)((longlong)local_a8 + lVar21) * 8 + 0x16) *
                     param_6 + 0x10;
        } while (uVar23 < local_a8[2]);
      }
      iVar17 = ((uint)param_10 * 2 + 2) * param_8;
      local_b4 = CONCAT44(iVar17,(int)local_b4);
    }
    bVar6 = true;
  }
  puVar13 = local_d8;
  local_80 = CONCAT44(param_8,param_6);
  _bStack_78 = CONCAT71(uStack_77,param_10);
  iVar17 = iVar17 + local_bc + local_c0;
  local_e0 = iVar17 + 0x28;
  local_a8 = (uint *)CONCAT44(local_a8._4_4_,iVar17);
  if (local_e0 < 0x3f00 && bVar6) {
    lVar21 = *(longlong *)(param_1 + 0xf6e0);
    iVar26 = 1;
    cVar4 = *(char *)(lVar21 + 0x14c4);
    uVar23 = (uint)(cVar4 == '\0');
    if (cVar4 != '\0') {
      if (local_e0 == 0) {
        uVar16 = 0x28;
      }
      else {
        uVar16 = (iVar17 + 0x2fU & 0xfffffff8) + 0x30;
      }
      puVar10 = (uint *)FUN_180101500(lVar21 + 0x12c0,(ulonglong)uVar16);
      pcVar7 = __imp_KERNEL32_dll_Sleep;
      if (puVar10 == (uint *)0x0) {
        *(undefined4 *)(lVar21 + 0x12c0) = 0;
        (*pcVar7)(100);
        FUN_180101630(lVar21 + 0x12c0);
        uVar23 = 1;
      }
      else {
        FUN_1800015a0(lVar21 + 0x14c0);
        ppuVar20 = local_d0;
        *(ulonglong *)(puVar10 + 2) = (ulonglong)uVar16;
        lVar12 = 2;
        if (local_e0 != 0) {
          lVar12 = 3;
        }
        puVar11 = puVar10 + lVar12 * 2;
        *(longlong *)puVar11 = param_1;
        puVar11[2] = local_dc;
        *(uint **)(puVar11 + 3) = puVar13;
        *(undefined8 *)(puVar11 + 5) = local_98;
        puVar11[7] = param_6;
        puVar11[8] = param_8;
        puVar9 = (undefined8 *)((longlong)puVar11 + 0x2fU & 0xfffffffffffffff8);
        *(byte *)(puVar11 + 9) = param_10;
        if (local_e0 != 0) {
          *(undefined8 **)(puVar10 + 4) = puVar9;
          local_d0 = (uint **)(puVar9 + 1);
          puVar11 = (uint *)((longlong)puVar9 + (ulonglong)local_c0 + 0x17 & 0xfffffffffffffff0);
          if (local_d8[2] != 0) {
            local_a0 = (uint **)CONCAT44(local_a0._4_4_,(uint)(cVar4 == '\0'));
            uVar25 = 0;
            local_70 = CONCAT44(local_70._4_4_,1);
            local_68 = puVar10;
            puStack_60 = puVar9;
            do {
              uVar27 = (ulonglong)*(byte *)((longlong)local_d8 + uVar25 + 0x214);
              local_d0[uVar25 * 2] = puVar11;
              *(uint *)(local_d0 + uVar25 * 2 + 1) =
                   (uint)*(byte *)((longlong)local_d8 + uVar27 * 8 + 0x16);
              *(undefined4 *)((longlong)local_d0 + uVar25 * 0x10 + 0xc) =
                   *(undefined4 *)((longlong)ppuVar20 + uVar25 * 0x10 + 0xc);
              uVar3 = *(undefined1 *)((longlong)local_d8 + uVar27 * 8 + 0x16);
              lVar12 = FUN_180044018(param_6,uVar3,
                                     (longlong)ppuVar20[uVar25 * 2] +
                                     (ulonglong)
                                     (((int)local_b4 + local_b8) *
                                     *(int *)(ppuVar20 + uVar25 * 2 + 1)),
                                     *(int *)(ppuVar20 + uVar25 * 2 + 1),puVar11,uVar3);
              uVar23 = (int)uVar25 + 1;
              uVar25 = (ulonglong)uVar23;
              puVar11 = (uint *)(lVar12 + 0xfU & 0xfffffffffffffff0);
            } while (uVar23 < local_d8[2]);
            puVar10 = local_68;
            puVar9 = puStack_60;
            iVar26 = (int)local_70;
            uVar23 = (uint)local_a0;
          }
          local_c8 = (uint *)FUN_180041850(puVar11,local_c8,puVar11,param_8,-(int)local_b4,param_10)
          ;
          local_b8 = 0;
          *puVar9 = local_c8;
          puVar9 = (undefined8 *)
                   (((ulonglong)((int)local_a8 + 0x2f) & 0xfffffff8) + (longlong)puVar9);
        }
        *puVar9 = 0;
        *(code **)puVar10 = FUN_18004b270;
        *(undefined8 **)(lVar21 + (ulonglong)*(uint *)(lVar21 + 0x14bc) * 0x28 + 0x1350) = puVar9;
        pcVar7 = __imp_KERNEL32_dll_SetEvent;
        if (*(char *)(lVar21 + 0x14c5) != '\0') {
          *(undefined4 *)(lVar21 + 0x12c0) = 0;
          (*pcVar7)(*(undefined8 *)(lVar21 + 0x1340));
          iVar26 = 0;
        }
      }
    }
    if (uVar23 != 0) {
      local_90 = &local_d8;
      plVar19 = *(longlong **)(lVar21 + 0x14a0);
      plVar14 = plVar19 + (local_e0 != 0);
      *plVar14 = param_1;
      *(uint *)(plVar14 + 1) = local_dc;
      *(uint **)((longlong)plVar14 + 0xc) = puVar13;
      *(undefined8 *)((longlong)plVar14 + 0x14) = local_98;
      *(uint *)((longlong)plVar14 + 0x1c) = param_6;
      *(uint *)(plVar14 + 4) = param_8;
      *(byte *)((longlong)plVar14 + 0x24) = param_10;
      lStack_88 = param_1;
      if (local_e0 != 0) {
        *plVar19 = (longlong)(plVar14 + 5);
        FUN_1800467c8(&local_90);
      }
      FUN_18004b270(plVar19);
    }
    if (iVar26 == 0) {
      return;
    }
    *(undefined4 *)(lVar21 + 0x12c0) = 0;
    return;
  }
  local_90 = (uint **)0x0;
  lStack_88 = 0;
  local_80 = (ulonglong)param_8 << 0x20;
  ppuVar20 = local_90;
  uVar24 = 0;
  if (bVar6) {
    uVar25 = FUN_1800f2fc8(*(longlong *)(param_1 + 0xf6e0) + 0x17f0,local_e0,&local_90);
    ppuVar20 = local_90;
    ppuVar8 = local_d0;
    if ((uVar25 & 1) == 0) {
      uVar24 = (undefined4)local_80;
    }
    else {
      local_d0 = local_90 + 1;
      puVar13 = (uint *)((longlong)local_90 + (ulonglong)local_c0 + 0x17 & 0xfffffffffffffff0);
      if (local_d8[2] != 0) {
        uVar25 = 0;
        do {
          uVar27 = (ulonglong)*(byte *)((longlong)local_d8 + uVar25 + 0x214);
          local_d0[uVar25 * 2] = puVar13;
          *(uint *)(local_d0 + uVar25 * 2 + 1) =
               (uint)*(byte *)((longlong)local_d8 + uVar27 * 8 + 0x16);
          *(undefined4 *)((longlong)local_d0 + uVar25 * 0x10 + 0xc) =
               *(undefined4 *)((longlong)ppuVar8 + uVar25 * 0x10 + 0xc);
          uVar3 = *(undefined1 *)((longlong)local_d8 + uVar27 * 8 + 0x16);
          lVar21 = FUN_180044018(param_6,uVar3,
                                 (longlong)ppuVar8[uVar25 * 2] +
                                 (ulonglong)
                                 (*(int *)(ppuVar8 + uVar25 * 2 + 1) * ((int)local_b4 + local_b8)),
                                 *(int *)(ppuVar8 + uVar25 * 2 + 1),puVar13,uVar3);
          uVar23 = (int)uVar25 + 1;
          uVar25 = (ulonglong)uVar23;
          puVar13 = (uint *)(lVar21 + 0xfU & 0xfffffffffffffff0);
        } while (uVar23 < local_d8[2]);
      }
      local_c8 = (uint *)FUN_180041850(puVar13,local_c8,puVar13,param_8,-(int)local_b4,param_10);
      local_b8 = 0;
      *ppuVar20 = local_c8;
      uVar24 = (undefined4)local_80;
    }
  }
  lVar21 = lStack_88;
  puVar10 = local_c8;
  puVar13 = local_d8;
  lVar12 = *(longlong *)(param_1 + 0xf6e0);
  local_e0 = local_b8;
  local_a0 = local_d0;
  if (*(char *)(lVar12 + 0x14c4) != '\0') {
    local_a8 = (uint *)FUN_180101500(lVar12 + 0x12c0,0x50);
    pcVar7 = __imp_KERNEL32_dll_Sleep;
    if (local_a8 != (uint *)0x0) {
      FUN_1800015a0(lVar12 + 0x14c0);
      *(undefined8 *)((longlong)local_a8 + 8) = 0x50;
      *(longlong *)((longlong)local_a8 + 0x10) = param_1;
      *(uint *)((longlong)local_a8 + 0x18) = local_dc;
      *(uint **)((longlong)local_a8 + 0x1c) = puVar13;
      *(undefined8 *)((longlong)local_a8 + 0x24) = local_98;
      *(uint ***)((longlong)local_a8 + 0x2c) = local_a0;
      *(uint *)((longlong)local_a8 + 0x34) = param_6;
      *(uint **)((longlong)local_a8 + 0x38) = puVar10;
      *(uint *)((longlong)local_a8 + 0x40) = param_8;
      *(uint *)((longlong)local_a8 + 0x44) = local_e0;
      *(byte *)((longlong)local_a8 + 0x48) = param_10;
      *(uint ***)((longlong)local_a8 + 0x4c) = ppuVar20;
      *(longlong *)((longlong)local_a8 + 0x54) = lVar21;
      puVar9 = (undefined8 *)((longlong)local_a8 + 0x67U & 0xfffffffffffffff8);
      *(undefined4 *)((longlong)local_a8 + 0x5c) = uVar24;
      *puVar9 = 0;
      *(code **)local_a8 = FUN_18004b2c8;
      *(undefined8 **)(lVar12 + (ulonglong)*(uint *)(lVar12 + 0x14bc) * 0x28 + 0x1350) = puVar9;
      pcVar7 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar12 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar12 + 0x12c0) = 0;
        (*pcVar7)(*(undefined8 *)(lVar12 + 0x1340));
        return;
      }
      goto LAB_18004b250;
    }
    *(undefined4 *)(lVar12 + 0x12c0) = 0;
    (*pcVar7)(100);
    FUN_180101630(lVar12 + 0x12c0);
  }
  plVar14 = *(longlong **)(lVar12 + 0x14a0);
  *plVar14 = param_1;
  *(uint *)(plVar14 + 1) = local_dc;
  *(uint **)((longlong)plVar14 + 0xc) = puVar13;
  *(undefined8 *)((longlong)plVar14 + 0x14) = local_98;
  *(uint ***)((longlong)plVar14 + 0x1c) = local_a0;
  *(uint *)((longlong)plVar14 + 0x24) = param_6;
  plVar14[5] = (longlong)puVar10;
  *(uint *)(plVar14 + 6) = param_8;
  *(uint *)((longlong)plVar14 + 0x34) = local_e0;
  *(byte *)(plVar14 + 7) = param_10;
  *(uint ***)((longlong)plVar14 + 0x3c) = ppuVar20;
  *(longlong *)((longlong)plVar14 + 0x44) = lVar21;
  *(undefined4 *)((longlong)plVar14 + 0x4c) = uVar24;
  FUN_18004b2c8();
LAB_18004b250:
  *(undefined4 *)(lVar12 + 0x12c0) = 0;
  return;
}

