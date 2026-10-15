/*
 * FUN_180153cd8 at 180153cd8
 * undefined FUN_180153cd8(void)
 * Address ranges: 180153cd8-180153d8f;180153f7c-1801544f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180153cd8(longlong param_1,uint param_2,int *param_3,undefined8 *param_4,uint param_5,
                  uint param_6,ulonglong param_7,uint param_8,int param_9,byte param_10,
                  byte param_11)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  undefined8 *local_a8;
  int local_a0;
  uint local_9c;
  ulonglong local_98;
  ulonglong local_90;
  int *local_88;
  int *local_80;
  undefined8 *local_78;
  longlong local_70;
  int *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  local_a8 = (undefined8 *)(param_1 + 0x8000);
  lVar16 = *(longlong *)(param_1 + 0xf6e0);
  local_a0 = 0;
  local_70 = 0;
  local_bc = 0;
  local_b8 = param_5;
  local_b4 = param_6;
  local_b0 = param_8;
  local_9c = param_2;
  local_90 = param_7;
  local_80 = param_3;
  local_78 = param_4;
  puVar6 = (undefined8 *)FUN_180221850(lVar16 + 0x12c0);
  local_ac = (uint)param_10;
  if (*(char *)(lVar16 + 0x14c4) == '\0') {
    bVar3 = false;
    local_88 = param_3;
  }
  else {
    local_c0 = 0;
    if (*param_3 != *(int *)(param_1 + 0x100f0)) {
      *(int *)(param_1 + 0x100f0) = *param_3;
      puVar6 = (undefined8 *)FUN_18010bf48(param_1 + 0xf7b8,param_3);
      if (puVar6 == (undefined8 *)0x0) {
        local_98 = FUN_1802229a8(0x254);
        if (local_98 != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(local_98,param_3,0x254);
        }
        uVar11 = 0;
        puVar6 = (undefined8 *)0x0;
        local_98 = 0;
      }
      else {
        uVar11 = *puVar6;
      }
      *(undefined8 *)(param_1 + 0x100f8) = uVar11;
    }
    local_88 = *(int **)(param_1 + 0x100f8);
    local_68 = local_88;
    if (local_88 == (int *)0x0) {
      uVar10 = 0;
      uVar14 = 0;
    }
    else {
      local_c0 = 0;
      uVar10 = local_ac;
      uVar8 = local_b0;
      FUN_1801505b0(puVar6,local_90,local_b0,local_ac,&local_a0,&local_c0);
      local_b4 = (local_c0 - local_a0) + 1;
      local_c0 = local_80[3] * local_b4;
      iVar2 = local_c0 + ((uVar10 & 0xff) * 2 + 2) * uVar8;
      local_bc = iVar2 + 0x20;
      uVar14 = (ulonglong)(iVar2 + 0x27);
      uVar10 = iVar2 + 0x27;
      local_70 = (longlong)local_78 + (ulonglong)((local_a0 + param_9) * local_b8);
    }
    bVar3 = true;
    if (local_bc < 0x3f00) {
      bVar3 = true;
      uVar8 = local_80[3];
      puVar6 = (undefined8 *)local_a8[0xedc];
      local_98 = CONCAT44(local_98._4_4_,(uint)(*(char *)((longlong)puVar6 + 0x14c4) == '\0'));
      if (*(char *)((longlong)puVar6 + 0x14c4) == '\0') {
LAB_1801541b8:
        if ((int)local_98 != 0) goto LAB_1801541c0;
      }
      else {
        if (local_bc == 0) {
          uVar10 = 0x30;
        }
        else {
          uVar10 = (uVar10 & 0xfffffff8) + 0x38;
        }
        local_a8 = (undefined8 *)FUN_1802218b0(puVar6 + 600,(ulonglong)uVar10);
        if (local_a8 != (undefined8 *)0x0) {
          FUN_1801042e0(puVar6 + 0x298);
          uVar4 = local_ac;
          local_a8[1] = (ulonglong)uVar10;
          lVar16 = 2;
          if (local_bc != 0) {
            lVar16 = 3;
          }
          local_88 = (int *)CONCAT44(local_88._4_4_,local_b0);
          puVar1 = (uint *)(local_a8 + lVar16);
          *puVar1 = local_c0;
          *(longlong *)(puVar1 + 1) = param_1;
          puVar1[3] = local_9c;
          *(int **)(puVar1 + 4) = local_68;
          puVar1[6] = uVar8;
          puVar1[7] = local_b4;
          puVar9 = (undefined8 *)((longlong)puVar1 + 0x33U & 0xfffffffffffffff8);
          puVar1[8] = local_b0;
          *(char *)(puVar1 + 9) = (char)local_ac;
          *(byte *)(puVar1 + 10) = param_11;
          local_60 = puVar9;
          if (local_bc != 0) {
            local_a8[2] = puVar9;
            lVar16 = FUN_180152fa0(local_b4,local_80[3],local_70,local_b8,puVar9,local_80[3]);
            FUN_1801506e0(lVar16,local_90,lVar16 + 0xfU & 0xfffffffffffffff0,
                          (ulonglong)local_88 & 0xffffffff,-local_a0,uVar4);
            puVar9 = (undefined8 *)((uVar14 & 0xfffffff8) + (longlong)local_60);
          }
          DataMemoryBarrier(2,3);
          *puVar9 = 0;
          *local_a8 = FUN_1801544f8;
          puVar6[(ulonglong)*(uint *)((longlong)puVar6 + 0x14bc) * 5 + 0x26a] = puVar9;
          if (*(char *)((longlong)puVar6 + 0x14c5) != '\0') {
            FUN_180221bb0(puVar6 + 600);
            bVar3 = false;
            thunk_FUN_180223874(puVar6[0x268]);
          }
          goto LAB_1801541b8;
        }
        FUN_180221bb0(puVar6 + 600);
        thunk_FUN_1802237c0(100);
        FUN_180221850(puVar6 + 600);
LAB_1801541c0:
        uVar4 = local_ac;
        uVar10 = local_b0;
        plVar15 = (longlong *)puVar6[0x294];
        puVar1 = (uint *)(plVar15 + (local_bc != 0));
        *puVar1 = local_c0;
        *(longlong *)(puVar1 + 1) = param_1;
        puVar1[3] = local_9c;
        *(int **)(puVar1 + 4) = local_68;
        puVar1[6] = uVar8;
        puVar1[7] = local_b4;
        puVar1[8] = local_b0;
        *(char *)(puVar1 + 9) = (char)local_ac;
        *(byte *)(puVar1 + 10) = param_11;
        if (local_bc != 0) {
          *plVar15 = (longlong)(puVar1 + 0xb);
          lVar16 = FUN_180152fa0(local_b4,local_80[3],local_70,local_b8,puVar1 + 0xb,local_80[3]);
          FUN_1801506e0(lVar16,local_90,lVar16 + 0xfU & 0xfffffffffffffff0,uVar10,-local_a0,uVar4);
        }
        FUN_1801544f8(plVar15);
      }
      if (!bVar3) {
        return;
      }
      goto LAB_1801544b4;
    }
  }
  puVar6 = local_78;
  uVar14 = local_90;
  puVar9 = (undefined8 *)0x0;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_98 = CONCAT44(local_98._4_4_,local_b8);
  local_c0 = local_b8;
  if ((bVar3) &&
     (uVar7 = FUN_180211ab0(local_a8[0xedc] + 0x17f0,local_bc,&local_58), puVar9 = local_58,
     (uVar7 & 1) != 0)) {
    param_9 = 0;
    local_c0 = local_80[3];
    lVar16 = FUN_180152fa0(local_b4,local_c0,local_70,local_98 & 0xffffffff,local_58,local_c0);
    local_90 = lVar16 + 0xfU & 0xfffffffffffffff0;
    FUN_1801506e0(lVar16,uVar14,local_90,local_b0,-local_a0,local_ac);
    puVar6 = puVar9;
  }
  uVar5 = local_48;
  uVar11 = local_50;
  puVar13 = (undefined8 *)local_a8[0xedc];
  local_bc = 1;
  local_98 = CONCAT44(local_98._4_4_,(uint)(*(char *)((longlong)puVar13 + 0x14c4) == '\0'));
  local_b8 = (uint)param_11;
  local_a8 = puVar13;
  if (*(char *)((longlong)puVar13 + 0x14c4) == '\0') {
LAB_180154444:
    if ((int)local_98 != 0) goto LAB_18015444c;
  }
  else {
    local_78 = (undefined8 *)FUN_1802218b0(puVar13 + 600,0x50);
    if (local_78 != (undefined8 *)0x0) {
      FUN_1801042e0(puVar13 + 0x298);
      local_78[1] = 0x50;
      local_78[2] = param_1;
      *(uint *)(local_78 + 3) = local_9c;
      *(int **)((longlong)local_78 + 0x1c) = local_88;
      *(undefined8 **)((longlong)local_78 + 0x24) = puVar6;
      *(uint *)((longlong)local_78 + 0x2c) = local_c0;
      *(uint *)(local_78 + 6) = local_b4;
      *(ulonglong *)((longlong)local_78 + 0x34) = local_90;
      *(uint *)((longlong)local_78 + 0x3c) = local_b0;
      *(int *)(local_78 + 8) = param_9;
      *(undefined1 *)((longlong)local_78 + 0x44) = (undefined1)local_ac;
      *(undefined1 *)(local_78 + 9) = (undefined1)local_b8;
      *(undefined8 **)((longlong)local_78 + 0x4c) = puVar9;
      *(undefined8 *)((longlong)local_78 + 0x54) = uVar11;
      puVar12 = (undefined8 *)((longlong)local_78 + 0x67U & 0xfffffffffffffff8);
      *(undefined4 *)((longlong)local_78 + 0x5c) = uVar5;
      DataMemoryBarrier(2,3);
      *puVar12 = 0;
      *local_78 = FUN_1801545b8;
      puVar13[(ulonglong)*(uint *)((longlong)puVar13 + 0x14bc) * 5 + 0x26a] = puVar12;
      if (*(char *)((longlong)puVar13 + 0x14c5) != '\0') {
        FUN_180221bb0(puVar13 + 600);
        local_bc = 0;
        thunk_FUN_180223874(puVar13[0x268]);
      }
      goto LAB_180154444;
    }
    FUN_180221bb0(puVar13 + 600);
    thunk_FUN_1802237c0(100);
    FUN_180221850(puVar13 + 600);
LAB_18015444c:
    plVar15 = (longlong *)local_a8[0x294];
    *plVar15 = param_1;
    *(uint *)(plVar15 + 1) = local_9c;
    *(int **)((longlong)plVar15 + 0xc) = local_88;
    *(undefined8 **)((longlong)plVar15 + 0x14) = puVar6;
    *(uint *)((longlong)plVar15 + 0x1c) = local_c0;
    *(uint *)(plVar15 + 4) = local_b4;
    *(ulonglong *)((longlong)plVar15 + 0x24) = local_90;
    *(uint *)((longlong)plVar15 + 0x2c) = local_b0;
    *(int *)(plVar15 + 6) = param_9;
    *(undefined1 *)((longlong)plVar15 + 0x34) = (undefined1)local_ac;
    *(undefined1 *)(plVar15 + 7) = (undefined1)local_b8;
    *(undefined8 **)((longlong)plVar15 + 0x3c) = puVar9;
    *(undefined8 *)((longlong)plVar15 + 0x44) = uVar11;
    *(undefined4 *)((longlong)plVar15 + 0x4c) = uVar5;
    FUN_1801545b8();
  }
  puVar6 = local_a8;
  if (local_bc == 0) {
    return;
  }
LAB_1801544b4:
  FUN_180221bb0(puVar6 + 600);
  return;
}

