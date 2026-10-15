/*
 * FUN_18002b908 at 18002b908
 * undefined __cdecl FUN_18002b908(longlong param_1, int param_2, undefined8 * param_3, undefined1 param_4)
 * Address ranges: 18002b908-18002bbff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002b908(longlong param_1,int param_2,undefined8 *param_3,undefined1 param_4)

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
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *local_70;
  undefined8 local_68;
  undefined4 local_60;
  
  FUN_180028498(param_1 + 0x34e8);
  lVar12 = *(longlong *)(param_1 + 0x31c0);
  FUN_180042980((uint *)(lVar12 + 0x12c0));
  cVar2 = *(char *)(lVar12 + 0x14c4);
  uVar3 = param_2 * 0x3c;
  uVar13 = (ulonglong)uVar3;
  if ((cVar2 == '\0') || (0x3eff < uVar3 + 4)) {
    puVar7 = (undefined8 *)0x0;
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    local_60 = 0;
    if ((cVar2 != '\0') &&
       (bVar6 = FUN_1800549d0((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31c0) + 0x17f0),uVar3,
                              (longlong *)&local_70), puVar7 = local_70, bVar6)) {
      thunk_FUN_180001218(local_70,param_3,uVar13);
      param_3 = puVar7;
    }
    uVar5 = local_60;
    uVar4 = local_68;
    lVar12 = *(longlong *)(param_1 + 0x31c0);
    if (*(char *)(lVar12 + 0x14c4) != '\0') {
      puVar14 = (undefined8 *)FUN_180042850(lVar12 + 0x12c0,0x30);
      if (puVar14 != (undefined8 *)0x0) {
        FUN_1800608b0((uint *)(lVar12 + 0x14c0));
        puVar14[1] = 0x30;
        puVar14[2] = param_1;
        *(int *)(puVar14 + 3) = param_2;
        puVar11 = (undefined8 *)((longlong)puVar14 + 0x43U & 0xfffffffffffffff8);
        *(undefined8 **)((longlong)puVar14 + 0x1c) = param_3;
        *(undefined1 *)((longlong)puVar14 + 0x24) = param_4;
        puVar14[5] = puVar7;
        *(undefined4 *)(puVar14 + 6) = uVar5;
        *(undefined8 *)((longlong)puVar14 + 0x34) = uVar4;
        *puVar11 = 0;
        *puVar14 = FUN_18002bc10;
        *(undefined8 **)(lVar12 + (ulonglong)*(uint *)(lVar12 + 0x14bc) * 0x28 + 0x1350) = puVar11;
        if (*(char *)(lVar12 + 0x14c5) != '\0') {
          *(undefined4 *)(lVar12 + 0x12c0) = 0;
          hEvent = *(HANDLE *)(lVar12 + 0x1340);
          goto LAB_18002bb90;
        }
        goto LAB_18002bbe0;
      }
      *(undefined4 *)(lVar12 + 0x12c0) = 0;
      Sleep(100);
      FUN_180042980((uint *)(lVar12 + 0x12c0));
    }
    plVar8 = *(longlong **)(lVar12 + 0x14a0);
    *plVar8 = param_1;
    *(int *)(plVar8 + 1) = param_2;
    *(undefined8 **)((longlong)plVar8 + 0xc) = param_3;
    *(undefined1 *)((longlong)plVar8 + 0x14) = param_4;
    plVar8[3] = (longlong)puVar7;
    *(undefined4 *)(plVar8 + 4) = uVar5;
    *(undefined8 *)((longlong)plVar8 + 0x24) = uVar4;
    FUN_18002bc10(plVar8);
LAB_18002bbe0:
    *(undefined4 *)(lVar12 + 0x12c0) = 0;
    return;
  }
  lVar12 = *(longlong *)(param_1 + 0x31c0);
  if (*(char *)(lVar12 + 0x14c4) != '\0') {
    if (uVar3 == 0xfffffffc) {
      uVar9 = 0x10;
    }
    else {
      uVar9 = (uVar3 + 0xb & 0xfffffff8) + 0x18;
    }
    puVar7 = (undefined8 *)FUN_180042850(lVar12 + 0x12c0,uVar9);
    if (puVar7 != (undefined8 *)0x0) {
      FUN_1800608b0((uint *)(lVar12 + 0x14c0));
      puVar7[1] = (ulonglong)uVar9;
      lVar1 = 2;
      if (uVar3 != 0xfffffffc) {
        lVar1 = 3;
      }
      plVar8 = puVar7 + lVar1;
      *plVar8 = param_1;
      *(int *)(plVar8 + 1) = param_2;
      *(undefined1 *)((longlong)plVar8 + 0xc) = param_4;
      puVar14 = (undefined8 *)((longlong)plVar8 + 0x17U & 0xfffffffffffffff8);
      if (uVar3 != 0xfffffffc) {
        puVar7[2] = puVar14;
        thunk_FUN_180001218(puVar14,param_3,uVar13);
        puVar14 = (undefined8 *)(((ulonglong)(uVar3 + 0xb) & 0xfffffff8) + (longlong)puVar14);
      }
      *puVar14 = 0;
      *puVar7 = FUN_18002bc00;
      *(undefined8 **)(lVar12 + (ulonglong)*(uint *)(lVar12 + 0x14bc) * 0x28 + 0x1350) = puVar14;
      if (*(char *)(lVar12 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar12 + 0x12c0) = 0;
        hEvent = *(HANDLE *)(lVar12 + 0x1340);
LAB_18002bb90:
        SetEvent(hEvent);
        return;
      }
      goto LAB_18002baac;
    }
    *(undefined4 *)(lVar12 + 0x12c0) = 0;
    Sleep(100);
    FUN_180042980((uint *)(lVar12 + 0x12c0));
  }
  uVar10 = (ulonglong)(uVar3 != 0xfffffffc);
  puVar7 = *(undefined8 **)(lVar12 + 0x14a0);
  puVar7[uVar10] = param_1;
  *(int *)(puVar7 + uVar10 + 1) = param_2;
  *(undefined1 *)((longlong)puVar7 + uVar10 * 8 + 0xc) = param_4;
  if (uVar3 != 0xfffffffc) {
    puVar14 = (undefined8 *)((uVar10 * 8 | 0x10) + (longlong)puVar7);
    *puVar7 = puVar14;
    thunk_FUN_180001218(puVar14,param_3,uVar13);
  }
  FUN_18002bc00(puVar7);
LAB_18002baac:
  *(undefined4 *)(lVar12 + 0x12c0) = 0;
  return;
}

