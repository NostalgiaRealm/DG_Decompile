/*
 * FUN_180050c44 at 180050c44
 * undefined __fastcall FUN_180050c44(longlong param_1, longlong * param_2)
 * Address ranges: 180050c44-180050ecc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050c44(longlong param_1,longlong *param_2)

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
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  HANDLE hEvent;
  int *piVar20;
  undefined8 *puVar21;
  
  if (param_2 == (longlong *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0xf6e0);
    piVar20 = (int *)(lVar1 + 0x12c0);
    FUN_1800fab60(piVar20);
    if (*(char *)(lVar1 + 0x14c4) != '\0') {
      puVar19 = (undefined8 *)FUN_1800fab80((longlong)piVar20,8);
      if (puVar19 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar1 + 0x14c0) = *(int *)(lVar1 + 0x14c0) + 1;
        UNLOCK();
        puVar19[1] = 8;
        puVar21 = (undefined8 *)((longlong)puVar19 + 0x1fU & 0xfffffffffffffff8);
        puVar19[2] = param_1;
        *puVar21 = 0;
        *puVar19 = FUN_180050edc;
        *(undefined8 **)(lVar1 + 0x1350 + (ulonglong)*(uint *)(lVar1 + 0x14bc) * 0x28) = puVar21;
        if (*(char *)(lVar1 + 0x14c5) != '\0') {
          FUN_1800facb0(piVar20);
          hEvent = *(HANDLE *)(lVar1 + 0x1340);
          goto LAB_180050e56;
        }
        goto LAB_180050e8b;
      }
      FUN_1800facb0(piVar20);
      Sleep(100);
      FUN_1800fab60(piVar20);
    }
    plVar2 = *(longlong **)(lVar1 + 0x14a0);
    *plVar2 = param_1;
    FUN_180050edc(plVar2);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0xf6e0);
    lVar3 = *param_2;
    lVar4 = param_2[1];
    lVar5 = param_2[2];
    lVar6 = param_2[3];
    piVar20 = (int *)(lVar1 + 0x12c0);
    lVar7 = param_2[4];
    lVar8 = param_2[5];
    lVar9 = param_2[6];
    lVar10 = param_2[7];
    lVar11 = param_2[8];
    lVar12 = param_2[9];
    lVar13 = param_2[10];
    lVar14 = param_2[0xb];
    lVar15 = param_2[0xc];
    lVar16 = param_2[0xd];
    lVar17 = param_2[0xe];
    lVar18 = param_2[0xf];
    FUN_1800fab60(piVar20);
    if (*(char *)(lVar1 + 0x14c4) != '\0') {
      puVar19 = (undefined8 *)FUN_1800fab80((longlong)piVar20,0x88);
      if (puVar19 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(lVar1 + 0x14c0) = *(int *)(lVar1 + 0x14c0) + 1;
        UNLOCK();
        puVar19[1] = 0x88;
        puVar19[2] = param_1;
        puVar21 = (undefined8 *)((longlong)puVar19 + 0x9fU & 0xfffffffffffffff8);
        puVar19[3] = lVar3;
        puVar19[4] = lVar4;
        puVar19[5] = lVar5;
        puVar19[6] = lVar6;
        puVar19[7] = lVar7;
        puVar19[8] = lVar8;
        puVar19[9] = lVar9;
        puVar19[10] = lVar10;
        puVar19[0xb] = lVar11;
        puVar19[0xc] = lVar12;
        puVar19[0xd] = lVar13;
        puVar19[0xe] = lVar14;
        puVar19[0xf] = lVar15;
        puVar19[0x10] = lVar16;
        puVar19[0x11] = lVar17;
        puVar19[0x12] = lVar18;
        *puVar21 = 0;
        *puVar19 = FUN_180050ed0;
        *(undefined8 **)(lVar1 + 0x1350 + (ulonglong)*(uint *)(lVar1 + 0x14bc) * 0x28) = puVar21;
        if (*(char *)(lVar1 + 0x14c5) != '\0') {
          FUN_1800facb0(piVar20);
          hEvent = *(HANDLE *)(lVar1 + 0x1340);
LAB_180050e56:
          SetEvent(hEvent);
          return;
        }
        goto LAB_180050e8b;
      }
      FUN_1800facb0(piVar20);
      Sleep(100);
      FUN_1800fab60(piVar20);
    }
    plVar2 = *(longlong **)(lVar1 + 0x14a0);
    *plVar2 = param_1;
    plVar2[1] = lVar3;
    plVar2[2] = lVar4;
    plVar2[3] = lVar5;
    plVar2[4] = lVar6;
    plVar2[5] = lVar7;
    plVar2[6] = lVar8;
    plVar2[7] = lVar9;
    plVar2[8] = lVar10;
    plVar2[9] = lVar11;
    plVar2[10] = lVar12;
    plVar2[0xb] = lVar13;
    plVar2[0xc] = lVar14;
    plVar2[0xd] = lVar15;
    plVar2[0xe] = lVar16;
    plVar2[0xf] = lVar17;
    plVar2[0x10] = lVar18;
    FUN_180050ed0(plVar2);
  }
LAB_180050e8b:
  FUN_1800facb0(piVar20);
  return;
}

