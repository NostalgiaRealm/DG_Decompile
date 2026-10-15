/*
 * FUN_18001f33c at 18001f33c
 * undefined __fastcall FUN_18001f33c(longlong param_1, longlong * param_2)
 * Address ranges: 18001f33c-18001f57c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001f33c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong local_1d8 [54];
  
  FUN_1800192c4(param_1 + 0x3668);
  lVar15 = 3;
  lVar12 = 3;
  plVar2 = local_1d8;
  do {
    plVar13 = param_2;
    plVar9 = plVar2;
    lVar3 = plVar13[1];
    lVar4 = plVar13[2];
    lVar5 = plVar13[3];
    *plVar9 = *plVar13;
    plVar9[1] = lVar3;
    lVar3 = plVar13[4];
    lVar6 = plVar13[5];
    plVar9[2] = lVar4;
    plVar9[3] = lVar5;
    lVar4 = plVar13[6];
    lVar5 = plVar13[7];
    plVar9[4] = lVar3;
    plVar9[5] = lVar6;
    lVar3 = plVar13[8];
    lVar6 = plVar13[9];
    plVar9[6] = lVar4;
    plVar9[7] = lVar5;
    lVar4 = plVar13[10];
    lVar5 = plVar13[0xb];
    plVar9[8] = lVar3;
    plVar9[9] = lVar6;
    lVar3 = plVar13[0xc];
    lVar6 = plVar13[0xd];
    plVar9[10] = lVar4;
    plVar9[0xb] = lVar5;
    lVar4 = plVar13[0xe];
    lVar5 = plVar13[0xf];
    plVar9[0xc] = lVar3;
    plVar9[0xd] = lVar6;
    plVar9[0xe] = lVar4;
    plVar9[0xf] = lVar5;
    lVar12 = lVar12 + -1;
    plVar2 = plVar9 + 0x10;
    param_2 = plVar13 + 0x10;
  } while (lVar12 != 0);
  lVar12 = plVar13[0x11];
  lVar3 = plVar13[0x12];
  lVar4 = plVar13[0x13];
  plVar9[0x10] = plVar13[0x10];
  plVar9[0x11] = lVar12;
  uVar7 = *(undefined8 *)((longlong)plVar13 + 0x9f);
  uVar8 = *(undefined8 *)((longlong)plVar13 + 0xa7);
  lVar12 = *(longlong *)(param_1 + 0x3340);
  plVar9[0x12] = lVar3;
  plVar9[0x13] = lVar4;
  *(undefined8 *)((longlong)plVar9 + 0x9f) = uVar7;
  *(undefined8 *)((longlong)plVar9 + 0xa7) = uVar8;
  piVar1 = (int *)(lVar12 + 0x12c0);
  FUN_18005fc20(piVar1);
  if (*(char *)(lVar12 + 0x14c4) != '\0') {
    puVar10 = (undefined8 *)FUN_18005fc40((longlong)piVar1,0x1b8);
    if (puVar10 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar12 + 0x14c0) = *(int *)(lVar12 + 0x14c0) + 1;
      UNLOCK();
      puVar10[1] = 0x1b8;
      puVar10[2] = param_1;
      plVar2 = puVar10 + 3;
      plVar9 = local_1d8;
      do {
        plVar11 = plVar9;
        plVar13 = plVar2;
        lVar3 = plVar11[1];
        lVar4 = plVar11[2];
        lVar5 = plVar11[3];
        *plVar13 = *plVar11;
        plVar13[1] = lVar3;
        lVar3 = plVar11[4];
        lVar6 = plVar11[5];
        plVar13[2] = lVar4;
        plVar13[3] = lVar5;
        lVar4 = plVar11[6];
        lVar5 = plVar11[7];
        plVar13[4] = lVar3;
        plVar13[5] = lVar6;
        lVar3 = plVar11[8];
        lVar6 = plVar11[9];
        plVar13[6] = lVar4;
        plVar13[7] = lVar5;
        lVar4 = plVar11[10];
        lVar5 = plVar11[0xb];
        plVar13[8] = lVar3;
        plVar13[9] = lVar6;
        lVar3 = plVar11[0xc];
        lVar6 = plVar11[0xd];
        plVar13[10] = lVar4;
        plVar13[0xb] = lVar5;
        lVar4 = plVar11[0xe];
        lVar5 = plVar11[0xf];
        plVar13[0xc] = lVar3;
        plVar13[0xd] = lVar6;
        plVar13[0xe] = lVar4;
        plVar13[0xf] = lVar5;
        lVar15 = lVar15 + -1;
        plVar2 = plVar13 + 0x10;
        plVar9 = plVar11 + 0x10;
      } while (lVar15 != 0);
      lVar15 = plVar11[0x11];
      lVar3 = plVar11[0x12];
      lVar4 = plVar11[0x13];
      puVar16 = (undefined8 *)((longlong)puVar10 + 0x1ceU & 0xfffffffffffffff8);
      plVar13[0x10] = plVar11[0x10];
      plVar13[0x11] = lVar15;
      uVar7 = *(undefined8 *)((longlong)plVar11 + 0x9f);
      uVar8 = *(undefined8 *)((longlong)plVar11 + 0xa7);
      plVar13[0x12] = lVar3;
      plVar13[0x13] = lVar4;
      *(undefined8 *)((longlong)plVar13 + 0x9f) = uVar7;
      *(undefined8 *)((longlong)plVar13 + 0xa7) = uVar8;
      *puVar16 = 0;
      *puVar10 = FUN_18001f580;
      *(undefined8 **)(lVar12 + 0x1350 + (ulonglong)*(uint *)(lVar12 + 0x14bc) * 0x28) = puVar16;
      if (*(char *)(lVar12 + 0x14c5) != '\0') {
        FUN_18005fd70(piVar1);
        SetEvent(*(HANDLE *)(lVar12 + 0x1340));
        return;
      }
      goto LAB_18001f567;
    }
    FUN_18005fd70(piVar1);
    Sleep(100);
    FUN_18005fc20(piVar1);
  }
  plVar2 = *(longlong **)(lVar12 + 0x14a0);
  *plVar2 = param_1;
  plVar9 = plVar2 + 1;
  plVar13 = local_1d8;
  do {
    plVar14 = plVar13;
    plVar11 = plVar9;
    lVar12 = plVar14[1];
    lVar3 = plVar14[2];
    lVar4 = plVar14[3];
    *plVar11 = *plVar14;
    plVar11[1] = lVar12;
    lVar12 = plVar14[4];
    lVar5 = plVar14[5];
    plVar11[2] = lVar3;
    plVar11[3] = lVar4;
    lVar3 = plVar14[6];
    lVar4 = plVar14[7];
    plVar11[4] = lVar12;
    plVar11[5] = lVar5;
    lVar12 = plVar14[8];
    lVar5 = plVar14[9];
    plVar11[6] = lVar3;
    plVar11[7] = lVar4;
    lVar3 = plVar14[10];
    lVar4 = plVar14[0xb];
    plVar11[8] = lVar12;
    plVar11[9] = lVar5;
    lVar12 = plVar14[0xc];
    lVar5 = plVar14[0xd];
    plVar11[10] = lVar3;
    plVar11[0xb] = lVar4;
    lVar3 = plVar14[0xe];
    lVar4 = plVar14[0xf];
    plVar11[0xc] = lVar12;
    plVar11[0xd] = lVar5;
    plVar11[0xe] = lVar3;
    plVar11[0xf] = lVar4;
    lVar15 = lVar15 + -1;
    plVar9 = plVar11 + 0x10;
    plVar13 = plVar14 + 0x10;
  } while (lVar15 != 0);
  lVar12 = plVar14[0x11];
  lVar15 = plVar14[0x12];
  lVar3 = plVar14[0x13];
  plVar11[0x10] = plVar14[0x10];
  plVar11[0x11] = lVar12;
  uVar7 = *(undefined8 *)((longlong)plVar14 + 0x9f);
  uVar8 = *(undefined8 *)((longlong)plVar14 + 0xa7);
  plVar11[0x12] = lVar15;
  plVar11[0x13] = lVar3;
  *(undefined8 *)((longlong)plVar11 + 0x9f) = uVar7;
  *(undefined8 *)((longlong)plVar11 + 0xa7) = uVar8;
  FUN_18001f580(plVar2);
LAB_18001f567:
  FUN_18005fd70(piVar1);
  return;
}

