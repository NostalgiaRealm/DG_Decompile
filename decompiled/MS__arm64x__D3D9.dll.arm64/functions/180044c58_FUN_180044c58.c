/*
 * FUN_180044c58 at 180044c58
 * undefined FUN_180044c58(void)
 * Address ranges: 180044c58-18004541f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180044c58(longlong param_1,uint param_2,uint *param_3,longlong param_4,undefined4 param_5,
                  uint param_6,ulonglong param_7,uint param_8,uint param_9,byte param_10,
                  byte param_11)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint local_c0;
  uint local_bc;
  undefined8 *local_b8;
  int local_b0;
  uint local_ac;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  uint *local_88;
  uint *local_80;
  longlong local_78;
  undefined8 *local_70;
  longlong local_68;
  undefined8 local_60;
  uint local_58;
  
  local_a8 = CONCAT44(local_a8._4_4_,param_5);
  local_b8 = (undefined8 *)(param_1 + 0x8000);
  local_b0 = 0;
  lVar20 = *(longlong *)(param_1 + 0xf6e0);
  local_78 = 0;
  uVar15 = 0;
  local_ac = param_2;
  local_98 = param_7;
  local_90 = param_4;
  puVar8 = (undefined8 *)FUN_180101630(lVar20 + 0x12c0);
  if (*(char *)(lVar20 + 0x14c4) == '\0') {
    bVar6 = false;
    local_80 = param_3;
  }
  else {
    local_c0 = 0;
    if (*param_3 != *(uint *)(param_1 + 0x100f0)) {
      *(uint *)(param_1 + 0x100f0) = *param_3;
      puVar8 = (undefined8 *)FUN_1800067f8(param_1 + 0xf7b8,param_3);
      if (puVar8 == (undefined8 *)0x0) {
        local_a0 = FUN_180102f80(0x254);
        puVar8 = (undefined8 *)0x0;
        if (local_a0 != 0) {
          thunk_FUN_180001218(local_a0,param_3,0x254);
          uVar17 = (ulonglong)*param_3;
          uVar11 = *(uint *)(param_1 + 0xf7c8);
          uVar19 = 0;
          if (uVar11 == 0) {
LAB_180044d98:
            local_80 = (uint *)(param_1 + 0xf7c0);
            uVar12 = *(uint *)(param_1 + 0xf7cc);
            if (uVar12 == uVar11) {
              local_bc = 0x10;
              if (uVar12 != 0) {
                local_bc = uVar12 << 1;
              }
              local_88 = (uint *)thunk_FUN_180102f80((ulonglong)local_bc * 0x18 + 0x7f);
              if (local_88 != (uint *)0x0) {
                uVar16 = (longlong)local_88 + 0x7fU & 0xffffffffffffff80;
                uVar14 = 0;
                if (*(int *)(param_1 + 0xf7c8) != 0) {
                  do {
                    uVar11 = (int)uVar14 + 1;
                    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar14 * 0x18);
                    puVar2 = (undefined8 *)(uVar16 + uVar14 * 0x18);
                    uVar13 = *puVar8;
                    puVar2[1] = puVar8[1];
                    *puVar2 = uVar13;
                    puVar2[2] = puVar8[2];
                    uVar14 = (ulonglong)uVar11;
                  } while (uVar11 < *(uint *)(param_1 + 0xf7c8));
                }
                local_70 = local_b8;
                thunk_FUN_180102fc0(local_b8[0xef7]);
                *(ulonglong *)(param_1 + 0xf7c0) = uVar16;
                local_70[0xef7] = local_88;
                *(uint *)(param_1 + 0xf7cc) = local_bc;
              }
            }
            uVar14 = (ulonglong)*(uint *)(param_1 + 0xf7c8);
            if (*(uint *)(param_1 + 0xf7cc) != *(uint *)(param_1 + 0xf7c8)) {
              while ((uint)uVar19 < (uint)uVar14) {
                uVar16 = (ulonglong)((uint)uVar14 - 1);
                puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar14 * 0x18);
                puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar16 * 0x18);
                uVar13 = *puVar2;
                puVar8[1] = puVar2[1];
                *puVar8 = uVar13;
                puVar8[2] = puVar2[2];
                uVar14 = uVar16;
              }
              *(int *)(param_1 + 0xf7c8) = *(int *)(param_1 + 0xf7c8) + 1;
              *(uint *)(*(longlong *)local_80 + uVar19 * 0x18 + 8) = *param_3;
              *(ulonglong *)(*(longlong *)local_80 + uVar19 * 0x18 + 0x10) = local_a0;
              *(ulonglong *)(*(longlong *)local_80 + uVar19 * 0x18) = uVar17;
            }
          }
          else {
            uVar12 = 0;
            uVar10 = uVar11;
            do {
              uVar4 = uVar10 + uVar12 >> 1;
              uVar19 = (ulonglong)uVar4;
              uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar19 * 0x18);
              if (uVar14 <= uVar17) {
                if (uVar17 <= uVar14) break;
                uVar12 = uVar4 + 1;
                uVar19 = (ulonglong)(uVar4 + 1);
                uVar4 = uVar10;
              }
              uVar10 = uVar4;
            } while (uVar10 != uVar12);
            if (((uint)uVar19 == uVar11) ||
               (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar19 * 0x18),
               *puVar1 != uVar17)) goto LAB_180044d98;
            puVar1[2] = local_a0;
          }
          puVar8 = (undefined8 *)FUN_1800067f8(param_1 + 0xf7b8,param_3);
          if (puVar8 != (undefined8 *)0x0) goto LAB_180044f04;
        }
        uVar13 = 0;
      }
      else {
LAB_180044f04:
        uVar13 = *puVar8;
      }
      *(undefined8 *)(param_1 + 0x100f8) = uVar13;
    }
    local_88 = *(uint **)(param_1 + 0x100f8);
    local_80 = local_88;
    if (local_88 == (uint *)0x0) {
      uVar11 = 0;
      uVar17 = 0;
    }
    else {
      local_c0 = 0;
      FUN_180041720(puVar8,local_98,param_8,param_10,&local_b0,&local_c0);
      param_6 = (local_c0 - local_b0) + 1;
      local_c0 = param_3[3] * param_6;
      iVar5 = local_c0 + ((uint)param_10 * 2 + 2) * param_8;
      uVar15 = iVar5 + 0x20;
      uVar11 = iVar5 + 0x27;
      uVar17 = (ulonglong)(iVar5 + 0x27);
      local_78 = local_90 + (ulonglong)((local_b0 + param_9) * (uint)local_a8);
    }
    bVar6 = true;
    if (uVar15 < 0x3f00) {
      bVar6 = true;
      local_90 = CONCAT44(local_90._4_4_,param_3[3]);
      lVar20 = local_b8[0xedc];
      local_a0 = CONCAT44(local_a0._4_4_,(uint)(*(char *)(lVar20 + 0x14c4) == '\0'));
      local_bc = (uint)param_11;
      if (*(char *)(lVar20 + 0x14c4) == '\0') {
LAB_180045108:
        if ((int)local_a0 == 0) goto LAB_1800451a0;
      }
      else {
        if (uVar15 == 0) {
          uVar11 = 0x30;
        }
        else {
          uVar11 = (uVar11 & 0xfffffff8) + 0x38;
        }
        local_b8 = (undefined8 *)FUN_180101500(lVar20 + 0x12c0,(ulonglong)uVar11);
        pcVar7 = __imp_KERNEL32_dll_Sleep;
        if (local_b8 != (undefined8 *)0x0) {
          FUN_1800015a0(lVar20 + 0x14c0);
          local_b8[1] = (ulonglong)uVar11;
          lVar9 = 2;
          if (uVar15 != 0) {
            lVar9 = 3;
          }
          puVar3 = (uint *)(local_b8 + lVar9);
          *puVar3 = local_c0;
          *(longlong *)(puVar3 + 1) = param_1;
          puVar3[3] = local_ac;
          *(uint **)(puVar3 + 4) = local_88;
          puVar3[6] = (uint)local_90;
          puVar3[7] = param_6;
          puVar3[8] = param_8;
          *(byte *)(puVar3 + 9) = param_10;
          *(undefined1 *)(puVar3 + 10) = (undefined1)local_bc;
          puVar8 = (undefined8 *)((longlong)puVar3 + 0x33U & 0xfffffffffffffff8);
          if (uVar15 != 0) {
            local_b8[2] = puVar8;
            lVar9 = FUN_180044018(param_6,param_3[3],local_78,local_a8 & 0xffffffff,puVar8,
                                  param_3[3]);
            FUN_180041850(lVar9,local_98,lVar9 + 0xfU & 0xfffffffffffffff0,param_8,-local_b0,
                          param_10);
            puVar8 = (undefined8 *)((uVar17 & 0xfffffff8) + (longlong)puVar8);
          }
          *puVar8 = 0;
          *local_b8 = FUN_180045420;
          *(undefined8 **)(lVar20 + (ulonglong)*(uint *)(lVar20 + 0x14bc) * 0x28 + 0x1350) = puVar8;
          pcVar7 = __imp_KERNEL32_dll_SetEvent;
          if (*(char *)(lVar20 + 0x14c5) != '\0') {
            *(undefined4 *)(lVar20 + 0x12c0) = 0;
            (*pcVar7)(*(undefined8 *)(lVar20 + 0x1340));
            bVar6 = false;
          }
          goto LAB_180045108;
        }
        *(undefined4 *)(lVar20 + 0x12c0) = 0;
        (*pcVar7)(100);
        FUN_180101630(lVar20 + 0x12c0);
      }
      plVar18 = *(longlong **)(lVar20 + 0x14a0);
      puVar3 = (uint *)(plVar18 + (uVar15 != 0));
      *puVar3 = local_c0;
      *(longlong *)(puVar3 + 1) = param_1;
      puVar3[3] = local_ac;
      *(uint **)(puVar3 + 4) = local_88;
      puVar3[6] = (uint)local_90;
      puVar3[7] = param_6;
      puVar3[8] = param_8;
      *(byte *)(puVar3 + 9) = param_10;
      *(undefined1 *)(puVar3 + 10) = (undefined1)local_bc;
      if (uVar15 != 0) {
        *plVar18 = (longlong)(puVar3 + 0xb);
        lVar9 = FUN_180044018(param_6,param_3[3],local_78,local_a8 & 0xffffffff,puVar3 + 0xb,
                              param_3[3]);
        FUN_180041850(lVar9,local_98,lVar9 + 0xfU & 0xfffffffffffffff0,param_8,-local_b0,param_10);
      }
      FUN_180045420(plVar18);
LAB_1800451a0:
      if (!bVar6) {
        return;
      }
      *(undefined4 *)(lVar20 + 0x12c0) = 0;
      return;
    }
  }
  lVar20 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a8);
  local_c0 = (uint)local_a8;
  local_70 = (undefined8 *)local_98;
  local_a8 = local_98;
  local_98 = local_90;
  if ((bVar6) &&
     (uVar17 = FUN_1800f2fc8(local_b8[0xedc] + 0x17f0,uVar15,&local_68), lVar20 = local_68,
     (uVar17 & 1) != 0)) {
    local_c0 = param_3[3];
    local_98 = local_68;
    param_9 = 0;
    lVar9 = FUN_180044018(param_6,local_c0,local_78,local_a0 & 0xffffffff,local_68,local_c0);
    local_a8 = lVar9 + 0xfU & 0xfffffffffffffff0;
    FUN_180041850(lVar9,local_70,local_a8,param_8,-local_b0,param_10);
  }
  uVar15 = local_58;
  uVar13 = local_60;
  lVar9 = local_b8[0xedc];
  local_bc = 1;
  local_90 = CONCAT44(local_90._4_4_,(uint)param_11);
  local_a0 = CONCAT44(local_a0._4_4_,(uint)(*(char *)(lVar9 + 0x14c4) == '\0'));
  local_b8 = (undefined8 *)lVar9;
  if (*(char *)(lVar9 + 0x14c4) == '\0') {
LAB_180045378:
    if ((int)local_a0 == 0) goto LAB_1800453d0;
  }
  else {
    local_88 = (uint *)FUN_180101500(lVar9 + 0x12c0,0x50);
    pcVar7 = __imp_KERNEL32_dll_Sleep;
    if (local_88 != (uint *)0x0) {
      FUN_1800015a0(lVar9 + 0x14c0);
      local_88[2] = 0x50;
      local_88[3] = 0;
      *(longlong *)(local_88 + 4) = param_1;
      local_88[6] = local_ac;
      *(uint **)(local_88 + 7) = local_80;
      *(ulonglong *)(local_88 + 9) = local_98;
      local_88[0xb] = local_c0;
      local_88[0xc] = param_6;
      puVar8 = (undefined8 *)((longlong)local_88 + 0x67U & 0xfffffffffffffff8);
      *(ulonglong *)(local_88 + 0xd) = local_a8;
      local_88[0xf] = param_8;
      local_88[0x10] = param_9;
      *(byte *)(local_88 + 0x11) = param_10;
      *(byte *)(local_88 + 0x12) = param_11;
      *(longlong *)(local_88 + 0x13) = lVar20;
      *(undefined8 *)(local_88 + 0x15) = uVar13;
      local_88[0x17] = uVar15;
      *puVar8 = 0;
      *(code **)local_88 = FUN_1800454d8;
      *(undefined8 **)(lVar9 + (ulonglong)*(uint *)(lVar9 + 0x14bc) * 0x28 + 0x1350) = puVar8;
      pcVar7 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar9 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar9 + 0x12c0) = 0;
        (*pcVar7)(*(undefined8 *)(lVar9 + 0x1340));
        local_bc = 0;
      }
      goto LAB_180045378;
    }
    *(undefined4 *)(lVar9 + 0x12c0) = 0;
    (*pcVar7)(100);
    FUN_180101630(lVar9 + 0x12c0);
  }
  plVar18 = *(longlong **)((longlong)local_b8 + 0x14a0);
  *plVar18 = param_1;
  *(uint *)(plVar18 + 1) = local_ac;
  *(uint **)((longlong)plVar18 + 0xc) = local_80;
  *(ulonglong *)((longlong)plVar18 + 0x14) = local_98;
  *(uint *)((longlong)plVar18 + 0x1c) = local_c0;
  *(uint *)(plVar18 + 4) = param_6;
  *(ulonglong *)((longlong)plVar18 + 0x24) = local_a8;
  *(uint *)((longlong)plVar18 + 0x2c) = param_8;
  *(uint *)(plVar18 + 6) = param_9;
  *(byte *)((longlong)plVar18 + 0x34) = param_10;
  *(undefined1 *)(plVar18 + 7) = (undefined1)local_90;
  *(longlong *)((longlong)plVar18 + 0x3c) = lVar20;
  *(undefined8 *)((longlong)plVar18 + 0x44) = uVar13;
  *(uint *)((longlong)plVar18 + 0x4c) = uVar15;
  FUN_1800454d8();
LAB_1800453d0:
  if (local_bc != 0) {
    *(undefined4 *)((longlong)local_b8 + 0x12c0) = 0;
  }
  return;
}

