/*
 * FUN_180153530 at 180153530
 * undefined FUN_180153530(void)
 * Address ranges: 180153530-1801535cf;1801537c0-180153b93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180153530(longlong param_1,undefined4 param_2,int *param_3,longlong param_4,int param_5,
                  int param_6,undefined1 param_7)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  int local_a0;
  longlong local_80;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  
  lVar14 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180221850(lVar14 + 0x12c0);
  if (*(char *)(lVar14 + 0x14c4) == '\0') {
    bVar3 = false;
    piVar15 = param_3;
  }
  else {
    if (*param_3 != *(int *)(param_1 + 0x100f0)) {
      *(int *)(param_1 + 0x100f0) = *param_3;
      puVar6 = (undefined8 *)FUN_18010bf48(param_1 + 0xf7b8,param_3);
      if (puVar6 == (undefined8 *)0x0) {
        lVar14 = FUN_1802229a8(0x254);
        if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(lVar14,param_3,0x254);
        }
        uVar8 = 0;
      }
      else {
        uVar8 = *puVar6;
      }
      *(undefined8 *)(param_1 + 0x100f8) = uVar8;
    }
    bVar3 = true;
    piVar15 = *(int **)(param_1 + 0x100f8);
  }
  iVar1 = param_3[3];
  iVar2 = iVar1 * param_6;
  if ((bVar3) && (iVar2 + 4U < 0x3f00)) {
    lVar13 = *(longlong *)(param_1 + 0xf6e0);
    if (*(char *)(lVar13 + 0x14c4) != '\0') {
      if (iVar2 == -4) {
        uVar7 = 0x20;
      }
      else {
        uVar7 = (iVar2 + 0xbU & 0xfffffff8) + 0x28;
      }
      puVar6 = (undefined8 *)FUN_1802218b0(lVar13 + 0x12c0,(ulonglong)uVar7);
      if (puVar6 != (undefined8 *)0x0) {
        FUN_1801042e0(lVar13 + 0x14c0);
        puVar6[1] = (ulonglong)uVar7;
        lVar14 = 2;
        if (iVar2 != -4) {
          lVar14 = 3;
        }
        plVar11 = puVar6 + lVar14;
        *plVar11 = param_1;
        *(undefined4 *)(plVar11 + 1) = param_2;
        *(int **)((longlong)plVar11 + 0xc) = piVar15;
        *(int *)((longlong)plVar11 + 0x14) = iVar1;
        *(int *)(plVar11 + 3) = param_6;
        *(undefined1 *)((longlong)plVar11 + 0x1c) = param_7;
        puVar12 = (undefined8 *)((lVar14 << 3 | 0x27U) + (longlong)puVar6 & 0xfffffffffffffff8);
        if (iVar2 != -4) {
          puVar6[2] = puVar12;
          FUN_180152fa0(param_6,param_3[3],param_4,param_5,puVar12,param_3[3]);
          puVar12 = (undefined8 *)(((ulonglong)(iVar2 + 0xb) & 0xfffffff8) + (longlong)puVar12);
        }
        DataMemoryBarrier(2,3);
        *puVar12 = 0;
        *puVar6 = FUN_180153b98;
        *(undefined8 **)(lVar13 + (ulonglong)*(uint *)(lVar13 + 0x14bc) * 0x28 + 0x1350) = puVar12;
        if (*(char *)(lVar13 + 0x14c5) != '\0') {
          FUN_180221bb0(lVar13 + 0x12c0);
          uVar8 = *(undefined8 *)(lVar13 + 0x1340);
LAB_180153b14:
          thunk_FUN_180223874(uVar8);
          return;
        }
        goto LAB_180153b78;
      }
      FUN_180221bb0(lVar13 + 0x12c0);
      thunk_FUN_1802237c0(100);
      FUN_180221850(lVar13 + 0x12c0);
    }
    plVar11 = *(longlong **)(lVar13 + 0x14a0);
    uVar9 = (ulonglong)(iVar2 != -4);
    uVar10 = uVar9 * 8;
    plVar11[uVar9] = param_1;
    *(undefined4 *)(plVar11 + uVar9 + 1) = param_2;
    *(int **)((longlong)plVar11 + uVar10 + 0xc) = piVar15;
    *(int *)((longlong)plVar11 + uVar10 + 0x14) = iVar1;
    *(int *)(plVar11 + uVar9 + 3) = param_6;
    *(undefined1 *)((longlong)plVar11 + uVar10 + 0x1c) = param_7;
    if (iVar2 != -4) {
      lVar14 = (uVar10 | 0x20) + (longlong)plVar11;
      *plVar11 = lVar14;
      FUN_180152fa0(param_6,param_3[3],param_4,param_5,lVar14,param_3[3]);
    }
    FUN_180153b98(plVar11);
  }
  else {
    lVar14 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_a0 = param_5;
    local_80 = param_4;
    if ((bVar3) &&
       (uVar9 = FUN_180211ab0(*(longlong *)(param_1 + 0xf6e0) + 0x17f0,iVar2,&local_68),
       lVar14 = local_68, (uVar9 & 1) != 0)) {
      FUN_180152fa0(param_6,param_3[3],param_4,param_5,local_68,param_3[3]);
      local_a0 = param_3[3];
      local_80 = lVar14;
    }
    uVar5 = local_58;
    lVar4 = local_60;
    lVar13 = *(longlong *)(param_1 + 0xf6e0);
    if (*(char *)(lVar13 + 0x14c4) != '\0') {
      puVar6 = (undefined8 *)FUN_1802218b0(lVar13 + 0x12c0,0x40);
      if (puVar6 != (undefined8 *)0x0) {
        FUN_1801042e0(lVar13 + 0x14c0);
        puVar6[1] = 0x40;
        puVar6[2] = param_1;
        *(undefined4 *)(puVar6 + 3) = param_2;
        *(int **)((longlong)puVar6 + 0x1c) = piVar15;
        *(longlong *)((longlong)puVar6 + 0x24) = local_80;
        *(int *)((longlong)puVar6 + 0x2c) = local_a0;
        *(int *)(puVar6 + 6) = param_6;
        *(undefined1 *)((longlong)puVar6 + 0x34) = param_7;
        puVar6[7] = lVar14;
        puVar6[8] = lVar4;
        puVar12 = (undefined8 *)((longlong)puVar6 + 0x53U & 0xfffffffffffffff8);
        *(undefined4 *)(puVar6 + 9) = uVar5;
        DataMemoryBarrier(2,3);
        *puVar12 = 0;
        *puVar6 = FUN_180153c20;
        *(undefined8 **)(lVar13 + (ulonglong)*(uint *)(lVar13 + 0x14bc) * 0x28 + 0x1350) = puVar12;
        if (*(char *)(lVar13 + 0x14c5) != '\0') {
          FUN_180221bb0(lVar13 + 0x12c0);
          uVar8 = *(undefined8 *)(lVar13 + 0x1340);
          goto LAB_180153b14;
        }
        goto LAB_180153b78;
      }
      FUN_180221bb0(lVar13 + 0x12c0);
      thunk_FUN_1802237c0(100);
      FUN_180221850(lVar13 + 0x12c0);
    }
    plVar11 = *(longlong **)(lVar13 + 0x14a0);
    *plVar11 = param_1;
    *(undefined4 *)(plVar11 + 1) = param_2;
    *(int **)((longlong)plVar11 + 0xc) = piVar15;
    *(longlong *)((longlong)plVar11 + 0x14) = local_80;
    *(int *)((longlong)plVar11 + 0x1c) = local_a0;
    *(int *)(plVar11 + 4) = param_6;
    *(undefined1 *)((longlong)plVar11 + 0x24) = param_7;
    plVar11[5] = lVar14;
    plVar11[6] = lVar4;
    *(undefined4 *)(plVar11 + 7) = uVar5;
    FUN_180153c20();
  }
LAB_180153b78:
  FUN_180221bb0(lVar13 + 0x12c0);
  return;
}

