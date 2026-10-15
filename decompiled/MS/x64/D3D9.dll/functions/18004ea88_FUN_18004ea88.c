/*
 * FUN_18004ea88 at 18004ea88
 * undefined __fastcall FUN_18004ea88(longlong param_1, undefined4 param_2, uint * param_3, undefined8 * param_4, uint param_5, uint param_6, uint * param_7, uint param_8, int param_9, byte param_10, undefined1 param_11)
 * Address ranges: 18004ea88-18004f0b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004ea88(longlong param_1,undefined4 param_2,uint *param_3,undefined8 *param_4,
                  uint param_5,uint param_6,uint *param_7,uint param_8,int param_9,byte param_10,
                  undefined1 param_11)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  int *piVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined8 *local_res18;
  undefined8 *local_res20;
  uint local_78;
  uint local_74;
  uint *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  lVar2 = *(longlong *)(param_1 + 0xf6e0);
  puVar13 = (undefined8 *)0x0;
  local_78 = 0;
  local_68 = (undefined8 *)0x0;
  uVar12 = 0;
  uVar17 = 0;
  plVar10 = (longlong *)(lVar2 + 0x12c0);
  local_res10 = param_2;
  local_res20 = param_4;
  FUN_1800fab60((int *)plVar10);
  bVar3 = true;
  if (*(char *)(lVar2 + 0x14c4) == '\0') {
    bVar4 = false;
    local_res18 = (undefined8 *)CONCAT44(local_res18._4_4_,param_6);
    local_70 = param_3;
  }
  else {
    local_res8 = (uint *)((ulonglong)local_res8._4_4_ << 0x20);
    if (*param_3 != *(uint *)(param_1 + 0x100f0)) {
      plVar10 = (longlong *)(param_1 + 0xf7b8);
      *(uint *)(param_1 + 0x100f0) = *param_3;
      uVar5 = FUN_18004def4(plVar10,param_3);
      *(undefined8 *)(param_1 + 0x100f8) = uVar5;
    }
    local_70 = *(uint **)(param_1 + 0x100f8);
    if (local_70 == (uint *)0x0) {
      uVar12 = 0;
      local_74 = 7;
    }
    else {
      uVar17 = (uint)param_10;
      local_res8 = (uint *)((ulonglong)local_res8 & 0xffffffff00000000);
      uVar12 = param_8;
      FUN_18004b5c0(plVar10,param_7,param_8,param_10,&local_78,(uint *)&local_res8);
      iVar9 = (uVar17 * 2 + 2) * uVar12;
      param_6 = ((uint)local_res8 - local_78) + 1;
      iVar14 = param_6 * param_3[3];
      puVar13 = (undefined8 *)((ulonglong)((param_9 + local_78) * param_5) + (longlong)local_res20);
      local_res8 = (uint *)CONCAT44(local_res8._4_4_,iVar14);
      uVar17 = iVar9 + 0x20 + iVar14;
      uVar12 = iVar9 + 0x27 + iVar14;
      local_74 = iVar9 + 0x27 + iVar14;
      local_68 = puVar13;
    }
    local_res18 = (undefined8 *)CONCAT44(local_res18._4_4_,param_6);
    if (uVar17 < 0x3f00) {
      lVar2 = *(longlong *)(param_1 + 0xf6e0);
      local_res20 = (undefined8 *)CONCAT44(local_res20._4_4_,param_3[3]);
      cVar1 = *(char *)(lVar2 + 0x14c4);
      if (cVar1 == '\0') {
LAB_18004ed43:
        if (cVar1 == '\0') goto LAB_18004ed50;
      }
      else {
        uVar16 = (-(uint)(uVar17 != 0) & 8) + 0x30;
        if (uVar17 != 0) {
          uVar16 = uVar16 + (uVar12 & 0xfffffff8);
        }
        puVar13 = (undefined8 *)FUN_1800fab80(lVar2 + 0x12c0,uVar16);
        if (puVar13 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
          UNLOCK();
          param_6 = (uint)local_res18;
          puVar13[1] = (ulonglong)uVar16;
          uVar8 = (ulonglong)(uVar17 != 0);
          *(uint *)(puVar13 + uVar8 + 2) = (uint)local_res8;
          *(longlong *)((longlong)puVar13 + uVar8 * 8 + 0x14) = param_1;
          *(undefined4 *)((longlong)puVar13 + uVar8 * 8 + 0x1c) = local_res10;
          puVar13[uVar8 + 4] = local_70;
          *(undefined4 *)(puVar13 + uVar8 + 5) = local_res20._0_4_;
          *(uint *)((longlong)puVar13 + uVar8 * 8 + 0x2c) = (uint)local_res18;
          *(uint *)(puVar13 + uVar8 + 6) = param_8;
          *(byte *)((longlong)puVar13 + uVar8 * 8 + 0x34) = param_10;
          *(undefined1 *)(puVar13 + uVar8 + 7) = param_11;
          puVar6 = (undefined8 *)(uVar8 * 8 + 0x43 + (longlong)puVar13 & 0xfffffffffffffff8);
          puVar7 = puVar6;
          if (uVar17 != 0) {
            uVar8 = (ulonglong)local_res18 & 0xffffffff;
            puVar13[2] = puVar6;
            local_res18 = puVar6;
            puVar7 = FUN_18004ddfc(param_6,param_3[3],local_68,param_5,puVar6,param_3[3]);
            FUN_18004b730(CONCAT71((int7)(uVar8 >> 8),param_10),(int *)param_7,
                          (int *)((longlong)puVar7 + 0xfU & 0xfffffffffffffff0),param_8,-local_78,
                          param_10);
            puVar6 = (undefined8 *)(((ulonglong)local_74 & 0xfffffff8) + (longlong)local_res18);
            puVar7 = local_res18;
          }
          local_res18 = puVar7;
          *puVar6 = 0;
          *puVar13 = FUN_18004f0bc;
          *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar6;
          if (*(char *)(lVar2 + 0x14c5) != '\0') {
            FUN_1800facb0((undefined4 *)(lVar2 + 0x12c0));
            SetEvent(*(HANDLE *)(lVar2 + 0x1340));
            bVar3 = false;
          }
          goto LAB_18004ed43;
        }
        FUN_1800facb0((int *)(lVar2 + 0x12c0));
        Sleep(100);
        FUN_1800fab60((int *)(lVar2 + 0x12c0));
        param_6 = (uint)local_res18;
LAB_18004ed50:
        plVar10 = *(longlong **)(lVar2 + 0x14a0);
        uVar8 = (ulonglong)(uVar17 != 0);
        *(uint *)(plVar10 + uVar8) = (uint)local_res8;
        *(longlong *)((longlong)plVar10 + uVar8 * 8 + 4) = param_1;
        *(undefined4 *)((longlong)plVar10 + uVar8 * 8 + 0xc) = local_res10;
        plVar10[uVar8 + 2] = (longlong)local_70;
        *(undefined4 *)(plVar10 + uVar8 + 3) = local_res20._0_4_;
        *(uint *)((longlong)plVar10 + uVar8 * 8 + 0x1c) = param_6;
        *(uint *)(plVar10 + uVar8 + 4) = param_8;
        *(byte *)((longlong)plVar10 + uVar8 * 8 + 0x24) = param_10;
        *(undefined1 *)(plVar10 + uVar8 + 5) = param_11;
        if (uVar17 != 0) {
          puVar13 = (undefined8 *)(uVar8 * 8 + 0x2c + (longlong)plVar10);
          *plVar10 = (longlong)puVar13;
          uVar8 = (ulonglong)param_6;
          puVar13 = FUN_18004ddfc(param_6,param_3[3],local_68,param_5,puVar13,param_3[3]);
          FUN_18004b730(uVar8,(int *)param_7,(int *)((longlong)puVar13 + 0xfU & 0xfffffffffffffff0),
                        param_8,-local_78,param_10);
        }
        FUN_18004f0bc(plVar10);
      }
      if (!bVar3) {
        return;
      }
      piVar11 = (int *)(lVar2 + 0x12c0);
      goto LAB_18004f0a4;
    }
    bVar4 = true;
    uVar12 = uVar17;
  }
  local_74 = param_5;
  local_res8 = param_7;
  local_50 = 0;
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  puVar7 = local_60;
  puVar18 = param_7;
  uVar17 = param_5;
  if ((bVar4) &&
     (bVar4 = FUN_1800ebdd4((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0xf6e0) + 0x17f0),uVar12,
                            (longlong *)&local_60), puVar7 = local_60, puVar18 = local_res8,
     uVar17 = local_74, bVar4)) {
    uVar17 = param_3[3];
    uVar8 = (ulonglong)param_6;
    local_res20 = local_60;
    param_9 = 0;
    local_74 = uVar17;
    puVar13 = FUN_18004ddfc(param_6,uVar17,puVar13,param_5,local_60,uVar17);
    puVar18 = (uint *)((longlong)puVar13 + 0xfU & 0xfffffffffffffff0);
    FUN_18004b730(CONCAT71((int7)(uVar8 >> 8),param_10),(int *)param_7,(int *)puVar18,param_8,
                  -local_78,param_10);
  }
  lVar2 = *(longlong *)(param_1 + 0xf6e0);
  piVar11 = (int *)(lVar2 + 0x12c0);
  local_res8 = (uint *)CONCAT71(local_res8._1_7_,*(char *)(lVar2 + 0x14c4) == '\0');
  if (*(char *)(lVar2 + 0x14c4) == '\0') {
    uVar15 = (uint)local_res18;
LAB_18004f02d:
    if ((char)local_res8 != '\0') goto LAB_18004f033;
  }
  else {
    puVar13 = (undefined8 *)FUN_1800fab80((longlong)piVar11,0x50);
    if (puVar13 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar13[1] = 0x50;
      puVar6 = (undefined8 *)((longlong)puVar13 + 0x67U & 0xfffffffffffffff8);
      puVar13[2] = param_1;
      *(undefined4 *)(puVar13 + 3) = local_res10;
      *(uint **)((longlong)puVar13 + 0x1c) = local_70;
      *(undefined8 **)((longlong)puVar13 + 0x24) = local_res20;
      *(uint *)((longlong)puVar13 + 0x2c) = uVar17;
      uVar15 = (uint)local_res18;
      *(uint *)(puVar13 + 6) = (uint)local_res18;
      *(uint **)((longlong)puVar13 + 0x34) = puVar18;
      *(uint *)((longlong)puVar13 + 0x3c) = param_8;
      *(int *)(puVar13 + 8) = param_9;
      *(byte *)((longlong)puVar13 + 0x44) = param_10;
      *(undefined1 *)(puVar13 + 9) = param_11;
      *(undefined8 **)((longlong)puVar13 + 0x4c) = puVar7;
      *(undefined8 *)((longlong)puVar13 + 0x54) = uStack_58;
      *(undefined4 *)((longlong)puVar13 + 0x5c) = local_50;
      *puVar6 = 0;
      *puVar13 = FUN_18004f118;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar6;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar11);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        bVar3 = false;
      }
      goto LAB_18004f02d;
    }
    FUN_1800facb0(piVar11);
    Sleep(100);
    FUN_1800fab60(piVar11);
    uVar15 = (uint)local_res18;
LAB_18004f033:
    plVar10 = *(longlong **)(lVar2 + 0x14a0);
    *plVar10 = param_1;
    *(undefined4 *)(plVar10 + 1) = local_res10;
    *(uint **)((longlong)plVar10 + 0xc) = local_70;
    *(undefined8 **)((longlong)plVar10 + 0x14) = local_res20;
    *(uint *)((longlong)plVar10 + 0x1c) = local_74;
    *(undefined4 *)(plVar10 + 4) = uVar15;
    *(uint **)((longlong)plVar10 + 0x24) = puVar18;
    *(uint *)((longlong)plVar10 + 0x2c) = param_8;
    *(int *)(plVar10 + 6) = param_9;
    *(byte *)((longlong)plVar10 + 0x34) = param_10;
    *(undefined1 *)(plVar10 + 7) = param_11;
    *(undefined8 **)((longlong)plVar10 + 0x3c) = puVar7;
    *(undefined8 *)((longlong)plVar10 + 0x44) = uStack_58;
    *(undefined4 *)((longlong)plVar10 + 0x4c) = local_50;
    FUN_18004f118(plVar10);
  }
  if (!bVar3) {
    return;
  }
LAB_18004f0a4:
  FUN_1800facb0(piVar11);
  return;
}

