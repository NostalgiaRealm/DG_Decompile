/*
 * FUN_18004daf0 at 18004daf0
 * undefined __fastcall FUN_18004daf0(longlong * param_1, uint param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 18004daf0-18004dc90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004daf0(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    auVar1 = ZEXT816(0x118) * ZEXT416((uint)((int)param_1[1] * 2));
    uVar4 = auVar1._0_8_;
    if (auVar1._8_8_ != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar5 = thunk_FUN_18005db9c(uVar4);
    if (lVar5 != 0) {
      uVar10 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar9 = 2;
          puVar2 = (undefined8 *)(*param_1 + (ulonglong)uVar10 * 0x118);
          puVar3 = (undefined8 *)((ulonglong)uVar10 * 0x118 + lVar5);
          do {
            puVar8 = puVar3;
            puVar6 = puVar2;
            uVar4 = puVar6[1];
            *puVar8 = *puVar6;
            puVar8[1] = uVar4;
            uVar4 = puVar6[3];
            puVar8[2] = puVar6[2];
            puVar8[3] = uVar4;
            uVar4 = puVar6[5];
            puVar8[4] = puVar6[4];
            puVar8[5] = uVar4;
            uVar4 = puVar6[7];
            puVar8[6] = puVar6[6];
            puVar8[7] = uVar4;
            uVar4 = puVar6[9];
            puVar8[8] = puVar6[8];
            puVar8[9] = uVar4;
            uVar4 = puVar6[0xb];
            puVar8[10] = puVar6[10];
            puVar8[0xb] = uVar4;
            uVar4 = puVar6[0xd];
            puVar8[0xc] = puVar6[0xc];
            puVar8[0xd] = uVar4;
            uVar4 = puVar6[0xf];
            puVar8[0xe] = puVar6[0xe];
            puVar8[0xf] = uVar4;
            lVar9 = lVar9 + -1;
            puVar2 = puVar6 + 0x10;
            puVar3 = puVar8 + 0x10;
          } while (lVar9 != 0);
          uVar4 = puVar6[0x11];
          uVar10 = uVar10 + 1;
          puVar8[0x10] = puVar6[0x10];
          puVar8[0x11] = uVar4;
          puVar8[0x12] = puVar6[0x12];
        } while (uVar10 < *(uint *)(param_1 + 1));
      }
      FUN_18005dbc0((LPVOID)*param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar5;
    }
  }
  uVar10 = *(uint *)((longlong)param_1 + 0xc);
  while (param_2 < uVar10) {
    uVar7 = (ulonglong)uVar10;
    uVar10 = uVar10 - 1;
    lVar5 = 2;
    puVar2 = (undefined8 *)((ulonglong)uVar10 * 0x118 + *param_1);
    puVar3 = (undefined8 *)(uVar7 * 0x118 + *param_1);
    do {
      puVar8 = puVar3;
      puVar6 = puVar2;
      uVar4 = puVar6[1];
      *puVar8 = *puVar6;
      puVar8[1] = uVar4;
      uVar4 = puVar6[3];
      puVar8[2] = puVar6[2];
      puVar8[3] = uVar4;
      uVar4 = puVar6[5];
      puVar8[4] = puVar6[4];
      puVar8[5] = uVar4;
      uVar4 = puVar6[7];
      puVar8[6] = puVar6[6];
      puVar8[7] = uVar4;
      uVar4 = puVar6[9];
      puVar8[8] = puVar6[8];
      puVar8[9] = uVar4;
      uVar4 = puVar6[0xb];
      puVar8[10] = puVar6[10];
      puVar8[0xb] = uVar4;
      uVar4 = puVar6[0xd];
      puVar8[0xc] = puVar6[0xc];
      puVar8[0xd] = uVar4;
      uVar4 = puVar6[0xf];
      puVar8[0xe] = puVar6[0xe];
      puVar8[0xf] = uVar4;
      lVar5 = lVar5 + -1;
      puVar2 = puVar6 + 0x10;
      puVar3 = puVar8 + 0x10;
    } while (lVar5 != 0);
    uVar4 = puVar6[0x11];
    puVar8[0x10] = puVar6[0x10];
    puVar8[0x11] = uVar4;
    puVar8[0x12] = puVar6[0x12];
  }
  FUN_18004dc94(param_1,(ulonglong)param_2,param_3,param_4);
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}

