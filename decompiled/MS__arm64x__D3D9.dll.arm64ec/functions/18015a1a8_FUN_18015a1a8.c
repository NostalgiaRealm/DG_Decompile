/*
 * FUN_18015a1a8 at 18015a1a8
 * undefined FUN_18015a1a8(void)
 * Address ranges: 18015a1a8-18015a277;18015a440-18015aaff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18015a1a8(longlong param_1,undefined4 param_2,int *param_3,undefined8 param_4,int **param_5
                  ,int param_6,int *param_7,uint param_8,int param_9,byte param_10)

{
  undefined1 uVar1;
  bool bVar2;
  int **ppiVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int **ppiVar15;
  undefined4 uVar16;
  longlong lVar17;
  ulonglong local_d0;
  int *local_c8;
  undefined4 local_c0;
  int *local_b8;
  int **local_b0;
  int *local_a8;
  uint local_a0;
  int local_9c;
  int local_98;
  undefined8 local_94;
  int **local_88;
  undefined8 local_80;
  int **local_70;
  longlong lStack_68;
  undefined8 local_60;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 *local_50;
  int *local_48;
  
  bVar2 = false;
  lVar17 = *(longlong *)(param_1 + 0xf6e0);
  local_a0 = param_3[2] << 4;
  local_9c = 0;
  local_94 = 0;
  local_98 = param_9;
  local_c8 = param_3;
  local_c0 = param_2;
  local_b8 = param_3;
  local_b0 = param_5;
  local_a8 = param_7;
  local_80 = param_4;
  local_48 = param_7;
  puVar4 = (undefined8 *)FUN_180221850(lVar17 + 0x12c0);
  if (*(char *)(lVar17 + 0x14c4) == '\0') {
    iVar12 = local_94._4_4_;
  }
  else {
    if (*param_3 == *(int *)(param_1 + 0x100f0)) {
      local_b8 = *(int **)(param_1 + 0x100f8);
    }
    else {
      *(int *)(param_1 + 0x100f0) = *param_3;
      puVar4 = (undefined8 *)FUN_18010bf48(param_1 + 0xf7b8,param_3);
      if (puVar4 == (undefined8 *)0x0) {
        local_88 = (int **)FUN_1802229a8(0x254);
        if (local_88 != (int **)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(local_88,param_3,0x254);
        }
        local_b8 = (int *)0x0;
        puVar4 = (undefined8 *)0x0;
        local_88 = (int **)0x0;
      }
      else {
        local_b8 = (int *)*puVar4;
      }
      *(int **)(param_1 + 0x100f8) = local_b8;
    }
    if (local_b8 == (int *)0x0) {
      iVar12 = local_94._4_4_;
    }
    else {
      local_d0 = local_d0 & 0xffffffff00000000;
      FUN_1801505b0(puVar4,local_48,param_8,param_10,&local_94,&local_d0);
      param_6 = ((int)local_d0 - (int)local_94) + 1;
      uVar10 = 0;
      if (local_c8[2] != 0) {
        do {
          lVar17 = uVar10 + 0x214;
          uVar8 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar8;
          local_9c = local_9c +
                     (uint)*(byte *)((longlong)local_c8 +
                                    (ulonglong)*(byte *)((longlong)local_c8 + lVar17) * 8 + 0x16) *
                     param_6 + 0x10;
        } while (uVar8 < (uint)local_c8[2]);
      }
      iVar12 = ((uint)param_10 * 2 + 2) * param_8;
      local_94 = CONCAT44(iVar12,(int)local_94);
    }
    bVar2 = true;
  }
  piVar6 = local_b8;
  local_60 = CONCAT44(param_8,param_6);
  _bStack_58 = CONCAT71(uStack_57,param_10);
  iVar12 = iVar12 + local_9c + local_a0;
  uVar8 = iVar12 + 0x28;
  local_c8 = (int *)CONCAT44(local_c8._4_4_,iVar12);
  local_88 = (int **)CONCAT44(local_88._4_4_,uVar8);
  if (uVar8 < 0x3f00 && bVar2) {
    uVar11 = *(ulonglong *)(param_1 + 0xf6e0);
    bVar2 = true;
    local_d0 = CONCAT44(local_d0._4_4_,(uint)(*(char *)(uVar11 + 0x14c4) == '\0'));
    if (*(char *)(uVar11 + 0x14c4) != '\0') {
      if (uVar8 == 0) {
        uVar8 = 0x28;
      }
      else {
        uVar8 = (iVar12 + 0x2fU & 0xfffffff8) + 0x30;
      }
      puVar4 = (undefined8 *)FUN_1802218b0(uVar11 + 0x12c0,(ulonglong)uVar8);
      local_50 = puVar4;
      if (puVar4 == (undefined8 *)0x0) {
        FUN_180221bb0(uVar11 + 0x12c0);
        thunk_FUN_1802237c0(100);
        FUN_180221850(uVar11 + 0x12c0);
        local_d0 = CONCAT44(local_d0._4_4_,1);
      }
      else {
        FUN_1801042e0(uVar11 + 0x14c0);
        ppiVar15 = local_b0;
        puVar4[1] = (ulonglong)uVar8;
        lVar17 = 2;
        if ((int)local_88 != 0) {
          lVar17 = 3;
        }
        plVar7 = puVar4 + lVar17;
        *plVar7 = param_1;
        *(undefined4 *)(plVar7 + 1) = local_c0;
        *(int **)((longlong)plVar7 + 0xc) = piVar6;
        *(undefined8 *)((longlong)plVar7 + 0x14) = local_80;
        *(int *)((longlong)plVar7 + 0x1c) = param_6;
        *(uint *)(plVar7 + 4) = param_8;
        *(byte *)((longlong)plVar7 + 0x24) = param_10;
        puVar13 = (undefined8 *)((longlong)plVar7 + 0x2fU & 0xfffffffffffffff8);
        if ((int)local_88 != 0) {
          puVar4[2] = puVar13;
          local_b0 = (int **)(puVar13 + 1);
          piVar5 = (int *)((longlong)puVar13 + (ulonglong)local_a0 + 0x17 & 0xfffffffffffffff0);
          if (local_b8[2] != 0) {
            uVar10 = 0;
            local_48 = piVar6;
            do {
              uVar9 = (ulonglong)*(byte *)((longlong)local_b8 + uVar10 + 0x214);
              local_b0[uVar10 * 2] = piVar5;
              *(uint *)(local_b0 + uVar10 * 2 + 1) =
                   (uint)*(byte *)((longlong)local_b8 + uVar9 * 8 + 0x16);
              *(undefined4 *)((longlong)local_b0 + uVar10 * 0x10 + 0xc) =
                   *(undefined4 *)((longlong)ppiVar15 + uVar10 * 0x10 + 0xc);
              uVar1 = *(undefined1 *)((longlong)local_b8 + uVar9 * 8 + 0x16);
              lVar17 = FUN_180152fa0(param_6,uVar1,
                                     (longlong)ppiVar15[uVar10 * 2] +
                                     (ulonglong)
                                     (uint)(((int)local_94 + local_98) *
                                           *(int *)(ppiVar15 + uVar10 * 2 + 1)),
                                     *(int *)(ppiVar15 + uVar10 * 2 + 1),piVar5,uVar1);
              uVar8 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar8;
              piVar5 = (int *)(lVar17 + 0xfU & 0xfffffffffffffff0);
              piVar6 = local_48;
            } while (uVar8 < (uint)local_b8[2]);
          }
          local_a8 = (int *)FUN_1801506e0(piVar5,local_a8,piVar5,param_8,-(int)local_94,param_10);
          local_98 = 0;
          *puVar13 = local_a8;
          puVar13 = (undefined8 *)
                    (((ulonglong)((int)local_c8 + 0x2f) & 0xfffffff8) + (longlong)puVar13);
        }
        DataMemoryBarrier(2,3);
        *puVar13 = 0;
        *local_50 = FUN_18015ab08;
        *(undefined8 **)(uVar11 + (ulonglong)*(uint *)(uVar11 + 0x14bc) * 0x28 + 0x1350) = puVar13;
        if (*(char *)(uVar11 + 0x14c5) != '\0') {
          FUN_180221bb0(uVar11 + 0x12c0);
          bVar2 = false;
          thunk_FUN_180223874(*(undefined8 *)(uVar11 + 0x1340));
        }
      }
    }
    if ((int)local_d0 != 0) {
      local_70 = &local_b8;
      plVar14 = *(longlong **)(uVar11 + 0x14a0);
      plVar7 = plVar14 + ((int)local_88 != 0);
      *plVar7 = param_1;
      *(undefined4 *)(plVar7 + 1) = local_c0;
      *(int **)((longlong)plVar7 + 0xc) = piVar6;
      *(undefined8 *)((longlong)plVar7 + 0x14) = local_80;
      *(int *)((longlong)plVar7 + 0x1c) = param_6;
      *(uint *)(plVar7 + 4) = param_8;
      *(byte *)((longlong)plVar7 + 0x24) = param_10;
      lStack_68 = param_1;
      if ((int)local_88 != 0) {
        *plVar14 = (longlong)(plVar7 + 5);
        FUN_180155a00(&local_70);
      }
      FUN_18015ab08(plVar14);
    }
    if (!bVar2) {
      return;
    }
  }
  else {
    local_70 = (int **)0x0;
    lStack_68 = 0;
    local_60 = (ulonglong)param_8 << 0x20;
    ppiVar15 = local_70;
    uVar16 = 0;
    if (bVar2) {
      uVar10 = FUN_180211ab0(*(longlong *)(param_1 + 0xf6e0) + 0x17f0,uVar8,&local_70);
      ppiVar15 = local_70;
      ppiVar3 = local_b0;
      if ((uVar10 & 1) == 0) {
        uVar16 = (undefined4)local_60;
      }
      else {
        local_b0 = local_70 + 1;
        piVar6 = (int *)((longlong)local_70 + (ulonglong)local_a0 + 0x17 & 0xfffffffffffffff0);
        if (local_b8[2] != 0) {
          uVar10 = 0;
          do {
            uVar11 = (ulonglong)*(byte *)((longlong)local_b8 + uVar10 + 0x214);
            local_b0[uVar10 * 2] = piVar6;
            *(uint *)(local_b0 + uVar10 * 2 + 1) =
                 (uint)*(byte *)((longlong)local_b8 + uVar11 * 8 + 0x16);
            *(undefined4 *)((longlong)local_b0 + uVar10 * 0x10 + 0xc) =
                 *(undefined4 *)((longlong)ppiVar3 + uVar10 * 0x10 + 0xc);
            uVar1 = *(undefined1 *)((longlong)local_b8 + uVar11 * 8 + 0x16);
            lVar17 = FUN_180152fa0(param_6,uVar1,
                                   (longlong)ppiVar3[uVar10 * 2] +
                                   (ulonglong)
                                   (uint)(*(int *)(ppiVar3 + uVar10 * 2 + 1) *
                                         ((int)local_94 + local_98)),
                                   *(int *)(ppiVar3 + uVar10 * 2 + 1),piVar6,uVar1);
            uVar8 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar8;
            piVar6 = (int *)(lVar17 + 0xfU & 0xfffffffffffffff0);
          } while (uVar8 < (uint)local_b8[2]);
        }
        local_a8 = (int *)FUN_1801506e0(piVar6,local_a8,piVar6,param_8,-(int)local_94,param_10);
        local_98 = 0;
        *ppiVar15 = local_a8;
        uVar16 = (undefined4)local_60;
      }
    }
    lVar17 = lStack_68;
    iVar12 = local_98;
    piVar6 = local_b8;
    local_88 = local_b0;
    uVar10 = *(ulonglong *)(param_1 + 0xf6e0);
    local_d0 = uVar10;
    local_c8 = local_a8;
    if (*(char *)(uVar10 + 0x14c4) != '\0') {
      puVar4 = (undefined8 *)FUN_1802218b0(uVar10 + 0x12c0,0x50);
      if (puVar4 != (undefined8 *)0x0) {
        FUN_1801042e0(uVar10 + 0x14c0);
        puVar4[1] = 0x50;
        puVar4[2] = param_1;
        *(undefined4 *)(puVar4 + 3) = local_c0;
        *(int **)((longlong)puVar4 + 0x1c) = piVar6;
        *(undefined8 *)((longlong)puVar4 + 0x24) = local_80;
        *(int ***)((longlong)puVar4 + 0x2c) = local_88;
        *(int *)((longlong)puVar4 + 0x34) = param_6;
        puVar4[7] = local_c8;
        *(uint *)(puVar4 + 8) = param_8;
        *(int *)((longlong)puVar4 + 0x44) = iVar12;
        *(byte *)(puVar4 + 9) = param_10;
        *(int ***)((longlong)puVar4 + 0x4c) = ppiVar15;
        *(longlong *)((longlong)puVar4 + 0x54) = lVar17;
        puVar13 = (undefined8 *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff8);
        *(undefined4 *)((longlong)puVar4 + 0x5c) = uVar16;
        DataMemoryBarrier(2,3);
        *puVar13 = 0;
        *puVar4 = FUN_18015ab68;
        *(undefined8 **)(uVar10 + (ulonglong)*(uint *)(uVar10 + 0x14bc) * 0x28 + 0x1350) = puVar13;
        uVar11 = local_d0;
        if (*(char *)(uVar10 + 0x14c5) != '\0') {
          FUN_180221bb0(uVar10 + 0x12c0);
          thunk_FUN_180223874(*(undefined8 *)(uVar10 + 0x1340));
          return;
        }
        goto LAB_18015aae4;
      }
      FUN_180221bb0(uVar10 + 0x12c0);
      thunk_FUN_1802237c0(100);
      FUN_180221850(uVar10 + 0x12c0);
    }
    plVar7 = *(longlong **)(local_d0 + 0x14a0);
    *plVar7 = param_1;
    *(undefined4 *)(plVar7 + 1) = local_c0;
    *(int **)((longlong)plVar7 + 0xc) = piVar6;
    *(undefined8 *)((longlong)plVar7 + 0x14) = local_80;
    *(int ***)((longlong)plVar7 + 0x1c) = local_88;
    *(int *)((longlong)plVar7 + 0x24) = param_6;
    plVar7[5] = (longlong)local_c8;
    *(uint *)(plVar7 + 6) = param_8;
    *(int *)((longlong)plVar7 + 0x34) = iVar12;
    *(byte *)(plVar7 + 7) = param_10;
    *(int ***)((longlong)plVar7 + 0x3c) = ppiVar15;
    *(longlong *)((longlong)plVar7 + 0x44) = lVar17;
    *(undefined4 *)((longlong)plVar7 + 0x4c) = uVar16;
    FUN_18015ab68();
    uVar11 = local_d0;
  }
LAB_18015aae4:
  FUN_180221bb0(uVar11 + 0x12c0);
  return;
}

