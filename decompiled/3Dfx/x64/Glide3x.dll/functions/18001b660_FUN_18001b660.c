/*
 * FUN_18001b660 at 18001b660
 * undefined __fastcall FUN_18001b660(longlong param_1)
 * Address ranges: 18001b660-18001b70c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001b660(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_168 [352];
  
  puVar3 = (undefined8 *)FUN_1800090e4(local_168,param_1 + 0x480);
  lVar5 = 2;
  puVar2 = (undefined8 *)(param_1 + 800);
  do {
    puVar6 = puVar2;
    puVar4 = puVar3;
    uVar1 = puVar4[1];
    *puVar6 = *puVar4;
    puVar6[1] = uVar1;
    uVar1 = puVar4[3];
    puVar6[2] = puVar4[2];
    puVar6[3] = uVar1;
    uVar1 = puVar4[5];
    puVar6[4] = puVar4[4];
    puVar6[5] = uVar1;
    uVar1 = puVar4[7];
    puVar6[6] = puVar4[6];
    puVar6[7] = uVar1;
    uVar1 = puVar4[9];
    puVar6[8] = puVar4[8];
    puVar6[9] = uVar1;
    uVar1 = puVar4[0xb];
    puVar6[10] = puVar4[10];
    puVar6[0xb] = uVar1;
    uVar1 = puVar4[0xd];
    puVar6[0xc] = puVar4[0xc];
    puVar6[0xd] = uVar1;
    uVar1 = puVar4[0xf];
    puVar6[0xe] = puVar4[0xe];
    puVar6[0xf] = uVar1;
    lVar5 = lVar5 + -1;
    puVar3 = puVar4 + 0x10;
    puVar2 = puVar6 + 0x10;
  } while (lVar5 != 0);
  uVar1 = puVar4[0x11];
  puVar6[0x10] = puVar4[0x10];
  puVar6[0x11] = uVar1;
  uVar1 = puVar4[0x13];
  puVar6[0x12] = puVar4[0x12];
  puVar6[0x13] = uVar1;
  uVar1 = puVar4[0x15];
  puVar6[0x14] = puVar4[0x14];
  puVar6[0x15] = uVar1;
  uVar1 = puVar4[0x17];
  puVar6[0x16] = puVar4[0x16];
  puVar6[0x17] = uVar1;
  uVar1 = puVar4[0x19];
  puVar6[0x18] = puVar4[0x18];
  puVar6[0x19] = uVar1;
  uVar1 = puVar4[0x1b];
  puVar6[0x1a] = puVar4[0x1a];
  puVar6[0x1b] = uVar1;
  return;
}

