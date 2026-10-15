/*
 * FUN_18005368c at 18005368c
 * undefined __fastcall FUN_18005368c(longlong param_1, undefined4 param_2, uint * param_3, undefined8 param_4, uint * param_5, uint param_6, uint * param_7, uint param_8, uint param_9, uint param_10)
 * Address ranges: 18005368c-180053c1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005368c(longlong param_1,undefined4 param_2,uint *param_3,undefined8 param_4,
                  uint *param_5,uint param_6,uint *param_7,uint param_8,uint param_9,uint param_10)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  uint *puVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
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
  uint *local_80;
  uint *local_78;
  int local_70;
  int local_6c;
  uint local_68;
  uint local_64 [11];
  
  puVar4 = param_7;
  lVar1 = *(longlong *)(param_1 + 0xf6e0);
  bVar3 = false;
  plVar12 = (longlong *)(lVar1 + 0x12c0);
  local_80 = param_5;
  local_70 = param_3[2] << 4;
  local_68 = param_9;
  local_78 = param_7;
  local_6c = 0;
  local_64[0] = 0;
  local_64[1] = 0;
  local_88 = param_3;
  FUN_1800fab60((int *)plVar12);
  bVar8 = true;
  uVar16 = param_6;
  if (*(char *)(lVar1 + 0x14c4) != '\0') {
    if (*param_3 != *(uint *)(param_1 + 0x100f0)) {
      plVar12 = (longlong *)(param_1 + 0xf7b8);
      *(uint *)(param_1 + 0x100f0) = *param_3;
      uVar9 = FUN_18004def4(plVar12,param_3);
      *(undefined8 *)(param_1 + 0x100f8) = uVar9;
    }
    local_88 = *(uint **)(param_1 + 0x100f8);
    uVar16 = param_6;
    if (local_88 != (uint *)0x0) {
      uVar14 = param_10 & 0xff;
      param_6 = 0;
      uVar18 = param_8;
      FUN_18004b5c0(plVar12,puVar4,param_8,(char)param_10,local_64,&param_6);
      uVar11 = 0;
      uVar16 = (param_6 - local_64[0]) + 1;
      if (param_3[2] != 0) {
        do {
          lVar1 = uVar11 + 0x214;
          uVar17 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar17;
          local_6c = *(byte *)((longlong)param_3 +
                              (ulonglong)*(byte *)(lVar1 + (longlong)param_3) * 8 + 0x16) * uVar16 +
                     local_6c + 0x10;
        } while (uVar17 < param_3[2]);
      }
      local_64[1] = (uVar14 * 2 + 2) * uVar18;
    }
    bVar3 = true;
  }
  puVar4 = local_88;
  param_9 = local_6c + local_64[1] + local_70;
  uVar5 = (char)param_10;
  uVar18 = param_9 + 0x28;
  local_98 = CONCAT44(param_8,uVar16);
  lVar1 = local_98;
  uStack_90 = CONCAT71(uStack_90._1_7_,(char)param_10);
  uVar9 = uStack_90;
  local_a8 = &local_88;
  lStack_a0 = param_1;
  if ((bVar3) && (uVar18 < 0x3f00)) {
    lVar2 = *(longlong *)(param_1 + 0xf6e0);
    param_6 = CONCAT31(param_6._1_3_,*(char *)(lVar2 + 0x14c4) == '\0');
    local_b8 = local_98;
    uStack_b0 = uStack_90;
    local_c8 = &local_88;
    lStack_c0 = param_1;
    if (*(char *)(lVar2 + 0x14c4) != '\0') {
      uVar14 = (-(uint)(uVar18 != 0) & 8) + 0x28;
      if (uVar18 != 0) {
        uVar14 = uVar14 + (param_9 + 0x2f & 0xfffffff8);
      }
      puVar10 = (undefined8 *)FUN_1800fab80(lVar2 + 0x12c0,uVar14);
      if (puVar10 == (undefined8 *)0x0) {
        FUN_1800facb0((int *)(lVar2 + 0x12c0));
        Sleep(100);
        FUN_1800fab60((int *)(lVar2 + 0x12c0));
        param_6 = CONCAT31(param_6._1_3_,1);
      }
      else {
        LOCK();
        *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
        UNLOCK();
        puVar10[1] = (ulonglong)uVar14;
        uVar11 = (ulonglong)(uVar18 != 0);
        puVar10[uVar11 + 2] = param_1;
        *(undefined4 *)(puVar10 + uVar11 + 3) = param_2;
        puVar15 = (undefined8 *)(uVar11 * 8 + 0x3f + (longlong)puVar10 & 0xfffffffffffffff8);
        *(uint **)((longlong)puVar10 + uVar11 * 8 + 0x1c) = puVar4;
        *(undefined8 *)((longlong)puVar10 + uVar11 * 8 + 0x24) = param_4;
        *(uint *)((longlong)puVar10 + uVar11 * 8 + 0x2c) = uVar16;
        *(uint *)(puVar10 + uVar11 + 6) = param_8;
        *(char *)((longlong)puVar10 + uVar11 * 8 + 0x34) = (char)param_10;
        if (uVar18 != 0) {
          puVar10[2] = puVar15;
          FUN_18004fcb8((longlong *)&local_c8,puVar15);
          puVar15 = (undefined8 *)(((ulonglong)(param_9 + 0x2f) & 0xfffffff8) + (longlong)puVar15);
        }
        *puVar15 = 0;
        *puVar10 = FUN_180053c20;
        *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar15;
        if (*(char *)(lVar2 + 0x14c5) != '\0') {
          FUN_1800facb0((undefined4 *)(lVar2 + 0x12c0));
          SetEvent(*(HANDLE *)(lVar2 + 0x1340));
          bVar8 = false;
        }
      }
    }
    piVar13 = (int *)(lVar2 + 0x12c0);
    if ((char)param_6 != '\0') {
      plVar12 = *(longlong **)(lVar2 + 0x14a0);
      uVar11 = (ulonglong)(uVar18 != 0);
      plVar12[uVar11] = param_1;
      *(undefined4 *)(plVar12 + uVar11 + 1) = param_2;
      *(uint **)((longlong)plVar12 + uVar11 * 8 + 0xc) = puVar4;
      *(undefined8 *)((longlong)plVar12 + uVar11 * 8 + 0x14) = param_4;
      *(uint *)((longlong)plVar12 + uVar11 * 8 + 0x1c) = uVar16;
      *(uint *)(plVar12 + uVar11 + 4) = param_8;
      *(char *)((longlong)plVar12 + uVar11 * 8 + 0x24) = (char)param_10;
      local_a8 = &local_88;
      lStack_a0 = param_1;
      local_98 = lVar1;
      uStack_90 = uVar9;
      if (uVar18 != 0) {
        *plVar12 = (longlong)(plVar12 + uVar11 + 5);
        FUN_18004fcb8((longlong *)&local_a8,plVar12 + uVar11 + 5);
      }
      FUN_180053c20(plVar12);
    }
    if (!bVar8) {
      return;
    }
  }
  else {
    local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
    local_c8 = (uint **)0x0;
    lStack_c0 = 0;
    if ((bVar3) &&
       (bVar8 = FUN_1800ebdd4((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0xf6e0) + 0x17f0),uVar18,
                              (longlong *)&local_c8), bVar8)) {
      FUN_18004fcb8((longlong *)&local_a8,local_c8);
    }
    puVar7 = local_78;
    puVar4 = local_88;
    lVar1 = *(longlong *)(param_1 + 0xf6e0);
    uVar6 = (undefined4)local_b8;
    param_10 = local_68;
    piVar13 = (int *)(lVar1 + 0x12c0);
    param_7 = local_80;
    if (*(char *)(lVar1 + 0x14c4) != '\0') {
      puVar10 = (undefined8 *)FUN_1800fab80((longlong)piVar13,0x50);
      if (puVar10 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar1 + 0x14c0) = *(int *)(lVar1 + 0x14c0) + 1;
        UNLOCK();
        puVar15 = (undefined8 *)((longlong)puVar10 + 0x67U & 0xfffffffffffffff8);
        puVar10[1] = 0x50;
        puVar10[2] = param_1;
        *(undefined4 *)(puVar10 + 3) = param_2;
        *(uint **)((longlong)puVar10 + 0x1c) = puVar4;
        *(undefined8 *)((longlong)puVar10 + 0x24) = param_4;
        *(uint **)((longlong)puVar10 + 0x2c) = param_7;
        *(uint *)((longlong)puVar10 + 0x34) = uVar16;
        puVar10[7] = puVar7;
        *(uint *)(puVar10 + 8) = param_8;
        *(uint *)((longlong)puVar10 + 0x44) = param_10;
        *(undefined1 *)(puVar10 + 9) = uVar5;
        *(uint ***)((longlong)puVar10 + 0x4c) = local_c8;
        *(longlong *)((longlong)puVar10 + 0x54) = lStack_c0;
        *(undefined4 *)((longlong)puVar10 + 0x5c) = uVar6;
        *puVar15 = 0;
        *puVar10 = FUN_180053c7c;
        *(undefined8 **)(lVar1 + 0x1350 + (ulonglong)*(uint *)(lVar1 + 0x14bc) * 0x28) = puVar15;
        if (*(char *)(lVar1 + 0x14c5) != '\0') {
          FUN_1800facb0(piVar13);
          SetEvent(*(HANDLE *)(lVar1 + 0x1340));
          return;
        }
        goto LAB_180053bf5;
      }
      FUN_1800facb0(piVar13);
      Sleep(100);
      FUN_1800fab60(piVar13);
    }
    plVar12 = *(longlong **)(lVar1 + 0x14a0);
    *plVar12 = param_1;
    *(undefined4 *)(plVar12 + 1) = param_2;
    *(uint **)((longlong)plVar12 + 0xc) = puVar4;
    *(undefined8 *)((longlong)plVar12 + 0x14) = param_4;
    *(uint **)((longlong)plVar12 + 0x1c) = param_7;
    *(uint *)((longlong)plVar12 + 0x24) = uVar16;
    plVar12[5] = (longlong)puVar7;
    *(uint *)(plVar12 + 6) = param_8;
    *(uint *)((longlong)plVar12 + 0x34) = param_10;
    *(undefined1 *)(plVar12 + 7) = uVar5;
    *(uint ***)((longlong)plVar12 + 0x3c) = local_c8;
    *(longlong *)((longlong)plVar12 + 0x44) = lStack_c0;
    *(undefined4 *)((longlong)plVar12 + 0x4c) = uVar6;
    FUN_180053c7c(plVar12);
  }
LAB_180053bf5:
  FUN_1800facb0(piVar13);
  return;
}

