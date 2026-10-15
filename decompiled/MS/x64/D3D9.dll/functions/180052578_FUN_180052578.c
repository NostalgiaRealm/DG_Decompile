/*
 * FUN_180052578 at 180052578
 * undefined __fastcall FUN_180052578(longlong param_1, undefined4 param_2, uint * param_3, undefined8 param_4, undefined8 * param_5, uint param_6, int param_7)
 * Address ranges: 180052578-1800529c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180052578(longlong param_1,undefined4 param_2,uint *param_3,undefined8 param_4,
                  undefined8 *param_5,uint param_6,int param_7)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  HANDLE hEvent;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint *puVar14;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  lVar2 = *(longlong *)(param_1 + 0xf6e0);
  FUN_1800fab60((int *)(lVar2 + 0x12c0));
  if (*(char *)(lVar2 + 0x14c4) == '\0') {
    bVar4 = false;
    puVar14 = param_3;
  }
  else {
    if (*param_3 != *(uint *)(param_1 + 0x100f0)) {
      *(uint *)(param_1 + 0x100f0) = *param_3;
      uVar5 = FUN_18004def4((longlong *)(param_1 + 0xf7b8),param_3);
      *(undefined8 *)(param_1 + 0x100f8) = uVar5;
    }
    bVar4 = true;
    puVar14 = *(uint **)(param_1 + 0x100f8);
  }
  uVar1 = param_3[3];
  uVar10 = uVar1 * param_7;
  if ((bVar4) && (uVar10 + 4 < 0x3f00)) {
    lVar2 = *(longlong *)(param_1 + 0xf6e0);
    piVar9 = (int *)(lVar2 + 0x12c0);
    if (*(char *)(lVar2 + 0x14c4) != '\0') {
      uVar11 = (-(uint)(uVar10 != 0xfffffffc) & 8) + 0x28;
      if (uVar10 != 0xfffffffc) {
        uVar11 = uVar11 + (uVar10 + 0xb & 0xfffffff8);
      }
      puVar6 = (undefined8 *)FUN_1800fab80((longlong)piVar9,uVar11);
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
        UNLOCK();
        puVar6[1] = (ulonglong)uVar11;
        uVar7 = (ulonglong)(uVar10 != 0xfffffffc);
        puVar6[uVar7 + 2] = param_1;
        *(undefined4 *)(puVar6 + uVar7 + 3) = param_2;
        puVar12 = (undefined8 *)(uVar7 * 8 + 0x3b + (longlong)puVar6 & 0xfffffffffffffff8);
        *(uint **)((longlong)puVar6 + uVar7 * 8 + 0x1c) = puVar14;
        *(undefined8 *)((longlong)puVar6 + uVar7 * 8 + 0x24) = param_4;
        *(uint *)((longlong)puVar6 + uVar7 * 8 + 0x2c) = uVar1;
        *(int *)(puVar6 + uVar7 + 6) = param_7;
        if (uVar10 != 0xfffffffc) {
          puVar6[2] = puVar12;
          FUN_18004ddfc(param_7,param_3[3],param_5,param_6,puVar12,param_3[3]);
          puVar12 = (undefined8 *)(((ulonglong)(uVar10 + 0xb) & 0xfffffff8) + (longlong)puVar12);
        }
        *puVar12 = 0;
        *puVar6 = FUN_1800529c8;
        *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar12;
        if (*(char *)(lVar2 + 0x14c5) != '\0') {
          FUN_1800facb0(piVar9);
          hEvent = *(HANDLE *)(lVar2 + 0x1340);
LAB_18005293f:
          SetEvent(hEvent);
          return;
        }
        goto LAB_1800529b0;
      }
      FUN_1800facb0(piVar9);
      Sleep(100);
      FUN_1800fab60(piVar9);
    }
    puVar6 = *(undefined8 **)(lVar2 + 0x14a0);
    uVar7 = (ulonglong)(uVar10 != 0xfffffffc);
    uVar8 = uVar7 * 8;
    puVar6[uVar7] = param_1;
    *(undefined4 *)(puVar6 + uVar7 + 1) = param_2;
    *(uint **)(uVar8 + 0xc + (longlong)puVar6) = puVar14;
    *(undefined8 *)(uVar8 + 0x14 + (longlong)puVar6) = param_4;
    *(uint *)(uVar8 + 0x1c + (longlong)puVar6) = uVar1;
    *(int *)(puVar6 + uVar7 + 4) = param_7;
    if (uVar10 != 0xfffffffc) {
      puVar12 = (undefined8 *)((uVar8 | 0x24) + (longlong)puVar6);
      *puVar6 = puVar12;
      FUN_18004ddfc(param_7,param_3[3],param_5,param_6,puVar12,param_3[3]);
    }
    FUN_1800529c8(puVar6);
  }
  else {
    local_50 = 0;
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    if (bVar4) {
      bVar4 = FUN_1800ebdd4((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0xf6e0) + 0x17f0),uVar10,
                            (longlong *)&local_60);
      puVar6 = local_60;
      if (bVar4) {
        FUN_18004ddfc(param_7,param_3[3],param_5,param_6,local_60,param_3[3]);
        param_6 = param_3[3];
        param_5 = puVar6;
      }
    }
    else {
      puVar6 = (undefined8 *)0x0;
    }
    lVar2 = *(longlong *)(param_1 + 0xf6e0);
    piVar9 = (int *)(lVar2 + 0x12c0);
    if (*(char *)(lVar2 + 0x14c4) != '\0') {
      puVar12 = (undefined8 *)FUN_1800fab80((longlong)piVar9,0x40);
      if (puVar12 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
        UNLOCK();
        puVar12[1] = 0x40;
        puVar12[2] = param_1;
        *(undefined4 *)(puVar12 + 3) = param_2;
        *(uint **)((longlong)puVar12 + 0x1c) = puVar14;
        *(undefined8 *)((longlong)puVar12 + 0x24) = param_4;
        *(undefined8 **)((longlong)puVar12 + 0x2c) = param_5;
        puVar13 = (undefined8 *)((longlong)puVar12 + 0x57U & 0xfffffffffffffff8);
        *(uint *)((longlong)puVar12 + 0x34) = param_6;
        *(int *)(puVar12 + 7) = param_7;
        *(undefined8 **)((longlong)puVar12 + 0x3c) = puVar6;
        *(undefined8 *)((longlong)puVar12 + 0x44) = uStack_58;
        *(undefined4 *)((longlong)puVar12 + 0x4c) = local_50;
        *puVar13 = 0;
        *puVar12 = FUN_180052a00;
        *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar13;
        if (*(char *)(lVar2 + 0x14c5) != '\0') {
          FUN_1800facb0(piVar9);
          hEvent = *(HANDLE *)(lVar2 + 0x1340);
          goto LAB_18005293f;
        }
        goto LAB_1800529b0;
      }
      FUN_1800facb0(piVar9);
      Sleep(100);
      FUN_1800fab60(piVar9);
    }
    plVar3 = *(longlong **)(lVar2 + 0x14a0);
    *plVar3 = param_1;
    *(undefined4 *)(plVar3 + 1) = param_2;
    *(uint **)((longlong)plVar3 + 0xc) = puVar14;
    *(undefined8 *)((longlong)plVar3 + 0x14) = param_4;
    *(undefined8 **)((longlong)plVar3 + 0x1c) = param_5;
    *(uint *)((longlong)plVar3 + 0x24) = param_6;
    *(int *)(plVar3 + 5) = param_7;
    *(undefined8 **)((longlong)plVar3 + 0x2c) = puVar6;
    *(undefined8 *)((longlong)plVar3 + 0x34) = uStack_58;
    *(undefined4 *)((longlong)plVar3 + 0x3c) = local_50;
    FUN_180052a00(plVar3);
  }
LAB_1800529b0:
  FUN_1800facb0(piVar9);
  return;
}

