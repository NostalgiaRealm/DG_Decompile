/*
 * FUN_1800b5c64 at 1800b5c64
 * undefined __fastcall FUN_1800b5c64(longlong * param_1, uint param_2, undefined8 param_3, uint * param_4)
 * Address ranges: 1800b5c64-1800b5e53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b5c64(longlong *param_1,uint param_2,undefined8 param_3,uint *param_4)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    auVar1 = ZEXT816(0x260) * ZEXT416((uint)((int)param_1[1] * 2));
    uVar4 = auVar1._0_8_;
    if (auVar1._8_8_ != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar5 = thunk_FUN_1800fbccc(uVar4);
    if (lVar5 != 0) {
      uVar10 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar6 = 4;
          puVar2 = (undefined8 *)((ulonglong)uVar10 * 0x260 + lVar5);
          puVar3 = (undefined8 *)(*param_1 + (ulonglong)uVar10 * 0x260);
          do {
            puVar9 = puVar3;
            puVar8 = puVar2;
            uVar4 = puVar9[1];
            *puVar8 = *puVar9;
            puVar8[1] = uVar4;
            uVar4 = puVar9[3];
            puVar8[2] = puVar9[2];
            puVar8[3] = uVar4;
            uVar4 = puVar9[5];
            puVar8[4] = puVar9[4];
            puVar8[5] = uVar4;
            uVar4 = puVar9[7];
            puVar8[6] = puVar9[6];
            puVar8[7] = uVar4;
            uVar4 = puVar9[9];
            puVar8[8] = puVar9[8];
            puVar8[9] = uVar4;
            uVar4 = puVar9[0xb];
            puVar8[10] = puVar9[10];
            puVar8[0xb] = uVar4;
            uVar4 = puVar9[0xd];
            puVar8[0xc] = puVar9[0xc];
            puVar8[0xd] = uVar4;
            uVar4 = puVar9[0xf];
            puVar8[0xe] = puVar9[0xe];
            puVar8[0xf] = uVar4;
            lVar6 = lVar6 + -1;
            puVar2 = puVar8 + 0x10;
            puVar3 = puVar9 + 0x10;
          } while (lVar6 != 0);
          uVar4 = puVar9[0x11];
          uVar10 = uVar10 + 1;
          puVar8[0x10] = puVar9[0x10];
          puVar8[0x11] = uVar4;
          uVar4 = puVar9[0x13];
          puVar8[0x12] = puVar9[0x12];
          puVar8[0x13] = uVar4;
          uVar4 = puVar9[0x15];
          puVar8[0x14] = puVar9[0x14];
          puVar8[0x15] = uVar4;
          uVar4 = puVar9[0x17];
          puVar8[0x16] = puVar9[0x16];
          puVar8[0x17] = uVar4;
          uVar4 = puVar9[0x19];
          puVar8[0x18] = puVar9[0x18];
          puVar8[0x19] = uVar4;
          uVar4 = puVar9[0x1b];
          puVar8[0x1a] = puVar9[0x1a];
          puVar8[0x1b] = uVar4;
        } while (uVar10 < *(uint *)(param_1 + 1));
      }
      FUN_1800fbcf0((LPVOID)*param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar5;
    }
  }
  uVar10 = *(uint *)((longlong)param_1 + 0xc);
  while (param_2 < uVar10) {
    uVar7 = (ulonglong)uVar10;
    uVar10 = uVar10 - 1;
    lVar5 = 4;
    puVar2 = (undefined8 *)(uVar7 * 0x260 + *param_1);
    puVar3 = (undefined8 *)((ulonglong)uVar10 * 0x260 + *param_1);
    do {
      puVar9 = puVar3;
      puVar8 = puVar2;
      uVar4 = puVar9[1];
      *puVar8 = *puVar9;
      puVar8[1] = uVar4;
      uVar4 = puVar9[3];
      puVar8[2] = puVar9[2];
      puVar8[3] = uVar4;
      uVar4 = puVar9[5];
      puVar8[4] = puVar9[4];
      puVar8[5] = uVar4;
      uVar4 = puVar9[7];
      puVar8[6] = puVar9[6];
      puVar8[7] = uVar4;
      uVar4 = puVar9[9];
      puVar8[8] = puVar9[8];
      puVar8[9] = uVar4;
      uVar4 = puVar9[0xb];
      puVar8[10] = puVar9[10];
      puVar8[0xb] = uVar4;
      uVar4 = puVar9[0xd];
      puVar8[0xc] = puVar9[0xc];
      puVar8[0xd] = uVar4;
      uVar4 = puVar9[0xf];
      puVar8[0xe] = puVar9[0xe];
      puVar8[0xf] = uVar4;
      lVar5 = lVar5 + -1;
      puVar2 = puVar8 + 0x10;
      puVar3 = puVar9 + 0x10;
    } while (lVar5 != 0);
    uVar4 = puVar9[0x11];
    puVar8[0x10] = puVar9[0x10];
    puVar8[0x11] = uVar4;
    uVar4 = puVar9[0x13];
    puVar8[0x12] = puVar9[0x12];
    puVar8[0x13] = uVar4;
    uVar4 = puVar9[0x15];
    puVar8[0x14] = puVar9[0x14];
    puVar8[0x15] = uVar4;
    uVar4 = puVar9[0x17];
    puVar8[0x16] = puVar9[0x16];
    puVar8[0x17] = uVar4;
    uVar4 = puVar9[0x19];
    puVar8[0x18] = puVar9[0x18];
    puVar8[0x19] = uVar4;
    uVar4 = puVar9[0x1b];
    puVar8[0x1a] = puVar9[0x1a];
    puVar8[0x1b] = uVar4;
  }
  FUN_1800b5e54(param_1,(ulonglong)param_2,param_3,param_4);
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}

