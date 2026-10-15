/*
 * FUN_180154690 at 180154690
 * undefined FUN_180154690(void)
 * Address ranges: 180154690-180154743;18015490c-180154e4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180154690(longlong param_1,undefined4 param_2,int *param_3,int **param_4,int param_5,
                  undefined4 param_6)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  int **ppiVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int *piVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int **ppiVar12;
  uint uVar13;
  longlong *plVar14;
  int *piVar15;
  longlong lVar16;
  int *piVar17;
  int **local_b0;
  int *local_a8;
  int **local_a0;
  uint local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int *local_88;
  int **local_80;
  undefined8 uStack_78;
  uint local_70;
  undefined8 *local_60;
  longlong local_58;
  
  local_58 = param_1 + 0x8000;
  bVar3 = false;
  lVar16 = *(longlong *)(param_1 + 0xf6e0);
  local_98 = param_3[2] << 4;
  local_94 = 0;
  local_a8 = param_3;
  local_a0 = param_4;
  local_90 = param_2;
  local_8c = param_6;
  local_88 = param_3;
  FUN_180221850(lVar16 + 0x12c0);
  if (*(char *)(lVar16 + 0x14c4) != '\0') {
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
      uVar11 = 0;
      if (local_88[2] != 0) {
        do {
          lVar16 = uVar11 + 0x214;
          uVar13 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar13;
          local_94 = local_94 +
                     (uint)*(byte *)((longlong)local_88 +
                                    (ulonglong)*(byte *)((longlong)local_88 + lVar16) * 8 + 0x16) *
                     param_5 + 0x10;
        } while (uVar13 < (uint)local_88[2]);
      }
    }
    bVar3 = true;
  }
  piVar8 = local_a8;
  local_80 = &local_a8;
  uStack_78 = CONCAT44(uStack_78._4_4_,param_5);
  iVar1 = local_94 + local_98;
  uVar13 = iVar1 + 0x10;
  if (uVar13 < 0x3f00 && bVar3) {
    piVar15 = *(int **)(local_58 + 0x76e0);
    if ((char)piVar15[0x531] != '\0') {
      if (uVar13 == 0) {
        uVar9 = 0x20;
      }
      else {
        uVar9 = (iVar1 + 0x17U & 0xfffffff8) + 0x28;
      }
      puVar5 = (undefined8 *)FUN_1802218b0(piVar15 + 0x4b0,(ulonglong)uVar9);
      if (puVar5 != (undefined8 *)0x0) {
        FUN_1801042e0(piVar15 + 0x530);
        ppiVar4 = local_a0;
        puVar5[1] = (ulonglong)uVar9;
        lVar16 = 2;
        if (uVar13 != 0) {
          lVar16 = 3;
        }
        plVar7 = puVar5 + lVar16;
        *plVar7 = param_1;
        *(undefined4 *)(plVar7 + 1) = local_90;
        *(int **)((longlong)plVar7 + 0xc) = piVar8;
        *(int *)((longlong)plVar7 + 0x14) = param_5;
        *(undefined1 *)(plVar7 + 3) = (undefined1)local_8c;
        ppiVar12 = (int **)((lVar16 << 3 | 0x23U) + (longlong)puVar5 & 0xfffffffffffffff8);
        if (uVar13 != 0) {
          puVar5[2] = ppiVar12;
          local_a0 = ppiVar12;
          if (local_a8[2] != 0) {
            uVar11 = 0;
            lVar16 = (longlong)ppiVar12 + (ulonglong)local_98;
            local_80 = ppiVar12;
            do {
              piVar8 = (int *)(lVar16 + 0xfU & 0xfffffffffffffff0);
              uVar10 = (ulonglong)*(byte *)((longlong)local_a8 + uVar11 + 0x214);
              local_a0[uVar11 * 2] = piVar8;
              *(uint *)(local_a0 + uVar11 * 2 + 1) =
                   (uint)*(byte *)((longlong)local_a8 + uVar10 * 8 + 0x16);
              *(undefined4 *)((longlong)local_a0 + uVar11 * 0x10 + 0xc) =
                   *(undefined4 *)((longlong)ppiVar4 + uVar11 * 0x10 + 0xc);
              uVar2 = *(undefined1 *)((longlong)local_a8 + uVar10 * 8 + 0x16);
              lVar16 = FUN_180152fa0(param_5,uVar2,ppiVar4[uVar11 * 2],
                                     *(undefined4 *)(ppiVar4 + uVar11 * 2 + 1),piVar8,uVar2);
              uVar13 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar13;
              ppiVar12 = local_80;
            } while (uVar13 < (uint)local_a8[2]);
          }
          ppiVar12 = (int **)(((ulonglong)(iVar1 + 0x17) & 0xfffffff8) + (longlong)ppiVar12);
        }
        DataMemoryBarrier(2,3);
        *ppiVar12 = (int *)0x0;
        *puVar5 = FUN_180154f40;
        *(int ***)(piVar15 + (ulonglong)(uint)piVar15[0x52f] * 10 + 0x4d4) = ppiVar12;
        if (*(char *)((longlong)piVar15 + 0x14c5) != '\0') {
          FUN_180221bb0(piVar15 + 0x4b0);
          uVar6 = *(undefined8 *)(piVar15 + 0x4d0);
          goto LAB_180154db8;
        }
        goto LAB_180154e30;
      }
      FUN_180221bb0(piVar15 + 0x4b0);
      thunk_FUN_1802237c0(100);
      FUN_180221850(piVar15 + 0x4b0);
    }
    plVar14 = *(longlong **)(piVar15 + 0x528);
    plVar7 = plVar14 + (uVar13 != 0);
    *plVar7 = param_1;
    *(undefined4 *)(plVar7 + 1) = local_90;
    *(int **)((longlong)plVar7 + 0xc) = piVar8;
    *(int *)((longlong)plVar7 + 0x14) = param_5;
    *(undefined1 *)(plVar7 + 3) = (undefined1)local_8c;
    if (uVar13 != 0) {
      *plVar14 = (longlong)plVar7 + 0x1c;
      FUN_180154e50(&local_80);
    }
    FUN_180154f40(plVar14);
    goto LAB_180154e30;
  }
  local_b0 = (int **)0x0;
  local_80 = (int **)0x0;
  uStack_78 = 0;
  uVar11 = 0;
  local_70 = 0;
  if (bVar3) {
    uVar10 = FUN_180211ab0(*(longlong *)(local_58 + 0x76e0) + 0x17f0,uVar13,&local_80);
    ppiVar4 = local_a0;
    local_b0 = local_80;
    if ((uVar10 & 1) == 0) {
LAB_180154ce4:
      uVar11 = (ulonglong)local_70;
      goto LAB_180154cec;
    }
    local_a0 = local_80;
    uVar13 = local_70;
    if (local_a8[2] != 0) {
      lVar16 = (longlong)local_80 + (ulonglong)local_98;
      do {
        piVar8 = (int *)(lVar16 + 0xfU & 0xfffffffffffffff0);
        uVar10 = (ulonglong)*(byte *)((longlong)local_a8 + uVar11 + 0x214);
        local_a0[uVar11 * 2] = piVar8;
        *(uint *)(local_a0 + uVar11 * 2 + 1) =
             (uint)*(byte *)((longlong)local_a8 + uVar10 * 8 + 0x16);
        *(undefined4 *)((longlong)local_a0 + uVar11 * 0x10 + 0xc) =
             *(undefined4 *)((longlong)ppiVar4 + uVar11 * 0x10 + 0xc);
        uVar2 = *(undefined1 *)((longlong)local_a8 + uVar10 * 8 + 0x16);
        lVar16 = FUN_180152fa0(param_5,uVar2,ppiVar4[uVar11 * 2],
                               *(undefined4 *)(ppiVar4 + uVar11 * 2 + 1),piVar8,uVar2);
        uVar13 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar13;
      } while (uVar13 < (uint)local_a8[2]);
      goto LAB_180154ce4;
    }
  }
  else {
LAB_180154cec:
    uVar13 = (uint)uVar11;
  }
  uVar6 = uStack_78;
  ppiVar4 = local_a0;
  piVar8 = local_a8;
  piVar17 = *(int **)(local_58 + 0x76e0);
  local_88 = piVar17;
  if ((char)piVar17[0x531] != '\0') {
    local_60 = (undefined8 *)FUN_1802218b0(piVar17 + 0x4b0,0x38);
    if (local_60 != (undefined8 *)0x0) {
      FUN_1801042e0(piVar17 + 0x530);
      local_60[1] = 0x38;
      local_60[2] = param_1;
      *(undefined4 *)(local_60 + 3) = local_90;
      *(int **)((longlong)local_60 + 0x1c) = piVar8;
      *(int ***)((longlong)local_60 + 0x24) = ppiVar4;
      *(int *)((longlong)local_60 + 0x2c) = param_5;
      *(undefined1 *)(local_60 + 6) = (undefined1)local_8c;
      *(int ***)((longlong)local_60 + 0x34) = local_b0;
      *(undefined8 *)((longlong)local_60 + 0x3c) = uVar6;
      puVar5 = (undefined8 *)((longlong)local_60 + 0x4fU & 0xfffffffffffffff8);
      *(uint *)((longlong)local_60 + 0x44) = uVar13;
      DataMemoryBarrier(2,3);
      *puVar5 = 0;
      *local_60 = FUN_180154fc8;
      *(undefined8 **)(piVar17 + (ulonglong)(uint)piVar17[0x52f] * 10 + 0x4d4) = puVar5;
      piVar15 = local_88;
      if (*(char *)((longlong)piVar17 + 0x14c5) != '\0') {
        FUN_180221bb0(piVar17 + 0x4b0);
        uVar6 = *(undefined8 *)(piVar17 + 0x4d0);
LAB_180154db8:
        thunk_FUN_180223874(uVar6);
        return;
      }
      goto LAB_180154e30;
    }
    FUN_180221bb0(piVar17 + 0x4b0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(piVar17 + 0x4b0);
  }
  plVar7 = *(longlong **)(local_88 + 0x528);
  *plVar7 = param_1;
  *(undefined4 *)(plVar7 + 1) = local_90;
  *(int **)((longlong)plVar7 + 0xc) = piVar8;
  *(int ***)((longlong)plVar7 + 0x14) = ppiVar4;
  *(int *)((longlong)plVar7 + 0x1c) = param_5;
  *(undefined1 *)(plVar7 + 4) = (undefined1)local_8c;
  *(int ***)((longlong)plVar7 + 0x24) = local_b0;
  *(undefined8 *)((longlong)plVar7 + 0x2c) = uVar6;
  *(uint *)((longlong)plVar7 + 0x34) = uVar13;
  FUN_180154fc8();
  piVar15 = local_88;
LAB_180154e30:
  FUN_180221bb0(piVar15 + 0x4b0);
  return;
}

