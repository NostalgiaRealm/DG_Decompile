/*
 * FUN_180159040 at 180159040
 * undefined FUN_180159040(void)
 * Address ranges: 180159040-1801590ff;1801592f0-180159857
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180159040(longlong param_1,int param_2,int *param_3,longlong param_4,undefined8 *param_5,
                  int param_6,int param_7,ulonglong param_8,int param_9,int param_10,byte param_11)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int *piVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  uint local_c0;
  undefined8 *local_b8;
  uint local_b0;
  int local_ac;
  int local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  int *local_90;
  int *local_88;
  undefined8 *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined4 local_50;
  
  local_b8 = (undefined8 *)(param_1 + 0x8000);
  lVar15 = *(longlong *)(param_1 + 0xf6e0);
  local_78 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_cc = param_6;
  local_c8 = param_7;
  local_a8 = param_2;
  local_98 = param_8;
  local_88 = param_3;
  local_80 = param_5;
  local_70 = param_4;
  puVar6 = (undefined8 *)FUN_180221850(lVar15 + 0x12c0);
  local_c0 = (uint)param_11;
  local_c4 = param_9;
  if (*(char *)(lVar15 + 0x14c4) == '\0') {
    bVar2 = false;
    local_90 = param_3;
  }
  else {
    local_d0 = 0;
    if (*param_3 != *(int *)(param_1 + 0x100f0)) {
      *(int *)(param_1 + 0x100f0) = *param_3;
      puVar6 = (undefined8 *)FUN_18010bf48(param_1 + 0xf7b8,param_3);
      if (puVar6 == (undefined8 *)0x0) {
        local_a0 = FUN_1802229a8(0x254);
        if (local_a0 != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(local_a0,param_3,0x254);
        }
        uVar10 = 0;
        puVar6 = (undefined8 *)0x0;
        local_a0 = 0;
      }
      else {
        uVar10 = *puVar6;
      }
      *(undefined8 *)(param_1 + 0x100f8) = uVar10;
    }
    piVar13 = *(int **)(param_1 + 0x100f8);
    local_90 = piVar13;
    if (piVar13 == (int *)0x0) {
      uVar9 = 0;
      uVar16 = 0;
    }
    else {
      local_d0 = 0;
      uVar9 = local_c0;
      iVar7 = local_c4;
      FUN_1801505b0(puVar6,local_98,local_c4,local_c0,&local_ac,&local_d0);
      local_c8 = (local_d0 - local_ac) + 1;
      local_d0 = local_88[3] * local_c8;
      iVar7 = local_d0 + ((uVar9 & 0xff) * 2 + 2) * iVar7;
      local_b0 = iVar7 + 0x20;
      uVar16 = (ulonglong)(iVar7 + 0x27);
      uVar9 = iVar7 + 0x27;
      local_78 = (longlong)local_80 + (ulonglong)(uint)((local_ac + param_10) * local_cc);
    }
    bVar2 = true;
    if (local_b0 < 0x3f00) {
      bVar2 = true;
      iVar7 = local_88[3];
      puVar6 = (undefined8 *)local_b8[0xedc];
      local_a0 = CONCAT44(local_a0._4_4_,(uint)(*(char *)((longlong)puVar6 + 0x14c4) == '\0'));
      if (*(char *)((longlong)puVar6 + 0x14c4) == '\0') {
LAB_180159520:
        if ((int)local_a0 != 0) goto LAB_180159528;
      }
      else {
        if (local_b0 == 0) {
          uVar9 = 0x30;
        }
        else {
          uVar9 = (uVar9 & 0xfffffff8) + 0x38;
        }
        local_b8 = (undefined8 *)FUN_1802218b0(puVar6 + 600,(ulonglong)uVar9);
        if (local_b8 != (undefined8 *)0x0) {
          FUN_1801042e0(puVar6 + 0x298);
          uVar4 = local_c0;
          local_b8[1] = (ulonglong)uVar9;
          lVar15 = 2;
          if (local_b0 != 0) {
            lVar15 = 3;
          }
          local_90 = (int *)CONCAT44(local_90._4_4_,local_c4);
          piVar1 = (int *)(local_b8 + lVar15);
          *piVar1 = local_d0;
          *(longlong *)(piVar1 + 1) = param_1;
          piVar1[3] = local_a8;
          *(int **)(piVar1 + 4) = piVar13;
          *(longlong *)(piVar1 + 6) = local_70;
          piVar1[8] = iVar7;
          piVar1[9] = local_c8;
          puVar8 = (undefined8 *)((longlong)piVar1 + 0x37U & 0xfffffffffffffff8);
          piVar1[10] = local_c4;
          *(char *)(piVar1 + 0xb) = (char)local_c0;
          local_68 = puVar8;
          if (local_b0 != 0) {
            local_b8[2] = puVar8;
            lVar15 = FUN_180152fa0(local_c8,local_88[3],local_78,local_cc,puVar8,local_88[3]);
            FUN_1801506e0(lVar15,local_98,lVar15 + 0xfU & 0xfffffffffffffff0,
                          (ulonglong)local_90 & 0xffffffff,-local_ac,uVar4);
            puVar8 = (undefined8 *)((uVar16 & 0xfffffff8) + (longlong)local_68);
          }
          DataMemoryBarrier(2,3);
          *puVar8 = 0;
          *local_b8 = FUN_180159860;
          puVar6[(ulonglong)*(uint *)((longlong)puVar6 + 0x14bc) * 5 + 0x26a] = puVar8;
          if (*(char *)((longlong)puVar6 + 0x14c5) != '\0') {
            FUN_180221bb0(puVar6 + 600);
            bVar2 = false;
            thunk_FUN_180223874(puVar6[0x268]);
          }
          goto LAB_180159520;
        }
        FUN_180221bb0(puVar6 + 600);
        thunk_FUN_1802237c0(100);
        FUN_180221850(puVar6 + 600);
LAB_180159528:
        uVar9 = local_c0;
        iVar3 = local_c4;
        plVar17 = (longlong *)puVar6[0x294];
        uVar16 = (ulonglong)(local_b0 != 0);
        uVar12 = uVar16 * 8;
        *(int *)(plVar17 + uVar16) = local_d0;
        *(longlong *)((longlong)plVar17 + uVar12 + 4) = param_1;
        *(int *)((longlong)plVar17 + uVar12 + 0xc) = local_a8;
        plVar17[uVar16 + 2] = (longlong)piVar13;
        plVar17[uVar16 + 3] = local_70;
        *(int *)(plVar17 + uVar16 + 4) = iVar7;
        *(int *)((longlong)plVar17 + uVar12 + 0x24) = local_c8;
        *(int *)(plVar17 + uVar16 + 5) = local_c4;
        *(char *)((longlong)plVar17 + uVar12 + 0x2c) = (char)local_c0;
        if (local_b0 != 0) {
          lVar15 = (uVar12 | 0x30) + (longlong)plVar17;
          *plVar17 = lVar15;
          lVar15 = FUN_180152fa0(local_c8,local_88[3],local_78,local_cc,lVar15,local_88[3]);
          FUN_1801506e0(lVar15,local_98,lVar15 + 0xfU & 0xfffffffffffffff0,iVar3,-local_ac,uVar9);
        }
        FUN_180159860(plVar17);
      }
      if (!bVar2) {
        return;
      }
      goto LAB_180159818;
    }
  }
  puVar6 = local_80;
  uVar16 = local_98;
  puVar8 = (undefined8 *)0x0;
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  local_50 = 0;
  local_a0 = CONCAT44(local_a0._4_4_,local_cc);
  local_d0 = local_cc;
  if ((bVar2) &&
     (uVar12 = FUN_180211ab0(local_b8[0xedc] + 0x17f0,local_b0,&local_60), puVar8 = local_60,
     (uVar12 & 1) != 0)) {
    param_10 = 0;
    local_d0 = local_88[3];
    lVar15 = FUN_180152fa0(local_c8,local_d0,local_78,local_a0 & 0xffffffff,local_60,local_d0);
    local_98 = lVar15 + 0xfU & 0xfffffffffffffff0;
    FUN_1801506e0(lVar15,uVar16,local_98,local_c4,-local_ac,local_c0);
    puVar6 = puVar8;
  }
  uVar5 = local_50;
  lVar15 = local_58;
  puVar14 = (undefined8 *)local_b8[0xedc];
  local_cc = 1;
  local_a0 = CONCAT44(local_a0._4_4_,(uint)(*(char *)((longlong)puVar14 + 0x14c4) == '\0'));
  local_b8 = puVar14;
  if (*(char *)((longlong)puVar14 + 0x14c4) == '\0') {
LAB_1801597a8:
    if ((int)local_a0 != 0) goto LAB_1801597b0;
  }
  else {
    local_80 = (undefined8 *)FUN_1802218b0(puVar14 + 600,0x58);
    if (local_80 != (undefined8 *)0x0) {
      FUN_1801042e0(puVar14 + 0x298);
      local_80[1] = 0x58;
      local_80[2] = param_1;
      *(int *)(local_80 + 3) = local_a8;
      *(int **)((longlong)local_80 + 0x1c) = local_90;
      *(longlong *)((longlong)local_80 + 0x24) = local_70;
      *(undefined8 **)((longlong)local_80 + 0x2c) = puVar6;
      *(int *)((longlong)local_80 + 0x34) = local_d0;
      *(int *)(local_80 + 7) = local_c8;
      *(ulonglong *)((longlong)local_80 + 0x3c) = local_98;
      *(int *)((longlong)local_80 + 0x44) = local_c4;
      *(int *)(local_80 + 9) = param_10;
      *(undefined1 *)((longlong)local_80 + 0x4c) = (undefined1)local_c0;
      local_80[10] = puVar8;
      local_80[0xb] = lVar15;
      puVar11 = (undefined8 *)((longlong)local_80 + 0x6bU & 0xfffffffffffffff8);
      *(undefined4 *)(local_80 + 0xc) = uVar5;
      DataMemoryBarrier(2,3);
      *puVar11 = 0;
      *local_80 = FUN_1801598c0;
      puVar14[(ulonglong)*(uint *)((longlong)puVar14 + 0x14bc) * 5 + 0x26a] = puVar11;
      if (*(char *)((longlong)puVar14 + 0x14c5) != '\0') {
        FUN_180221bb0(puVar14 + 600);
        local_cc = 0;
        thunk_FUN_180223874(puVar14[0x268]);
      }
      goto LAB_1801597a8;
    }
    FUN_180221bb0(puVar14 + 600);
    thunk_FUN_1802237c0(100);
    FUN_180221850(puVar14 + 600);
LAB_1801597b0:
    plVar17 = (longlong *)local_b8[0x294];
    *plVar17 = param_1;
    *(int *)(plVar17 + 1) = local_a8;
    *(int **)((longlong)plVar17 + 0xc) = local_90;
    *(longlong *)((longlong)plVar17 + 0x14) = local_70;
    *(undefined8 **)((longlong)plVar17 + 0x1c) = puVar6;
    *(int *)((longlong)plVar17 + 0x24) = local_d0;
    *(int *)(plVar17 + 5) = local_c8;
    *(ulonglong *)((longlong)plVar17 + 0x2c) = local_98;
    *(int *)((longlong)plVar17 + 0x34) = local_c4;
    *(int *)(plVar17 + 7) = param_10;
    *(undefined1 *)((longlong)plVar17 + 0x3c) = (undefined1)local_c0;
    plVar17[8] = (longlong)puVar8;
    plVar17[9] = lVar15;
    *(undefined4 *)(plVar17 + 10) = uVar5;
    FUN_1801598c0();
  }
  puVar6 = local_b8;
  if (local_cc == 0) {
    return;
  }
LAB_180159818:
  FUN_180221bb0(puVar6 + 600);
  return;
}

