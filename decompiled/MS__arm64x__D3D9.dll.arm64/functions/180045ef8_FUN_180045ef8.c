/*
 * FUN_180045ef8 at 180045ef8
 * undefined FUN_180045ef8(void)
 * Address ranges: 180045ef8-1800467c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180045ef8(longlong param_1,undefined4 param_2,uint *param_3,uint **param_4,int param_5,
                  uint *param_6,uint param_7,uint param_8,byte param_9,byte param_10)

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
  longlong lVar11;
  uint *puVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  uint **ppuVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  int iVar23;
  undefined4 uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  uint local_e0 [2];
  uint **local_d8;
  undefined4 local_d0;
  uint *local_c8;
  uint **local_c0;
  uint *local_b8;
  uint local_b0;
  int local_ac;
  uint local_a8;
  undefined8 local_a4;
  uint *local_98;
  uint **local_90;
  longlong lStack_88;
  undefined8 local_80;
  byte bStack_78;
  undefined7 uStack_77;
  uint *local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 *local_58;
  
  lVar20 = *(longlong *)(param_1 + 0xf6e0);
  bVar6 = false;
  local_b0 = param_3[2] << 4;
  local_ac = 0;
  local_a4 = 0;
  local_d0 = param_2;
  local_c8 = param_3;
  local_c0 = param_4;
  local_b8 = param_6;
  local_a8 = param_8;
  local_98 = param_3;
  local_70 = param_6;
  puVar9 = (undefined8 *)FUN_180101630(lVar20 + 0x12c0);
  if (*(char *)(lVar20 + 0x14c4) == '\0') {
    iVar16 = local_a4._4_4_;
  }
  else {
    if (*param_3 == *(uint *)(param_1 + 0x100f0)) {
      local_c8 = *(uint **)(param_1 + 0x100f8);
    }
    else {
      *(uint *)(param_1 + 0x100f0) = *param_3;
      puVar9 = (undefined8 *)FUN_1800067f8(param_1 + 0xf7b8,param_3);
      if (puVar9 == (undefined8 *)0x0) {
        local_d8 = (uint **)FUN_180102f80(0x254);
        puVar9 = (undefined8 *)0x0;
        if (local_d8 != (uint **)0x0) {
          thunk_FUN_180001218(local_d8,param_3,0x254);
          uVar18 = *(uint *)(param_1 + 0xf7c8);
          uVar25 = 0;
          uVar26 = (ulonglong)*param_3;
          if (uVar18 != 0) {
            uVar15 = 0;
            uVar14 = uVar18;
            do {
              uVar5 = uVar14 + uVar15 >> 1;
              uVar25 = (ulonglong)uVar5;
              uVar17 = *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar25 * 0x18);
              if (uVar17 <= uVar26) {
                if (uVar26 <= uVar17) break;
                uVar15 = uVar5 + 1;
                uVar25 = (ulonglong)(uVar5 + 1);
                uVar5 = uVar14;
              }
              uVar14 = uVar5;
            } while (uVar14 != uVar15);
          }
          if (((uint)uVar25 == uVar18) ||
             (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar25 * 0x18),
             *puVar1 != uVar26)) {
            uVar15 = *(uint *)(param_1 + 0xf7cc);
            if (uVar15 == uVar18) {
              local_e0[0] = 0x10;
              if (uVar15 != 0) {
                local_e0[0] = uVar15 << 1;
              }
              local_68 = thunk_FUN_180102f80((ulonglong)local_e0[0] * 0x18 + 0x7f);
              if (local_68 != 0) {
                uVar21 = local_68 + 0x7fU & 0xffffffffffffff80;
                uVar17 = 0;
                if (*(int *)(param_1 + 0xf7c8) != 0) {
                  do {
                    uVar18 = (int)uVar17 + 1;
                    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar17 * 0x18);
                    puVar2 = (undefined8 *)(uVar21 + uVar17 * 0x18);
                    uVar27 = *puVar9;
                    puVar2[1] = puVar9[1];
                    *puVar2 = uVar27;
                    puVar2[2] = puVar9[2];
                    uVar17 = (ulonglong)uVar18;
                  } while (uVar18 < *(uint *)(param_1 + 0xf7c8));
                }
                thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0xf7b8));
                *(ulonglong *)(param_1 + 0xf7c0) = uVar21;
                *(longlong *)(param_1 + 0xf7b8) = local_68;
                *(uint *)(param_1 + 0xf7cc) = local_e0[0];
              }
            }
            uVar17 = (ulonglong)*(uint *)(param_1 + 0xf7c8);
            if (*(uint *)(param_1 + 0xf7cc) != *(uint *)(param_1 + 0xf7c8)) {
              while ((uint)uVar25 < (uint)uVar17) {
                uVar21 = (ulonglong)((uint)uVar17 - 1);
                puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar17 * 0x18);
                puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar21 * 0x18);
                uVar27 = *puVar2;
                puVar9[1] = puVar2[1];
                *puVar9 = uVar27;
                puVar9[2] = puVar2[2];
                uVar17 = uVar21;
              }
              *(int *)(param_1 + 0xf7c8) = *(int *)(param_1 + 0xf7c8) + 1;
              *(uint *)(*(longlong *)(param_1 + 0xf7c0) + uVar25 * 0x18 + 8) = *local_98;
              *(uint ***)(*(longlong *)(param_1 + 0xf7c0) + uVar25 * 0x18 + 0x10) = local_d8;
              *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar25 * 0x18) = uVar26;
            }
          }
          else {
            puVar1[2] = (ulonglong)local_d8;
          }
          puVar9 = (undefined8 *)FUN_1800067f8(param_1 + 0xf7b8,local_98);
          if (puVar9 != (undefined8 *)0x0) goto LAB_180046184;
        }
        local_c8 = (uint *)0x0;
      }
      else {
LAB_180046184:
        local_c8 = (uint *)*puVar9;
      }
      *(uint **)(param_1 + 0x100f8) = local_c8;
    }
    if (local_c8 == (uint *)0x0) {
      iVar16 = local_a4._4_4_;
    }
    else {
      local_e0[0] = 0;
      FUN_180041720(puVar9,local_70,param_7,param_9,&local_a4,local_e0);
      param_5 = (local_e0[0] - (int)local_a4) + 1;
      uVar25 = 0;
      if (local_98[2] != 0) {
        do {
          lVar20 = uVar25 + 0x214;
          uVar18 = (int)uVar25 + 1;
          uVar25 = (ulonglong)uVar18;
          local_ac = local_ac +
                     (uint)*(byte *)((longlong)local_98 +
                                    (ulonglong)*(byte *)((longlong)local_98 + lVar20) * 8 + 0x16) *
                     param_5 + 0x10;
        } while (uVar18 < local_98[2]);
      }
      iVar16 = ((uint)param_9 * 2 + 2) * param_7;
      local_a4 = CONCAT44(iVar16,(int)local_a4);
    }
    bVar6 = true;
  }
  puVar12 = local_c8;
  local_80 = CONCAT44(param_7,param_5);
  _bStack_78 = CONCAT71(uStack_77,param_9);
  iVar16 = iVar16 + local_ac + local_b0;
  local_e0[0] = iVar16 + 0x28;
  local_98 = (uint *)CONCAT44(local_98._4_4_,iVar16);
  if (local_e0[0] < 0x3f00 && bVar6) {
    lVar20 = *(longlong *)(param_1 + 0xf6e0);
    iVar23 = 1;
    cVar4 = *(char *)(lVar20 + 0x14c4);
    uVar18 = (uint)(cVar4 == '\0');
    if (cVar4 != '\0') {
      if (local_e0[0] == 0) {
        uVar15 = 0x28;
      }
      else {
        uVar15 = (iVar16 + 0x2fU & 0xfffffff8) + 0x30;
      }
      local_d8 = (uint **)FUN_180101500(lVar20 + 0x12c0,(ulonglong)uVar15);
      pcVar7 = __imp_KERNEL32_dll_Sleep;
      local_58 = local_d8;
      if (local_d8 == (uint **)0x0) {
        *(undefined4 *)(lVar20 + 0x12c0) = 0;
        (*pcVar7)(100);
        FUN_180101630(lVar20 + 0x12c0);
        uVar18 = 1;
      }
      else {
        FUN_1800015a0(lVar20 + 0x14c0);
        ppuVar19 = local_c0;
        local_d8[1] = (uint *)(ulonglong)uVar15;
        lVar11 = 2;
        if (local_e0[0] != 0) {
          lVar11 = 3;
        }
        plVar13 = (longlong *)(local_d8 + lVar11);
        *plVar13 = param_1;
        *(undefined4 *)(plVar13 + 1) = local_d0;
        *(uint **)((longlong)plVar13 + 0xc) = puVar12;
        plVar22 = (longlong *)((longlong)plVar13 + 0x2bU & 0xfffffffffffffff8);
        *(int *)((longlong)plVar13 + 0x14) = param_5;
        *(uint *)(plVar13 + 3) = param_7;
        *(byte *)((longlong)plVar13 + 0x1c) = param_9;
        *(byte *)(plVar13 + 4) = param_10;
        if (local_e0[0] != 0) {
          local_d8[2] = (uint *)plVar22;
          local_c0 = (uint **)(plVar22 + 1);
          puVar10 = (uint *)((longlong)plVar22 + (ulonglong)local_b0 + 0x17 & 0xfffffffffffffff0);
          if (local_c8[2] != 0) {
            local_d8 = (uint **)CONCAT44(local_d8._4_4_,(uint)param_10);
            local_68 = CONCAT44(local_68._4_4_,(uint)(cVar4 == '\0'));
            local_70 = (uint *)CONCAT44(local_70._4_4_,1);
            uVar25 = 0;
            local_60 = plVar22;
            do {
              uVar26 = (ulonglong)*(byte *)((longlong)local_c8 + uVar25 + 0x214);
              local_c0[uVar25 * 2] = puVar10;
              *(uint *)(local_c0 + uVar25 * 2 + 1) =
                   (uint)*(byte *)((longlong)local_c8 + uVar26 * 8 + 0x16);
              *(undefined4 *)((longlong)local_c0 + uVar25 * 0x10 + 0xc) =
                   *(undefined4 *)((longlong)ppuVar19 + uVar25 * 0x10 + 0xc);
              uVar3 = *(undefined1 *)((longlong)local_c8 + uVar26 * 8 + 0x16);
              lVar11 = FUN_180044018(param_5,uVar3,
                                     (longlong)ppuVar19[uVar25 * 2] +
                                     (ulonglong)
                                     (((int)local_a4 + local_a8) *
                                     *(int *)(ppuVar19 + uVar25 * 2 + 1)),
                                     *(int *)(ppuVar19 + uVar25 * 2 + 1),puVar10,uVar3);
              uVar18 = (int)uVar25 + 1;
              uVar25 = (ulonglong)uVar18;
              puVar10 = (uint *)(lVar11 + 0xfU & 0xfffffffffffffff0);
            } while (uVar18 < local_c8[2]);
            plVar22 = local_60;
            iVar23 = (int)local_70;
            uVar18 = (uint)local_68;
            param_10 = (byte)local_d8;
          }
          local_b8 = (uint *)FUN_180041850(puVar10,local_b8,puVar10,param_7,-(int)local_a4,param_9);
          local_a8 = 0;
          *plVar22 = (longlong)local_b8;
          plVar22 = (longlong *)
                    (((ulonglong)((int)local_98 + 0x2f) & 0xfffffff8) + (longlong)plVar22);
        }
        *plVar22 = 0;
        *local_58 = FUN_180046900;
        *(longlong **)(lVar20 + (ulonglong)*(uint *)(lVar20 + 0x14bc) * 0x28 + 0x1350) = plVar22;
        pcVar7 = __imp_KERNEL32_dll_SetEvent;
        if (*(char *)(lVar20 + 0x14c5) != '\0') {
          *(undefined4 *)(lVar20 + 0x12c0) = 0;
          (*pcVar7)(*(undefined8 *)(lVar20 + 0x1340));
          iVar23 = 0;
        }
      }
    }
    if (uVar18 != 0) {
      local_90 = &local_c8;
      plVar22 = *(longlong **)(lVar20 + 0x14a0);
      plVar13 = plVar22 + (local_e0[0] != 0);
      *plVar13 = param_1;
      *(undefined4 *)(plVar13 + 1) = local_d0;
      *(uint **)((longlong)plVar13 + 0xc) = puVar12;
      *(int *)((longlong)plVar13 + 0x14) = param_5;
      *(uint *)(plVar13 + 3) = param_7;
      *(byte *)((longlong)plVar13 + 0x1c) = param_9;
      *(byte *)(plVar13 + 4) = param_10;
      lStack_88 = param_1;
      if (local_e0[0] != 0) {
        *plVar22 = ((ulonglong)(local_e0[0] != 0) << 3 | 0x24) + (longlong)plVar22;
        FUN_1800467c8(&local_90);
      }
      FUN_180046900(plVar22);
    }
    if (iVar23 == 0) {
      return;
    }
    *(undefined4 *)(lVar20 + 0x12c0) = 0;
    return;
  }
  local_90 = (uint **)0x0;
  lStack_88 = 0;
  local_80 = (ulonglong)param_7 << 0x20;
  ppuVar19 = local_90;
  uVar24 = 0;
  if (bVar6) {
    uVar25 = FUN_1800f2fc8(*(longlong *)(param_1 + 0xf6e0) + 0x17f0,local_e0[0],&local_90);
    ppuVar19 = local_90;
    ppuVar8 = local_c0;
    if ((uVar25 & 1) == 0) {
      uVar24 = (undefined4)local_80;
    }
    else {
      local_c0 = local_90 + 1;
      puVar12 = (uint *)((longlong)local_90 + (ulonglong)local_b0 + 0x17 & 0xfffffffffffffff0);
      if (local_c8[2] != 0) {
        uVar25 = 0;
        do {
          uVar26 = (ulonglong)*(byte *)((longlong)local_c8 + uVar25 + 0x214);
          local_c0[uVar25 * 2] = puVar12;
          *(uint *)(local_c0 + uVar25 * 2 + 1) =
               (uint)*(byte *)((longlong)local_c8 + uVar26 * 8 + 0x16);
          *(undefined4 *)((longlong)local_c0 + uVar25 * 0x10 + 0xc) =
               *(undefined4 *)((longlong)ppuVar8 + uVar25 * 0x10 + 0xc);
          uVar3 = *(undefined1 *)((longlong)local_c8 + uVar26 * 8 + 0x16);
          lVar20 = FUN_180044018(param_5,uVar3,
                                 (longlong)ppuVar8[uVar25 * 2] +
                                 (ulonglong)
                                 (*(int *)(ppuVar8 + uVar25 * 2 + 1) * ((int)local_a4 + local_a8)),
                                 *(int *)(ppuVar8 + uVar25 * 2 + 1),puVar12,uVar3);
          uVar18 = (int)uVar25 + 1;
          uVar25 = (ulonglong)uVar18;
          puVar12 = (uint *)(lVar20 + 0xfU & 0xfffffffffffffff0);
        } while (uVar18 < local_c8[2]);
      }
      local_b8 = (uint *)FUN_180041850(puVar12,local_b8,puVar12,param_7,-(int)local_a4,param_9);
      local_a8 = 0;
      *ppuVar19 = local_b8;
      uVar24 = (undefined4)local_80;
    }
  }
  lVar20 = lStack_88;
  puVar10 = local_b8;
  puVar12 = local_c8;
  lVar11 = *(longlong *)(param_1 + 0xf6e0);
  local_e0[0] = local_a8;
  local_d8 = local_c0;
  if (*(char *)(lVar11 + 0x14c4) != '\0') {
    local_98 = (uint *)FUN_180101500(lVar11 + 0x12c0,0x50);
    pcVar7 = __imp_KERNEL32_dll_Sleep;
    if (local_98 != (uint *)0x0) {
      FUN_1800015a0(lVar11 + 0x14c0);
      *(undefined8 *)((longlong)local_98 + 8) = 0x50;
      *(longlong *)((longlong)local_98 + 0x10) = param_1;
      *(undefined4 *)((longlong)local_98 + 0x18) = local_d0;
      *(uint **)((longlong)local_98 + 0x1c) = puVar12;
      *(uint ***)((longlong)local_98 + 0x24) = local_d8;
      *(int *)((longlong)local_98 + 0x2c) = param_5;
      *(uint **)((longlong)local_98 + 0x30) = puVar10;
      *(uint *)((longlong)local_98 + 0x38) = param_7;
      *(uint *)((longlong)local_98 + 0x3c) = local_e0[0];
      *(byte *)((longlong)local_98 + 0x40) = param_9;
      *(byte *)((longlong)local_98 + 0x44) = param_10;
      puVar9 = (undefined8 *)((longlong)local_98 + 99U & 0xfffffffffffffff8);
      *(uint ***)((longlong)local_98 + 0x48) = ppuVar19;
      *(longlong *)((longlong)local_98 + 0x50) = lVar20;
      *(undefined4 *)((longlong)local_98 + 0x58) = uVar24;
      *puVar9 = 0;
      *(code **)local_98 = FUN_1800469a8;
      *(undefined8 **)(lVar11 + (ulonglong)*(uint *)(lVar11 + 0x14bc) * 0x28 + 0x1350) = puVar9;
      pcVar7 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar11 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar11 + 0x12c0) = 0;
        (*pcVar7)(*(undefined8 *)(lVar11 + 0x1340));
        return;
      }
      goto LAB_1800467a8;
    }
    *(undefined4 *)(lVar11 + 0x12c0) = 0;
    (*pcVar7)(100);
    FUN_180101630(lVar11 + 0x12c0);
  }
  plVar13 = *(longlong **)(lVar11 + 0x14a0);
  *plVar13 = param_1;
  *(undefined4 *)(plVar13 + 1) = local_d0;
  *(uint **)((longlong)plVar13 + 0xc) = puVar12;
  *(uint ***)((longlong)plVar13 + 0x14) = local_d8;
  *(int *)((longlong)plVar13 + 0x1c) = param_5;
  plVar13[4] = (longlong)puVar10;
  *(uint *)(plVar13 + 5) = param_7;
  *(uint *)((longlong)plVar13 + 0x2c) = local_e0[0];
  *(byte *)(plVar13 + 6) = param_9;
  *(byte *)((longlong)plVar13 + 0x34) = param_10;
  plVar13[7] = (longlong)ppuVar19;
  plVar13[8] = lVar20;
  *(undefined4 *)(plVar13 + 9) = uVar24;
  FUN_1800469a8();
LAB_1800467a8:
  *(undefined4 *)(lVar11 + 0x12c0) = 0;
  return;
}

