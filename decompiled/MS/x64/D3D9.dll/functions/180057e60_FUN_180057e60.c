/*
 * FUN_180057e60 at 180057e60
 * longlong __fastcall FUN_180057e60(longlong * param_1, uint param_2, undefined8 * param_3)
 * Address ranges: 180057e60-180057f80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180057e60(longlong *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint local_res10 [6];
  
  uVar11 = *(uint *)(param_1 + 2);
  uVar12 = (ulonglong)param_2;
  uVar7 = 0;
  if (uVar11 != 0) {
    uVar10 = 0;
    do {
      uVar6 = uVar11 + uVar10 >> 1;
      uVar7 = (ulonglong)uVar6;
      uVar8 = *(ulonglong *)(param_1[1] + uVar7 * 0x2e0);
      if (uVar8 <= uVar12) {
        if (uVar12 <= uVar8) break;
        uVar10 = uVar6 + 1;
        uVar7 = (ulonglong)uVar10;
        uVar6 = uVar11;
      }
      uVar11 = uVar6;
    } while (uVar11 != uVar10);
  }
  uVar8 = uVar7 * 0x2e0;
  if (((uint)uVar7 == *(uint *)(param_1 + 2)) ||
     (lVar1 = param_1[1], *(ulonglong *)(uVar8 + lVar1) != uVar12)) {
    local_res10[0] = param_2;
    FUN_180058890(param_1,(uint)uVar7,uVar12,local_res10,param_3);
  }
  else {
    lVar5 = 5;
    puVar3 = (undefined8 *)(lVar1 + 0x10 + uVar8);
    do {
      puVar9 = param_3;
      puVar4 = puVar3;
      uVar2 = puVar9[1];
      *puVar4 = *puVar9;
      puVar4[1] = uVar2;
      uVar2 = puVar9[3];
      puVar4[2] = puVar9[2];
      puVar4[3] = uVar2;
      uVar2 = puVar9[5];
      puVar4[4] = puVar9[4];
      puVar4[5] = uVar2;
      uVar2 = puVar9[7];
      puVar4[6] = puVar9[6];
      puVar4[7] = uVar2;
      uVar2 = puVar9[9];
      puVar4[8] = puVar9[8];
      puVar4[9] = uVar2;
      uVar2 = puVar9[0xb];
      puVar4[10] = puVar9[10];
      puVar4[0xb] = uVar2;
      uVar2 = puVar9[0xd];
      puVar4[0xc] = puVar9[0xc];
      puVar4[0xd] = uVar2;
      uVar2 = puVar9[0xf];
      puVar4[0xe] = puVar9[0xe];
      puVar4[0xf] = uVar2;
      lVar5 = lVar5 + -1;
      puVar3 = puVar4 + 0x10;
      param_3 = puVar9 + 0x10;
    } while (lVar5 != 0);
    uVar2 = puVar9[0x11];
    puVar4[0x10] = puVar9[0x10];
    puVar4[0x11] = uVar2;
    uVar2 = puVar9[0x13];
    puVar4[0x12] = puVar9[0x12];
    puVar4[0x13] = uVar2;
    uVar2 = puVar9[0x15];
    puVar4[0x14] = puVar9[0x14];
    puVar4[0x15] = uVar2;
    uVar2 = puVar9[0x17];
    puVar4[0x16] = puVar9[0x16];
    puVar4[0x17] = uVar2;
    uVar2 = puVar9[0x19];
    puVar4[0x18] = puVar9[0x18];
    puVar4[0x19] = uVar2;
  }
  return (uVar8 | 0x10) + param_1[1];
}

