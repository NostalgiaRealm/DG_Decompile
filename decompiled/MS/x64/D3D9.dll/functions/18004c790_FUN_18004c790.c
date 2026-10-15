/*
 * FUN_18004c790 at 18004c790
 * undefined __fastcall FUN_18004c790(longlong * param_1, ulonglong param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 18004c790-18004c8e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c790(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar6 = 2;
  lVar8 = (param_2 & 0xffffffff) * 0x158;
  *(undefined8 *)(lVar8 + *param_1) = param_3;
  lVar7 = 2;
  puVar2 = param_4;
  puVar4 = (undefined8 *)(*param_1 + 8 + lVar8);
  do {
    puVar5 = puVar4;
    puVar3 = puVar2;
    uVar1 = puVar3[1];
    *puVar5 = *puVar3;
    puVar5[1] = uVar1;
    uVar1 = puVar3[3];
    puVar5[2] = puVar3[2];
    puVar5[3] = uVar1;
    uVar1 = puVar3[5];
    puVar5[4] = puVar3[4];
    puVar5[5] = uVar1;
    uVar1 = puVar3[7];
    puVar5[6] = puVar3[6];
    puVar5[7] = uVar1;
    uVar1 = puVar3[9];
    puVar5[8] = puVar3[8];
    puVar5[9] = uVar1;
    uVar1 = puVar3[0xb];
    puVar5[10] = puVar3[10];
    puVar5[0xb] = uVar1;
    uVar1 = puVar3[0xd];
    puVar5[0xc] = puVar3[0xc];
    puVar5[0xd] = uVar1;
    uVar1 = puVar3[0xf];
    puVar5[0xe] = puVar3[0xe];
    puVar5[0xf] = uVar1;
    lVar7 = lVar7 + -1;
    puVar2 = puVar3 + 0x10;
    puVar4 = puVar5 + 0x10;
  } while (lVar7 != 0);
  uVar1 = puVar3[0x11];
  puVar5[0x10] = puVar3[0x10];
  puVar5[0x11] = uVar1;
  uVar1 = puVar3[0x13];
  puVar5[0x12] = puVar3[0x12];
  puVar5[0x13] = uVar1;
  uVar1 = puVar3[0x15];
  puVar5[0x14] = puVar3[0x14];
  puVar5[0x15] = uVar1;
  uVar1 = puVar3[0x17];
  puVar5[0x16] = puVar3[0x16];
  puVar5[0x17] = uVar1;
  puVar5[0x18] = puVar3[0x18];
  puVar4 = (undefined8 *)FUN_1800fbccc(0x148);
  puVar2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    do {
      puVar5 = param_4;
      puVar3 = puVar2;
      uVar1 = puVar5[1];
      *puVar3 = *puVar5;
      puVar3[1] = uVar1;
      uVar1 = puVar5[3];
      puVar3[2] = puVar5[2];
      puVar3[3] = uVar1;
      uVar1 = puVar5[5];
      puVar3[4] = puVar5[4];
      puVar3[5] = uVar1;
      uVar1 = puVar5[7];
      puVar3[6] = puVar5[6];
      puVar3[7] = uVar1;
      uVar1 = puVar5[9];
      puVar3[8] = puVar5[8];
      puVar3[9] = uVar1;
      uVar1 = puVar5[0xb];
      puVar3[10] = puVar5[10];
      puVar3[0xb] = uVar1;
      uVar1 = puVar5[0xd];
      puVar3[0xc] = puVar5[0xc];
      puVar3[0xd] = uVar1;
      uVar1 = puVar5[0xf];
      puVar3[0xe] = puVar5[0xe];
      puVar3[0xf] = uVar1;
      lVar6 = lVar6 + -1;
      puVar2 = puVar3 + 0x10;
      param_4 = puVar5 + 0x10;
    } while (lVar6 != 0);
    uVar1 = puVar5[0x11];
    puVar3[0x10] = puVar5[0x10];
    puVar3[0x11] = uVar1;
    uVar1 = puVar5[0x13];
    puVar3[0x12] = puVar5[0x12];
    puVar3[0x13] = uVar1;
    uVar1 = puVar5[0x15];
    puVar3[0x14] = puVar5[0x14];
    puVar3[0x15] = uVar1;
    uVar1 = puVar5[0x17];
    puVar3[0x16] = puVar5[0x16];
    puVar3[0x17] = uVar1;
    puVar3[0x18] = puVar5[0x18];
  }
  *(undefined8 **)(lVar8 + 0x150 + *param_1) = puVar4;
  return;
}

