/*
 * FUN_18001c168 at 18001c168
 * undefined __fastcall FUN_18001c168(longlong param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 * param_5, uint param_6)
 * Address ranges: 18001c168-18001c5b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001c168(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  undefined4 *param_5,uint param_6)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int *piVar13;
  longlong lVar14;
  uint uVar15;
  undefined8 *puVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 local_res8;
  undefined4 *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  uVar18 = (ulonglong)param_6;
  FUN_1800192c4(param_1 + 0x3668);
  *(undefined4 *)(param_1 + 0x4714) = param_2;
  uVar9 = FUN_18001b610(param_1 + 0x42a0);
  lVar14 = *(longlong *)(param_1 + 0x3340);
  iVar17 = uVar9 * param_4;
  uVar10 = iVar17 + 4;
  FUN_18005fc20((int *)(lVar14 + 0x12c0));
  cVar3 = *(char *)(lVar14 + 0x14c4);
  if ((cVar3 == '\0') || (0x3eff < uVar10)) {
    local_48 = 0;
    local_58 = (undefined4 *)0x0;
    uStack_50 = 0;
    if ((cVar3 == '\0') ||
       (bVar8 = FUN_180055a64((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3340) + 0x17f0),uVar10,
                              (longlong *)&local_58), iVar17 = param_4, puVar5 = param_5,
       puVar6 = local_58, puVar7 = local_58, !bVar8)) {
      local_res8 = 0;
    }
    else {
      for (; param_5 = puVar7, local_58 = param_5, iVar17 != 0; iVar17 = iVar17 + -1) {
        uVar10 = FUN_18001b598(param_1 + 0x42a0,(longlong)puVar5,puVar6);
        puVar5 = (undefined4 *)((longlong)puVar5 + uVar18);
        puVar6 = puVar6 + uVar10;
        puVar7 = local_58;
      }
      local_res8 = 1;
      param_6 = uVar9;
    }
    puVar5 = local_58;
    lVar14 = *(longlong *)(param_1 + 0x3340);
    piVar13 = (int *)(lVar14 + 0x12c0);
    if (*(char *)(lVar14 + 0x14c4) != '\0') {
      puVar11 = (undefined8 *)FUN_18005fc40((longlong)piVar13,0x38);
      if (puVar11 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar14 + 0x14c0) = *(int *)(lVar14 + 0x14c0) + 1;
        UNLOCK();
        puVar11[1] = 0x38;
        puVar11[2] = param_1;
        *(undefined4 *)(puVar11 + 3) = param_3;
        *(int *)((longlong)puVar11 + 0x1c) = param_4;
        puVar11[4] = param_5;
        *(uint *)(puVar11 + 5) = param_6;
        *(undefined1 *)((longlong)puVar11 + 0x2c) = local_res8;
        *(undefined4 *)(puVar11 + 6) = param_2;
        *(undefined4 **)((longlong)puVar11 + 0x34) = puVar5;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x4fU & 0xfffffffffffffff8);
        *(undefined8 *)((longlong)puVar11 + 0x3c) = uStack_50;
        *(undefined4 *)((longlong)puVar11 + 0x44) = local_48;
        *puVar16 = 0;
        *puVar11 = FUN_18001c5f0;
        *(undefined8 **)(lVar14 + 0x1350 + (ulonglong)*(uint *)(lVar14 + 0x14bc) * 0x28) = puVar16;
        if (*(char *)(lVar14 + 0x14c5) != '\0') goto LAB_18001c51e;
        goto LAB_18001c59a;
      }
      FUN_18005fd70(piVar13);
      Sleep(100);
      FUN_18005fc20(piVar13);
    }
    plVar4 = *(longlong **)(lVar14 + 0x14a0);
    *plVar4 = param_1;
    *(undefined4 *)(plVar4 + 1) = param_3;
    *(int *)((longlong)plVar4 + 0xc) = param_4;
    plVar4[2] = (longlong)param_5;
    *(uint *)(plVar4 + 3) = param_6;
    *(undefined1 *)((longlong)plVar4 + 0x1c) = local_res8;
    *(undefined4 *)(plVar4 + 4) = param_2;
    *(undefined4 **)((longlong)plVar4 + 0x24) = puVar5;
    *(undefined8 *)((longlong)plVar4 + 0x2c) = uStack_50;
    *(undefined4 *)((longlong)plVar4 + 0x34) = local_48;
    FUN_18001c5f0(plVar4);
    goto LAB_18001c59a;
  }
  lVar14 = *(longlong *)(param_1 + 0x3340);
  piVar13 = (int *)(lVar14 + 0x12c0);
  if (*(char *)(lVar14 + 0x14c4) == '\0') {
LAB_18001c350:
    plVar4 = *(longlong **)(lVar14 + 0x14a0);
    uVar12 = (ulonglong)(uVar10 != 0);
    plVar4[uVar12] = param_1;
    *(undefined4 *)(plVar4 + uVar12 + 1) = param_3;
    *(int *)((longlong)plVar4 + uVar12 * 8 + 0xc) = param_4;
    *(uint *)(plVar4 + uVar12 + 2) = uVar9;
    *(undefined4 *)((longlong)plVar4 + uVar12 * 8 + 0x14) = param_2;
    if (uVar10 != 0) {
      plVar2 = plVar4 + uVar12 + 3;
      *plVar4 = (longlong)plVar2;
      for (; param_4 != 0; param_4 = param_4 + -1) {
        uVar10 = FUN_18001b598(param_1 + 0x42a0,(longlong)param_5,(undefined4 *)plVar2);
        param_5 = (undefined4 *)((longlong)param_5 + uVar18);
        plVar2 = (longlong *)((longlong)plVar2 + (ulonglong)uVar10 * 4);
      }
    }
    FUN_18001c5b8(plVar4);
  }
  else {
    uVar15 = (-(uint)(uVar10 != 0) & 8) + 0x18;
    if (uVar10 != 0) {
      uVar15 = uVar15 + (iVar17 + 0xbU & 0xfffffff8);
    }
    puVar11 = (undefined8 *)FUN_18005fc40((longlong)piVar13,uVar15);
    if (puVar11 == (undefined8 *)0x0) {
      FUN_18005fd70(piVar13);
      Sleep(100);
      FUN_18005fc20(piVar13);
      goto LAB_18001c350;
    }
    LOCK();
    *(int *)(lVar14 + 0x14c0) = *(int *)(lVar14 + 0x14c0) + 1;
    UNLOCK();
    puVar11[1] = (ulonglong)uVar15;
    uVar12 = (ulonglong)(uVar10 != 0);
    puVar11[uVar12 + 2] = param_1;
    *(undefined4 *)(puVar11 + uVar12 + 3) = param_3;
    puVar16 = (undefined8 *)(uVar12 * 8 + 0x2f + (longlong)puVar11 & 0xfffffffffffffff8);
    *(int *)((longlong)puVar11 + uVar12 * 8 + 0x1c) = param_4;
    *(uint *)(puVar11 + uVar12 + 4) = uVar9;
    *(undefined4 *)((longlong)puVar11 + uVar12 * 8 + 0x24) = param_2;
    if (uVar10 != 0) {
      puVar11[2] = puVar16;
      puVar1 = puVar16;
      for (; param_4 != 0; param_4 = param_4 + -1) {
        uVar10 = FUN_18001b598(param_1 + 0x42a0,(longlong)param_5,(undefined4 *)puVar1);
        param_5 = (undefined4 *)((longlong)param_5 + uVar18);
        puVar1 = (undefined8 *)((longlong)puVar1 + (ulonglong)uVar10 * 4);
      }
      puVar16 = (undefined8 *)((longlong)puVar16 + ((ulonglong)(iVar17 + 0xb) & 0xfffffff8));
    }
    piVar13 = (int *)(lVar14 + 0x12c0);
    *puVar16 = 0;
    *puVar11 = FUN_18001c5b8;
    *(undefined8 **)(lVar14 + 0x1350 + (ulonglong)*(uint *)(lVar14 + 0x14bc) * 0x28) = puVar16;
    if (*(char *)(lVar14 + 0x14c5) != '\0') {
LAB_18001c51e:
      FUN_18005fd70(piVar13);
      SetEvent(*(HANDLE *)(lVar14 + 0x1340));
      return;
    }
  }
  piVar13 = (int *)(lVar14 + 0x12c0);
LAB_18001c59a:
  FUN_18005fd70(piVar13);
  return;
}

