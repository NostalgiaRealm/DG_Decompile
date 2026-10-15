/*
 * FUN_18004e598 at 18004e598
 * undefined __fastcall FUN_18004e598(longlong param_1, undefined4 param_2, uint * param_3, undefined8 * param_4, uint param_5, int param_6, undefined1 param_7)
 * Address ranges: 18004e598-18004e9ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004e598(longlong param_1,undefined4 param_2,uint *param_3,undefined8 *param_4,
                  uint param_5,int param_6,undefined1 param_7)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int *piVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint *puVar16;
  undefined8 *local_60;
  longlong lStack_58;
  undefined4 local_50;
  
  lVar4 = *(longlong *)(param_1 + 0xf6e0);
  FUN_1800fab60((int *)(lVar4 + 0x12c0));
  if (*(char *)(lVar4 + 0x14c4) == '\0') {
    bVar7 = false;
    puVar16 = param_3;
  }
  else {
    if (*param_3 != *(uint *)(param_1 + 0x100f0)) {
      *(uint *)(param_1 + 0x100f0) = *param_3;
      uVar8 = FUN_18004def4((longlong *)(param_1 + 0xf7b8),param_3);
      *(undefined8 *)(param_1 + 0x100f8) = uVar8;
    }
    bVar7 = true;
    puVar16 = *(uint **)(param_1 + 0x100f8);
  }
  uVar3 = param_3[3];
  uVar14 = uVar3 * param_6;
  if ((bVar7) && (uVar14 + 4 < 0x3f00)) {
    lVar4 = *(longlong *)(param_1 + 0xf6e0);
    piVar11 = (int *)(lVar4 + 0x12c0);
    if (*(char *)(lVar4 + 0x14c4) != '\0') {
      uVar12 = (-(uint)(uVar14 != 0xfffffffc) & 8) + 0x20;
      if (uVar14 != 0xfffffffc) {
        uVar12 = uVar12 + (uVar14 + 0xb & 0xfffffff8);
      }
      puVar9 = (undefined8 *)FUN_1800fab80((longlong)piVar11,uVar12);
      if (puVar9 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar4 + 0x14c0) = *(int *)(lVar4 + 0x14c0) + 1;
        UNLOCK();
        puVar9[1] = (ulonglong)uVar12;
        uVar6 = (ulonglong)(uVar14 != 0xfffffffc);
        lVar1 = uVar6 * 8;
        puVar9[uVar6 + 2] = param_1;
        *(undefined4 *)(puVar9 + uVar6 + 3) = param_2;
        *(uint **)(lVar1 + 0x1c + (longlong)puVar9) = puVar16;
        *(uint *)(lVar1 + 0x24 + (longlong)puVar9) = uVar3;
        *(int *)(puVar9 + uVar6 + 5) = param_6;
        *(undefined1 *)(lVar1 + 0x2c + (longlong)puVar9) = param_7;
        puVar15 = (undefined8 *)((lVar1 + 0x10U | 0x27) + (longlong)puVar9 & 0xfffffffffffffff8);
        if (uVar14 != 0xfffffffc) {
          puVar9[2] = puVar15;
          FUN_18004ddfc(param_6,param_3[3],param_4,param_5,puVar15,param_3[3]);
          puVar15 = (undefined8 *)(((ulonglong)(uVar14 + 0xb) & 0xfffffff8) + (longlong)puVar15);
        }
        *puVar15 = 0;
        *puVar9 = FUN_18004e9ec;
        *(undefined8 **)(lVar4 + 0x1350 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28) = puVar15;
        cVar2 = *(char *)(lVar4 + 0x14c5);
joined_r0x00018004e957:
        if (cVar2 != '\0') {
          FUN_1800facb0(piVar11);
          SetEvent(*(HANDLE *)(lVar4 + 0x1340));
          return;
        }
        goto LAB_18004e9d5;
      }
      FUN_1800facb0(piVar11);
      Sleep(100);
      FUN_1800fab60(piVar11);
    }
    puVar9 = *(undefined8 **)(lVar4 + 0x14a0);
    uVar10 = (ulonglong)(uVar14 != 0xfffffffc);
    uVar6 = uVar10 * 8;
    puVar9[uVar10] = param_1;
    *(undefined4 *)(puVar9 + uVar10 + 1) = param_2;
    *(uint **)(uVar6 + 0xc + (longlong)puVar9) = puVar16;
    *(uint *)(uVar6 + 0x14 + (longlong)puVar9) = uVar3;
    *(int *)(puVar9 + uVar10 + 3) = param_6;
    *(undefined1 *)(uVar6 + 0x1c + (longlong)puVar9) = param_7;
    if (uVar14 != 0xfffffffc) {
      puVar15 = (undefined8 *)((uVar6 | 0x20) + (longlong)puVar9);
      *puVar9 = puVar15;
      FUN_18004ddfc(param_6,param_3[3],param_4,param_5,puVar15,param_3[3]);
    }
    FUN_18004e9ec(puVar9);
  }
  else {
    local_50 = 0;
    local_60 = (undefined8 *)0x0;
    lStack_58 = 0;
    puVar9 = local_60;
    if ((bVar7) &&
       (bVar7 = FUN_1800ebdd4((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0xf6e0) + 0x17f0),uVar14,
                              (longlong *)&local_60), puVar9 = local_60, bVar7)) {
      FUN_18004ddfc(param_6,param_3[3],param_4,param_5,local_60,param_3[3]);
      param_5 = param_3[3];
      param_4 = puVar9;
    }
    lVar4 = *(longlong *)(param_1 + 0xf6e0);
    piVar11 = (int *)(lVar4 + 0x12c0);
    if (*(char *)(lVar4 + 0x14c4) != '\0') {
      puVar15 = (undefined8 *)FUN_1800fab80((longlong)piVar11,0x40);
      if (puVar15 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar4 + 0x14c0) = *(int *)(lVar4 + 0x14c0) + 1;
        UNLOCK();
        puVar13 = (undefined8 *)((longlong)puVar15 + 0x53U & 0xfffffffffffffff8);
        puVar15[1] = 0x40;
        puVar15[2] = param_1;
        *(undefined4 *)(puVar15 + 3) = param_2;
        *(uint **)((longlong)puVar15 + 0x1c) = puVar16;
        *(undefined8 **)((longlong)puVar15 + 0x24) = param_4;
        *(uint *)((longlong)puVar15 + 0x2c) = param_5;
        *(int *)(puVar15 + 6) = param_6;
        *(undefined1 *)((longlong)puVar15 + 0x34) = param_7;
        puVar15[7] = puVar9;
        puVar15[8] = lStack_58;
        *(undefined4 *)(puVar15 + 9) = local_50;
        *puVar13 = 0;
        *puVar15 = FUN_18004ea20;
        *(undefined8 **)(lVar4 + 0x1350 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28) = puVar13;
        cVar2 = *(char *)(lVar4 + 0x14c5);
        goto joined_r0x00018004e957;
      }
      FUN_1800facb0(piVar11);
      Sleep(100);
      FUN_1800fab60(piVar11);
    }
    plVar5 = *(longlong **)(lVar4 + 0x14a0);
    *plVar5 = param_1;
    *(undefined4 *)(plVar5 + 1) = param_2;
    *(uint **)((longlong)plVar5 + 0xc) = puVar16;
    *(undefined8 **)((longlong)plVar5 + 0x14) = param_4;
    *(uint *)((longlong)plVar5 + 0x1c) = param_5;
    *(int *)(plVar5 + 4) = param_6;
    *(undefined1 *)((longlong)plVar5 + 0x24) = param_7;
    plVar5[5] = (longlong)puVar9;
    plVar5[6] = lStack_58;
    *(undefined4 *)(plVar5 + 7) = local_50;
    FUN_18004ea20(plVar5);
  }
LAB_18004e9d5:
  FUN_1800facb0(piVar11);
  return;
}

