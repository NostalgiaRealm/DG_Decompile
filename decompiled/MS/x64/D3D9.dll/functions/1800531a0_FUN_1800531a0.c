/*
 * FUN_1800531a0 at 1800531a0
 * undefined __fastcall FUN_1800531a0(longlong param_1, undefined4 param_2, uint * param_3, undefined8 param_4, undefined8 param_5, int param_6)
 * Address ranges: 1800531a0-1800535df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800531a0(longlong param_1,undefined4 param_2,uint *param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  HANDLE hEvent;
  int *piVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  uint **local_88;
  int iStack_80;
  undefined4 uStack_7c;
  uint *local_78;
  undefined8 local_70;
  int local_68;
  int local_64;
  longlong local_60;
  longlong lStack_58;
  undefined4 local_50;
  
  lVar2 = *(longlong *)(param_1 + 0xf6e0);
  bVar7 = false;
  local_70 = param_5;
  local_68 = param_3[2] << 4;
  local_64 = 0;
  local_78 = param_3;
  FUN_1800fab60((int *)(lVar2 + 0x12c0));
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    if (*param_3 != *(uint *)(param_1 + 0x100f0)) {
      *(uint *)(param_1 + 0x100f0) = *param_3;
      uVar8 = FUN_18004def4((longlong *)(param_1 + 0xf7b8),param_3);
      *(undefined8 *)(param_1 + 0x100f8) = uVar8;
    }
    local_78 = *(uint **)(param_1 + 0x100f8);
    if ((local_78 != (uint *)0x0) && (uVar10 = 0, param_3[2] != 0)) {
      do {
        lVar2 = uVar10 + 0x214;
        uVar15 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar15;
        local_64 = (uint)*(byte *)((longlong)param_3 +
                                  (ulonglong)*(byte *)(lVar2 + (longlong)param_3) * 8 + 0x16) *
                   param_6 + local_64 + 0x10;
      } while (uVar15 < param_3[2]);
    }
    bVar7 = true;
  }
  puVar4 = local_78;
  iVar16 = local_64 + local_68;
  _iStack_80 = CONCAT44(uStack_7c,param_6);
  uVar8 = _iStack_80;
  uVar15 = iVar16 + 0x10;
  local_88 = &local_78;
  if ((bVar7) && (uVar15 < 0x3f00)) {
    lVar2 = *(longlong *)(param_1 + 0xf6e0);
    piVar12 = (int *)(lVar2 + 0x12c0);
    if (*(char *)(lVar2 + 0x14c4) != '\0') {
      uVar13 = (-(uint)(uVar15 != 0) & 8) + 0x20;
      if (uVar15 != 0) {
        uVar13 = uVar13 + (iVar16 + 0x17U & 0xfffffff8);
      }
      puVar9 = (undefined8 *)FUN_1800fab80((longlong)piVar12,uVar13);
      if (puVar9 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
        UNLOCK();
        puVar9[1] = (ulonglong)uVar13;
        uVar10 = (ulonglong)(uVar15 != 0);
        lVar1 = uVar10 * 8;
        puVar9[uVar10 + 2] = param_1;
        *(undefined4 *)(puVar9 + uVar10 + 3) = param_2;
        *(uint **)(lVar1 + 0x1c + (longlong)puVar9) = puVar4;
        *(undefined8 *)(lVar1 + 0x24 + (longlong)puVar9) = param_4;
        *(int *)(lVar1 + 0x2c + (longlong)puVar9) = param_6;
        puVar14 = (undefined8 *)((lVar1 + 0x10U | 0x27) + (longlong)puVar9 & 0xfffffffffffffff8);
        if (uVar15 != 0) {
          puVar9[2] = puVar14;
          FUN_18004f5d0((longlong *)&local_88,(longlong)puVar14);
          puVar14 = (undefined8 *)(((ulonglong)(iVar16 + 0x17) & 0xfffffff8) + (longlong)puVar14);
        }
        *puVar14 = 0;
        *puVar9 = FUN_1800535e0;
        *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar14;
        if (*(char *)(lVar2 + 0x14c5) != '\0') {
          FUN_1800facb0(piVar12);
          hEvent = *(HANDLE *)(lVar2 + 0x1340);
LAB_18005355b:
          SetEvent(hEvent);
          return;
        }
        goto LAB_1800535be;
      }
      FUN_1800facb0(piVar12);
      Sleep(100);
      FUN_1800fab60(piVar12);
    }
    plVar3 = *(longlong **)(lVar2 + 0x14a0);
    uVar10 = (ulonglong)(uVar15 != 0);
    uVar11 = uVar10 * 8;
    plVar3[uVar10] = param_1;
    *(undefined4 *)(plVar3 + uVar10 + 1) = param_2;
    *(uint **)(uVar11 + 0xc + (longlong)plVar3) = puVar4;
    *(undefined8 *)(uVar11 + 0x14 + (longlong)plVar3) = param_4;
    *(int *)(uVar11 + 0x1c + (longlong)plVar3) = param_6;
    local_88 = &local_78;
    _iStack_80 = uVar8;
    if (uVar15 != 0) {
      lVar2 = (uVar11 | 0x20) + (longlong)plVar3;
      *plVar3 = lVar2;
      FUN_18004f5d0((longlong *)&local_88,lVar2);
    }
    FUN_1800535e0(plVar3);
  }
  else {
    local_50 = 0;
    local_60 = 0;
    lStack_58 = 0;
    if ((bVar7) &&
       (bVar7 = FUN_1800ebdd4((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0xf6e0) + 0x17f0),uVar15,
                              &local_60), bVar7)) {
      FUN_18004f5d0((longlong *)&local_88,local_60);
    }
    uVar6 = local_50;
    lVar5 = lStack_58;
    lVar1 = local_60;
    uVar8 = local_70;
    puVar4 = local_78;
    lVar2 = *(longlong *)(param_1 + 0xf6e0);
    piVar12 = (int *)(lVar2 + 0x12c0);
    if (*(char *)(lVar2 + 0x14c4) != '\0') {
      puVar9 = (undefined8 *)FUN_1800fab80((longlong)piVar12,0x40);
      if (puVar9 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
        UNLOCK();
        puVar9[1] = 0x40;
        puVar14 = (undefined8 *)((longlong)puVar9 + 0x53U & 0xfffffffffffffff8);
        puVar9[2] = param_1;
        *(undefined4 *)(puVar9 + 3) = param_2;
        *(uint **)((longlong)puVar9 + 0x1c) = puVar4;
        *(undefined8 *)((longlong)puVar9 + 0x24) = param_4;
        *(undefined8 *)((longlong)puVar9 + 0x2c) = uVar8;
        *(int *)((longlong)puVar9 + 0x34) = param_6;
        puVar9[7] = lVar1;
        puVar9[8] = lVar5;
        *(undefined4 *)(puVar9 + 9) = uVar6;
        *puVar14 = 0;
        *puVar9 = FUN_18005361c;
        *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar14;
        if (*(char *)(lVar2 + 0x14c5) != '\0') {
          FUN_1800facb0(piVar12);
          hEvent = *(HANDLE *)(lVar2 + 0x1340);
          goto LAB_18005355b;
        }
        goto LAB_1800535be;
      }
      FUN_1800facb0(piVar12);
      Sleep(100);
      FUN_1800fab60(piVar12);
    }
    plVar3 = *(longlong **)(lVar2 + 0x14a0);
    *plVar3 = param_1;
    *(undefined4 *)(plVar3 + 1) = param_2;
    *(uint **)((longlong)plVar3 + 0xc) = puVar4;
    *(undefined8 *)((longlong)plVar3 + 0x14) = param_4;
    *(undefined8 *)((longlong)plVar3 + 0x1c) = uVar8;
    *(int *)((longlong)plVar3 + 0x24) = param_6;
    plVar3[5] = lVar1;
    plVar3[6] = lVar5;
    *(undefined4 *)(plVar3 + 7) = uVar6;
    FUN_18005361c(plVar3);
  }
LAB_1800535be:
  FUN_1800facb0(piVar12);
  return;
}

