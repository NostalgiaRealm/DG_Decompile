/*
 * FUN_180159948 at 180159948
 * undefined FUN_180159948(void)
 * Address ranges: 180159948-1801599fb;180159bc4-18015a10b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180159948(longlong param_1,undefined4 param_2,int *param_3,undefined8 param_4,int **param_5
                  ,int param_6)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  int **ppiVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int **ppiVar11;
  uint uVar12;
  longlong *plVar13;
  int *piVar14;
  longlong lVar15;
  int *piVar16;
  int **local_b0;
  int *local_a8;
  int **local_a0;
  uint local_98;
  int local_94;
  undefined4 local_90;
  int *local_88;
  int **local_80;
  longlong lStack_78;
  uint local_70;
  undefined8 *local_60;
  longlong local_58;
  undefined8 local_50;
  
  local_58 = param_1 + 0x8000;
  bVar3 = false;
  lVar15 = *(longlong *)(param_1 + 0xf6e0);
  local_98 = param_3[2] << 4;
  local_94 = 0;
  local_a8 = param_3;
  local_a0 = param_5;
  local_90 = param_2;
  local_88 = param_3;
  local_50 = param_4;
  FUN_180221850(lVar15 + 0x12c0);
  if (*(char *)(lVar15 + 0x14c4) != '\0') {
    if (*param_3 == *(int *)(param_1 + 0x100f0)) {
      local_a8 = *(int **)(param_1 + 0x100f8);
    }
    else {
      *(int *)(param_1 + 0x100f0) = *param_3;
      puVar5 = (undefined8 *)FUN_18010bf48(param_1 + 0xf7b8,param_3);
      if (puVar5 == (undefined8 *)0x0) {
        local_60 = (undefined8 *)FUN_1802229a8(0x254);
        if (local_60 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(local_60,param_3,0x254);
        }
        local_a8 = (int *)0x0;
        local_60 = (undefined8 *)0x0;
      }
      else {
        local_a8 = (int *)*puVar5;
      }
      *(int **)(param_1 + 0x100f8) = local_a8;
    }
    if (local_a8 != (int *)0x0) {
      uVar10 = 0;
      if (local_88[2] != 0) {
        do {
          lVar15 = uVar10 + 0x214;
          uVar12 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar12;
          local_94 = local_94 +
                     (uint)*(byte *)((longlong)local_88 +
                                    (ulonglong)*(byte *)((longlong)local_88 + lVar15) * 8 + 0x16) *
                     param_6 + 0x10;
        } while (uVar12 < (uint)local_88[2]);
      }
    }
    bVar3 = true;
  }
  piVar7 = local_a8;
  local_80 = &local_a8;
  lStack_78 = CONCAT44(lStack_78._4_4_,param_6);
  iVar1 = local_94 + local_98;
  uVar12 = iVar1 + 0x10;
  if (uVar12 < 0x3f00 && bVar3) {
    piVar14 = *(int **)(local_58 + 0x76e0);
    if ((char)piVar14[0x531] != '\0') {
      if (uVar12 == 0) {
        uVar8 = 0x20;
      }
      else {
        uVar8 = (iVar1 + 0x17U & 0xfffffff8) + 0x28;
      }
      puVar5 = (undefined8 *)FUN_1802218b0(piVar14 + 0x4b0,(ulonglong)uVar8);
      if (puVar5 != (undefined8 *)0x0) {
        FUN_1801042e0(piVar14 + 0x530);
        ppiVar4 = local_a0;
        puVar5[1] = (ulonglong)uVar8;
        lVar15 = 2;
        if (uVar12 != 0) {
          lVar15 = 3;
        }
        plVar13 = puVar5 + lVar15;
        *plVar13 = param_1;
        *(undefined4 *)(plVar13 + 1) = local_90;
        *(int **)((longlong)plVar13 + 0xc) = piVar7;
        *(undefined8 *)((longlong)plVar13 + 0x14) = local_50;
        *(int *)((longlong)plVar13 + 0x1c) = param_6;
        ppiVar11 = (int **)((lVar15 << 3 | 0x27U) + (longlong)puVar5 & 0xfffffffffffffff8);
        if (uVar12 != 0) {
          puVar5[2] = ppiVar11;
          local_a0 = ppiVar11;
          if (local_a8[2] != 0) {
            uVar10 = 0;
            lVar15 = (longlong)ppiVar11 + (ulonglong)local_98;
            local_80 = ppiVar11;
            do {
              piVar7 = (int *)(lVar15 + 0xfU & 0xfffffffffffffff0);
              uVar9 = (ulonglong)*(byte *)((longlong)local_a8 + uVar10 + 0x214);
              local_a0[uVar10 * 2] = piVar7;
              *(uint *)(local_a0 + uVar10 * 2 + 1) =
                   (uint)*(byte *)((longlong)local_a8 + uVar9 * 8 + 0x16);
              *(undefined4 *)((longlong)local_a0 + uVar10 * 0x10 + 0xc) =
                   *(undefined4 *)((longlong)ppiVar4 + uVar10 * 0x10 + 0xc);
              uVar2 = *(undefined1 *)((longlong)local_a8 + uVar9 * 8 + 0x16);
              lVar15 = FUN_180152fa0(param_6,uVar2,ppiVar4[uVar10 * 2],
                                     *(undefined4 *)(ppiVar4 + uVar10 * 2 + 1),piVar7,uVar2);
              uVar12 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar12;
              ppiVar11 = local_80;
            } while (uVar12 < (uint)local_a8[2]);
          }
          ppiVar11 = (int **)(((ulonglong)(iVar1 + 0x17) & 0xfffffff8) + (longlong)ppiVar11);
        }
        DataMemoryBarrier(2,3);
        *ppiVar11 = (int *)0x0;
        *puVar5 = FUN_18015a110;
        *(int ***)(piVar14 + (ulonglong)(uint)piVar14[0x52f] * 10 + 0x4d4) = ppiVar11;
        if (*(char *)((longlong)piVar14 + 0x14c5) != '\0') {
          FUN_180221bb0(piVar14 + 0x4b0);
          uVar6 = *(undefined8 *)(piVar14 + 0x4d0);
          goto LAB_18015a078;
        }
        goto LAB_18015a0f0;
      }
      FUN_180221bb0(piVar14 + 0x4b0);
      thunk_FUN_1802237c0(100);
      FUN_180221850(piVar14 + 0x4b0);
    }
    plVar13 = *(longlong **)(piVar14 + 0x528);
    uVar10 = (ulonglong)(uVar12 != 0);
    uVar9 = uVar10 * 8;
    plVar13[uVar10] = param_1;
    *(undefined4 *)(plVar13 + uVar10 + 1) = local_90;
    *(int **)((longlong)plVar13 + uVar9 + 0xc) = piVar7;
    *(undefined8 *)((longlong)plVar13 + uVar9 + 0x14) = local_50;
    *(int *)((longlong)plVar13 + uVar9 + 0x1c) = param_6;
    if (uVar12 != 0) {
      *plVar13 = (uVar9 | 0x20) + (longlong)plVar13;
      FUN_180154e50(&local_80);
    }
    FUN_18015a110(plVar13);
    goto LAB_18015a0f0;
  }
  local_b0 = (int **)0x0;
  local_80 = (int **)0x0;
  lStack_78 = 0;
  uVar10 = 0;
  local_70 = 0;
  if (bVar3) {
    uVar9 = FUN_180211ab0(*(longlong *)(local_58 + 0x76e0) + 0x17f0,uVar12,&local_80);
    ppiVar4 = local_a0;
    local_b0 = local_80;
    if ((uVar9 & 1) == 0) {
LAB_180159fa4:
      uVar10 = (ulonglong)local_70;
      goto LAB_180159fac;
    }
    local_a0 = local_80;
    uVar12 = local_70;
    if (local_a8[2] != 0) {
      lVar15 = (longlong)local_80 + (ulonglong)local_98;
      do {
        piVar7 = (int *)(lVar15 + 0xfU & 0xfffffffffffffff0);
        uVar9 = (ulonglong)*(byte *)((longlong)local_a8 + uVar10 + 0x214);
        local_a0[uVar10 * 2] = piVar7;
        *(uint *)(local_a0 + uVar10 * 2 + 1) =
             (uint)*(byte *)((longlong)local_a8 + uVar9 * 8 + 0x16);
        *(undefined4 *)((longlong)local_a0 + uVar10 * 0x10 + 0xc) =
             *(undefined4 *)((longlong)ppiVar4 + uVar10 * 0x10 + 0xc);
        uVar2 = *(undefined1 *)((longlong)local_a8 + uVar9 * 8 + 0x16);
        lVar15 = FUN_180152fa0(param_6,uVar2,ppiVar4[uVar10 * 2],
                               *(undefined4 *)(ppiVar4 + uVar10 * 2 + 1),piVar7,uVar2);
        uVar12 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar12;
      } while (uVar12 < (uint)local_a8[2]);
      goto LAB_180159fa4;
    }
  }
  else {
LAB_180159fac:
    uVar12 = (uint)uVar10;
  }
  lVar15 = lStack_78;
  ppiVar4 = local_a0;
  piVar7 = local_a8;
  piVar16 = *(int **)(local_58 + 0x76e0);
  local_88 = piVar16;
  if ((char)piVar16[0x531] != '\0') {
    local_60 = (undefined8 *)FUN_1802218b0(piVar16 + 0x4b0,0x40);
    if (local_60 != (undefined8 *)0x0) {
      FUN_1801042e0(piVar16 + 0x530);
      local_60[1] = 0x40;
      local_60[2] = param_1;
      *(undefined4 *)(local_60 + 3) = local_90;
      *(int **)((longlong)local_60 + 0x1c) = piVar7;
      *(undefined8 *)((longlong)local_60 + 0x24) = local_50;
      *(int ***)((longlong)local_60 + 0x2c) = ppiVar4;
      *(int *)((longlong)local_60 + 0x34) = param_6;
      local_60[7] = local_b0;
      local_60[8] = lVar15;
      puVar5 = (undefined8 *)((longlong)local_60 + 0x53U & 0xfffffffffffffff8);
      *(uint *)(local_60 + 9) = uVar12;
      DataMemoryBarrier(2,3);
      *puVar5 = 0;
      *local_60 = FUN_18015a138;
      *(undefined8 **)(piVar16 + (ulonglong)(uint)piVar16[0x52f] * 10 + 0x4d4) = puVar5;
      piVar14 = local_88;
      if (*(char *)((longlong)piVar16 + 0x14c5) != '\0') {
        FUN_180221bb0(piVar16 + 0x4b0);
        uVar6 = *(undefined8 *)(piVar16 + 0x4d0);
LAB_18015a078:
        thunk_FUN_180223874(uVar6);
        return;
      }
      goto LAB_18015a0f0;
    }
    FUN_180221bb0(piVar16 + 0x4b0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(piVar16 + 0x4b0);
  }
  plVar13 = *(longlong **)(local_88 + 0x528);
  *plVar13 = param_1;
  *(undefined4 *)(plVar13 + 1) = local_90;
  *(int **)((longlong)plVar13 + 0xc) = piVar7;
  *(undefined8 *)((longlong)plVar13 + 0x14) = local_50;
  *(int ***)((longlong)plVar13 + 0x1c) = ppiVar4;
  *(int *)((longlong)plVar13 + 0x24) = param_6;
  plVar13[5] = (longlong)local_b0;
  plVar13[6] = lVar15;
  *(uint *)(plVar13 + 7) = uVar12;
  FUN_18015a138();
  piVar14 = local_88;
LAB_18015a0f0:
  FUN_180221bb0(piVar14 + 0x4b0);
  return;
}

