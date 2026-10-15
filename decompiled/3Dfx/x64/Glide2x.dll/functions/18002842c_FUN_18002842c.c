/*
 * FUN_18002842c at 18002842c
 * undefined __fastcall FUN_18002842c(longlong param_1, undefined4 param_2, int param_3, longlong * param_4, int param_5, int param_6)
 * Address ranges: 18002842c-18002879f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002842c(longlong param_1,undefined4 param_2,int param_3,longlong *param_4,int param_5,
                  int param_6)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  HANDLE hEvent;
  int *piVar22;
  undefined8 *puVar23;
  
  FUN_180026a88(param_1 + 0x34e8);
  if ((param_3 == 0) || (param_3 == 1)) {
    lVar2 = *(longlong *)(param_1 + 0x31c0);
    lVar4 = *param_4;
    lVar5 = param_4[1];
    lVar6 = param_4[2];
    lVar7 = param_4[3];
    lVar8 = param_4[4];
    lVar9 = param_4[5];
    lVar10 = param_4[6];
    lVar11 = param_4[7];
    lVar12 = param_4[8];
    lVar13 = param_4[9];
    lVar14 = param_4[10];
    lVar15 = param_4[0xb];
    lVar16 = param_4[0xc];
    lVar17 = param_4[0xd];
    piVar22 = (int *)(lVar2 + 0x12c0);
    FUN_18005e070(piVar22);
    if (*(char *)(lVar2 + 0x14c4) != '\0') {
      puVar21 = (undefined8 *)FUN_18005e090((longlong)piVar22,0x88);
      if (puVar21 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
        UNLOCK();
        puVar21[1] = 0x88;
        puVar20 = (undefined8 *)((longlong)puVar21 + 0x9fU & 0xfffffffffffffff8);
        puVar21[2] = param_1;
        *(undefined4 *)(puVar21 + 3) = param_2;
        *(int *)((longlong)puVar21 + 0x1c) = param_3;
        *(int *)(puVar21 + 4) = param_5;
        *(int *)((longlong)puVar21 + 0x24) = param_6;
        puVar21[5] = lVar4;
        puVar21[6] = lVar5;
        puVar21[7] = lVar6;
        puVar21[8] = lVar7;
        puVar21[9] = lVar8;
        puVar21[10] = lVar9;
        puVar21[0xb] = lVar10;
        puVar21[0xc] = lVar11;
        puVar21[0xd] = lVar12;
        puVar21[0xe] = lVar13;
        puVar21[0xf] = lVar14;
        puVar21[0x10] = lVar15;
        puVar21[0x11] = lVar16;
        puVar21[0x12] = lVar17;
        *puVar20 = 0;
        *puVar21 = FUN_1800287a0;
        *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar20;
        if (*(char *)(lVar2 + 0x14c5) != '\0') {
          FUN_18005e1c0(piVar22);
          hEvent = *(HANDLE *)(lVar2 + 0x1340);
          goto LAB_1800286ec;
        }
        goto LAB_18002875d;
      }
      FUN_18005e1c0(piVar22);
      Sleep(100);
      FUN_18005e070(piVar22);
    }
    plVar3 = *(longlong **)(lVar2 + 0x14a0);
    *plVar3 = param_1;
    *(undefined4 *)(plVar3 + 1) = param_2;
    *(int *)((longlong)plVar3 + 0xc) = param_3;
    *(int *)(plVar3 + 2) = param_5;
    *(int *)((longlong)plVar3 + 0x14) = param_6;
    plVar3[3] = lVar4;
    plVar3[4] = lVar5;
    plVar3[5] = lVar6;
    plVar3[6] = lVar7;
    plVar3[7] = lVar8;
    plVar3[8] = lVar9;
    plVar3[9] = lVar10;
    plVar3[10] = lVar11;
    plVar3[0xb] = lVar12;
    plVar3[0xc] = lVar13;
    plVar3[0xd] = lVar14;
    plVar3[0xe] = lVar15;
    plVar3[0xf] = lVar16;
    plVar3[0x10] = lVar17;
    FUN_1800287a0(plVar3);
  }
  else {
    if (param_3 != 2) {
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0x31c0);
    piVar22 = (int *)(lVar2 + 0x12c0);
    FUN_18005e070(piVar22);
    puVar21 = (undefined8 *)((longlong)param_4 + (longlong)param_5 * 4);
    if (*(char *)(lVar2 + 0x14c4) != '\0') {
      uVar18 = (param_6 - param_5) * 4;
      uVar1 = uVar18 + 7;
      uVar19 = (uVar1 & 0xfffffff8) + 0x20;
      puVar20 = (undefined8 *)FUN_18005e090((longlong)piVar22,uVar19);
      if (puVar20 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
        UNLOCK();
        puVar20[1] = (ulonglong)uVar19;
        puVar20[3] = param_1;
        *(undefined4 *)(puVar20 + 4) = param_2;
        *(undefined4 *)((longlong)puVar20 + 0x24) = 2;
        *(int *)(puVar20 + 5) = param_5;
        *(int *)((longlong)puVar20 + 0x2c) = param_6;
        puVar23 = (undefined8 *)((longlong)puVar20 + 0x37U & 0xfffffffffffffff8);
        puVar20[2] = puVar23;
        FUN_18005ed10(puVar23,puVar21,(ulonglong)uVar18);
        puVar23 = (undefined8 *)(((ulonglong)uVar1 & 0xfffffff8) + (longlong)puVar23);
        *puVar23 = 0;
        *puVar20 = FUN_1800287cc;
        *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar23;
        if (*(char *)(lVar2 + 0x14c5) != '\0') {
          FUN_18005e1c0(piVar22);
          hEvent = *(HANDLE *)(lVar2 + 0x1340);
LAB_1800286ec:
          SetEvent(hEvent);
          return;
        }
        goto LAB_18002875d;
      }
      FUN_18005e1c0(piVar22);
      Sleep(100);
      FUN_18005e070(piVar22);
    }
    plVar3 = *(longlong **)(lVar2 + 0x14a0);
    *plVar3 = (longlong)puVar21;
    plVar3[1] = param_1;
    *(undefined4 *)(plVar3 + 2) = param_2;
    *(undefined4 *)((longlong)plVar3 + 0x14) = 2;
    *(int *)(plVar3 + 3) = param_5;
    *(int *)((longlong)plVar3 + 0x1c) = param_6;
    FUN_1800287cc(plVar3);
  }
LAB_18002875d:
  FUN_18005e1c0(piVar22);
  return;
}

