/*
 * FUN_180054008 at 180054008
 * undefined __fastcall FUN_180054008(longlong param_1, int param_2, uint * param_3, undefined8 param_4, undefined8 * param_5, undefined4 param_6, uint param_7, int param_8, byte param_9, undefined1 param_10)
 * Address ranges: 180054008-1800546bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180054008(longlong param_1,int param_2,uint *param_3,undefined8 param_4,undefined8 *param_5
                  ,undefined4 param_6,uint param_7,int param_8,byte param_9,undefined1 param_10)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  HANDLE hEvent;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  cVar10 = *(char *)(*(longlong *)(param_1 + 0xf6e8) + 0x1b);
  if (param_2 == 6) {
    if (cVar10 != '\0') goto LAB_180054071;
    cVar10 = '\0';
  }
  else {
    if ((cVar10 == '\0') && (*(int *)(*(longlong *)(param_1 + 0x10060) + 0x30) == 1)) {
      param_7 = FUN_1800559d8(*(longlong *)(param_1 + 0x10060),(longlong)param_5,param_7,param_8);
    }
LAB_180054071:
    cVar10 = '\x01';
  }
  FUN_1800521c0(param_1,(longlong)param_3,cVar10);
  iVar11 = (uint)param_9 * 2 + 2;
  uVar12 = iVar11 * param_8;
  if (((param_2 == 6) && (*(char *)(*(longlong *)(param_1 + 0xf6e8) + 0x1b) == '\0')) &&
     (lVar9 = *(longlong *)(param_1 + 0xf6e0), uVar12 <= *(int *)(lVar9 + 0x14b0) - 0x400U)) {
    FUN_1800fab60((int *)(lVar9 + 0x12c0));
    if (*(char *)(lVar9 + 0x14c4) != '\0') {
      if (*param_3 != *(uint *)(param_1 + 0x100f0)) {
        *(uint *)(param_1 + 0x100f0) = *param_3;
        uVar3 = FUN_18004def4((longlong *)(param_1 + 0xf7b8),param_3);
        *(undefined8 *)(param_1 + 0x100f8) = uVar3;
      }
      bVar13 = *(int *)(param_1 + 0x10100) != 0;
      uVar3 = *(undefined8 *)(param_1 + 0x100f8);
      lVar9 = *(longlong *)(param_1 + 0xf6e0);
      piVar6 = (int *)(lVar9 + 0x12c0);
      puVar7 = (undefined8 *)((longlong)param_5 + (ulonglong)(iVar11 * param_7));
      if (*(char *)(lVar9 + 0x14c4) != '\0') {
        uVar2 = (uVar12 + 7 & 0xfffffff8) + 0x38;
        puVar4 = (undefined8 *)FUN_1800fab80((longlong)piVar6,uVar2);
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(lVar9 + 0x14c0) = *(int *)(lVar9 + 0x14c0) + 1;
          UNLOCK();
          puVar8 = (undefined8 *)((longlong)puVar4 + 0x4fU & 0xfffffffffffffff8);
          puVar4[1] = (ulonglong)uVar2;
          puVar4[3] = param_1;
          *(undefined4 *)(puVar4 + 4) = 6;
          *(undefined8 *)((longlong)puVar4 + 0x24) = uVar3;
          *(undefined8 *)((longlong)puVar4 + 0x2c) = param_4;
          *(undefined4 *)((longlong)puVar4 + 0x34) = param_6;
          *(int *)(puVar4 + 7) = param_8;
          *(byte *)((longlong)puVar4 + 0x3c) = param_9;
          *(undefined1 *)(puVar4 + 8) = param_10;
          *(bool *)((longlong)puVar4 + 0x44) = bVar13;
          puVar4[2] = puVar8;
          FUN_1800fbec0(puVar8,puVar7,(ulonglong)uVar12);
          puVar8 = (undefined8 *)(((ulonglong)(uVar12 + 7) & 0xfffffff8) + (longlong)puVar8);
          *puVar8 = 0;
          *puVar4 = FUN_1800546c0;
          *(undefined8 **)(lVar9 + 0x1350 + (ulonglong)*(uint *)(lVar9 + 0x14bc) * 0x28) = puVar8;
          if (*(char *)(lVar9 + 0x14c5) != '\0') {
            FUN_1800facb0(piVar6);
            hEvent = *(HANDLE *)(lVar9 + 0x1340);
            goto LAB_18005460a;
          }
          goto LAB_1800546a9;
        }
        FUN_1800facb0(piVar6);
        Sleep(100);
        FUN_1800fab60(piVar6);
      }
      plVar1 = *(longlong **)(lVar9 + 0x14a0);
      *plVar1 = (longlong)puVar7;
      plVar1[1] = param_1;
      *(undefined4 *)(plVar1 + 2) = 6;
      *(undefined8 *)((longlong)plVar1 + 0x14) = uVar3;
      *(undefined8 *)((longlong)plVar1 + 0x1c) = param_4;
      *(undefined4 *)((longlong)plVar1 + 0x24) = param_6;
      *(int *)(plVar1 + 5) = param_8;
      *(byte *)((longlong)plVar1 + 0x2c) = param_9;
      *(undefined1 *)(plVar1 + 6) = param_10;
      *(bool *)((longlong)plVar1 + 0x34) = bVar13;
      FUN_1800546c0(plVar1);
      goto LAB_1800546a9;
    }
    lVar9 = *(longlong *)(param_1 + 0xf6e0);
    bVar13 = *(int *)(param_1 + 0x10100) != 0;
    piVar6 = (int *)(lVar9 + 0x12c0);
    if (*(char *)(lVar9 + 0x14c4) != '\0') {
      puVar4 = (undefined8 *)FUN_1800fab80((longlong)piVar6,0x40);
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar9 + 0x14c0) = *(int *)(lVar9 + 0x14c0) + 1;
        UNLOCK();
        puVar4[1] = 0x40;
        puVar8 = (undefined8 *)((longlong)puVar4 + 0x53U & 0xfffffffffffffff8);
        puVar4[2] = param_1;
        *(undefined4 *)(puVar4 + 3) = 6;
        *(uint **)((longlong)puVar4 + 0x1c) = param_3;
        *(undefined8 *)((longlong)puVar4 + 0x24) = param_4;
        *(undefined8 **)((longlong)puVar4 + 0x2c) = param_5;
        *(undefined4 *)((longlong)puVar4 + 0x34) = param_6;
        *(uint *)(puVar4 + 7) = param_7;
        *(int *)((longlong)puVar4 + 0x3c) = param_8;
        *(byte *)(puVar4 + 8) = param_9;
        *(undefined1 *)((longlong)puVar4 + 0x44) = param_10;
        *(bool *)(puVar4 + 9) = bVar13;
        *puVar8 = 0;
        pcVar5 = FUN_180054710;
        goto LAB_1800545d8;
      }
      FUN_1800facb0(piVar6);
      Sleep(100);
      FUN_1800fab60(piVar6);
    }
    plVar1 = *(longlong **)(lVar9 + 0x14a0);
    *plVar1 = param_1;
    *(undefined4 *)(plVar1 + 1) = 6;
    *(uint **)((longlong)plVar1 + 0xc) = param_3;
    *(undefined8 *)((longlong)plVar1 + 0x14) = param_4;
    *(undefined8 **)((longlong)plVar1 + 0x1c) = param_5;
    *(undefined4 *)((longlong)plVar1 + 0x24) = param_6;
    *(uint *)(plVar1 + 5) = param_7;
    *(int *)((longlong)plVar1 + 0x2c) = param_8;
    *(byte *)(plVar1 + 6) = param_9;
    *(undefined1 *)((longlong)plVar1 + 0x34) = param_10;
    *(bool *)(plVar1 + 7) = bVar13;
    FUN_180054710(plVar1);
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0xf6e0);
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    FUN_1800fab60((int *)(lVar9 + 0x12c0));
    puVar7 = local_58;
    if (*(char *)(lVar9 + 0x14c4) != '\0') {
      if (*param_3 != *(uint *)(param_1 + 0x100f0)) {
        *(uint *)(param_1 + 0x100f0) = *param_3;
        uVar3 = FUN_18004def4((longlong *)(param_1 + 0xf7b8),param_3);
        *(undefined8 *)(param_1 + 0x100f8) = uVar3;
      }
      param_3 = *(uint **)(param_1 + 0x100f8);
      puVar7 = local_58;
      if (((param_3 != (uint *)0x0) && (param_2 == 6)) &&
         ((*(char *)(*(longlong *)(param_1 + 0xf6e8) + 0x1b) == '\0' &&
          (bVar13 = FUN_1800ebdd4((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0xf6e0) + 0x17f0),
                                  uVar12,(longlong *)&local_58), puVar7 = local_58, bVar13)))) {
        FUN_1800fbec0(local_58,(undefined8 *)((ulonglong)(iVar11 * param_7) + (longlong)param_5),
                      (ulonglong)uVar12);
        param_7 = 0;
        param_5 = puVar7;
      }
    }
    lVar9 = *(longlong *)(param_1 + 0xf6e0);
    bVar13 = *(int *)(param_1 + 0x10100) != 0;
    piVar6 = (int *)(lVar9 + 0x12c0);
    if (*(char *)(lVar9 + 0x14c4) != '\0') {
      puVar4 = (undefined8 *)FUN_1800fab80((longlong)piVar6,0x50);
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar9 + 0x14c0) = *(int *)(lVar9 + 0x14c0) + 1;
        UNLOCK();
        puVar4[1] = 0x50;
        puVar8 = (undefined8 *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff8);
        puVar4[2] = param_1;
        *(int *)(puVar4 + 3) = param_2;
        *(uint **)((longlong)puVar4 + 0x1c) = param_3;
        *(undefined8 *)((longlong)puVar4 + 0x24) = param_4;
        *(undefined8 **)((longlong)puVar4 + 0x2c) = param_5;
        *(undefined4 *)((longlong)puVar4 + 0x34) = param_6;
        *(uint *)(puVar4 + 7) = param_7;
        *(int *)((longlong)puVar4 + 0x3c) = param_8;
        *(byte *)(puVar4 + 8) = param_9;
        *(undefined1 *)((longlong)puVar4 + 0x44) = param_10;
        *(bool *)(puVar4 + 9) = bVar13;
        *(undefined8 **)((longlong)puVar4 + 0x4c) = puVar7;
        *(undefined8 *)((longlong)puVar4 + 0x54) = uStack_50;
        *(undefined4 *)((longlong)puVar4 + 0x5c) = local_48;
        *puVar8 = 0;
        pcVar5 = FUN_180054760;
LAB_1800545d8:
        *puVar4 = pcVar5;
        *(undefined8 **)(lVar9 + 0x1350 + (ulonglong)*(uint *)(lVar9 + 0x14bc) * 0x28) = puVar8;
        if (*(char *)(lVar9 + 0x14c5) != '\0') {
          FUN_1800facb0(piVar6);
          hEvent = *(HANDLE *)(lVar9 + 0x1340);
LAB_18005460a:
          SetEvent(hEvent);
          return;
        }
        goto LAB_1800546a9;
      }
      FUN_1800facb0(piVar6);
      Sleep(100);
      FUN_1800fab60(piVar6);
    }
    plVar1 = *(longlong **)(lVar9 + 0x14a0);
    *plVar1 = param_1;
    *(int *)(plVar1 + 1) = param_2;
    *(uint **)((longlong)plVar1 + 0xc) = param_3;
    *(undefined8 *)((longlong)plVar1 + 0x14) = param_4;
    *(undefined8 **)((longlong)plVar1 + 0x1c) = param_5;
    *(undefined4 *)((longlong)plVar1 + 0x24) = param_6;
    *(uint *)(plVar1 + 5) = param_7;
    *(int *)((longlong)plVar1 + 0x2c) = param_8;
    *(byte *)(plVar1 + 6) = param_9;
    *(undefined1 *)((longlong)plVar1 + 0x34) = param_10;
    *(bool *)(plVar1 + 7) = bVar13;
    *(undefined8 **)((longlong)plVar1 + 0x3c) = puVar7;
    *(undefined8 *)((longlong)plVar1 + 0x44) = uStack_50;
    *(undefined4 *)((longlong)plVar1 + 0x4c) = local_48;
    FUN_180054760(plVar1);
  }
LAB_1800546a9:
  FUN_1800facb0(piVar6);
  return;
}

