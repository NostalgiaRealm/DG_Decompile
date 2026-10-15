/*
 * FUN_18002aa78 at 18002aa78
 * undefined __fastcall FUN_18002aa78(longlong param_1, int param_2, undefined8 * param_3)
 * Address ranges: 18002aa78-18002ad80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002aa78(longlong param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  HANDLE hEvent;
  int *piVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  FUN_180026a88(param_1 + 0x34e8);
  lVar2 = *(longlong *)(param_1 + 0x31c0);
  FUN_18005e070((int *)(lVar2 + 0x12c0));
  cVar1 = *(char *)(lVar2 + 0x14c4);
  uVar13 = param_2 * 0x3c;
  if ((cVar1 == '\0') || (0x3eff < uVar13 + 4)) {
    local_58 = 0;
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    if (cVar1 == '\0') {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      bVar6 = FUN_180053458((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31c0) + 0x17f0),uVar13,
                            (longlong *)&local_68);
      puVar7 = local_68;
      if (bVar6) {
        FUN_18005ed10(local_68,param_3,(ulonglong)uVar13);
        param_3 = puVar7;
      }
    }
    uVar5 = local_58;
    uVar4 = uStack_60;
    lVar2 = *(longlong *)(param_1 + 0x31c0);
    piVar9 = (int *)(lVar2 + 0x12c0);
    if (*(char *)(lVar2 + 0x14c4) != '\0') {
      puVar11 = (undefined8 *)FUN_18005e090((longlong)piVar9,0x28);
      if (puVar11 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
        UNLOCK();
        puVar11[1] = 0x28;
        puVar11[2] = param_1;
        puVar12 = (undefined8 *)((longlong)puVar11 + 0x3fU & 0xfffffffffffffff8);
        *(int *)(puVar11 + 3) = param_2;
        *(undefined8 **)((longlong)puVar11 + 0x1c) = param_3;
        *(undefined8 **)((longlong)puVar11 + 0x24) = puVar7;
        *(undefined8 *)((longlong)puVar11 + 0x2c) = uVar4;
        *(undefined4 *)((longlong)puVar11 + 0x34) = uVar5;
        *puVar12 = 0;
        *puVar11 = FUN_18002ada0;
        *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar12;
        if (*(char *)(lVar2 + 0x14c5) != '\0') {
          FUN_18005e1c0(piVar9);
          hEvent = *(HANDLE *)(lVar2 + 0x1340);
          goto LAB_18002ad22;
        }
        goto LAB_18002ad6b;
      }
      FUN_18005e1c0(piVar9);
      Sleep(100);
      FUN_18005e070(piVar9);
    }
    plVar3 = *(longlong **)(lVar2 + 0x14a0);
    *plVar3 = param_1;
    *(int *)(plVar3 + 1) = param_2;
    *(undefined8 **)((longlong)plVar3 + 0xc) = param_3;
    *(undefined8 **)((longlong)plVar3 + 0x14) = puVar7;
    *(undefined8 *)((longlong)plVar3 + 0x1c) = uVar4;
    *(undefined4 *)((longlong)plVar3 + 0x24) = uVar5;
    FUN_18002ada0(plVar3);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x31c0);
    piVar9 = (int *)(lVar2 + 0x12c0);
    if (*(char *)(lVar2 + 0x14c4) != '\0') {
      uVar10 = (-(uint)(uVar13 != 0xfffffffc) & 8) + 0x10;
      if (uVar13 != 0xfffffffc) {
        uVar10 = uVar10 + (uVar13 + 0xb & 0xfffffff8);
      }
      puVar7 = (undefined8 *)FUN_18005e090((longlong)piVar9,uVar10);
      if (puVar7 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
        UNLOCK();
        puVar7[1] = (ulonglong)uVar10;
        uVar8 = (ulonglong)(uVar13 != 0xfffffffc);
        puVar7[uVar8 + 2] = param_1;
        puVar11 = (undefined8 *)(uVar8 * 8 + 0x23 + (longlong)puVar7 & 0xfffffffffffffff8);
        *(int *)(puVar7 + uVar8 + 3) = param_2;
        if (uVar13 != 0xfffffffc) {
          puVar7[2] = puVar11;
          FUN_18005ed10(puVar11,param_3,(ulonglong)uVar13);
          puVar11 = (undefined8 *)((longlong)puVar11 + ((ulonglong)(uVar13 + 0xb) & 0xfffffff8));
        }
        *puVar11 = 0;
        *puVar7 = FUN_18002ad84;
        *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar11;
        if (*(char *)(lVar2 + 0x14c5) != '\0') {
          FUN_18005e1c0(piVar9);
          hEvent = *(HANDLE *)(lVar2 + 0x1340);
LAB_18002ad22:
          SetEvent(hEvent);
          return;
        }
        goto LAB_18002ad6b;
      }
      FUN_18005e1c0(piVar9);
      Sleep(100);
      FUN_18005e070(piVar9);
    }
    puVar7 = *(undefined8 **)(lVar2 + 0x14a0);
    uVar8 = (ulonglong)(uVar13 != 0xfffffffc);
    puVar7[uVar8] = param_1;
    *(int *)(puVar7 + uVar8 + 1) = param_2;
    if (uVar13 != 0xfffffffc) {
      puVar11 = (undefined8 *)((longlong)puVar7 + uVar8 * 8 + 0xc);
      *puVar7 = puVar11;
      FUN_18005ed10(puVar11,param_3,(ulonglong)uVar13);
    }
    FUN_18002ad84(puVar7);
  }
LAB_18002ad6b:
  FUN_18005e1c0(piVar9);
  return;
}

