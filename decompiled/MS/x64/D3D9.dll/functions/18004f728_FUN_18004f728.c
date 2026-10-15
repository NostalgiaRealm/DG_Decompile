/*
 * FUN_18004f728 at 18004f728
 * undefined __fastcall FUN_18004f728(longlong param_1, undefined4 param_2, uint * param_3, undefined8 param_4, uint param_5, uint * param_6, uint param_7, uint param_8, uint param_9, undefined1 param_10)
 * Address ranges: 18004f728-18004fcb5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f728(longlong param_1,undefined4 param_2,uint *param_3,undefined8 param_4,uint param_5
                  ,uint *param_6,uint param_7,uint param_8,uint param_9,undefined1 param_10)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  uint *puVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int *piVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint **local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint **local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint *local_88;
  undefined8 local_80;
  uint *local_78;
  int local_70;
  int local_6c;
  uint local_68;
  uint local_64 [11];
  
  puVar4 = param_6;
  lVar1 = *(longlong *)(param_1 + 0xf6e0);
  bVar3 = false;
  plVar12 = (longlong *)(lVar1 + 0x12c0);
  local_70 = param_3[2] << 4;
  local_68 = param_8;
  local_78 = param_6;
  local_6c = 0;
  local_64[0] = 0;
  local_64[1] = 0;
  local_88 = param_3;
  local_80 = param_4;
  FUN_1800fab60((int *)plVar12);
  bVar7 = true;
  uVar16 = param_5;
  if (*(char *)(lVar1 + 0x14c4) != '\0') {
    if (*param_3 != *(uint *)(param_1 + 0x100f0)) {
      plVar12 = (longlong *)(param_1 + 0xf7b8);
      *(uint *)(param_1 + 0x100f0) = *param_3;
      uVar8 = FUN_18004def4(plVar12,param_3);
      *(undefined8 *)(param_1 + 0x100f8) = uVar8;
    }
    local_88 = *(uint **)(param_1 + 0x100f8);
    uVar16 = param_5;
    if (local_88 != (uint *)0x0) {
      uVar14 = param_9 & 0xff;
      param_5 = 0;
      uVar18 = param_7;
      FUN_18004b5c0(plVar12,puVar4,param_7,(char)param_9,local_64,&param_5);
      uVar10 = 0;
      uVar16 = (param_5 - local_64[0]) + 1;
      if (param_3[2] != 0) {
        do {
          lVar1 = uVar10 + 0x214;
          uVar17 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar17;
          local_6c = *(byte *)((longlong)param_3 +
                              (ulonglong)*(byte *)(lVar1 + (longlong)param_3) * 8 + 0x16) * uVar16 +
                     local_6c + 0x10;
        } while (uVar17 < param_3[2]);
      }
      local_64[1] = (uVar14 * 2 + 2) * uVar18;
    }
    bVar3 = true;
  }
  param_8 = local_6c + local_64[1] + local_70;
  uVar5 = (char)param_9;
  uVar18 = param_8 + 0x28;
  local_98 = CONCAT44(param_7,uVar16);
  lVar1 = local_98;
  uStack_90 = CONCAT71(uStack_90._1_7_,(char)param_9);
  uVar8 = uStack_90;
  local_a8 = &local_88;
  lStack_a0 = param_1;
  if ((bVar3) && (uVar18 < 0x3f00)) {
    lVar2 = *(longlong *)(param_1 + 0xf6e0);
    param_6 = local_88;
    param_5 = CONCAT31(param_5._1_3_,*(char *)(lVar2 + 0x14c4) == '\0');
    local_b8 = local_98;
    uStack_b0 = uStack_90;
    local_c8 = &local_88;
    lStack_c0 = param_1;
    if (*(char *)(lVar2 + 0x14c4) != '\0') {
      uVar14 = (-(uint)(uVar18 != 0) & 8) + 0x28;
      if (uVar18 != 0) {
        uVar14 = uVar14 + (param_8 + 0x2f & 0xfffffff8);
      }
      puVar9 = (undefined8 *)FUN_1800fab80(lVar2 + 0x12c0,uVar14);
      if (puVar9 == (undefined8 *)0x0) {
        FUN_1800facb0((int *)(lVar2 + 0x12c0));
        Sleep(100);
        FUN_1800fab60((int *)(lVar2 + 0x12c0));
        param_5 = CONCAT31(param_5._1_3_,1);
      }
      else {
        LOCK();
        *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
        UNLOCK();
        puVar9[1] = (ulonglong)uVar14;
        uVar10 = (ulonglong)(uVar18 != 0);
        puVar9[uVar10 + 2] = param_1;
        *(undefined4 *)(puVar9 + uVar10 + 3) = param_2;
        puVar15 = (undefined8 *)(uVar10 * 8 + 0x3b + (longlong)puVar9 & 0xfffffffffffffff8);
        *(uint **)((longlong)puVar9 + uVar10 * 8 + 0x1c) = param_6;
        *(uint *)((longlong)puVar9 + uVar10 * 8 + 0x24) = uVar16;
        *(uint *)(puVar9 + uVar10 + 5) = param_7;
        *(char *)((longlong)puVar9 + uVar10 * 8 + 0x2c) = (char)param_9;
        *(undefined1 *)(puVar9 + uVar10 + 6) = param_10;
        if (uVar18 != 0) {
          puVar9[2] = puVar15;
          FUN_18004fcb8((longlong *)&local_c8,puVar15);
          puVar15 = (undefined8 *)(((ulonglong)(param_8 + 0x2f) & 0xfffffff8) + (longlong)puVar15);
        }
        *puVar15 = 0;
        *puVar9 = FUN_18004fdd0;
        *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar15;
        if (*(char *)(lVar2 + 0x14c5) != '\0') {
          FUN_1800facb0((undefined4 *)(lVar2 + 0x12c0));
          SetEvent(*(HANDLE *)(lVar2 + 0x1340));
          bVar7 = false;
        }
      }
    }
    piVar13 = (int *)(lVar2 + 0x12c0);
    if ((char)param_5 != '\0') {
      plVar12 = *(longlong **)(lVar2 + 0x14a0);
      uVar10 = (ulonglong)(uVar18 != 0);
      uVar11 = uVar10 * 8;
      plVar12[uVar10] = param_1;
      *(undefined4 *)(plVar12 + uVar10 + 1) = param_2;
      *(uint **)(uVar11 + 0xc + (longlong)plVar12) = param_6;
      *(uint *)(uVar11 + 0x14 + (longlong)plVar12) = uVar16;
      *(uint *)(plVar12 + uVar10 + 3) = param_7;
      *(char *)(uVar11 + 0x1c + (longlong)plVar12) = (char)param_9;
      *(undefined1 *)(plVar12 + uVar10 + 4) = param_10;
      local_a8 = &local_88;
      lStack_a0 = param_1;
      local_98 = lVar1;
      uStack_90 = uVar8;
      if (uVar18 != 0) {
        puVar9 = (undefined8 *)((uVar11 | 0x24) + (longlong)plVar12);
        *plVar12 = (longlong)puVar9;
        FUN_18004fcb8((longlong *)&local_a8,puVar9);
      }
      FUN_18004fdd0(plVar12);
    }
    if (!bVar7) {
      return;
    }
  }
  else {
    local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
    local_c8 = (uint **)0x0;
    lStack_c0 = 0;
    if ((bVar3) &&
       (bVar7 = FUN_1800ebdd4((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0xf6e0) + 0x17f0),uVar18,
                              (longlong *)&local_c8), bVar7)) {
      FUN_18004fcb8((longlong *)&local_a8,local_c8);
    }
    puVar4 = local_78;
    uVar8 = local_80;
    lVar1 = *(longlong *)(param_1 + 0xf6e0);
    uVar6 = (undefined4)local_b8;
    param_9 = local_68;
    piVar13 = (int *)(lVar1 + 0x12c0);
    param_6 = local_88;
    if (*(char *)(lVar1 + 0x14c4) != '\0') {
      puVar9 = (undefined8 *)FUN_1800fab80((longlong)piVar13,0x50);
      if (puVar9 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar1 + 0x14c0) = *(int *)(lVar1 + 0x14c0) + 1;
        UNLOCK();
        puVar9[1] = 0x50;
        puVar15 = (undefined8 *)((longlong)puVar9 + 99U & 0xfffffffffffffff8);
        puVar9[2] = param_1;
        *(undefined4 *)(puVar9 + 3) = param_2;
        *(uint **)((longlong)puVar9 + 0x1c) = param_6;
        *(undefined8 *)((longlong)puVar9 + 0x24) = uVar8;
        *(uint *)((longlong)puVar9 + 0x2c) = uVar16;
        puVar9[6] = puVar4;
        *(uint *)(puVar9 + 7) = param_7;
        *(uint *)((longlong)puVar9 + 0x3c) = param_9;
        *(undefined1 *)(puVar9 + 8) = uVar5;
        *(undefined1 *)((longlong)puVar9 + 0x44) = param_10;
        puVar9[9] = local_c8;
        puVar9[10] = lStack_c0;
        *(undefined4 *)(puVar9 + 0xb) = uVar6;
        *puVar15 = 0;
        *puVar9 = FUN_18004fe1c;
        *(undefined8 **)(lVar1 + 0x1350 + (ulonglong)*(uint *)(lVar1 + 0x14bc) * 0x28) = puVar15;
        if (*(char *)(lVar1 + 0x14c5) != '\0') {
          FUN_1800facb0(piVar13);
          SetEvent(*(HANDLE *)(lVar1 + 0x1340));
          return;
        }
        goto LAB_18004fc8c;
      }
      FUN_1800facb0(piVar13);
      Sleep(100);
      FUN_1800fab60(piVar13);
    }
    plVar12 = *(longlong **)(lVar1 + 0x14a0);
    *plVar12 = param_1;
    *(undefined4 *)(plVar12 + 1) = param_2;
    *(uint **)((longlong)plVar12 + 0xc) = param_6;
    *(undefined8 *)((longlong)plVar12 + 0x14) = uVar8;
    *(uint *)((longlong)plVar12 + 0x1c) = uVar16;
    plVar12[4] = (longlong)puVar4;
    *(uint *)(plVar12 + 5) = param_7;
    *(uint *)((longlong)plVar12 + 0x2c) = param_9;
    *(undefined1 *)(plVar12 + 6) = uVar5;
    *(undefined1 *)((longlong)plVar12 + 0x34) = param_10;
    plVar12[7] = (longlong)local_c8;
    plVar12[8] = lStack_c0;
    *(undefined4 *)(plVar12 + 9) = uVar6;
    FUN_18004fe1c(plVar12);
  }
LAB_18004fc8c:
  FUN_1800facb0(piVar13);
  return;
}

