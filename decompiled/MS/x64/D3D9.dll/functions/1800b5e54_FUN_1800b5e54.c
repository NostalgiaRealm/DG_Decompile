/*
 * FUN_1800b5e54 at 1800b5e54
 * undefined __fastcall FUN_1800b5e54(longlong * param_1, ulonglong param_2, undefined8 param_3, uint * param_4)
 * Address ranges: 1800b5e54-1800b5f29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b5e54(longlong *param_1,ulonglong param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  uint local_268 [152];
  
  lVar8 = (param_2 & 0xffffffff) * 0x260;
  uVar1 = *param_4;
  *(undefined8 *)(lVar8 + *param_1) = param_3;
  *(uint *)(lVar8 + 8 + *param_1) = uVar1;
  FUN_18008879c(uVar1,(char)param_1[2],local_268);
  lVar7 = 4;
  puVar3 = local_268;
  puVar4 = (undefined8 *)(*param_1 + 0xc + lVar8);
  do {
    puVar6 = puVar4;
    puVar5 = puVar3;
    uVar2 = *(undefined8 *)(puVar5 + 2);
    *puVar6 = *(undefined8 *)puVar5;
    puVar6[1] = uVar2;
    uVar2 = *(undefined8 *)(puVar5 + 6);
    puVar6[2] = *(undefined8 *)(puVar5 + 4);
    puVar6[3] = uVar2;
    uVar2 = *(undefined8 *)(puVar5 + 10);
    puVar6[4] = *(undefined8 *)(puVar5 + 8);
    puVar6[5] = uVar2;
    uVar2 = *(undefined8 *)(puVar5 + 0xe);
    puVar6[6] = *(undefined8 *)(puVar5 + 0xc);
    puVar6[7] = uVar2;
    uVar2 = *(undefined8 *)(puVar5 + 0x12);
    puVar6[8] = *(undefined8 *)(puVar5 + 0x10);
    puVar6[9] = uVar2;
    uVar2 = *(undefined8 *)(puVar5 + 0x16);
    puVar6[10] = *(undefined8 *)(puVar5 + 0x14);
    puVar6[0xb] = uVar2;
    uVar2 = *(undefined8 *)(puVar5 + 0x1a);
    puVar6[0xc] = *(undefined8 *)(puVar5 + 0x18);
    puVar6[0xd] = uVar2;
    uVar2 = *(undefined8 *)(puVar5 + 0x1e);
    puVar6[0xe] = *(undefined8 *)(puVar5 + 0x1c);
    puVar6[0xf] = uVar2;
    lVar7 = lVar7 + -1;
    puVar3 = puVar5 + 0x20;
    puVar4 = puVar6 + 0x10;
  } while (lVar7 != 0);
  uVar2 = *(undefined8 *)(puVar5 + 0x22);
  puVar6[0x10] = *(undefined8 *)(puVar5 + 0x20);
  puVar6[0x11] = uVar2;
  uVar2 = *(undefined8 *)(puVar5 + 0x26);
  puVar6[0x12] = *(undefined8 *)(puVar5 + 0x24);
  puVar6[0x13] = uVar2;
  uVar2 = *(undefined8 *)(puVar5 + 0x2a);
  puVar6[0x14] = *(undefined8 *)(puVar5 + 0x28);
  puVar6[0x15] = uVar2;
  uVar2 = *(undefined8 *)(puVar5 + 0x2e);
  puVar6[0x16] = *(undefined8 *)(puVar5 + 0x2c);
  puVar6[0x17] = uVar2;
  uVar2 = *(undefined8 *)(puVar5 + 0x32);
  puVar6[0x18] = *(undefined8 *)(puVar5 + 0x30);
  puVar6[0x19] = uVar2;
  *(uint *)(puVar6 + 0x1a) = puVar5[0x34];
  return;
}

