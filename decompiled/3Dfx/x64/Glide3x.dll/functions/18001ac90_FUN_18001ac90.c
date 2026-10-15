/*
 * FUN_18001ac90 at 18001ac90
 * undefined __fastcall FUN_18001ac90(longlong param_1, undefined4 param_2, int param_3, longlong * param_4, int param_5, int param_6)
 * Address ranges: 18001ac90-18001b009
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001ac90(longlong param_1,undefined4 param_2,int param_3,longlong *param_4,int param_5,
                  int param_6)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
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
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  HANDLE hEvent;
  int *piVar22;
  undefined8 *puVar23;
  
  FUN_1800192c4(param_1 + 0x3668);
  if ((param_3 == 0) || (param_3 == 1)) {
    lVar1 = *(longlong *)(param_1 + 0x3340);
    lVar3 = *param_4;
    lVar4 = param_4[1];
    lVar5 = param_4[2];
    lVar6 = param_4[3];
    lVar7 = param_4[4];
    lVar8 = param_4[5];
    lVar9 = param_4[6];
    lVar10 = param_4[7];
    lVar11 = param_4[8];
    lVar12 = param_4[9];
    lVar13 = param_4[10];
    lVar14 = param_4[0xb];
    lVar15 = param_4[0xc];
    lVar16 = param_4[0xd];
    piVar22 = (int *)(lVar1 + 0x12c0);
    FUN_18005fc20(piVar22);
    if (*(char *)(lVar1 + 0x14c4) != '\0') {
      puVar21 = (undefined8 *)FUN_18005fc40((longlong)piVar22,0x88);
      if (puVar21 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar1 + 0x14c0) = *(int *)(lVar1 + 0x14c0) + 1;
        UNLOCK();
        puVar21[1] = 0x88;
        puVar20 = (undefined8 *)((longlong)puVar21 + 0x9fU & 0xfffffffffffffff8);
        puVar21[2] = param_1;
        *(undefined4 *)(puVar21 + 3) = param_2;
        *(int *)((longlong)puVar21 + 0x1c) = param_3;
        *(int *)(puVar21 + 4) = param_5;
        *(int *)((longlong)puVar21 + 0x24) = param_6;
        puVar21[5] = lVar3;
        puVar21[6] = lVar4;
        puVar21[7] = lVar5;
        puVar21[8] = lVar6;
        puVar21[9] = lVar7;
        puVar21[10] = lVar8;
        puVar21[0xb] = lVar9;
        puVar21[0xc] = lVar10;
        puVar21[0xd] = lVar11;
        puVar21[0xe] = lVar12;
        puVar21[0xf] = lVar13;
        puVar21[0x10] = lVar14;
        puVar21[0x11] = lVar15;
        puVar21[0x12] = lVar16;
        *puVar20 = 0;
        *puVar21 = FUN_18001b00c;
        *(undefined8 **)(lVar1 + 0x1350 + (ulonglong)*(uint *)(lVar1 + 0x14bc) * 0x28) = puVar20;
        if (*(char *)(lVar1 + 0x14c5) != '\0') {
          FUN_18005fd70(piVar22);
          hEvent = *(HANDLE *)(lVar1 + 0x1340);
          goto LAB_18001af55;
        }
        goto LAB_18001afc7;
      }
      FUN_18005fd70(piVar22);
      Sleep(100);
      FUN_18005fc20(piVar22);
    }
    plVar2 = *(longlong **)(lVar1 + 0x14a0);
    *plVar2 = param_1;
    *(undefined4 *)(plVar2 + 1) = param_2;
    *(int *)((longlong)plVar2 + 0xc) = param_3;
    *(int *)(plVar2 + 2) = param_5;
    *(int *)((longlong)plVar2 + 0x14) = param_6;
    plVar2[3] = lVar3;
    plVar2[4] = lVar4;
    plVar2[5] = lVar5;
    plVar2[6] = lVar6;
    plVar2[7] = lVar7;
    plVar2[8] = lVar8;
    plVar2[9] = lVar9;
    plVar2[10] = lVar10;
    plVar2[0xb] = lVar11;
    plVar2[0xc] = lVar12;
    plVar2[0xd] = lVar13;
    plVar2[0xe] = lVar14;
    plVar2[0xf] = lVar15;
    plVar2[0x10] = lVar16;
    FUN_18001b00c(plVar2);
  }
  else {
    if ((param_3 != 2) && (param_3 != 3)) {
      return;
    }
    lVar1 = *(longlong *)(param_1 + 0x3340);
    piVar22 = (int *)(lVar1 + 0x12c0);
    FUN_18005fc20(piVar22);
    puVar21 = (undefined8 *)((longlong)param_4 + (longlong)param_5 * 4);
    if (*(char *)(lVar1 + 0x14c4) != '\0') {
      uVar17 = (param_6 - param_5) * 4;
      uVar18 = uVar17 + 7;
      uVar19 = (uVar18 & 0xfffffff8) + 0x20;
      puVar20 = (undefined8 *)FUN_18005fc40((longlong)piVar22,uVar19);
      if (puVar20 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar1 + 0x14c0) = *(int *)(lVar1 + 0x14c0) + 1;
        UNLOCK();
        puVar20[1] = (ulonglong)uVar19;
        puVar20[3] = param_1;
        *(undefined4 *)(puVar20 + 4) = param_2;
        *(int *)((longlong)puVar20 + 0x24) = param_3;
        *(int *)(puVar20 + 5) = param_5;
        *(int *)((longlong)puVar20 + 0x2c) = param_6;
        puVar23 = (undefined8 *)((longlong)puVar20 + 0x37U & 0xfffffffffffffff8);
        puVar20[2] = puVar23;
        FUN_180061330(puVar23,puVar21,(ulonglong)uVar17);
        puVar23 = (undefined8 *)(((ulonglong)uVar18 & 0xfffffff8) + (longlong)puVar23);
        *puVar23 = 0;
        *puVar20 = FUN_18001b038;
        *(undefined8 **)(lVar1 + 0x1350 + (ulonglong)*(uint *)(lVar1 + 0x14bc) * 0x28) = puVar23;
        if (*(char *)(lVar1 + 0x14c5) != '\0') {
          FUN_18005fd70(piVar22);
          hEvent = *(HANDLE *)(lVar1 + 0x1340);
LAB_18001af55:
          SetEvent(hEvent);
          return;
        }
        goto LAB_18001afc7;
      }
      FUN_18005fd70(piVar22);
      Sleep(100);
      FUN_18005fc20(piVar22);
    }
    plVar2 = *(longlong **)(lVar1 + 0x14a0);
    *plVar2 = (longlong)puVar21;
    plVar2[1] = param_1;
    *(undefined4 *)(plVar2 + 2) = param_2;
    *(int *)((longlong)plVar2 + 0x14) = param_3;
    *(int *)(plVar2 + 3) = param_5;
    *(int *)((longlong)plVar2 + 0x1c) = param_6;
    FUN_18001b038(plVar2);
  }
LAB_18001afc7:
  FUN_18005fd70(piVar22);
  return;
}

