/*
 * FUN_180029da4 at 180029da4
 * undefined __fastcall FUN_180029da4(longlong param_1, int param_2, undefined8 * param_3, undefined1 param_4)
 * Address ranges: 180029da4-18002a0f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180029da4(longlong param_1,int param_2,undefined8 *param_3,undefined1 param_4)

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
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  FUN_180026f30(param_1 + 0x34e8);
  lVar2 = *(longlong *)(param_1 + 0x31c0);
  FUN_18005e510((int *)(lVar2 + 0x12c0));
  cVar1 = *(char *)(lVar2 + 0x14c4);
  uVar10 = param_2 * 0x3c;
  if ((cVar1 == '\0') || (0x3eff < uVar10 + 4)) {
    local_48 = 0;
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    if (cVar1 == '\0') {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      bVar6 = FUN_180053900((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31c0) + 0x17f0),uVar10,
                            (longlong *)&local_58);
      puVar7 = local_58;
      if (bVar6) {
        FUN_18005f1b0(local_58,param_3,(ulonglong)uVar10);
        param_3 = puVar7;
      }
    }
    uVar5 = local_48;
    uVar4 = uStack_50;
    lVar2 = *(longlong *)(param_1 + 0x31c0);
    piVar9 = (int *)(lVar2 + 0x12c0);
    if (*(char *)(lVar2 + 0x14c4) != '\0') {
      puVar12 = (undefined8 *)FUN_18005e530((longlong)piVar9,0x30);
      if (puVar12 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
        UNLOCK();
        puVar12[1] = 0x30;
        puVar12[2] = param_1;
        *(int *)(puVar12 + 3) = param_2;
        *(undefined8 **)((longlong)puVar12 + 0x1c) = param_3;
        *(undefined1 *)((longlong)puVar12 + 0x24) = param_4;
        puVar12[5] = puVar7;
        puVar7 = (undefined8 *)((longlong)puVar12 + 0x43U & 0xfffffffffffffff8);
        *(undefined4 *)(puVar12 + 6) = uVar5;
        *(undefined8 *)((longlong)puVar12 + 0x34) = uVar4;
        *puVar7 = 0;
        *puVar12 = FUN_18002a108;
        *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar7;
        if (*(char *)(lVar2 + 0x14c5) != '\0') {
          FUN_18005e660(piVar9);
          hEvent = *(HANDLE *)(lVar2 + 0x1340);
          goto LAB_18002a082;
        }
        goto LAB_18002a0d7;
      }
      FUN_18005e660(piVar9);
      Sleep(100);
      FUN_18005e510(piVar9);
    }
    plVar3 = *(longlong **)(lVar2 + 0x14a0);
    *plVar3 = param_1;
    *(int *)(plVar3 + 1) = param_2;
    *(undefined8 **)((longlong)plVar3 + 0xc) = param_3;
    *(undefined1 *)((longlong)plVar3 + 0x14) = param_4;
    plVar3[3] = (longlong)puVar7;
    *(undefined4 *)(plVar3 + 4) = uVar5;
    *(undefined8 *)((longlong)plVar3 + 0x24) = uVar4;
    FUN_18002a108(plVar3);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x31c0);
    piVar9 = (int *)(lVar2 + 0x12c0);
    if (*(char *)(lVar2 + 0x14c4) != '\0') {
      uVar11 = (-(uint)(uVar10 != 0xfffffffc) & 8) + 0x10;
      if (uVar10 != 0xfffffffc) {
        uVar11 = uVar11 + (uVar10 + 0xb & 0xfffffff8);
      }
      puVar7 = (undefined8 *)FUN_18005e530((longlong)piVar9,uVar11);
      if (puVar7 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
        UNLOCK();
        puVar7[1] = (ulonglong)uVar11;
        uVar8 = (ulonglong)(uVar10 != 0xfffffffc);
        puVar7[uVar8 + 2] = param_1;
        puVar12 = (undefined8 *)(uVar8 * 8 + 0x27 + (longlong)puVar7 & 0xfffffffffffffff8);
        *(int *)(puVar7 + uVar8 + 3) = param_2;
        *(undefined1 *)((longlong)puVar7 + uVar8 * 8 + 0x1c) = param_4;
        if (uVar10 != 0xfffffffc) {
          puVar7[2] = puVar12;
          FUN_18005f1b0(puVar12,param_3,(ulonglong)uVar10);
          puVar12 = (undefined8 *)((longlong)puVar12 + ((ulonglong)(uVar10 + 0xb) & 0xfffffff8));
        }
        *puVar12 = 0;
        *puVar7 = FUN_18002a0f4;
        *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar12;
        if (*(char *)(lVar2 + 0x14c5) != '\0') {
          FUN_18005e660(piVar9);
          hEvent = *(HANDLE *)(lVar2 + 0x1340);
LAB_18002a082:
          SetEvent(hEvent);
          return;
        }
        goto LAB_18002a0d7;
      }
      FUN_18005e660(piVar9);
      Sleep(100);
      FUN_18005e510(piVar9);
    }
    puVar7 = *(undefined8 **)(lVar2 + 0x14a0);
    uVar8 = (ulonglong)(uVar10 != 0xfffffffc);
    puVar7[uVar8] = param_1;
    *(int *)(puVar7 + uVar8 + 1) = param_2;
    *(undefined1 *)(uVar8 * 8 + 0xc + (longlong)puVar7) = param_4;
    if (uVar10 != 0xfffffffc) {
      puVar12 = (undefined8 *)((uVar8 * 8 | 0x10) + (longlong)puVar7);
      *puVar7 = puVar12;
      FUN_18005f1b0(puVar12,param_3,(ulonglong)uVar10);
    }
    FUN_18002a0f4(puVar7);
  }
LAB_18002a0d7:
  FUN_18005e660(piVar9);
  return;
}

