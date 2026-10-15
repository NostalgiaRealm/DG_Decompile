/*
 * FUN_180058890 at 180058890
 * undefined __fastcall FUN_180058890(longlong * param_1, uint param_2, undefined8 param_3, undefined4 * param_4, undefined8 * param_5)
 * Address ranges: 180058890-180058b1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180058890(longlong *param_1,uint param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  lVar10 = 5;
  if (iVar1 == (int)param_1[2]) {
    uVar11 = iVar1 * 2;
    if (iVar1 == 0) {
      uVar11 = 0x10;
    }
    lVar4 = thunk_FUN_1800fbccc((ulonglong)uVar11 * 0x2e0);
    if (lVar4 != 0) {
      uVar12 = 0;
      if ((int)param_1[2] != 0) {
        do {
          lVar5 = 5;
          puVar3 = (undefined8 *)((ulonglong)uVar12 * 0x2e0 + lVar4);
          puVar8 = (undefined8 *)(param_1[1] + (ulonglong)uVar12 * 0x2e0);
          do {
            puVar9 = puVar8;
            puVar7 = puVar3;
            uVar2 = puVar9[1];
            *puVar7 = *puVar9;
            puVar7[1] = uVar2;
            uVar2 = puVar9[3];
            puVar7[2] = puVar9[2];
            puVar7[3] = uVar2;
            uVar2 = puVar9[5];
            puVar7[4] = puVar9[4];
            puVar7[5] = uVar2;
            uVar2 = puVar9[7];
            puVar7[6] = puVar9[6];
            puVar7[7] = uVar2;
            uVar2 = puVar9[9];
            puVar7[8] = puVar9[8];
            puVar7[9] = uVar2;
            uVar2 = puVar9[0xb];
            puVar7[10] = puVar9[10];
            puVar7[0xb] = uVar2;
            uVar2 = puVar9[0xd];
            puVar7[0xc] = puVar9[0xc];
            puVar7[0xd] = uVar2;
            uVar2 = puVar9[0xf];
            puVar7[0xe] = puVar9[0xe];
            puVar7[0xf] = uVar2;
            lVar5 = lVar5 + -1;
            puVar3 = puVar7 + 0x10;
            puVar8 = puVar9 + 0x10;
          } while (lVar5 != 0);
          uVar2 = puVar9[0x11];
          uVar12 = uVar12 + 1;
          puVar7[0x10] = puVar9[0x10];
          puVar7[0x11] = uVar2;
          uVar2 = puVar9[0x13];
          puVar7[0x12] = puVar9[0x12];
          puVar7[0x13] = uVar2;
          uVar2 = puVar9[0x15];
          puVar7[0x14] = puVar9[0x14];
          puVar7[0x15] = uVar2;
          uVar2 = puVar9[0x17];
          puVar7[0x16] = puVar9[0x16];
          puVar7[0x17] = uVar2;
          uVar2 = puVar9[0x19];
          puVar7[0x18] = puVar9[0x18];
          puVar7[0x19] = uVar2;
          uVar2 = puVar9[0x1b];
          puVar7[0x1a] = puVar9[0x1a];
          puVar7[0x1b] = uVar2;
        } while (uVar12 < *(uint *)(param_1 + 2));
      }
      FUN_1800fbcf0((LPVOID)*param_1);
      *param_1 = lVar4;
      param_1[1] = lVar4;
      *(uint *)((longlong)param_1 + 0x14) = uVar11;
    }
  }
  uVar11 = *(uint *)(param_1 + 2);
  if (*(uint *)((longlong)param_1 + 0x14) != uVar11) {
    while (param_2 < uVar11) {
      uVar6 = (ulonglong)uVar11;
      uVar11 = uVar11 - 1;
      lVar4 = 5;
      puVar3 = (undefined8 *)(uVar6 * 0x2e0 + param_1[1]);
      puVar8 = (undefined8 *)((ulonglong)uVar11 * 0x2e0 + param_1[1]);
      do {
        puVar9 = puVar8;
        puVar7 = puVar3;
        uVar2 = puVar9[1];
        *puVar7 = *puVar9;
        puVar7[1] = uVar2;
        uVar2 = puVar9[3];
        puVar7[2] = puVar9[2];
        puVar7[3] = uVar2;
        uVar2 = puVar9[5];
        puVar7[4] = puVar9[4];
        puVar7[5] = uVar2;
        uVar2 = puVar9[7];
        puVar7[6] = puVar9[6];
        puVar7[7] = uVar2;
        uVar2 = puVar9[9];
        puVar7[8] = puVar9[8];
        puVar7[9] = uVar2;
        uVar2 = puVar9[0xb];
        puVar7[10] = puVar9[10];
        puVar7[0xb] = uVar2;
        uVar2 = puVar9[0xd];
        puVar7[0xc] = puVar9[0xc];
        puVar7[0xd] = uVar2;
        uVar2 = puVar9[0xf];
        puVar7[0xe] = puVar9[0xe];
        puVar7[0xf] = uVar2;
        lVar4 = lVar4 + -1;
        puVar3 = puVar7 + 0x10;
        puVar8 = puVar9 + 0x10;
      } while (lVar4 != 0);
      uVar2 = puVar9[0x11];
      puVar7[0x10] = puVar9[0x10];
      puVar7[0x11] = uVar2;
      uVar2 = puVar9[0x13];
      puVar7[0x12] = puVar9[0x12];
      puVar7[0x13] = uVar2;
      uVar2 = puVar9[0x15];
      puVar7[0x14] = puVar9[0x14];
      puVar7[0x15] = uVar2;
      uVar2 = puVar9[0x17];
      puVar7[0x16] = puVar9[0x16];
      puVar7[0x17] = uVar2;
      uVar2 = puVar9[0x19];
      puVar7[0x18] = puVar9[0x18];
      puVar7[0x19] = uVar2;
      uVar2 = puVar9[0x1b];
      puVar7[0x1a] = puVar9[0x1a];
      puVar7[0x1b] = uVar2;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    lVar4 = (ulonglong)param_2 * 0x2e0;
    *(undefined4 *)(lVar4 + 8 + param_1[1]) = *param_4;
    puVar3 = (undefined8 *)(param_1[1] + 0x10 + lVar4);
    do {
      puVar7 = puVar3;
      puVar8 = param_5;
      uVar2 = puVar8[1];
      *puVar7 = *puVar8;
      puVar7[1] = uVar2;
      uVar2 = puVar8[3];
      puVar7[2] = puVar8[2];
      puVar7[3] = uVar2;
      uVar2 = puVar8[5];
      puVar7[4] = puVar8[4];
      puVar7[5] = uVar2;
      uVar2 = puVar8[7];
      puVar7[6] = puVar8[6];
      puVar7[7] = uVar2;
      uVar2 = puVar8[9];
      puVar7[8] = puVar8[8];
      puVar7[9] = uVar2;
      uVar2 = puVar8[0xb];
      puVar7[10] = puVar8[10];
      puVar7[0xb] = uVar2;
      uVar2 = puVar8[0xd];
      puVar7[0xc] = puVar8[0xc];
      puVar7[0xd] = uVar2;
      uVar2 = puVar8[0xf];
      puVar7[0xe] = puVar8[0xe];
      puVar7[0xf] = uVar2;
      lVar10 = lVar10 + -1;
      param_5 = puVar8 + 0x10;
      puVar3 = puVar7 + 0x10;
    } while (lVar10 != 0);
    uVar2 = puVar8[0x11];
    puVar7[0x10] = puVar8[0x10];
    puVar7[0x11] = uVar2;
    uVar2 = puVar8[0x13];
    puVar7[0x12] = puVar8[0x12];
    puVar7[0x13] = uVar2;
    uVar2 = puVar8[0x15];
    puVar7[0x14] = puVar8[0x14];
    puVar7[0x15] = uVar2;
    uVar2 = puVar8[0x17];
    puVar7[0x16] = puVar8[0x16];
    puVar7[0x17] = uVar2;
    uVar2 = puVar8[0x19];
    puVar7[0x18] = puVar8[0x18];
    puVar7[0x19] = uVar2;
    *(undefined8 *)(lVar4 + param_1[1]) = param_3;
  }
  return;
}

