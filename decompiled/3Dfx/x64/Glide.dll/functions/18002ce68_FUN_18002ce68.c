/*
 * FUN_18002ce68 at 18002ce68
 * undefined __fastcall FUN_18002ce68(longlong param_1, longlong * param_2)
 * Address ranges: 18002ce68-18002d0c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002ce68(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong local_168 [40];
  
  FUN_180026f30(param_1 + 0x34e8);
  lVar14 = 2;
  lVar8 = 2;
  plVar3 = local_168;
  do {
    plVar10 = param_2;
    plVar12 = plVar3;
    lVar4 = plVar10[1];
    lVar5 = plVar10[2];
    lVar6 = plVar10[3];
    *plVar12 = *plVar10;
    plVar12[1] = lVar4;
    lVar4 = plVar10[4];
    lVar7 = plVar10[5];
    plVar12[2] = lVar5;
    plVar12[3] = lVar6;
    lVar5 = plVar10[6];
    lVar6 = plVar10[7];
    plVar12[4] = lVar4;
    plVar12[5] = lVar7;
    lVar4 = plVar10[8];
    lVar7 = plVar10[9];
    plVar12[6] = lVar5;
    plVar12[7] = lVar6;
    lVar5 = plVar10[10];
    lVar6 = plVar10[0xb];
    plVar12[8] = lVar4;
    plVar12[9] = lVar7;
    lVar4 = plVar10[0xc];
    lVar7 = plVar10[0xd];
    plVar12[10] = lVar5;
    plVar12[0xb] = lVar6;
    lVar5 = plVar10[0xe];
    lVar6 = plVar10[0xf];
    plVar12[0xc] = lVar4;
    plVar12[0xd] = lVar7;
    plVar12[0xe] = lVar5;
    plVar12[0xf] = lVar6;
    lVar8 = lVar8 + -1;
    plVar3 = plVar12 + 0x10;
    param_2 = plVar10 + 0x10;
  } while (lVar8 != 0);
  lVar8 = plVar10[0x11];
  uVar2 = *(undefined8 *)((longlong)plVar10 + 0xad);
  lVar4 = plVar10[0x12];
  lVar5 = plVar10[0x13];
  plVar12[0x10] = plVar10[0x10];
  plVar12[0x11] = lVar8;
  lVar6 = plVar10[0x14];
  lVar7 = plVar10[0x15];
  lVar8 = *(longlong *)(param_1 + 0x31c0);
  plVar12[0x12] = lVar4;
  plVar12[0x13] = lVar5;
  plVar12[0x14] = lVar6;
  plVar12[0x15] = lVar7;
  piVar1 = (int *)(lVar8 + 0x12c0);
  *(undefined8 *)((longlong)plVar12 + 0xad) = uVar2;
  FUN_18005e510(piVar1);
  if (*(char *)(lVar8 + 0x14c4) != '\0') {
    puVar9 = (undefined8 *)FUN_18005e530((longlong)piVar1,0x140);
    if (puVar9 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar8 + 0x14c0) = *(int *)(lVar8 + 0x14c0) + 1;
      UNLOCK();
      puVar9[1] = 0x140;
      puVar9[2] = param_1;
      plVar3 = local_168;
      plVar12 = puVar9 + 3;
      do {
        plVar11 = plVar12;
        plVar10 = plVar3;
        lVar4 = plVar10[1];
        lVar5 = plVar10[2];
        lVar6 = plVar10[3];
        *plVar11 = *plVar10;
        plVar11[1] = lVar4;
        lVar4 = plVar10[4];
        lVar7 = plVar10[5];
        plVar11[2] = lVar5;
        plVar11[3] = lVar6;
        lVar5 = plVar10[6];
        lVar6 = plVar10[7];
        plVar11[4] = lVar4;
        plVar11[5] = lVar7;
        lVar4 = plVar10[8];
        lVar7 = plVar10[9];
        plVar11[6] = lVar5;
        plVar11[7] = lVar6;
        lVar5 = plVar10[10];
        lVar6 = plVar10[0xb];
        plVar11[8] = lVar4;
        plVar11[9] = lVar7;
        lVar4 = plVar10[0xc];
        lVar7 = plVar10[0xd];
        plVar11[10] = lVar5;
        plVar11[0xb] = lVar6;
        lVar5 = plVar10[0xe];
        lVar6 = plVar10[0xf];
        plVar11[0xc] = lVar4;
        plVar11[0xd] = lVar7;
        plVar11[0xe] = lVar5;
        plVar11[0xf] = lVar6;
        lVar14 = lVar14 + -1;
        plVar3 = plVar10 + 0x10;
        plVar12 = plVar11 + 0x10;
      } while (lVar14 != 0);
      lVar14 = plVar10[0x11];
      lVar4 = plVar10[0x12];
      lVar5 = plVar10[0x13];
      puVar15 = (undefined8 *)((longlong)puVar9 + 0x154U & 0xfffffffffffffff8);
      plVar11[0x10] = plVar10[0x10];
      plVar11[0x11] = lVar14;
      lVar14 = plVar10[0x14];
      lVar6 = plVar10[0x15];
      uVar2 = *(undefined8 *)((longlong)plVar10 + 0xad);
      plVar11[0x12] = lVar4;
      plVar11[0x13] = lVar5;
      plVar11[0x14] = lVar14;
      plVar11[0x15] = lVar6;
      *(undefined8 *)((longlong)plVar11 + 0xad) = uVar2;
      *puVar15 = 0;
      *puVar9 = FUN_18002d0c4;
      *(undefined8 **)(lVar8 + 0x1350 + (ulonglong)*(uint *)(lVar8 + 0x14bc) * 0x28) = puVar15;
      if (*(char *)(lVar8 + 0x14c5) != '\0') {
        FUN_18005e660(piVar1);
        SetEvent(*(HANDLE *)(lVar8 + 0x1340));
        return;
      }
      goto LAB_18002d0ae;
    }
    FUN_18005e660(piVar1);
    Sleep(100);
    FUN_18005e510(piVar1);
  }
  plVar3 = *(longlong **)(lVar8 + 0x14a0);
  *plVar3 = param_1;
  plVar12 = local_168;
  plVar10 = plVar3 + 1;
  do {
    plVar13 = plVar10;
    plVar11 = plVar12;
    lVar8 = plVar11[1];
    lVar4 = plVar11[2];
    lVar5 = plVar11[3];
    *plVar13 = *plVar11;
    plVar13[1] = lVar8;
    lVar8 = plVar11[4];
    lVar6 = plVar11[5];
    plVar13[2] = lVar4;
    plVar13[3] = lVar5;
    lVar4 = plVar11[6];
    lVar5 = plVar11[7];
    plVar13[4] = lVar8;
    plVar13[5] = lVar6;
    lVar8 = plVar11[8];
    lVar6 = plVar11[9];
    plVar13[6] = lVar4;
    plVar13[7] = lVar5;
    lVar4 = plVar11[10];
    lVar5 = plVar11[0xb];
    plVar13[8] = lVar8;
    plVar13[9] = lVar6;
    lVar8 = plVar11[0xc];
    lVar6 = plVar11[0xd];
    plVar13[10] = lVar4;
    plVar13[0xb] = lVar5;
    lVar4 = plVar11[0xe];
    lVar5 = plVar11[0xf];
    plVar13[0xc] = lVar8;
    plVar13[0xd] = lVar6;
    plVar13[0xe] = lVar4;
    plVar13[0xf] = lVar5;
    lVar14 = lVar14 + -1;
    plVar12 = plVar11 + 0x10;
    plVar10 = plVar13 + 0x10;
  } while (lVar14 != 0);
  lVar8 = plVar11[0x11];
  lVar14 = plVar11[0x12];
  lVar4 = plVar11[0x13];
  plVar13[0x10] = plVar11[0x10];
  plVar13[0x11] = lVar8;
  lVar8 = plVar11[0x14];
  lVar5 = plVar11[0x15];
  uVar2 = *(undefined8 *)((longlong)plVar11 + 0xad);
  plVar13[0x12] = lVar14;
  plVar13[0x13] = lVar4;
  plVar13[0x14] = lVar8;
  plVar13[0x15] = lVar5;
  *(undefined8 *)((longlong)plVar13 + 0xad) = uVar2;
  FUN_18002d0c4(plVar3);
LAB_18002d0ae:
  FUN_18005e660(piVar1);
  return;
}

