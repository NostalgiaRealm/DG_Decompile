/*
 * FUN_18015b4f8 at 18015b4f8
 * undefined FUN_18015b4f8(void)
 * Address ranges: 18015b4f8-18015b5df;18015b5f8-18015b74b;18015b90c-18015b9f7;18015ba50-18015bc97;18015be98-18015bf1b;18015bf24-18015c0c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18015b4f8(longlong param_1,int param_2,uint *param_3,undefined8 param_4,longlong param_5,
                  undefined4 param_6,int param_7,int param_8,byte param_9,undefined1 param_10)

{
  longlong lVar1;
  ulonglong *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint *puVar20;
  undefined4 uVar21;
  int local_d0;
  longlong local_b0;
  uint *local_a8;
  longlong local_98;
  undefined8 local_90;
  ulonglong local_88;
  uint local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  
  local_70 = param_1 + 0x8000;
  local_d0 = param_7;
  local_a8 = param_3;
  local_98 = param_5;
  local_90 = param_4;
  if (*(char *)(*(longlong *)(param_1 + 0xf6e8) + 0x1b) == '\0') {
    if (param_2 != 6) {
      lVar19 = *(longlong *)(param_1 + 0x10060);
      if (*(int *)(lVar19 + 0x30) == 1) {
        uVar15 = *(uint *)(lVar19 + 0x2c);
        uVar13 = 1;
        if (*(char *)(lVar19 + 0x5c) != '\0') {
          uVar13 = 2;
        }
        uVar3 = param_8 << (ulonglong)uVar13;
        if (uVar3 <= uVar15) {
          uVar14 = *(int *)(lVar19 + 0x58) + uVar3;
          if (uVar15 < uVar14) {
            *(undefined4 *)(lVar19 + 0x58) = 0;
          }
          local_b0 = 0;
          iVar7 = FUN_180144290(lVar19 + 8,uVar15 < uVar14,1,&local_b0);
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_180104c48(local_b0 + (ulonglong)*(uint *)(lVar19 + 0x58),
                                local_98 + (ulonglong)(uint)(param_7 << (ulonglong)uVar13),uVar3);
          }
        }
        local_d0 = -1;
      }
      goto LAB_18015b5fc;
    }
    uVar11 = 0;
  }
  else {
LAB_18015b5fc:
    uVar11 = 1;
  }
  puVar5 = local_a8;
  FUN_1801583c8(param_1,local_a8,uVar11);
  puVar20 = local_a8;
  iVar7 = (uint)param_9 * 2 + 2;
  local_80 = iVar7 * param_8;
  if (((param_2 == 6) && (*(char *)(*(longlong *)(param_1 + 0xf6e8) + 0x1b) == '\0')) &&
     (lVar19 = *(longlong *)(param_1 + 0xf6e0), local_80 <= *(int *)(lVar19 + 0x14b0) - 0x400U)) {
    FUN_180221850(lVar19 + 0x12c0);
    if (*(char *)(lVar19 + 0x14c4) != '\0') {
      if (*puVar5 != *(uint *)(param_1 + 0x100f0)) {
        *(uint *)(param_1 + 0x100f0) = *puVar5;
        uVar13 = *(uint *)(param_1 + 0xf7c8);
        if (uVar13 == 0) {
LAB_18015b728:
          local_b0 = FUN_1802229a8(0x254);
          if (local_b0 != 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_180104c48(local_b0,local_a8,0x254);
          }
          uVar12 = 0;
          local_b0 = 0;
        }
        else {
          uVar3 = *puVar5;
          uVar15 = 0;
          uVar14 = uVar13;
          do {
            uVar4 = uVar14 + uVar15 >> 1;
            uVar18 = (ulonglong)uVar4;
            uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar18 * 0x18);
            if (uVar12 <= uVar3) {
              if (uVar3 <= uVar12) break;
              uVar15 = uVar4 + 1;
              uVar18 = (ulonglong)(uVar4 + 1);
              uVar4 = uVar14;
            }
            uVar14 = uVar4;
          } while (uVar14 != uVar15);
          if ((((uint)uVar18 == uVar13) ||
              (puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar18 * 0x18),
              *puVar2 != (ulonglong)uVar3)) || (puVar2 = puVar2 + 2, puVar2 == (ulonglong *)0x0))
          goto LAB_18015b728;
          uVar12 = *puVar2;
        }
        *(ulonglong *)(param_1 + 0x100f8) = uVar12;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x100f8);
      bVar6 = *(int *)(param_1 + 0x10100) != 0;
      lVar19 = *(longlong *)(param_1 + 0xf6e0);
      lVar1 = local_98 + (ulonglong)(uint)(iVar7 * local_d0);
      if (*(char *)(lVar19 + 0x14c4) != '\0') {
        local_68 = local_80;
        local_88 = CONCAT44(local_88._4_4_,(local_80 + 7 & 0xfffffff8) + 0x38);
        lVar8 = FUN_1802218b0(lVar19 + 0x12c0);
        if (lVar8 != 0) {
          FUN_1801042e0(lVar19 + 0x14c0);
          *(ulonglong *)(lVar8 + 8) = local_88 & 0xffffffff;
          *(longlong *)(lVar8 + 0x18) = param_1;
          *(undefined4 *)(lVar8 + 0x20) = 6;
          *(undefined8 *)(lVar8 + 0x24) = uVar11;
          *(undefined8 *)(lVar8 + 0x2c) = local_90;
          *(undefined4 *)(lVar8 + 0x34) = param_6;
          *(int *)(lVar8 + 0x38) = param_8;
          *(byte *)(lVar8 + 0x3c) = param_9;
          *(undefined1 *)(lVar8 + 0x40) = param_10;
          uVar12 = lVar8 + 0x4fU & 0xfffffffffffffff8;
          *(bool *)(lVar8 + 0x44) = bVar6;
          *(ulonglong *)(lVar8 + 0x10) = uVar12;
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(uVar12,lVar1,local_68);
        }
        FUN_180221bb0(lVar19 + 0x12c0);
        thunk_FUN_1802237c0(100);
        FUN_180221850(lVar19 + 0x12c0);
      }
      plVar9 = *(longlong **)(lVar19 + 0x14a0);
      *plVar9 = lVar1;
      plVar9[1] = param_1;
      *(undefined4 *)(plVar9 + 2) = 6;
      *(undefined8 *)((longlong)plVar9 + 0x14) = uVar11;
      *(undefined8 *)((longlong)plVar9 + 0x1c) = local_90;
      *(undefined4 *)((longlong)plVar9 + 0x24) = param_6;
      *(int *)(plVar9 + 5) = param_8;
      *(byte *)((longlong)plVar9 + 0x2c) = param_9;
      *(undefined1 *)(plVar9 + 6) = param_10;
      *(bool *)((longlong)plVar9 + 0x34) = bVar6;
      FUN_18015c0d0();
      lVar19 = lVar19 + 0x12c0;
      goto LAB_18015c0ac;
    }
    lVar19 = *(longlong *)(param_1 + 0xf6e0);
    bVar6 = *(int *)(param_1 + 0x10100) != 0;
    if (*(char *)(lVar19 + 0x14c4) == '\0') {
LAB_18015bba4:
      plVar9 = *(longlong **)(lVar19 + 0x14a0);
      *plVar9 = param_1;
      *(undefined4 *)(plVar9 + 1) = 6;
      *(uint **)((longlong)plVar9 + 0xc) = local_a8;
      *(undefined8 *)((longlong)plVar9 + 0x14) = local_90;
      *(longlong *)((longlong)plVar9 + 0x1c) = local_98;
      *(undefined4 *)((longlong)plVar9 + 0x24) = param_6;
      *(int *)(plVar9 + 5) = local_d0;
      *(int *)((longlong)plVar9 + 0x2c) = param_8;
      *(byte *)(plVar9 + 6) = param_9;
      *(undefined1 *)((longlong)plVar9 + 0x34) = param_10;
      *(bool *)(plVar9 + 7) = bVar6;
      FUN_18015c120();
    }
    else {
      puVar10 = (undefined8 *)FUN_1802218b0(lVar19 + 0x12c0,0x40);
      if (puVar10 == (undefined8 *)0x0) {
        FUN_180221bb0(lVar19 + 0x12c0);
        thunk_FUN_1802237c0(100);
        FUN_180221850(lVar19 + 0x12c0);
        goto LAB_18015bba4;
      }
      FUN_1801042e0(lVar19 + 0x14c0);
      puVar10[1] = 0x40;
      puVar10[2] = param_1;
      *(undefined4 *)(puVar10 + 3) = 6;
      *(uint **)((longlong)puVar10 + 0x1c) = puVar5;
      *(undefined8 *)((longlong)puVar10 + 0x24) = local_90;
      *(longlong *)((longlong)puVar10 + 0x2c) = local_98;
      *(undefined4 *)((longlong)puVar10 + 0x34) = param_6;
      *(int *)(puVar10 + 7) = local_d0;
      *(int *)((longlong)puVar10 + 0x3c) = param_8;
      *(byte *)(puVar10 + 8) = param_9;
      *(undefined1 *)((longlong)puVar10 + 0x44) = param_10;
      puVar16 = (undefined8 *)((longlong)puVar10 + 0x53U & 0xfffffffffffffff8);
      *(bool *)(puVar10 + 9) = bVar6;
      DataMemoryBarrier(2,3);
      *puVar16 = 0;
      *puVar10 = FUN_18015c120;
      *(undefined8 **)(lVar19 + (ulonglong)*(uint *)(lVar19 + 0x14bc) * 0x28 + 0x1350) = puVar16;
      if (*(char *)(lVar19 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar19 + 0x12c0);
        uVar11 = *(undefined8 *)(lVar19 + 0x1340);
        goto LAB_18015c024;
      }
    }
    lVar19 = lVar19 + 0x12c0;
    goto LAB_18015c0ac;
  }
  uVar11 = 0;
  local_78 = 0;
  local_60 = 0;
  local_58 = 0;
  uVar21 = 0;
  local_50 = 0;
  local_b0 = local_98;
  lVar19 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180221850(lVar19 + 0x12c0);
  if (*(char *)(lVar19 + 0x14c4) != '\0') {
    if (*puVar20 != *(uint *)(param_1 + 0x100f0)) {
      *(uint *)(param_1 + 0x100f0) = *puVar20;
      puVar10 = (undefined8 *)FUN_18010bf48(param_1 + 0xf7b8,puVar20);
      if (puVar10 == (undefined8 *)0x0) {
        local_88 = FUN_1802229a8(0x254);
        if (local_88 != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(local_88,puVar20,0x254);
        }
        uVar17 = 0;
        local_88 = 0;
      }
      else {
        uVar17 = *puVar10;
      }
      *(undefined8 *)(param_1 + 0x100f8) = uVar17;
    }
    uVar13 = local_80;
    puVar20 = *(uint **)(param_1 + 0x100f8);
    if ((puVar20 != (uint *)0x0 && param_2 == 6) &&
       (*(char *)(*(longlong *)(param_1 + 0xf6e8) + 0x1b) == '\0')) {
      uVar12 = FUN_180211ab0(*(longlong *)(param_1 + 0xf6e0) + 0x17f0,local_80,&local_60);
      if ((uVar12 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(local_60,local_98 + (ulonglong)(uint)(iVar7 * local_d0),uVar13);
      }
      local_78 = local_58;
      uVar11 = local_60;
      uVar21 = local_50;
    }
  }
  bVar6 = *(int *)(param_1 + 0x10100) != 0;
  lVar19 = *(longlong *)(param_1 + 0xf6e0);
  if (*(char *)(lVar19 + 0x14c4) == '\0') {
LAB_18015c04c:
    plVar9 = *(longlong **)(lVar19 + 0x14a0);
    *plVar9 = param_1;
    *(int *)(plVar9 + 1) = param_2;
    *(uint **)((longlong)plVar9 + 0xc) = puVar20;
    *(undefined8 *)((longlong)plVar9 + 0x14) = local_90;
    *(longlong *)((longlong)plVar9 + 0x1c) = local_b0;
    *(undefined4 *)((longlong)plVar9 + 0x24) = param_6;
    *(int *)(plVar9 + 5) = local_d0;
    *(int *)((longlong)plVar9 + 0x2c) = param_8;
    *(byte *)(plVar9 + 6) = param_9;
    *(undefined1 *)((longlong)plVar9 + 0x34) = param_10;
    *(bool *)(plVar9 + 7) = bVar6;
    *(undefined8 *)((longlong)plVar9 + 0x3c) = uVar11;
    *(undefined8 *)((longlong)plVar9 + 0x44) = local_78;
    *(undefined4 *)((longlong)plVar9 + 0x4c) = uVar21;
    FUN_18015c178();
  }
  else {
    puVar10 = (undefined8 *)FUN_1802218b0(lVar19 + 0x12c0,0x50);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_180221bb0(lVar19 + 0x12c0);
      thunk_FUN_1802237c0(100);
      FUN_180221850(lVar19 + 0x12c0);
      goto LAB_18015c04c;
    }
    FUN_1801042e0(lVar19 + 0x14c0);
    puVar10[1] = 0x50;
    puVar10[2] = param_1;
    *(int *)(puVar10 + 3) = param_2;
    *(uint **)((longlong)puVar10 + 0x1c) = puVar20;
    *(undefined8 *)((longlong)puVar10 + 0x24) = local_90;
    *(longlong *)((longlong)puVar10 + 0x2c) = local_b0;
    *(undefined4 *)((longlong)puVar10 + 0x34) = param_6;
    *(int *)(puVar10 + 7) = local_d0;
    *(int *)((longlong)puVar10 + 0x3c) = param_8;
    *(byte *)(puVar10 + 8) = param_9;
    *(undefined1 *)((longlong)puVar10 + 0x44) = param_10;
    *(bool *)(puVar10 + 9) = bVar6;
    *(undefined8 *)((longlong)puVar10 + 0x4c) = uVar11;
    *(undefined8 *)((longlong)puVar10 + 0x54) = local_78;
    puVar16 = (undefined8 *)((longlong)puVar10 + 0x67U & 0xfffffffffffffff8);
    *(undefined4 *)((longlong)puVar10 + 0x5c) = uVar21;
    DataMemoryBarrier(2,3);
    *puVar16 = 0;
    *puVar10 = FUN_18015c178;
    *(undefined8 **)(lVar19 + (ulonglong)*(uint *)(lVar19 + 0x14bc) * 0x28 + 0x1350) = puVar16;
    if (*(char *)(lVar19 + 0x14c5) != '\0') {
      FUN_180221bb0(lVar19 + 0x12c0);
      uVar11 = *(undefined8 *)(lVar19 + 0x1340);
LAB_18015c024:
      thunk_FUN_180223874(uVar11);
      return;
    }
  }
  lVar19 = lVar19 + 0x12c0;
LAB_18015c0ac:
  FUN_180221bb0(lVar19);
  return;
}

