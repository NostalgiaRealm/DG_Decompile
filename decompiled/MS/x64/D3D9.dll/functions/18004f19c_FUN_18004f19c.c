/*
 * FUN_18004f19c at 18004f19c
 * undefined __fastcall FUN_18004f19c(longlong param_1, undefined4 param_2, uint * param_3, undefined8 param_4, int param_5, undefined1 param_6)
 * Address ranges: 18004f19c-18004f5cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f19c(longlong param_1,undefined4 param_2,uint *param_3,undefined8 param_4,int param_5,
                  undefined1 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  HANDLE hEvent;
  int *piVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  uint **local_88;
  int iStack_80;
  undefined4 uStack_7c;
  uint *local_78;
  undefined8 local_70;
  int local_68;
  int local_64;
  longlong local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  lVar11 = *(longlong *)(param_1 + 0xf6e0);
  local_68 = param_3[2] << 4;
  bVar6 = false;
  local_64 = 0;
  local_78 = param_3;
  local_70 = param_4;
  FUN_1800fab60((int *)(lVar11 + 0x12c0));
  if (*(char *)(lVar11 + 0x14c4) != '\0') {
    if (*param_3 != *(uint *)(param_1 + 0x100f0)) {
      *(uint *)(param_1 + 0x100f0) = *param_3;
      uVar7 = FUN_18004def4((longlong *)(param_1 + 0xf7b8),param_3);
      *(undefined8 *)(param_1 + 0x100f8) = uVar7;
    }
    local_78 = *(uint **)(param_1 + 0x100f8);
    if ((local_78 != (uint *)0x0) && (uVar9 = 0, param_3[2] != 0)) {
      do {
        lVar11 = uVar9 + 0x214;
        uVar14 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar14;
        local_64 = (uint)*(byte *)((longlong)param_3 +
                                  (ulonglong)*(byte *)(lVar11 + (longlong)param_3) * 8 + 0x16) *
                   param_5 + local_64 + 0x10;
      } while (uVar14 < param_3[2]);
    }
    bVar6 = true;
  }
  puVar3 = local_78;
  iVar15 = local_64 + local_68;
  _iStack_80 = CONCAT44(uStack_7c,param_5);
  uVar7 = _iStack_80;
  uVar14 = iVar15 + 0x10;
  local_88 = &local_78;
  if ((bVar6) && (uVar14 < 0x3f00)) {
    lVar11 = *(longlong *)(param_1 + 0xf6e0);
    piVar10 = (int *)(lVar11 + 0x12c0);
    if (*(char *)(lVar11 + 0x14c4) != '\0') {
      uVar12 = (-(uint)(uVar14 != 0) & 8) + 0x20;
      if (uVar14 != 0) {
        uVar12 = uVar12 + (iVar15 + 0x17U & 0xfffffff8);
      }
      puVar8 = (undefined8 *)FUN_1800fab80((longlong)piVar10,uVar12);
      if (puVar8 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar11 + 0x14c0) = *(int *)(lVar11 + 0x14c0) + 1;
        UNLOCK();
        puVar8[1] = (ulonglong)uVar12;
        uVar9 = (ulonglong)(uVar14 != 0);
        lVar1 = uVar9 * 8;
        puVar8[uVar9 + 2] = param_1;
        *(undefined4 *)(puVar8 + uVar9 + 3) = param_2;
        *(uint **)(lVar1 + 0x1c + (longlong)puVar8) = puVar3;
        *(int *)(lVar1 + 0x24 + (longlong)puVar8) = param_5;
        *(undefined1 *)(puVar8 + uVar9 + 5) = param_6;
        puVar13 = (undefined8 *)((lVar1 + 0x10U | 0x23) + (longlong)puVar8 & 0xfffffffffffffff8);
        if (uVar14 != 0) {
          puVar8[2] = puVar13;
          FUN_18004f5d0((longlong *)&local_88,(longlong)puVar13);
          puVar13 = (undefined8 *)(((ulonglong)(iVar15 + 0x17) & 0xfffffff8) + (longlong)puVar13);
        }
        *puVar13 = 0;
        *puVar8 = FUN_18004f69c;
        *(undefined8 **)(lVar11 + 0x1350 + (ulonglong)*(uint *)(lVar11 + 0x14bc) * 0x28) = puVar13;
        if (*(char *)(lVar11 + 0x14c5) != '\0') {
          FUN_1800facb0(piVar10);
          hEvent = *(HANDLE *)(lVar11 + 0x1340);
LAB_18004f54a:
          SetEvent(hEvent);
          return;
        }
        goto LAB_18004f5ab;
      }
      FUN_1800facb0(piVar10);
      Sleep(100);
      FUN_1800fab60(piVar10);
    }
    plVar2 = *(longlong **)(lVar11 + 0x14a0);
    uVar9 = (ulonglong)(uVar14 != 0);
    plVar2[uVar9] = param_1;
    *(undefined4 *)(plVar2 + uVar9 + 1) = param_2;
    *(uint **)((longlong)plVar2 + uVar9 * 8 + 0xc) = puVar3;
    *(int *)((longlong)plVar2 + uVar9 * 8 + 0x14) = param_5;
    *(undefined1 *)(plVar2 + uVar9 + 3) = param_6;
    local_88 = &local_78;
    _iStack_80 = uVar7;
    if (uVar14 != 0) {
      lVar11 = uVar9 * 8 + 0x1c + (longlong)plVar2;
      *plVar2 = lVar11;
      FUN_18004f5d0((longlong *)&local_88,lVar11);
    }
    FUN_18004f69c(plVar2);
  }
  else {
    local_50 = 0;
    local_60 = 0;
    uStack_58 = 0;
    if ((bVar6) &&
       (bVar6 = FUN_1800ebdd4((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0xf6e0) + 0x17f0),uVar14,
                              &local_60), bVar6)) {
      FUN_18004f5d0((longlong *)&local_88,local_60);
    }
    uVar5 = local_50;
    uVar4 = uStack_58;
    lVar1 = local_60;
    uVar7 = local_70;
    puVar3 = local_78;
    lVar11 = *(longlong *)(param_1 + 0xf6e0);
    piVar10 = (int *)(lVar11 + 0x12c0);
    if (*(char *)(lVar11 + 0x14c4) != '\0') {
      puVar8 = (undefined8 *)FUN_1800fab80((longlong)piVar10,0x38);
      if (puVar8 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar11 + 0x14c0) = *(int *)(lVar11 + 0x14c0) + 1;
        UNLOCK();
        puVar13 = (undefined8 *)((longlong)puVar8 + 0x4fU & 0xfffffffffffffff8);
        puVar8[1] = 0x38;
        puVar8[2] = param_1;
        *(undefined4 *)(puVar8 + 3) = param_2;
        *(uint **)((longlong)puVar8 + 0x1c) = puVar3;
        *(undefined8 *)((longlong)puVar8 + 0x24) = uVar7;
        *(int *)((longlong)puVar8 + 0x2c) = param_5;
        *(undefined1 *)(puVar8 + 6) = param_6;
        *(longlong *)((longlong)puVar8 + 0x34) = lVar1;
        *(undefined8 *)((longlong)puVar8 + 0x3c) = uVar4;
        *(undefined4 *)((longlong)puVar8 + 0x44) = uVar5;
        *puVar13 = 0;
        *puVar8 = FUN_18004f6c8;
        *(undefined8 **)(lVar11 + 0x1350 + (ulonglong)*(uint *)(lVar11 + 0x14bc) * 0x28) = puVar13;
        if (*(char *)(lVar11 + 0x14c5) != '\0') {
          FUN_1800facb0(piVar10);
          hEvent = *(HANDLE *)(lVar11 + 0x1340);
          goto LAB_18004f54a;
        }
        goto LAB_18004f5ab;
      }
      FUN_1800facb0(piVar10);
      Sleep(100);
      FUN_1800fab60(piVar10);
    }
    plVar2 = *(longlong **)(lVar11 + 0x14a0);
    *plVar2 = param_1;
    *(undefined4 *)(plVar2 + 1) = param_2;
    *(uint **)((longlong)plVar2 + 0xc) = puVar3;
    *(undefined8 *)((longlong)plVar2 + 0x14) = uVar7;
    *(int *)((longlong)plVar2 + 0x1c) = param_5;
    *(undefined1 *)(plVar2 + 4) = param_6;
    *(longlong *)((longlong)plVar2 + 0x24) = lVar1;
    *(undefined8 *)((longlong)plVar2 + 0x2c) = uVar4;
    *(undefined4 *)((longlong)plVar2 + 0x34) = uVar5;
    FUN_18004f6c8(plVar2);
  }
LAB_18004f5ab:
  FUN_1800facb0(piVar10);
  return;
}

