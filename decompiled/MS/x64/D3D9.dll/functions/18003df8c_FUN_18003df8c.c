/*
 * FUN_18003df8c at 18003df8c
 * longlong __fastcall FUN_18003df8c(longlong * param_1, uint param_2, undefined8 * param_3)
 * Address ranges: 18003df8c-18003e0b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18003df8c(longlong *param_1,uint param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint local_res10 [6];
  
  uVar12 = *(uint *)(param_1 + 2);
  uVar13 = (ulonglong)param_2;
  uVar8 = 0;
  if (uVar12 != 0) {
    uVar11 = 0;
    do {
      uVar7 = uVar12 + uVar11 >> 1;
      uVar8 = (ulonglong)uVar7;
      uVar1 = *(ulonglong *)(param_1[1] + uVar8 * 0x2f0);
      if (uVar1 <= uVar13) {
        if (uVar13 <= uVar1) break;
        uVar11 = uVar7 + 1;
        uVar8 = (ulonglong)uVar11;
        uVar7 = uVar12;
      }
      uVar12 = uVar7;
    } while (uVar12 != uVar11);
  }
  lVar9 = uVar8 * 0x2f0;
  if (((uint)uVar8 == *(uint *)(param_1 + 2)) ||
     (lVar2 = param_1[1], *(ulonglong *)(lVar9 + lVar2) != uVar13)) {
    local_res10[0] = param_2;
    FUN_18003e8dc(param_1,(uint)uVar8,uVar13,local_res10,param_3);
  }
  else {
    lVar6 = 5;
    puVar4 = (undefined8 *)(lVar2 + 0x10 + lVar9);
    do {
      puVar10 = param_3;
      puVar5 = puVar4;
      uVar3 = puVar10[1];
      *puVar5 = *puVar10;
      puVar5[1] = uVar3;
      uVar3 = puVar10[3];
      puVar5[2] = puVar10[2];
      puVar5[3] = uVar3;
      uVar3 = puVar10[5];
      puVar5[4] = puVar10[4];
      puVar5[5] = uVar3;
      uVar3 = puVar10[7];
      puVar5[6] = puVar10[6];
      puVar5[7] = uVar3;
      uVar3 = puVar10[9];
      puVar5[8] = puVar10[8];
      puVar5[9] = uVar3;
      uVar3 = puVar10[0xb];
      puVar5[10] = puVar10[10];
      puVar5[0xb] = uVar3;
      uVar3 = puVar10[0xd];
      puVar5[0xc] = puVar10[0xc];
      puVar5[0xd] = uVar3;
      uVar3 = puVar10[0xf];
      puVar5[0xe] = puVar10[0xe];
      puVar5[0xf] = uVar3;
      lVar6 = lVar6 + -1;
      puVar4 = puVar5 + 0x10;
      param_3 = puVar10 + 0x10;
    } while (lVar6 != 0);
    uVar3 = puVar10[0x11];
    puVar5[0x10] = puVar10[0x10];
    puVar5[0x11] = uVar3;
    uVar3 = puVar10[0x13];
    puVar5[0x12] = puVar10[0x12];
    puVar5[0x13] = uVar3;
    uVar3 = puVar10[0x15];
    puVar5[0x14] = puVar10[0x14];
    puVar5[0x15] = uVar3;
    uVar3 = puVar10[0x17];
    puVar5[0x16] = puVar10[0x16];
    puVar5[0x17] = uVar3;
    uVar3 = puVar10[0x19];
    puVar5[0x18] = puVar10[0x18];
    puVar5[0x19] = uVar3;
    uVar3 = puVar10[0x1b];
    puVar5[0x1a] = puVar10[0x1a];
    puVar5[0x1b] = uVar3;
  }
  return param_1[1] + lVar9 + 0x10;
}

