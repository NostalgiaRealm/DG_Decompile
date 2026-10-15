/*
 * FUN_180158958 at 180158958
 * undefined FUN_180158958(void)
 * Address ranges: 180158958-1801589f7;180158be8-180158fb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180158958(longlong param_1,undefined4 param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int *piVar15;
  int local_a0;
  undefined8 local_80;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  
  lVar14 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180221850(lVar14 + 0x12c0);
  if (*(char *)(lVar14 + 0x14c4) == '\0') {
    bVar4 = false;
    piVar15 = param_3;
  }
  else {
    if (*param_3 != *(int *)(param_1 + 0x100f0)) {
      *(int *)(param_1 + 0x100f0) = *param_3;
      puVar7 = (undefined8 *)FUN_18010bf48(param_1 + 0xf7b8,param_3);
      if (puVar7 == (undefined8 *)0x0) {
        lVar14 = FUN_1802229a8(0x254);
        if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(lVar14,param_3,0x254);
        }
        uVar11 = 0;
      }
      else {
        uVar11 = *puVar7;
      }
      *(undefined8 *)(param_1 + 0x100f8) = uVar11;
    }
    bVar4 = true;
    piVar15 = *(int **)(param_1 + 0x100f8);
  }
  iVar2 = param_3[3];
  iVar3 = iVar2 * param_7;
  if ((bVar4) && (iVar3 + 4U < 0x3f00)) {
    lVar14 = *(longlong *)(param_1 + 0xf6e0);
    if (*(char *)(lVar14 + 0x14c4) != '\0') {
      if (iVar3 == -4) {
        uVar10 = 0x28;
      }
      else {
        uVar10 = (iVar3 + 0xbU & 0xfffffff8) + 0x30;
      }
      puVar7 = (undefined8 *)FUN_1802218b0(lVar14 + 0x12c0,(ulonglong)uVar10);
      if (puVar7 != (undefined8 *)0x0) {
        FUN_1801042e0(lVar14 + 0x14c0);
        puVar7[1] = (ulonglong)uVar10;
        lVar1 = 2;
        if (iVar3 != -4) {
          lVar1 = 3;
        }
        plVar9 = puVar7 + lVar1;
        *plVar9 = param_1;
        *(undefined4 *)(plVar9 + 1) = param_2;
        *(int **)((longlong)plVar9 + 0xc) = piVar15;
        *(undefined8 *)((longlong)plVar9 + 0x14) = param_4;
        puVar13 = (undefined8 *)((longlong)plVar9 + 0x2bU & 0xfffffffffffffff8);
        *(int *)((longlong)plVar9 + 0x1c) = iVar2;
        *(int *)(plVar9 + 4) = param_7;
        if (iVar3 != -4) {
          puVar7[2] = puVar13;
          FUN_180152fa0(param_7,param_3[3],param_5,param_6,puVar13,param_3[3]);
          puVar13 = (undefined8 *)(((ulonglong)(iVar3 + 0xb) & 0xfffffff8) + (longlong)puVar13);
        }
        DataMemoryBarrier(2,3);
        *puVar13 = 0;
        *puVar7 = FUN_180158fb8;
        *(undefined8 **)(lVar14 + (ulonglong)*(uint *)(lVar14 + 0x14bc) * 0x28 + 0x1350) = puVar13;
        if (*(char *)(lVar14 + 0x14c5) != '\0') {
          FUN_180221bb0(lVar14 + 0x12c0);
          uVar11 = *(undefined8 *)(lVar14 + 0x1340);
LAB_180158f34:
          thunk_FUN_180223874(uVar11);
          return;
        }
        goto LAB_180158f98;
      }
      FUN_180221bb0(lVar14 + 0x12c0);
      thunk_FUN_1802237c0(100);
      FUN_180221850(lVar14 + 0x12c0);
    }
    plVar12 = *(longlong **)(lVar14 + 0x14a0);
    plVar9 = plVar12 + (iVar3 != -4);
    *plVar9 = param_1;
    *(undefined4 *)(plVar9 + 1) = param_2;
    *(int **)((longlong)plVar9 + 0xc) = piVar15;
    *(undefined8 *)((longlong)plVar9 + 0x14) = param_4;
    *(int *)((longlong)plVar9 + 0x1c) = iVar2;
    *(int *)(plVar9 + 4) = param_7;
    if (iVar3 != -4) {
      lVar1 = ((ulonglong)(iVar3 != -4) << 3 | 0x24) + (longlong)plVar12;
      *plVar12 = lVar1;
      FUN_180152fa0(param_7,param_3[3],param_5,param_6,lVar1,param_3[3]);
    }
    FUN_180158fb8(plVar12);
  }
  else {
    uVar11 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_a0 = param_6;
    local_80 = param_5;
    if ((bVar4) &&
       (uVar8 = FUN_180211ab0(*(longlong *)(param_1 + 0xf6e0) + 0x17f0,iVar3,&local_60),
       uVar11 = local_60, (uVar8 & 1) != 0)) {
      FUN_180152fa0(param_7,param_3[3],param_5,param_6,local_60,param_3[3]);
      local_a0 = param_3[3];
      local_80 = uVar11;
    }
    uVar6 = local_50;
    uVar5 = local_58;
    lVar14 = *(longlong *)(param_1 + 0xf6e0);
    if (*(char *)(lVar14 + 0x14c4) != '\0') {
      puVar7 = (undefined8 *)FUN_1802218b0(lVar14 + 0x12c0,0x40);
      if (puVar7 != (undefined8 *)0x0) {
        FUN_1801042e0(lVar14 + 0x14c0);
        puVar7[1] = 0x40;
        puVar7[2] = param_1;
        *(undefined4 *)(puVar7 + 3) = param_2;
        *(int **)((longlong)puVar7 + 0x1c) = piVar15;
        *(undefined8 *)((longlong)puVar7 + 0x24) = param_4;
        *(undefined8 *)((longlong)puVar7 + 0x2c) = local_80;
        *(int *)((longlong)puVar7 + 0x34) = local_a0;
        *(int *)(puVar7 + 7) = param_7;
        *(undefined8 *)((longlong)puVar7 + 0x3c) = uVar11;
        *(undefined8 *)((longlong)puVar7 + 0x44) = uVar5;
        puVar13 = (undefined8 *)((longlong)puVar7 + 0x57U & 0xfffffffffffffff8);
        *(undefined4 *)((longlong)puVar7 + 0x4c) = uVar6;
        DataMemoryBarrier(2,3);
        *puVar13 = 0;
        *puVar7 = FUN_180158fd8;
        *(undefined8 **)(lVar14 + (ulonglong)*(uint *)(lVar14 + 0x14bc) * 0x28 + 0x1350) = puVar13;
        if (*(char *)(lVar14 + 0x14c5) != '\0') {
          FUN_180221bb0(lVar14 + 0x12c0);
          uVar11 = *(undefined8 *)(lVar14 + 0x1340);
          goto LAB_180158f34;
        }
        goto LAB_180158f98;
      }
      FUN_180221bb0(lVar14 + 0x12c0);
      thunk_FUN_1802237c0(100);
      FUN_180221850(lVar14 + 0x12c0);
    }
    plVar9 = *(longlong **)(lVar14 + 0x14a0);
    *plVar9 = param_1;
    *(undefined4 *)(plVar9 + 1) = param_2;
    *(int **)((longlong)plVar9 + 0xc) = piVar15;
    *(undefined8 *)((longlong)plVar9 + 0x14) = param_4;
    *(undefined8 *)((longlong)plVar9 + 0x1c) = local_80;
    *(int *)((longlong)plVar9 + 0x24) = local_a0;
    *(int *)(plVar9 + 5) = param_7;
    *(undefined8 *)((longlong)plVar9 + 0x2c) = uVar11;
    *(undefined8 *)((longlong)plVar9 + 0x34) = uVar5;
    *(undefined4 *)((longlong)plVar9 + 0x3c) = uVar6;
    FUN_180158fd8();
  }
LAB_180158f98:
  FUN_180221bb0(lVar14 + 0x12c0);
  return;
}

