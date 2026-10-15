/*
 * FUN_180049990 at 180049990
 * undefined FUN_180049990(void)
 * Address ranges: 180049990-18004a11b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049990(longlong param_1,int param_2,uint *param_3,longlong param_4,undefined8 *param_5,
                  uint param_6,int param_7,ulonglong param_8,uint param_9,int param_10,byte param_11
                  )

{
  ulonglong *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint *puVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint local_c0;
  uint local_bc;
  int local_b8;
  uint local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  uint local_a4;
  ulonglong local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined4 local_58;
  
  local_98 = (undefined8 *)(param_1 + 0x8000);
  local_ac = 0;
  lVar19 = *(longlong *)(param_1 + 0xf6e0);
  local_78 = 0;
  local_c0 = 0;
  local_bc = param_6;
  local_b8 = param_7;
  local_a8 = param_2;
  local_90 = param_5;
  local_80 = param_8;
  local_70 = param_4;
  puVar8 = (undefined8 *)FUN_180101630(lVar19 + 0x12c0);
  local_b0 = (uint)param_11;
  local_b4 = param_9;
  if (*(char *)(lVar19 + 0x14c4) == '\0') {
    bVar5 = false;
    puVar21 = param_3;
  }
  else {
    iVar22 = 0;
    if (*param_3 != *(uint *)(param_1 + 0x100f0)) {
      *(uint *)(param_1 + 0x100f0) = *param_3;
      puVar8 = (undefined8 *)FUN_1800067f8(param_1 + 0xf7b8,param_3);
      if (puVar8 == (undefined8 *)0x0) {
        uVar9 = FUN_180102f80(0x254);
        puVar8 = (undefined8 *)0x0;
        if (uVar9 != 0) {
          thunk_FUN_180001218(uVar9,param_3,0x254);
          uVar23 = (ulonglong)*param_3;
          uVar13 = *(uint *)(param_1 + 0xf7c8);
          uVar20 = 0;
          if (uVar13 == 0) {
LAB_180049ad4:
            plVar18 = (longlong *)(param_1 + 0xf7c0);
            uVar14 = *(uint *)(param_1 + 0xf7cc);
            if (uVar14 == uVar13) {
              local_a4 = 0x10;
              if (uVar14 != 0) {
                local_a4 = uVar14 << 1;
              }
              local_a0 = thunk_FUN_180102f80((ulonglong)local_a4 * 0x18 + 0x7f);
              if (local_a0 != 0) {
                uVar24 = local_a0 + 0x7f & 0xffffffffffffff80;
                uVar17 = 0;
                if (*(int *)(param_1 + 0xf7c8) != 0) {
                  do {
                    uVar13 = (int)uVar17 + 1;
                    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar17 * 0x18);
                    puVar11 = (undefined8 *)(uVar24 + uVar17 * 0x18);
                    uVar15 = *puVar8;
                    puVar11[1] = puVar8[1];
                    *puVar11 = uVar15;
                    puVar11[2] = puVar8[2];
                    uVar17 = (ulonglong)uVar13;
                  } while (uVar13 < *(uint *)(param_1 + 0xf7c8));
                }
                local_88 = local_98;
                thunk_FUN_180102fc0(local_98[0xef7]);
                *(ulonglong *)(param_1 + 0xf7c0) = uVar24;
                local_88[0xef7] = local_a0;
                *(uint *)(param_1 + 0xf7cc) = local_a4;
              }
            }
            uVar17 = (ulonglong)*(uint *)(param_1 + 0xf7c8);
            if (*(uint *)(param_1 + 0xf7cc) != *(uint *)(param_1 + 0xf7c8)) {
              while ((uint)uVar20 < (uint)uVar17) {
                uVar24 = (ulonglong)((uint)uVar17 - 1);
                puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar17 * 0x18);
                puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar24 * 0x18);
                uVar15 = *puVar11;
                puVar8[1] = puVar11[1];
                *puVar8 = uVar15;
                puVar8[2] = puVar11[2];
                uVar17 = uVar24;
              }
              *(int *)(param_1 + 0xf7c8) = *(int *)(param_1 + 0xf7c8) + 1;
              *(uint *)(*plVar18 + uVar20 * 0x18 + 8) = *param_3;
              *(ulonglong *)(*plVar18 + uVar20 * 0x18 + 0x10) = uVar9;
              *(ulonglong *)(*plVar18 + uVar20 * 0x18) = uVar23;
            }
          }
          else {
            uVar14 = 0;
            uVar12 = uVar13;
            do {
              uVar3 = uVar12 + uVar14 >> 1;
              uVar20 = (ulonglong)uVar3;
              uVar17 = *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar20 * 0x18);
              if (uVar17 <= uVar23) {
                if (uVar23 <= uVar17) break;
                uVar14 = uVar3 + 1;
                uVar20 = (ulonglong)(uVar3 + 1);
                uVar3 = uVar12;
              }
              uVar12 = uVar3;
            } while (uVar12 != uVar14);
            if (((uint)uVar20 == uVar13) ||
               (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar20 * 0x18),
               *puVar1 != uVar23)) goto LAB_180049ad4;
            puVar1[2] = uVar9;
          }
          puVar8 = (undefined8 *)FUN_1800067f8(param_1 + 0xf7b8,param_3);
          if (puVar8 != (undefined8 *)0x0) goto LAB_180049c28;
        }
        uVar15 = 0;
      }
      else {
LAB_180049c28:
        uVar15 = *puVar8;
      }
      *(undefined8 *)(param_1 + 0x100f8) = uVar15;
    }
    puVar21 = *(uint **)(param_1 + 0x100f8);
    if (puVar21 == (uint *)0x0) {
      uVar13 = 0;
      uVar9 = 0;
    }
    else {
      local_c0 = 0;
      uVar13 = local_b0;
      uVar14 = local_b4;
      FUN_180041720(puVar8,local_80,local_b4,local_b0,&local_ac,&local_c0);
      local_b8 = (local_c0 - local_ac) + 1;
      iVar22 = param_3[3] * local_b8;
      iVar4 = iVar22 + ((uVar13 & 0xff) * 2 + 2) * uVar14;
      local_c0 = iVar4 + 0x20;
      uVar9 = (ulonglong)(iVar4 + 0x27);
      uVar13 = iVar4 + 0x27;
      local_78 = (longlong)local_90 + (ulonglong)((local_ac + param_10) * local_bc);
    }
    bVar5 = true;
    if (local_c0 < 0x3f00) {
      bVar5 = true;
      uVar14 = param_3[3];
      lVar19 = local_98[0xedc];
      local_a0 = CONCAT44(local_a0._4_4_,(uint)(*(char *)(lVar19 + 0x14c4) == '\0'));
      if (*(char *)(lVar19 + 0x14c4) == '\0') {
LAB_180049e18:
        if ((int)local_a0 == 0) goto LAB_180049eb0;
      }
      else {
        if (local_c0 == 0) {
          uVar13 = 0x30;
        }
        else {
          uVar13 = (uVar13 & 0xfffffff8) + 0x38;
        }
        puVar8 = (undefined8 *)FUN_180101500(lVar19 + 0x12c0,(ulonglong)uVar13);
        pcVar6 = __imp_KERNEL32_dll_Sleep;
        if (puVar8 != (undefined8 *)0x0) {
          FUN_1800015a0(lVar19 + 0x14c0);
          uVar12 = local_b0;
          puVar8[1] = (ulonglong)uVar13;
          lVar10 = 2;
          if (local_c0 != 0) {
            lVar10 = 3;
          }
          local_a4 = local_b4;
          piVar2 = (int *)(puVar8 + lVar10);
          *piVar2 = iVar22;
          *(longlong *)(piVar2 + 1) = param_1;
          piVar2[3] = local_a8;
          *(uint **)(piVar2 + 4) = puVar21;
          *(longlong *)(piVar2 + 6) = local_70;
          piVar2[8] = uVar14;
          piVar2[9] = local_b8;
          puVar11 = (undefined8 *)((longlong)piVar2 + 0x37U & 0xfffffffffffffff8);
          piVar2[10] = local_b4;
          *(char *)(piVar2 + 0xb) = (char)local_b0;
          local_88 = puVar11;
          if (local_c0 != 0) {
            puVar8[2] = puVar11;
            lVar10 = FUN_180044018(local_b8,param_3[3],local_78,local_bc,puVar11,param_3[3]);
            FUN_180041850(lVar10,local_80,lVar10 + 0xfU & 0xfffffffffffffff0,local_a4,-local_ac,
                          uVar12);
            puVar11 = (undefined8 *)((uVar9 & 0xfffffff8) + (longlong)local_88);
          }
          *puVar11 = 0;
          *puVar8 = FUN_18004a120;
          *(undefined8 **)(lVar19 + (ulonglong)*(uint *)(lVar19 + 0x14bc) * 0x28 + 0x1350) = puVar11
          ;
          pcVar6 = __imp_KERNEL32_dll_SetEvent;
          if (*(char *)(lVar19 + 0x14c5) != '\0') {
            *(undefined4 *)(lVar19 + 0x12c0) = 0;
            (*pcVar6)(*(undefined8 *)(lVar19 + 0x1340));
            bVar5 = false;
          }
          goto LAB_180049e18;
        }
        *(undefined4 *)(lVar19 + 0x12c0) = 0;
        (*pcVar6)(100);
        FUN_180101630(lVar19 + 0x12c0);
      }
      uVar12 = local_b0;
      uVar13 = local_b4;
      plVar18 = *(longlong **)(lVar19 + 0x14a0);
      uVar9 = (ulonglong)(local_c0 != 0);
      uVar20 = uVar9 * 8;
      *(int *)(plVar18 + uVar9) = iVar22;
      *(longlong *)((longlong)plVar18 + uVar20 + 4) = param_1;
      *(int *)((longlong)plVar18 + uVar20 + 0xc) = local_a8;
      plVar18[uVar9 + 2] = (longlong)puVar21;
      plVar18[uVar9 + 3] = local_70;
      *(uint *)(plVar18 + uVar9 + 4) = uVar14;
      *(int *)((longlong)plVar18 + uVar20 + 0x24) = local_b8;
      *(uint *)(plVar18 + uVar9 + 5) = local_b4;
      *(char *)((longlong)plVar18 + uVar20 + 0x2c) = (char)local_b0;
      if (local_c0 != 0) {
        lVar10 = (uVar20 | 0x30) + (longlong)plVar18;
        *plVar18 = lVar10;
        lVar10 = FUN_180044018(local_b8,param_3[3],local_78,local_bc,lVar10,param_3[3]);
        FUN_180041850(lVar10,local_80,lVar10 + 0xfU & 0xfffffffffffffff0,uVar13,-local_ac,uVar12);
      }
      FUN_18004a120(plVar18);
LAB_180049eb0:
      if (!bVar5) {
        return;
      }
      *(undefined4 *)(lVar19 + 0x12c0) = 0;
      return;
    }
  }
  uVar9 = local_80;
  puVar8 = local_90;
  uVar13 = local_bc;
  puVar11 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_a0 = CONCAT44(local_a0._4_4_,local_bc);
  local_88 = (undefined8 *)local_80;
  if ((bVar5) &&
     (uVar20 = FUN_1800f2fc8(local_98[0xedc] + 0x17f0,local_c0,&local_68), puVar11 = local_68,
     (uVar20 & 1) != 0)) {
    uVar13 = param_3[3];
    param_10 = 0;
    lVar19 = FUN_180044018(local_b8,uVar13,local_78,local_a0 & 0xffffffff,local_68,uVar13);
    uVar9 = lVar19 + 0xfU & 0xfffffffffffffff0;
    FUN_180041850(lVar19,local_88,uVar9,local_b4,-local_ac,local_b0);
    puVar8 = puVar11;
  }
  uVar7 = local_58;
  lVar19 = local_60;
  lVar10 = local_98[0xedc];
  local_bc = 1;
  local_a0 = CONCAT44(local_a0._4_4_,(uint)(*(char *)(lVar10 + 0x14c4) == '\0'));
  local_98 = (undefined8 *)lVar10;
  if (*(char *)(lVar10 + 0x14c4) == '\0') {
LAB_18004a078:
    if ((int)local_a0 == 0) goto LAB_18004a0cc;
  }
  else {
    local_90 = (undefined8 *)FUN_180101500(lVar10 + 0x12c0,0x58);
    pcVar6 = __imp_KERNEL32_dll_Sleep;
    if (local_90 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar10 + 0x14c0);
      local_90[1] = 0x58;
      local_90[2] = param_1;
      *(int *)(local_90 + 3) = local_a8;
      *(uint **)((longlong)local_90 + 0x1c) = puVar21;
      *(longlong *)((longlong)local_90 + 0x24) = local_70;
      *(undefined8 **)((longlong)local_90 + 0x2c) = puVar8;
      *(uint *)((longlong)local_90 + 0x34) = uVar13;
      *(int *)(local_90 + 7) = local_b8;
      *(ulonglong *)((longlong)local_90 + 0x3c) = uVar9;
      *(uint *)((longlong)local_90 + 0x44) = local_b4;
      *(int *)(local_90 + 9) = param_10;
      *(undefined1 *)((longlong)local_90 + 0x4c) = (undefined1)local_b0;
      puVar16 = (undefined8 *)((longlong)local_90 + 0x6bU & 0xfffffffffffffff8);
      local_90[10] = puVar11;
      local_90[0xb] = lVar19;
      *(undefined4 *)(local_90 + 0xc) = uVar7;
      *puVar16 = 0;
      *local_90 = FUN_18004a178;
      *(undefined8 **)(lVar10 + (ulonglong)*(uint *)(lVar10 + 0x14bc) * 0x28 + 0x1350) = puVar16;
      pcVar6 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar10 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar10 + 0x12c0) = 0;
        (*pcVar6)(*(undefined8 *)(lVar10 + 0x1340));
        local_bc = 0;
      }
      goto LAB_18004a078;
    }
    *(undefined4 *)(lVar10 + 0x12c0) = 0;
    (*pcVar6)(100);
    FUN_180101630(lVar10 + 0x12c0);
  }
  plVar18 = *(longlong **)((longlong)local_98 + 0x14a0);
  *plVar18 = param_1;
  *(int *)(plVar18 + 1) = local_a8;
  *(uint **)((longlong)plVar18 + 0xc) = puVar21;
  *(longlong *)((longlong)plVar18 + 0x14) = local_70;
  *(undefined8 **)((longlong)plVar18 + 0x1c) = puVar8;
  *(uint *)((longlong)plVar18 + 0x24) = uVar13;
  *(int *)(plVar18 + 5) = local_b8;
  *(ulonglong *)((longlong)plVar18 + 0x2c) = uVar9;
  *(uint *)((longlong)plVar18 + 0x34) = local_b4;
  *(int *)(plVar18 + 7) = param_10;
  *(undefined1 *)((longlong)plVar18 + 0x3c) = (undefined1)local_b0;
  plVar18[8] = (longlong)puVar11;
  plVar18[9] = lVar19;
  *(undefined4 *)(plVar18 + 10) = uVar7;
  FUN_18004a178();
LAB_18004a0cc:
  if (local_bc != 0) {
    *(undefined4 *)((longlong)local_98 + 0x12c0) = 0;
  }
  return;
}

