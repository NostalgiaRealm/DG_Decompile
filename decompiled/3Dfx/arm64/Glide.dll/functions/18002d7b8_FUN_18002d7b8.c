/*
 * FUN_18002d7b8 at 18002d7b8
 * undefined __cdecl FUN_18002d7b8(longlong param_1, int param_2, undefined8 * param_3)
 * Address ranges: 18002d7b8-18002da93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002d7b8(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  HANDLE hEvent;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *local_70;
  undefined8 local_68;
  undefined4 local_60;
  
  FUN_1800292e8(param_1 + 0x34e8);
  lVar10 = *(longlong *)(param_1 + 0x31c0);
  FUN_1800437d0((uint *)(lVar10 + 0x12c0));
  cVar2 = *(char *)(lVar10 + 0x14c4);
  uVar3 = param_2 * 0x3c;
  uVar11 = (ulonglong)uVar3;
  if ((cVar2 == '\0') || (0x3eff < uVar3 + 4)) {
    puVar7 = (undefined8 *)0x0;
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    local_60 = 0;
    if ((cVar2 != '\0') &&
       (bVar6 = FUN_180055820((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31c0) + 0x17f0),uVar3,
                              (longlong *)&local_70), puVar7 = local_70, bVar6)) {
      thunk_FUN_180001218(local_70,param_3,uVar11);
      param_3 = puVar7;
    }
    uVar5 = local_60;
    uVar4 = local_68;
    lVar10 = *(longlong *)(param_1 + 0x31c0);
    if (*(char *)(lVar10 + 0x14c4) != '\0') {
      puVar12 = (undefined8 *)FUN_1800436a0(lVar10 + 0x12c0,0x28);
      if (puVar12 != (undefined8 *)0x0) {
        FUN_180061700((uint *)(lVar10 + 0x14c0));
        puVar12[1] = 0x28;
        puVar12[2] = param_1;
        *(int *)(puVar12 + 3) = param_2;
        *(undefined8 **)((longlong)puVar12 + 0x1c) = param_3;
        *(undefined8 **)((longlong)puVar12 + 0x24) = puVar7;
        puVar7 = (undefined8 *)((longlong)puVar12 + 0x3fU & 0xfffffffffffffff8);
        *(undefined8 *)((longlong)puVar12 + 0x2c) = uVar4;
        *(undefined4 *)((longlong)puVar12 + 0x34) = uVar5;
        *puVar7 = 0;
        *puVar12 = FUN_18002dab8;
        *(undefined8 **)(lVar10 + (ulonglong)*(uint *)(lVar10 + 0x14bc) * 0x28 + 0x1350) = puVar7;
        if (*(char *)(lVar10 + 0x14c5) != '\0') {
          *(undefined4 *)(lVar10 + 0x12c0) = 0;
          hEvent = *(HANDLE *)(lVar10 + 0x1340);
          goto LAB_18002da28;
        }
        goto LAB_18002da74;
      }
      *(undefined4 *)(lVar10 + 0x12c0) = 0;
      Sleep(100);
      FUN_1800437d0((uint *)(lVar10 + 0x12c0));
    }
    plVar8 = *(longlong **)(lVar10 + 0x14a0);
    *plVar8 = param_1;
    *(int *)(plVar8 + 1) = param_2;
    *(undefined8 **)((longlong)plVar8 + 0xc) = param_3;
    *(undefined8 **)((longlong)plVar8 + 0x14) = puVar7;
    *(undefined8 *)((longlong)plVar8 + 0x1c) = uVar4;
    *(undefined4 *)((longlong)plVar8 + 0x24) = uVar5;
    FUN_18002dab8(plVar8);
LAB_18002da74:
    *(undefined4 *)(lVar10 + 0x12c0) = 0;
    return;
  }
  lVar10 = *(longlong *)(param_1 + 0x31c0);
  if (*(char *)(lVar10 + 0x14c4) != '\0') {
    if (uVar3 == 0xfffffffc) {
      uVar9 = 0x10;
    }
    else {
      uVar9 = (uVar3 + 0xb & 0xfffffff8) + 0x18;
    }
    puVar7 = (undefined8 *)FUN_1800436a0(lVar10 + 0x12c0,uVar9);
    if (puVar7 != (undefined8 *)0x0) {
      FUN_180061700((uint *)(lVar10 + 0x14c0));
      puVar7[1] = (ulonglong)uVar9;
      lVar1 = 2;
      if (uVar3 != 0xfffffffc) {
        lVar1 = 3;
      }
      plVar8 = puVar7 + lVar1;
      *plVar8 = param_1;
      *(int *)(plVar8 + 1) = param_2;
      puVar12 = (undefined8 *)((longlong)plVar8 + 0x13U & 0xfffffffffffffff8);
      if (uVar3 != 0xfffffffc) {
        puVar7[2] = puVar12;
        thunk_FUN_180001218(puVar12,param_3,uVar11);
        puVar12 = (undefined8 *)(((ulonglong)(uVar3 + 0xb) & 0xfffffff8) + (longlong)puVar12);
      }
      *puVar12 = 0;
      *puVar7 = FUN_18002da98;
      *(undefined8 **)(lVar10 + (ulonglong)*(uint *)(lVar10 + 0x14bc) * 0x28 + 0x1350) = puVar12;
      if (*(char *)(lVar10 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar10 + 0x12c0) = 0;
        hEvent = *(HANDLE *)(lVar10 + 0x1340);
LAB_18002da28:
        SetEvent(hEvent);
        return;
      }
      goto LAB_18002d948;
    }
    *(undefined4 *)(lVar10 + 0x12c0) = 0;
    Sleep(100);
    FUN_1800437d0((uint *)(lVar10 + 0x12c0));
  }
  puVar7 = *(undefined8 **)(lVar10 + 0x14a0);
  plVar8 = puVar7 + (uVar3 != 0xfffffffc);
  *plVar8 = param_1;
  *(int *)(plVar8 + 1) = param_2;
  if (uVar3 != 0xfffffffc) {
    *puVar7 = (undefined8 *)((longlong)plVar8 + 0xc);
    thunk_FUN_180001218((undefined8 *)((longlong)plVar8 + 0xc),param_3,uVar11);
  }
  FUN_18002da98(puVar7);
LAB_18002d948:
  *(undefined4 *)(lVar10 + 0x12c0) = 0;
  return;
}

