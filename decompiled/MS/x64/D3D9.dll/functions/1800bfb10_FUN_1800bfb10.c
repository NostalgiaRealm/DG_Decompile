/*
 * FUN_1800bfb10 at 1800bfb10
 * undefined __fastcall FUN_1800bfb10(longlong * param_1, uint param_2, undefined8 param_3, undefined8 * param_4, undefined8 * param_5)
 * Address ranges: 1800bfb10-1800bfe01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800bfb10(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  lVar14 = 4;
  if (iVar2 == (int)param_1[2]) {
    uVar11 = iVar2 * 2;
    if (iVar2 == 0) {
      uVar11 = 0x10;
    }
    lVar4 = thunk_FUN_1800fbccc((ulonglong)uVar11 * 0x248 + 0x7f);
    uVar10 = 0;
    if (lVar4 != 0) {
      uVar12 = lVar4 + 0x7fU & 0xffffffffffffff80;
      uVar7 = 0;
      if ((int)param_1[2] != 0) {
        do {
          puVar1 = (undefined8 *)(uVar12 + uVar10 * 0x248);
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar1[4] = 0;
          *(undefined4 *)((longlong)puVar1 + 0x234) = 0;
          puVar1[0x47] = 0;
          puVar1[0x48] = 0;
          lVar8 = 4;
          puVar6 = (undefined8 *)(param_1[1] + uVar10 * 0x248);
          do {
            puVar9 = puVar1;
            puVar5 = puVar6;
            uVar3 = puVar5[1];
            *puVar9 = *puVar5;
            puVar9[1] = uVar3;
            uVar3 = puVar5[3];
            puVar9[2] = puVar5[2];
            puVar9[3] = uVar3;
            uVar3 = puVar5[5];
            puVar9[4] = puVar5[4];
            puVar9[5] = uVar3;
            uVar3 = puVar5[7];
            puVar9[6] = puVar5[6];
            puVar9[7] = uVar3;
            uVar3 = puVar5[9];
            puVar9[8] = puVar5[8];
            puVar9[9] = uVar3;
            uVar3 = puVar5[0xb];
            puVar9[10] = puVar5[10];
            puVar9[0xb] = uVar3;
            uVar3 = puVar5[0xd];
            puVar9[0xc] = puVar5[0xc];
            puVar9[0xd] = uVar3;
            uVar3 = puVar5[0xf];
            puVar9[0xe] = puVar5[0xe];
            puVar9[0xf] = uVar3;
            lVar8 = lVar8 + -1;
            puVar6 = puVar5 + 0x10;
            puVar1 = puVar9 + 0x10;
          } while (lVar8 != 0);
          uVar3 = puVar5[0x11];
          uVar13 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar13;
          puVar9[0x10] = puVar5[0x10];
          puVar9[0x11] = uVar3;
          uVar3 = puVar5[0x13];
          puVar9[0x12] = puVar5[0x12];
          puVar9[0x13] = uVar3;
          uVar3 = puVar5[0x15];
          puVar9[0x14] = puVar5[0x14];
          puVar9[0x15] = uVar3;
          uVar3 = puVar5[0x17];
          puVar9[0x16] = puVar5[0x16];
          puVar9[0x17] = uVar3;
          puVar9[0x18] = puVar5[0x18];
          uVar7 = *(uint *)(param_1 + 2);
        } while (uVar13 < uVar7);
      }
      if (uVar7 < uVar11) {
        uVar10 = (ulonglong)uVar7;
        do {
          lVar8 = uVar10 * 0x248;
          uVar7 = uVar7 + 1;
          uVar10 = uVar10 + 1;
          *(undefined8 *)(uVar12 + 0x10 + lVar8) = 0;
          *(undefined8 *)(uVar12 + 0x18 + lVar8) = 0;
          *(undefined8 *)(uVar12 + 0x20 + lVar8) = 0;
          *(undefined4 *)(uVar12 + 0x234 + lVar8) = 0;
          *(undefined8 *)(uVar12 + 0x238 + lVar8) = 0;
          *(undefined8 *)(uVar12 + 0x240 + lVar8) = 0;
        } while (uVar7 < uVar11);
      }
      FUN_1800fbcf0((LPVOID)*param_1);
      *param_1 = lVar4;
      param_1[1] = uVar12;
      *(uint *)((longlong)param_1 + 0x14) = uVar11;
    }
  }
  uVar11 = *(uint *)(param_1 + 2);
  if (*(uint *)((longlong)param_1 + 0x14) != uVar11) {
    while (param_2 < uVar11) {
      uVar10 = (ulonglong)uVar11;
      uVar11 = uVar11 - 1;
      lVar4 = 4;
      puVar1 = (undefined8 *)((ulonglong)uVar11 * 0x248 + param_1[1]);
      puVar6 = (undefined8 *)(uVar10 * 0x248 + param_1[1]);
      do {
        puVar9 = puVar6;
        puVar5 = puVar1;
        uVar3 = puVar5[1];
        *puVar9 = *puVar5;
        puVar9[1] = uVar3;
        uVar3 = puVar5[3];
        puVar9[2] = puVar5[2];
        puVar9[3] = uVar3;
        uVar3 = puVar5[5];
        puVar9[4] = puVar5[4];
        puVar9[5] = uVar3;
        uVar3 = puVar5[7];
        puVar9[6] = puVar5[6];
        puVar9[7] = uVar3;
        uVar3 = puVar5[9];
        puVar9[8] = puVar5[8];
        puVar9[9] = uVar3;
        uVar3 = puVar5[0xb];
        puVar9[10] = puVar5[10];
        puVar9[0xb] = uVar3;
        uVar3 = puVar5[0xd];
        puVar9[0xc] = puVar5[0xc];
        puVar9[0xd] = uVar3;
        uVar3 = puVar5[0xf];
        puVar9[0xe] = puVar5[0xe];
        puVar9[0xf] = uVar3;
        lVar4 = lVar4 + -1;
        puVar1 = puVar5 + 0x10;
        puVar6 = puVar9 + 0x10;
      } while (lVar4 != 0);
      uVar3 = puVar5[0x11];
      puVar9[0x10] = puVar5[0x10];
      puVar9[0x11] = uVar3;
      uVar3 = puVar5[0x13];
      puVar9[0x12] = puVar5[0x12];
      puVar9[0x13] = uVar3;
      uVar3 = puVar5[0x15];
      puVar9[0x14] = puVar5[0x14];
      puVar9[0x15] = uVar3;
      uVar3 = puVar5[0x17];
      puVar9[0x16] = puVar5[0x16];
      puVar9[0x17] = uVar3;
      puVar9[0x18] = puVar5[0x18];
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    lVar4 = (ulonglong)param_2 * 0x248;
    *(undefined8 *)(lVar4 + 8 + param_1[1]) = *param_4;
    puVar1 = (undefined8 *)(param_1[1] + 0x10 + lVar4);
    do {
      puVar5 = puVar1;
      puVar6 = param_5;
      uVar3 = puVar6[1];
      *puVar5 = *puVar6;
      puVar5[1] = uVar3;
      uVar3 = puVar6[3];
      puVar5[2] = puVar6[2];
      puVar5[3] = uVar3;
      uVar3 = puVar6[5];
      puVar5[4] = puVar6[4];
      puVar5[5] = uVar3;
      uVar3 = puVar6[7];
      puVar5[6] = puVar6[6];
      puVar5[7] = uVar3;
      uVar3 = puVar6[9];
      puVar5[8] = puVar6[8];
      puVar5[9] = uVar3;
      uVar3 = puVar6[0xb];
      puVar5[10] = puVar6[10];
      puVar5[0xb] = uVar3;
      uVar3 = puVar6[0xd];
      puVar5[0xc] = puVar6[0xc];
      puVar5[0xd] = uVar3;
      uVar3 = puVar6[0xf];
      puVar5[0xe] = puVar6[0xe];
      puVar5[0xf] = uVar3;
      lVar14 = lVar14 + -1;
      param_5 = puVar6 + 0x10;
      puVar1 = puVar5 + 0x10;
    } while (lVar14 != 0);
    uVar3 = puVar6[0x11];
    puVar5[0x10] = puVar6[0x10];
    puVar5[0x11] = uVar3;
    uVar3 = puVar6[0x13];
    puVar5[0x12] = puVar6[0x12];
    puVar5[0x13] = uVar3;
    uVar3 = puVar6[0x15];
    puVar5[0x14] = puVar6[0x14];
    puVar5[0x15] = uVar3;
    puVar5[0x16] = puVar6[0x16];
    *(undefined8 *)(lVar4 + param_1[1]) = param_3;
  }
  return;
}

