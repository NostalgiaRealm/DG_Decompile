/*
 * FUN_180155080 at 180155080
 * undefined FUN_180155080(void)
 * Address ranges: 180155080-180155147;180155318-1801559fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180155080(int *param_1,int param_2,int *param_3,int **param_4,int param_5,int *param_6,
                  uint param_7,int param_8,byte param_9,byte param_10)

{
  int **ppiVar1;
  longlong *plVar2;
  undefined1 uVar3;
  bool bVar4;
  int **ppiVar5;
  int iVar6;
  undefined8 *puVar7;
  int **ppiVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int *piVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  int *local_e8;
  int *local_e0;
  int *local_d8;
  int *local_d0;
  int local_c8;
  int *local_c0;
  int **local_b8;
  int *local_b0;
  uint local_a8;
  int local_a4;
  int local_a0;
  undefined8 local_9c;
  int **local_90;
  int **local_80;
  int *piStack_78;
  undefined8 local_70;
  byte bStack_68;
  undefined7 uStack_67;
  int *local_60;
  int *local_58;
  int **local_50;
  
  local_e0 = param_1 + 0x2000;
  lVar16 = *(longlong *)(param_1 + 0x3db8);
  local_a8 = param_3[2] << 4;
  local_a4 = 0;
  local_9c = 0;
  local_e8 = (int *)((ulonglong)local_e8 & 0xffffffff00000000);
  local_d0 = param_3;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b8 = param_4;
  local_b0 = param_6;
  local_a0 = param_8;
  local_58 = param_6;
  puVar7 = (undefined8 *)FUN_180221850(lVar16 + 0x12c0);
  if (*(char *)(lVar16 + 0x14c4) == '\0') {
    iVar15 = local_9c._4_4_;
  }
  else {
    if (*param_3 == param_1[0x403c]) {
      local_c0 = *(int **)(param_1 + 0x403e);
    }
    else {
      param_1[0x403c] = *param_3;
      puVar7 = (undefined8 *)FUN_18010bf48(param_1 + 0x3dee,param_3);
      if (puVar7 == (undefined8 *)0x0) {
        local_90 = (int **)FUN_1802229a8(0x254);
        if (local_90 != (int **)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(local_90,param_3,0x254);
        }
        local_c0 = (int *)0x0;
        puVar7 = (undefined8 *)0x0;
        local_90 = (int **)0x0;
      }
      else {
        local_c0 = (int *)*puVar7;
      }
      *(int **)(param_1 + 0x403e) = local_c0;
    }
    if (local_c0 == (int *)0x0) {
      iVar15 = local_9c._4_4_;
    }
    else {
      local_e8 = (int *)((ulonglong)local_e8 & 0xffffffff00000000);
      FUN_1801505b0(puVar7,local_58,param_7,param_9,&local_9c,&local_e8);
      param_5 = ((int)local_e8 - (int)local_9c) + 1;
      uVar13 = 0;
      if (local_d0[2] != 0) {
        do {
          lVar16 = uVar13 + 0x214;
          uVar11 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar11;
          local_a4 = local_a4 +
                     (uint)*(byte *)((longlong)local_d0 +
                                    (ulonglong)*(byte *)((longlong)local_d0 + lVar16) * 8 + 0x16) *
                     param_5 + 0x10;
        } while (uVar11 < (uint)local_d0[2]);
      }
      iVar15 = ((uint)param_9 * 2 + 2) * param_7;
      local_9c = CONCAT44(iVar15,(int)local_9c);
    }
    local_e8 = (int *)CONCAT44(local_e8._4_4_,1);
  }
  piVar10 = local_c0;
  local_70 = CONCAT44(param_7,param_5);
  _bStack_68 = CONCAT71(uStack_67,param_9);
  iVar15 = iVar15 + local_a4 + local_a8;
  uVar11 = iVar15 + 0x28;
  local_d0 = (int *)CONCAT44(local_d0._4_4_,iVar15);
  local_90 = (int **)CONCAT44(local_90._4_4_,uVar11);
  if (uVar11 < 0x3f00 && (int)local_e8 != 0) {
    piVar14 = *(int **)(local_e0 + 0x1db8);
    bVar4 = true;
    local_e8 = (int *)CONCAT44(local_e8._4_4_,(uint)((char)piVar14[0x531] == '\0'));
    local_d8 = (int *)CONCAT44(local_d8._4_4_,(uint)param_10);
    local_e0 = piVar14;
    if ((char)piVar14[0x531] != '\0') {
      if (uVar11 == 0) {
        uVar11 = 0x28;
      }
      else {
        uVar11 = (iVar15 + 0x2fU & 0xfffffff8) + 0x30;
      }
      ppiVar8 = (int **)FUN_1802218b0(piVar14 + 0x4b0,(int *)(ulonglong)uVar11);
      local_50 = ppiVar8;
      if (ppiVar8 == (int **)0x0) {
        FUN_180221bb0(piVar14 + 0x4b0);
        thunk_FUN_1802237c0(100);
        FUN_180221850(piVar14 + 0x4b0);
        local_e8 = (int *)CONCAT44(local_e8._4_4_,1);
      }
      else {
        FUN_1801042e0(piVar14 + 0x530);
        ppiVar5 = local_b8;
        ppiVar8[1] = (int *)(ulonglong)uVar11;
        lVar16 = 2;
        if ((int)local_90 != 0) {
          lVar16 = 3;
        }
        ppiVar1 = ppiVar8 + lVar16;
        *ppiVar1 = param_1;
        *(int *)(ppiVar1 + 1) = local_c8;
        *(int **)((longlong)ppiVar1 + 0xc) = piVar10;
        *(int *)((longlong)ppiVar1 + 0x14) = param_5;
        *(uint *)(ppiVar1 + 3) = param_7;
        *(byte *)((longlong)ppiVar1 + 0x1c) = param_9;
        *(undefined1 *)(ppiVar1 + 4) = local_d8._0_1_;
        piVar14 = (int *)((longlong)ppiVar1 + 0x2bU & 0xfffffffffffffff8);
        if ((int)local_90 != 0) {
          ppiVar8[2] = piVar14;
          local_b8 = (int **)(piVar14 + 2);
          piVar9 = (int *)((longlong)piVar14 + (ulonglong)local_a8 + 0x17 & 0xfffffffffffffff0);
          if (local_c0[2] != 0) {
            uVar13 = 0;
            local_60 = piVar14;
            local_58 = piVar10;
            do {
              uVar12 = (ulonglong)*(byte *)((longlong)local_c0 + uVar13 + 0x214);
              local_b8[uVar13 * 2] = piVar9;
              *(uint *)(local_b8 + uVar13 * 2 + 1) =
                   (uint)*(byte *)((longlong)local_c0 + uVar12 * 8 + 0x16);
              *(undefined4 *)((longlong)local_b8 + uVar13 * 0x10 + 0xc) =
                   *(undefined4 *)((longlong)ppiVar5 + uVar13 * 0x10 + 0xc);
              uVar3 = *(undefined1 *)((longlong)local_c0 + uVar12 * 8 + 0x16);
              lVar16 = FUN_180152fa0(param_5,uVar3,
                                     (longlong)ppiVar5[uVar13 * 2] +
                                     (ulonglong)
                                     (uint)(((int)local_9c + local_a0) *
                                           *(int *)(ppiVar5 + uVar13 * 2 + 1)),
                                     *(int *)(ppiVar5 + uVar13 * 2 + 1),piVar9,uVar3);
              uVar11 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar11;
              piVar9 = (int *)(lVar16 + 0xfU & 0xfffffffffffffff0);
              piVar14 = local_60;
              piVar10 = local_58;
            } while (uVar11 < (uint)local_c0[2]);
          }
          local_b0 = (int *)FUN_1801506e0(piVar9,local_b0,piVar9,param_7,-(int)local_9c,param_9);
          local_a0 = 0;
          *(int **)piVar14 = local_b0;
          piVar14 = (int *)(((ulonglong)((int)local_d0 + 0x2f) & 0xfffffff8) + (longlong)piVar14);
        }
        piVar9 = local_e0;
        DataMemoryBarrier(2,3);
        piVar14[0] = 0;
        piVar14[1] = 0;
        *local_50 = (int *)FUN_180155b40;
        *(int **)(local_e0 + ((ulonglong)(uint)local_e0[0x52f] * 5 + 0x26a) * 2) = piVar14;
        if (*(char *)((longlong)local_e0 + 0x14c5) != '\0') {
          FUN_180221bb0(local_e0 + 0x4b0);
          bVar4 = false;
          thunk_FUN_180223874(*(undefined8 *)(piVar9 + 0x4d0));
        }
      }
    }
    if ((int)local_e8 != 0) {
      local_80 = &local_c0;
      plVar17 = *(longlong **)(local_e0 + 0x528);
      plVar2 = plVar17 + ((int)local_90 != 0);
      *plVar2 = (longlong)param_1;
      *(int *)(plVar2 + 1) = local_c8;
      *(int **)((longlong)plVar2 + 0xc) = piVar10;
      *(int *)((longlong)plVar2 + 0x14) = param_5;
      *(uint *)(plVar2 + 3) = param_7;
      *(byte *)((longlong)plVar2 + 0x1c) = param_9;
      *(undefined1 *)(plVar2 + 4) = local_d8._0_1_;
      piStack_78 = param_1;
      if ((int)local_90 != 0) {
        *plVar17 = ((ulonglong)((int)local_90 != 0) << 3 | 0x24) + (longlong)plVar17;
        FUN_180155a00(&local_80);
      }
      FUN_180155b40(plVar17);
    }
    piVar10 = local_e0;
    if (!bVar4) {
      return;
    }
  }
  else {
    ppiVar8 = (int **)0x0;
    local_d8 = (int *)0x0;
    local_80 = (int **)0x0;
    piStack_78 = (int *)0x0;
    iVar15 = 0;
    local_70 = (ulonglong)param_7 << 0x20;
    if ((int)local_e8 != 0) {
      uVar13 = FUN_180211ab0(*(longlong *)(local_e0 + 0x1db8) + 0x17f0,uVar11,&local_80);
      ppiVar5 = local_b8;
      ppiVar8 = local_80;
      if ((uVar13 & 1) != 0) {
        local_b8 = local_80 + 1;
        piVar10 = (int *)((longlong)local_80 + (ulonglong)local_a8 + 0x17 & 0xfffffffffffffff0);
        if (local_c0[2] != 0) {
          local_50 = local_80;
          uVar13 = 0;
          do {
            uVar12 = (ulonglong)*(byte *)((longlong)local_c0 + uVar13 + 0x214);
            local_b8[uVar13 * 2] = piVar10;
            *(uint *)(local_b8 + uVar13 * 2 + 1) =
                 (uint)*(byte *)((longlong)local_c0 + uVar12 * 8 + 0x16);
            *(undefined4 *)((longlong)local_b8 + uVar13 * 0x10 + 0xc) =
                 *(undefined4 *)((longlong)ppiVar5 + uVar13 * 0x10 + 0xc);
            uVar3 = *(undefined1 *)((longlong)local_c0 + uVar12 * 8 + 0x16);
            lVar16 = FUN_180152fa0(param_5,uVar3,
                                   (longlong)ppiVar5[uVar13 * 2] +
                                   (ulonglong)
                                   (uint)(*(int *)(ppiVar5 + uVar13 * 2 + 1) *
                                         ((int)local_9c + local_a0)),
                                   *(int *)(ppiVar5 + uVar13 * 2 + 1),piVar10,uVar3);
            uVar11 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar11;
            piVar10 = (int *)(lVar16 + 0xfU & 0xfffffffffffffff0);
            ppiVar8 = local_50;
          } while (uVar11 < (uint)local_c0[2]);
        }
        local_b0 = (int *)FUN_1801506e0(piVar10,local_b0,piVar10,param_7,-(int)local_9c,param_9);
        local_a0 = 0;
        *ppiVar8 = local_b0;
      }
      iVar15 = (int)local_70;
    }
    iVar6 = local_a0;
    piVar10 = local_c0;
    local_90 = local_b8;
    piVar14 = *(int **)(local_e0 + 0x1db8);
    local_e8 = piVar14;
    local_d8 = piStack_78;
    local_d0 = local_b0;
    if ((char)piVar14[0x531] != '\0') {
      local_e0 = (int *)FUN_1802218b0(piVar14 + 0x4b0,0x50);
      if (local_e0 != (int *)0x0) {
        FUN_1801042e0(piVar14 + 0x530);
        local_e0[2] = 0x50;
        local_e0[3] = 0;
        *(int **)(local_e0 + 4) = param_1;
        local_e0[6] = local_c8;
        *(int **)(local_e0 + 7) = piVar10;
        *(int ***)(local_e0 + 9) = local_90;
        local_e0[0xb] = param_5;
        *(int **)(local_e0 + 0xc) = local_d0;
        local_e0[0xe] = param_7;
        local_e0[0xf] = iVar6;
        *(byte *)(local_e0 + 0x10) = param_9;
        *(byte *)(local_e0 + 0x11) = param_10;
        *(int ***)(local_e0 + 0x12) = ppiVar8;
        *(int **)(local_e0 + 0x14) = local_d8;
        puVar7 = (undefined8 *)((longlong)local_e0 + 99U & 0xfffffffffffffff8);
        local_e0[0x16] = iVar15;
        DataMemoryBarrier(2,3);
        *puVar7 = 0;
        *(code **)local_e0 = FUN_180155bf0;
        *(undefined8 **)(piVar14 + ((ulonglong)(uint)piVar14[0x52f] * 5 + 0x26a) * 2) = puVar7;
        piVar10 = local_e8;
        if (*(char *)((longlong)piVar14 + 0x14c5) != '\0') {
          FUN_180221bb0(piVar14 + 0x4b0);
          thunk_FUN_180223874(*(undefined8 *)(piVar14 + 0x4d0));
          return;
        }
        goto LAB_1801559e0;
      }
      FUN_180221bb0(piVar14 + 0x4b0);
      thunk_FUN_1802237c0(100);
      FUN_180221850(piVar14 + 0x4b0);
    }
    puVar7 = *(undefined8 **)(local_e8 + 0x528);
    *puVar7 = param_1;
    *(int *)(puVar7 + 1) = local_c8;
    *(int **)((longlong)puVar7 + 0xc) = piVar10;
    *(int ***)((longlong)puVar7 + 0x14) = local_90;
    *(int *)((longlong)puVar7 + 0x1c) = param_5;
    puVar7[4] = local_d0;
    *(uint *)(puVar7 + 5) = param_7;
    *(int *)((longlong)puVar7 + 0x2c) = iVar6;
    *(byte *)(puVar7 + 6) = param_9;
    *(byte *)((longlong)puVar7 + 0x34) = param_10;
    puVar7[7] = ppiVar8;
    puVar7[8] = local_d8;
    *(int *)(puVar7 + 9) = iVar15;
    FUN_180155bf0();
    piVar10 = local_e8;
  }
LAB_1801559e0:
  FUN_180221bb0(piVar10 + 0x4b0);
  return;
}

