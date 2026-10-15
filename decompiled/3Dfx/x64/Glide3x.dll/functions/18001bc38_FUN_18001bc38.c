/*
 * FUN_18001bc38 at 18001bc38
 * undefined __fastcall FUN_18001bc38(longlong param_1, undefined4 param_2, undefined4 param_3, uint param_4, longlong param_5)
 * Address ranges: 18001bc38-18001c0b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001bc38(longlong param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                  longlong param_5)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  HANDLE hEvent;
  int *piVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined1 uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong local_58;
  longlong lStack_50;
  undefined4 local_48;
  
  FUN_1800192c4(param_1 + 0x3668);
  lVar1 = param_1 + 0x42a0;
  *(undefined4 *)(param_1 + 0x4714) = param_2;
  iVar8 = FUN_18001b610(lVar1);
  lVar11 = *(longlong *)(param_1 + 0x3340);
  iVar8 = param_4 * 8 + iVar8 * param_4;
  FUN_18005fc20((int *)(lVar11 + 0x12c0));
  cVar2 = *(char *)(lVar11 + 0x14c4);
  if ((cVar2 == '\0') || (0x3eff < iVar8 + 4U)) {
    uVar16 = 0;
    local_48 = 0;
    local_58 = 0;
    lStack_50 = 0;
    if (cVar2 == '\0') {
      lVar11 = 0;
    }
    else {
      bVar7 = FUN_180055a64((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3340) + 0x17f0),
                            iVar8 + 0x24,&local_58);
      lVar11 = local_58;
      if (bVar7) {
        puVar15 = (undefined4 *)((ulonglong)(param_4 * 8) + local_58);
        uVar12 = 0;
        if (param_4 != 0) {
          do {
            *(undefined4 **)(lVar11 + uVar12 * 8) = puVar15;
            uVar13 = FUN_18001b598(lVar1,*(longlong *)(param_5 + uVar12 * 8),puVar15);
            uVar17 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar17;
            puVar15 = puVar15 + uVar13;
          } while (uVar17 < param_4);
        }
        param_5 = lVar11;
        uVar16 = 1;
      }
    }
    uVar6 = local_48;
    lVar5 = lStack_50;
    lVar1 = *(longlong *)(param_1 + 0x3340);
    piVar10 = (int *)(lVar1 + 0x12c0);
    if (*(char *)(lVar1 + 0x14c4) != '\0') {
      puVar9 = (undefined8 *)FUN_18005fc40((longlong)piVar10,0x38);
      if (puVar9 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar1 + 0x14c0) = *(int *)(lVar1 + 0x14c0) + 1;
        UNLOCK();
        puVar9[1] = 0x38;
        puVar9[2] = param_1;
        *(undefined4 *)(puVar9 + 3) = param_3;
        *(uint *)((longlong)puVar9 + 0x1c) = param_4;
        puVar9[4] = param_5;
        *(undefined1 *)(puVar9 + 5) = uVar16;
        *(undefined4 *)((longlong)puVar9 + 0x2c) = param_2;
        puVar9[6] = lVar11;
        puVar14 = (undefined8 *)((longlong)puVar9 + 0x4bU & 0xfffffffffffffff8);
        puVar9[7] = lVar5;
        *(undefined4 *)(puVar9 + 8) = uVar6;
        *puVar14 = 0;
        *puVar9 = FUN_18001c0e8;
        *(undefined8 **)(lVar1 + 0x1350 + (ulonglong)*(uint *)(lVar1 + 0x14bc) * 0x28) = puVar14;
        if (*(char *)(lVar1 + 0x14c5) != '\0') {
          FUN_18005fd70(piVar10);
          hEvent = *(HANDLE *)(lVar1 + 0x1340);
          goto LAB_18001c02e;
        }
        goto LAB_18001c09a;
      }
      FUN_18005fd70(piVar10);
      Sleep(100);
      FUN_18005fc20(piVar10);
    }
    plVar4 = *(longlong **)(lVar1 + 0x14a0);
    *plVar4 = param_1;
    *(undefined4 *)(plVar4 + 1) = param_3;
    *(uint *)((longlong)plVar4 + 0xc) = param_4;
    plVar4[2] = param_5;
    *(undefined1 *)(plVar4 + 3) = uVar16;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = param_2;
    plVar4[4] = lVar11;
    plVar4[5] = lVar5;
    *(undefined4 *)(plVar4 + 6) = uVar6;
    FUN_18001c0e8(plVar4);
    goto LAB_18001c09a;
  }
  lVar11 = *(longlong *)(param_1 + 0x3340);
  piVar10 = (int *)(lVar11 + 0x12c0);
  if (*(char *)(lVar11 + 0x14c4) == '\0') {
LAB_18001be34:
    plVar3 = *(longlong **)(lVar11 + 0x14a0);
    uVar12 = (ulonglong)(iVar8 != -4) * 8;
    plVar4 = plVar3 + (iVar8 != -4);
    *plVar4 = param_1;
    *(undefined4 *)(plVar4 + 1) = param_3;
    *(uint *)((longlong)plVar4 + 0xc) = param_4;
    *(undefined4 *)(plVar4 + 2) = param_2;
    if (iVar8 != -4) {
      uVar18 = 0;
      *plVar3 = (uVar12 | 0x14) + (longlong)plVar3;
      puVar15 = (undefined4 *)((longlong)plVar3 + (uVar12 | 0x14) + (ulonglong)(param_4 * 8));
      if (param_4 != 0) {
        do {
          *(undefined4 **)((longlong)plVar4 + uVar18 * 8 + 0x14) = puVar15;
          uVar13 = FUN_18001b598(param_1 + 0x42a0,*(longlong *)(param_5 + uVar18 * 8),puVar15);
          uVar17 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar17;
          puVar15 = puVar15 + uVar13;
        } while (uVar17 < param_4);
      }
    }
    FUN_18001c0b8(plVar3);
  }
  else {
    uVar13 = (-(uint)(iVar8 != -4) & 8) + 0x18;
    if (iVar8 != -4) {
      uVar13 = uVar13 + (iVar8 + 0xbU & 0xfffffff8);
    }
    puVar9 = (undefined8 *)FUN_18005fc40((longlong)piVar10,uVar13);
    if (puVar9 == (undefined8 *)0x0) {
      FUN_18005fd70(piVar10);
      Sleep(100);
      FUN_18005fc20(piVar10);
      goto LAB_18001be34;
    }
    LOCK();
    *(int *)(lVar11 + 0x14c0) = *(int *)(lVar11 + 0x14c0) + 1;
    UNLOCK();
    puVar9[1] = (ulonglong)uVar13;
    uVar12 = (ulonglong)(iVar8 != -4);
    puVar9[uVar12 + 2] = param_1;
    *(undefined4 *)(puVar9 + uVar12 + 3) = param_3;
    puVar14 = (undefined8 *)(uVar12 * 8 + 0x2b + (longlong)puVar9 & 0xfffffffffffffff8);
    *(uint *)((longlong)puVar9 + uVar12 * 8 + 0x1c) = param_4;
    *(undefined4 *)(puVar9 + uVar12 + 4) = param_2;
    if (iVar8 != -4) {
      puVar9[2] = puVar14;
      puVar15 = (undefined4 *)((ulonglong)(param_4 * 8) + (longlong)puVar14);
      uVar12 = 0;
      if (param_4 != 0) {
        do {
          puVar14[uVar12] = puVar15;
          uVar13 = FUN_18001b598(lVar1,*(longlong *)(param_5 + uVar12 * 8),puVar15);
          uVar17 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar17;
          puVar15 = puVar15 + uVar13;
        } while (uVar17 < param_4);
      }
      puVar14 = (undefined8 *)((longlong)puVar14 + ((ulonglong)(iVar8 + 0xb) & 0xfffffff8));
    }
    *puVar14 = 0;
    *puVar9 = FUN_18001c0b8;
    *(undefined8 **)(lVar11 + 0x1350 + (ulonglong)*(uint *)(lVar11 + 0x14bc) * 0x28) = puVar14;
    if (*(char *)(lVar11 + 0x14c5) != '\0') {
      FUN_18005fd70((undefined4 *)(lVar11 + 0x12c0));
      hEvent = *(HANDLE *)(lVar11 + 0x1340);
LAB_18001c02e:
      SetEvent(hEvent);
      return;
    }
  }
  piVar10 = (int *)(lVar11 + 0x12c0);
LAB_18001c09a:
  FUN_18005fd70(piVar10);
  return;
}

