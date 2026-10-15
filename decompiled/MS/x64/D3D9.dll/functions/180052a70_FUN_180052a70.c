/*
 * FUN_180052a70 at 180052a70
 * undefined __fastcall FUN_180052a70(longlong param_1, undefined4 param_2, uint * param_3, longlong param_4, undefined8 * param_5, uint param_6, uint param_7, uint * param_8, uint param_9, int param_10, byte param_11)
 * Address ranges: 180052a70-1800530ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180052a70(longlong param_1,undefined4 param_2,uint *param_3,longlong param_4,
                  undefined8 *param_5,uint param_6,uint param_7,uint *param_8,uint param_9,
                  int param_10,byte param_11)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  int *piVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  uint local_res8 [2];
  undefined4 local_res10;
  uint *local_res18;
  longlong local_res20;
  uint local_88;
  uint local_84;
  uint local_80;
  uint *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  longlong lStack_60;
  undefined4 local_58;
  
  lVar3 = *(longlong *)(param_1 + 0xf6e0);
  puVar16 = (undefined8 *)0x0;
  local_88 = 0;
  local_70 = (undefined8 *)0x0;
  uVar14 = 0;
  uVar18 = 0;
  plVar12 = (longlong *)(lVar3 + 0x12c0);
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1800fab60((int *)plVar12);
  bVar4 = true;
  if (*(char *)(lVar3 + 0x14c4) == '\0') {
    bVar5 = false;
    local_res8[0] = param_7;
    local_78 = param_3;
  }
  else {
    local_84 = 0;
    if (*param_3 != *(uint *)(param_1 + 0x100f0)) {
      plVar12 = (longlong *)(param_1 + 0xf7b8);
      *(uint *)(param_1 + 0x100f0) = *param_3;
      uVar6 = FUN_18004def4(plVar12,param_3);
      *(undefined8 *)(param_1 + 0x100f8) = uVar6;
    }
    local_78 = *(uint **)(param_1 + 0x100f8);
    if (local_78 == (uint *)0x0) {
      uVar14 = 0;
      local_80 = 7;
    }
    else {
      uVar18 = (uint)param_11;
      local_res8[0] = 0;
      uVar14 = param_9;
      FUN_18004b5c0(plVar12,param_8,param_9,param_11,&local_88,local_res8);
      iVar11 = (uVar18 * 2 + 2) * uVar14;
      param_7 = (local_res8[0] - local_88) + 1;
      local_84 = param_7 * param_3[3];
      puVar16 = (undefined8 *)((ulonglong)((param_10 + local_88) * param_6) + (longlong)param_5);
      uVar18 = iVar11 + 0x20 + local_84;
      uVar14 = iVar11 + 0x27 + local_84;
      local_80 = iVar11 + 0x27 + local_84;
      local_70 = puVar16;
    }
    local_res8[0] = param_7;
    if (uVar18 < 0x3f00) {
      lVar3 = *(longlong *)(param_1 + 0xf6e0);
      uVar2 = param_3[3];
      cVar1 = *(char *)(lVar3 + 0x14c4);
      if (cVar1 == '\0') {
LAB_180052d35:
        if (cVar1 == '\0') goto LAB_180052d42;
      }
      else {
        uVar17 = (-(uint)(uVar18 != 0) & 8) + 0x30;
        if (uVar18 != 0) {
          uVar17 = uVar17 + (uVar14 & 0xfffffff8);
        }
        puVar16 = (undefined8 *)FUN_1800fab80(lVar3 + 0x12c0,uVar17);
        param_7 = local_res8[0];
        if (puVar16 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(lVar3 + 0x14c0) = *(int *)(lVar3 + 0x14c0) + 1;
          UNLOCK();
          puVar16[1] = (ulonglong)uVar17;
          uVar9 = (ulonglong)(uVar18 != 0);
          *(uint *)(puVar16 + uVar9 + 2) = local_84;
          *(longlong *)((longlong)puVar16 + uVar9 * 8 + 0x14) = param_1;
          *(undefined4 *)((longlong)puVar16 + uVar9 * 8 + 0x1c) = local_res10;
          puVar16[uVar9 + 4] = local_78;
          puVar16[uVar9 + 5] = local_res20;
          *(uint *)(puVar16 + uVar9 + 6) = uVar2;
          *(uint *)((longlong)puVar16 + uVar9 * 8 + 0x34) = local_res8[0];
          *(uint *)(puVar16 + uVar9 + 7) = param_9;
          *(byte *)((longlong)puVar16 + uVar9 * 8 + 0x3c) = param_11;
          puVar7 = (uint *)(uVar9 * 8 + 0x47 + (longlong)puVar16 & 0xfffffffffffffff8);
          local_res18 = puVar7;
          if (uVar18 != 0) {
            uVar9 = (ulonglong)local_res8[0];
            puVar16[2] = puVar7;
            puVar8 = FUN_18004ddfc(local_res8[0],param_3[3],local_70,param_6,(undefined8 *)puVar7,
                                   param_3[3]);
            FUN_18004b730(CONCAT71((int7)(uVar9 >> 8),param_11),(int *)param_8,
                          (int *)((longlong)puVar8 + 0xfU & 0xfffffffffffffff0),param_9,-local_88,
                          param_11);
            puVar7 = (uint *)(((ulonglong)local_80 & 0xfffffff8) + (longlong)local_res18);
          }
          puVar7[0] = 0;
          puVar7[1] = 0;
          *puVar16 = FUN_1800530b0;
          *(uint **)(lVar3 + 0x1350 + (ulonglong)*(uint *)(lVar3 + 0x14bc) * 0x28) = puVar7;
          if (*(char *)(lVar3 + 0x14c5) != '\0') {
            FUN_1800facb0((undefined4 *)(lVar3 + 0x12c0));
            SetEvent(*(HANDLE *)(lVar3 + 0x1340));
            bVar4 = false;
          }
          goto LAB_180052d35;
        }
        FUN_1800facb0((int *)(lVar3 + 0x12c0));
        Sleep(100);
        FUN_1800fab60((int *)(lVar3 + 0x12c0));
        param_7 = local_res8[0];
LAB_180052d42:
        plVar12 = *(longlong **)(lVar3 + 0x14a0);
        uVar9 = (ulonglong)(uVar18 != 0);
        uVar10 = uVar9 * 8;
        *(uint *)(plVar12 + uVar9) = local_84;
        *(longlong *)(uVar10 + 4 + (longlong)plVar12) = param_1;
        *(undefined4 *)(uVar10 + 0xc + (longlong)plVar12) = local_res10;
        plVar12[uVar9 + 2] = (longlong)local_78;
        plVar12[uVar9 + 3] = local_res20;
        *(uint *)(plVar12 + uVar9 + 4) = uVar2;
        *(uint *)(uVar10 + 0x24 + (longlong)plVar12) = param_7;
        *(uint *)(plVar12 + uVar9 + 5) = param_9;
        *(byte *)(uVar10 + 0x2c + (longlong)plVar12) = param_11;
        if (uVar18 != 0) {
          puVar16 = (undefined8 *)((uVar10 | 0x30) + (longlong)plVar12);
          *plVar12 = (longlong)puVar16;
          uVar9 = (ulonglong)param_7;
          puVar16 = FUN_18004ddfc(param_7,param_3[3],local_70,param_6,puVar16,param_3[3]);
          FUN_18004b730(uVar9,(int *)param_8,(int *)((longlong)puVar16 + 0xfU & 0xfffffffffffffff0),
                        param_9,-local_88,param_11);
        }
        FUN_1800530b0(plVar12);
      }
      if (!bVar4) {
        return;
      }
      piVar13 = (int *)(lVar3 + 0x12c0);
      goto LAB_180053098;
    }
    bVar5 = true;
    uVar14 = uVar18;
  }
  uVar18 = local_res8[0];
  local_84 = param_6;
  local_58 = 0;
  local_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  if (bVar5) {
    bVar5 = FUN_1800ebdd4((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0xf6e0) + 0x17f0),uVar14,
                          (longlong *)&local_68);
    puVar8 = local_68;
    uVar14 = local_84;
    if (bVar5) {
      uVar9 = (ulonglong)uVar18;
      param_5 = local_68;
      param_10 = 0;
      uVar14 = local_res18[3];
      local_84 = uVar14;
      puVar16 = FUN_18004ddfc(uVar18,uVar14,puVar16,param_6,local_68,uVar14);
      puVar7 = (uint *)((longlong)puVar16 + 0xfU & 0xfffffffffffffff0);
      FUN_18004b730(CONCAT71((int7)(uVar9 >> 8),param_11),(int *)param_8,(int *)puVar7,param_9,
                    -local_88,param_11);
      param_8 = puVar7;
    }
  }
  else {
    puVar8 = (undefined8 *)0x0;
    uVar14 = param_6;
  }
  lVar3 = *(longlong *)(param_1 + 0xf6e0);
  piVar13 = (int *)(lVar3 + 0x12c0);
  local_res18 = (uint *)CONCAT71(local_res18._1_7_,*(char *)(lVar3 + 0x14c4) == '\0');
  uVar18 = local_res8[0];
  if (*(char *)(lVar3 + 0x14c4) == '\0') {
LAB_180053022:
    if ((char)local_res18 != '\0') goto LAB_180053028;
  }
  else {
    puVar16 = (undefined8 *)FUN_1800fab80((longlong)piVar13,0x58);
    uVar18 = local_res8[0];
    if (puVar16 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar3 + 0x14c0) = *(int *)(lVar3 + 0x14c0) + 1;
      UNLOCK();
      puVar16[1] = 0x58;
      puVar15 = (undefined8 *)((longlong)puVar16 + 0x6bU & 0xfffffffffffffff8);
      puVar16[2] = param_1;
      *(undefined4 *)(puVar16 + 3) = local_res10;
      *(uint **)((longlong)puVar16 + 0x1c) = local_78;
      *(longlong *)((longlong)puVar16 + 0x24) = local_res20;
      *(undefined8 **)((longlong)puVar16 + 0x2c) = param_5;
      *(uint *)((longlong)puVar16 + 0x34) = uVar14;
      *(uint *)(puVar16 + 7) = local_res8[0];
      *(uint **)((longlong)puVar16 + 0x3c) = param_8;
      *(uint *)((longlong)puVar16 + 0x44) = param_9;
      *(int *)(puVar16 + 9) = param_10;
      *(byte *)((longlong)puVar16 + 0x4c) = param_11;
      puVar16[10] = puVar8;
      puVar16[0xb] = lStack_60;
      *(undefined4 *)(puVar16 + 0xc) = local_58;
      *puVar15 = 0;
      *puVar16 = FUN_180053114;
      *(undefined8 **)(lVar3 + 0x1350 + (ulonglong)*(uint *)(lVar3 + 0x14bc) * 0x28) = puVar15;
      if (*(char *)(lVar3 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar13);
        SetEvent(*(HANDLE *)(lVar3 + 0x1340));
        bVar4 = false;
      }
      goto LAB_180053022;
    }
    FUN_1800facb0(piVar13);
    Sleep(100);
    FUN_1800fab60(piVar13);
    uVar18 = local_res8[0];
LAB_180053028:
    plVar12 = *(longlong **)(lVar3 + 0x14a0);
    *plVar12 = param_1;
    *(undefined4 *)(plVar12 + 1) = local_res10;
    *(uint **)((longlong)plVar12 + 0xc) = local_78;
    *(longlong *)((longlong)plVar12 + 0x14) = local_res20;
    *(undefined8 **)((longlong)plVar12 + 0x1c) = param_5;
    *(uint *)((longlong)plVar12 + 0x24) = local_84;
    *(uint *)(plVar12 + 5) = uVar18;
    *(uint **)((longlong)plVar12 + 0x2c) = param_8;
    *(uint *)((longlong)plVar12 + 0x34) = param_9;
    *(int *)(plVar12 + 7) = param_10;
    *(byte *)((longlong)plVar12 + 0x3c) = param_11;
    plVar12[8] = (longlong)puVar8;
    plVar12[9] = lStack_60;
    *(undefined4 *)(plVar12 + 10) = local_58;
    FUN_180053114(plVar12);
  }
  if (!bVar4) {
    return;
  }
LAB_180053098:
  FUN_1800facb0(piVar13);
  return;
}

