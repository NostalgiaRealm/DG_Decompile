/*
 * FUN_1800bf740 at 1800bf740
 * longlong __fastcall FUN_1800bf740(longlong * param_1, ulonglong * param_2, undefined8 * param_3)
 * Address ranges: 1800bf740-1800bf85d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800bf740(longlong *param_1,ulonglong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  
  uVar1 = *param_2;
  uVar13 = *(uint *)(param_1 + 2);
  uVar9 = 0;
  if (uVar13 != 0) {
    uVar12 = 0;
    do {
      uVar8 = uVar13 + uVar12 >> 1;
      uVar9 = (ulonglong)uVar8;
      uVar2 = *(ulonglong *)(param_1[1] + uVar9 * 0x248);
      if (uVar2 <= uVar1) {
        if (uVar1 <= uVar2) break;
        uVar12 = uVar8 + 1;
        uVar9 = (ulonglong)uVar12;
        uVar8 = uVar13;
      }
      uVar13 = uVar8;
    } while (uVar13 != uVar12);
  }
  lVar10 = uVar9 * 0x248;
  if (((uint)uVar9 == *(uint *)(param_1 + 2)) ||
     (lVar3 = param_1[1], *(ulonglong *)(lVar10 + lVar3) != uVar1)) {
    FUN_1800bfb10(param_1,(uint)uVar9,uVar1,param_2,param_3);
  }
  else {
    lVar6 = 4;
    puVar5 = (undefined8 *)(lVar3 + 0x10 + lVar10);
    do {
      puVar11 = param_3;
      puVar7 = puVar5;
      uVar4 = puVar11[1];
      *puVar7 = *puVar11;
      puVar7[1] = uVar4;
      uVar4 = puVar11[3];
      puVar7[2] = puVar11[2];
      puVar7[3] = uVar4;
      uVar4 = puVar11[5];
      puVar7[4] = puVar11[4];
      puVar7[5] = uVar4;
      uVar4 = puVar11[7];
      puVar7[6] = puVar11[6];
      puVar7[7] = uVar4;
      uVar4 = puVar11[9];
      puVar7[8] = puVar11[8];
      puVar7[9] = uVar4;
      uVar4 = puVar11[0xb];
      puVar7[10] = puVar11[10];
      puVar7[0xb] = uVar4;
      uVar4 = puVar11[0xd];
      puVar7[0xc] = puVar11[0xc];
      puVar7[0xd] = uVar4;
      uVar4 = puVar11[0xf];
      puVar7[0xe] = puVar11[0xe];
      puVar7[0xf] = uVar4;
      lVar6 = lVar6 + -1;
      puVar5 = puVar7 + 0x10;
      param_3 = puVar11 + 0x10;
    } while (lVar6 != 0);
    uVar4 = puVar11[0x11];
    puVar7[0x10] = puVar11[0x10];
    puVar7[0x11] = uVar4;
    uVar4 = puVar11[0x13];
    puVar7[0x12] = puVar11[0x12];
    puVar7[0x13] = uVar4;
    uVar4 = puVar11[0x15];
    puVar7[0x14] = puVar11[0x14];
    puVar7[0x15] = uVar4;
    puVar7[0x16] = puVar11[0x16];
  }
  return param_1[1] + lVar10 + 8;
}

