/*
 * FUN_18001d9f4 at 18001d9f4
 * longlong __fastcall FUN_18001d9f4(longlong * param_1, uint * param_2, undefined8 * param_3)
 * Address ranges: 18001d9f4-18001dc51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18001d9f4(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar14 = (ulonglong)*param_2;
  uVar12 = *(uint *)(param_1 + 2);
  uVar6 = 0;
  if (uVar12 != 0) {
    uVar9 = 0;
    do {
      uVar6 = uVar12 + uVar9 >> 1;
      uVar13 = *(ulonglong *)(param_1[1] + (ulonglong)uVar6 * 0x80);
      uVar5 = uVar6;
      if (uVar13 <= uVar14) {
        if (uVar14 <= uVar13) break;
        uVar9 = uVar6 + 1;
        uVar5 = uVar12;
        uVar6 = uVar9;
      }
      uVar12 = uVar5;
    } while (uVar12 != uVar9);
  }
  uVar13 = (ulonglong)uVar6 * 0x80;
  if ((uVar6 == *(uint *)(param_1 + 2)) ||
     (lVar7 = param_1[1], *(ulonglong *)(uVar13 + lVar7) != uVar14)) {
    iVar3 = *(int *)((longlong)param_1 + 0x14);
    if (iVar3 == (int)param_1[2]) {
      uVar15 = (ulonglong)(uint)(iVar3 * 2);
      if (iVar3 == 0) {
        uVar15 = 0x10;
      }
      lVar7 = thunk_FUN_1800fbccc(uVar15 << 7);
      if (lVar7 != 0) {
        uVar12 = 0;
        if ((int)param_1[2] != 0) {
          do {
            lVar8 = param_1[1];
            uVar10 = (ulonglong)uVar12;
            uVar12 = uVar12 + 1;
            lVar11 = uVar10 * 0x80;
            uVar4 = ((undefined8 *)(lVar8 + lVar11))[1];
            *(undefined8 *)(lVar7 + lVar11) = *(undefined8 *)(lVar8 + lVar11);
            ((undefined8 *)(lVar7 + lVar11))[1] = uVar4;
            puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar11);
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)(lVar7 + 0x10 + lVar11);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar11);
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)(lVar7 + 0x20 + lVar11);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar1 = (undefined8 *)(lVar8 + 0x30 + lVar11);
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)(lVar7 + 0x30 + lVar11);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar1 = (undefined8 *)(lVar8 + 0x40 + lVar11);
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)(lVar7 + 0x40 + lVar11);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar1 = (undefined8 *)(lVar8 + 0x50 + lVar11);
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)(lVar7 + 0x50 + lVar11);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar1 = (undefined8 *)(lVar8 + 0x60 + lVar11);
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)(lVar7 + 0x60 + lVar11);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar1 = (undefined8 *)(lVar8 + 0x70 + lVar11);
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)(lVar7 + 0x70 + lVar11);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
          } while (uVar12 < *(uint *)(param_1 + 2));
        }
        FUN_1800fbcf0((LPVOID)*param_1);
        *param_1 = lVar7;
        param_1[1] = lVar7;
        *(int *)((longlong)param_1 + 0x14) = (int)uVar15;
      }
    }
    uVar12 = *(uint *)(param_1 + 2);
    if (*(uint *)((longlong)param_1 + 0x14) != uVar12) {
      while (uVar6 < uVar12) {
        lVar7 = param_1[1];
        lVar11 = (ulonglong)uVar12 * 0x80;
        lVar8 = (ulonglong)(uVar12 - 1) * 0x80;
        uVar4 = ((undefined8 *)(lVar7 + lVar8))[1];
        *(undefined8 *)(lVar7 + lVar11) = *(undefined8 *)(lVar7 + lVar8);
        ((undefined8 *)(lVar7 + lVar11))[1] = uVar4;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar8);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(lVar7 + 0x10 + lVar11);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar8);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(lVar7 + 0x20 + lVar11);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)(lVar7 + 0x30 + lVar8);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(lVar7 + 0x30 + lVar11);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)(lVar7 + 0x40 + lVar8);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(lVar7 + 0x40 + lVar11);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)(lVar7 + 0x50 + lVar8);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(lVar7 + 0x50 + lVar11);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)(lVar7 + 0x60 + lVar8);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(lVar7 + 0x60 + lVar11);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)(lVar7 + 0x70 + lVar8);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(lVar7 + 0x70 + lVar11);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        uVar12 = uVar12 - 1;
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      uVar13 = (ulonglong)uVar6 * 0x80;
      *(uint *)(uVar13 + 8 + param_1[1]) = *param_2;
      lVar7 = param_1[1];
      uVar4 = param_3[1];
      puVar1 = (undefined8 *)(uVar13 + 0xc + lVar7);
      *puVar1 = *param_3;
      puVar1[1] = uVar4;
      uVar4 = param_3[3];
      puVar1 = (undefined8 *)(uVar13 + 0x1c + lVar7);
      *puVar1 = param_3[2];
      puVar1[1] = uVar4;
      uVar4 = param_3[5];
      puVar1 = (undefined8 *)(uVar13 + 0x2c + lVar7);
      *puVar1 = param_3[4];
      puVar1[1] = uVar4;
      uVar4 = param_3[7];
      puVar1 = (undefined8 *)(uVar13 + 0x3c + lVar7);
      *puVar1 = param_3[6];
      puVar1[1] = uVar4;
      uVar4 = param_3[9];
      puVar1 = (undefined8 *)(uVar13 + 0x4c + lVar7);
      *puVar1 = param_3[8];
      puVar1[1] = uVar4;
      uVar4 = param_3[0xb];
      puVar1 = (undefined8 *)(uVar13 + 0x5c + lVar7);
      *puVar1 = param_3[10];
      puVar1[1] = uVar4;
      uVar4 = param_3[0xd];
      puVar1 = (undefined8 *)(uVar13 + 0x6c + lVar7);
      *puVar1 = param_3[0xc];
      puVar1[1] = uVar4;
      *(ulonglong *)(uVar13 + param_1[1]) = uVar14;
    }
  }
  else {
    uVar4 = param_3[1];
    puVar1 = (undefined8 *)(uVar13 + 0xc + lVar7);
    *puVar1 = *param_3;
    puVar1[1] = uVar4;
    uVar4 = param_3[3];
    puVar1 = (undefined8 *)(uVar13 + 0x1c + lVar7);
    *puVar1 = param_3[2];
    puVar1[1] = uVar4;
    uVar4 = param_3[5];
    puVar1 = (undefined8 *)(uVar13 + 0x2c + lVar7);
    *puVar1 = param_3[4];
    puVar1[1] = uVar4;
    uVar4 = param_3[7];
    puVar1 = (undefined8 *)(uVar13 + 0x3c + lVar7);
    *puVar1 = param_3[6];
    puVar1[1] = uVar4;
    uVar4 = param_3[9];
    puVar1 = (undefined8 *)(uVar13 + 0x4c + lVar7);
    *puVar1 = param_3[8];
    puVar1[1] = uVar4;
    uVar4 = param_3[0xb];
    puVar1 = (undefined8 *)(uVar13 + 0x5c + lVar7);
    *puVar1 = param_3[10];
    puVar1[1] = uVar4;
    uVar4 = param_3[0xd];
    puVar1 = (undefined8 *)(uVar13 + 0x6c + lVar7);
    *puVar1 = param_3[0xc];
    puVar1[1] = uVar4;
  }
  return (uVar13 | 8) + param_1[1];
}

