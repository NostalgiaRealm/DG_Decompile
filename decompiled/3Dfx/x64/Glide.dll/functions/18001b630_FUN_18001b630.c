/*
 * FUN_18001b630 at 18001b630
 * undefined __fastcall FUN_18001b630(longlong * param_1, ulonglong param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 18001b630-18001b773
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001b630(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = 2;
  lVar8 = (param_2 & 0xffffffff) * 0x158;
  *(undefined8 *)(lVar8 + *param_1) = param_3;
  lVar5 = 2;
  puVar2 = param_4;
  puVar4 = (undefined8 *)(*param_1 + 8 + lVar8);
  do {
    puVar6 = puVar4;
    puVar3 = puVar2;
    uVar1 = puVar3[1];
    *puVar6 = *puVar3;
    puVar6[1] = uVar1;
    uVar1 = puVar3[3];
    puVar6[2] = puVar3[2];
    puVar6[3] = uVar1;
    uVar1 = puVar3[5];
    puVar6[4] = puVar3[4];
    puVar6[5] = uVar1;
    uVar1 = puVar3[7];
    puVar6[6] = puVar3[6];
    puVar6[7] = uVar1;
    uVar1 = puVar3[9];
    puVar6[8] = puVar3[8];
    puVar6[9] = uVar1;
    uVar1 = puVar3[0xb];
    puVar6[10] = puVar3[10];
    puVar6[0xb] = uVar1;
    uVar1 = puVar3[0xd];
    puVar6[0xc] = puVar3[0xc];
    puVar6[0xd] = uVar1;
    uVar1 = puVar3[0xf];
    puVar6[0xe] = puVar3[0xe];
    puVar6[0xf] = uVar1;
    lVar5 = lVar5 + -1;
    puVar2 = puVar3 + 0x10;
    puVar4 = puVar6 + 0x10;
  } while (lVar5 != 0);
  uVar1 = puVar3[0x11];
  puVar6[0x10] = puVar3[0x10];
  puVar6[0x11] = uVar1;
  uVar1 = puVar3[0x13];
  puVar6[0x12] = puVar3[0x12];
  puVar6[0x13] = uVar1;
  uVar1 = puVar3[0x15];
  puVar6[0x14] = puVar3[0x14];
  puVar6[0x15] = uVar1;
  uVar1 = puVar3[0x17];
  puVar6[0x16] = puVar3[0x16];
  puVar6[0x17] = uVar1;
  puVar6[0x18] = puVar3[0x18];
  puVar4 = (undefined8 *)FUN_18005db9c(0x148);
  puVar2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    do {
      puVar6 = param_4;
      puVar3 = puVar2;
      uVar1 = puVar6[1];
      *puVar3 = *puVar6;
      puVar3[1] = uVar1;
      uVar1 = puVar6[3];
      puVar3[2] = puVar6[2];
      puVar3[3] = uVar1;
      uVar1 = puVar6[5];
      puVar3[4] = puVar6[4];
      puVar3[5] = uVar1;
      uVar1 = puVar6[7];
      puVar3[6] = puVar6[6];
      puVar3[7] = uVar1;
      uVar1 = puVar6[9];
      puVar3[8] = puVar6[8];
      puVar3[9] = uVar1;
      uVar1 = puVar6[0xb];
      puVar3[10] = puVar6[10];
      puVar3[0xb] = uVar1;
      uVar1 = puVar6[0xd];
      puVar3[0xc] = puVar6[0xc];
      puVar3[0xd] = uVar1;
      uVar1 = puVar6[0xf];
      puVar3[0xe] = puVar6[0xe];
      puVar3[0xf] = uVar1;
      lVar7 = lVar7 + -1;
      puVar2 = puVar3 + 0x10;
      param_4 = puVar6 + 0x10;
    } while (lVar7 != 0);
    uVar1 = puVar6[0x11];
    puVar3[0x10] = puVar6[0x10];
    puVar3[0x11] = uVar1;
    uVar1 = puVar6[0x13];
    puVar3[0x12] = puVar6[0x12];
    puVar3[0x13] = uVar1;
    uVar1 = puVar6[0x15];
    puVar3[0x14] = puVar6[0x14];
    puVar3[0x15] = uVar1;
    uVar1 = puVar6[0x17];
    puVar3[0x16] = puVar6[0x16];
    puVar3[0x17] = uVar1;
    puVar3[0x18] = puVar6[0x18];
  }
  *(undefined8 **)(lVar8 + 0x150 + *param_1) = puVar4;
  return;
}

