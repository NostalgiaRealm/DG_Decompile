/*
 * FUN_1800ad104 at 1800ad104
 * undefined8 * __fastcall FUN_1800ad104(undefined8 param_1, undefined8 * param_2, undefined4 param_3, undefined1 param_4, undefined1 param_5)
 * Address ranges: 1800ad104-1800ad20e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800ad104(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar2 = (undefined8 *)FUN_1800fbccc(0x298);
  puVar5 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = puVar2;
    *puVar2 = &PTR_FUN_180104cd0;
    lVar3 = 4;
    puVar2[3] = param_1;
    puVar5 = puVar2 + 4;
    do {
      puVar6 = param_2;
      puVar4 = puVar5;
      uVar1 = puVar6[1];
      *puVar4 = *puVar6;
      puVar4[1] = uVar1;
      uVar1 = puVar6[3];
      puVar4[2] = puVar6[2];
      puVar4[3] = uVar1;
      uVar1 = puVar6[5];
      puVar4[4] = puVar6[4];
      puVar4[5] = uVar1;
      uVar1 = puVar6[7];
      puVar4[6] = puVar6[6];
      puVar4[7] = uVar1;
      uVar1 = puVar6[9];
      puVar4[8] = puVar6[8];
      puVar4[9] = uVar1;
      uVar1 = puVar6[0xb];
      puVar4[10] = puVar6[10];
      puVar4[0xb] = uVar1;
      uVar1 = puVar6[0xd];
      puVar4[0xc] = puVar6[0xc];
      puVar4[0xd] = uVar1;
      uVar1 = puVar6[0xf];
      puVar4[0xe] = puVar6[0xe];
      puVar4[0xf] = uVar1;
      lVar3 = lVar3 + -1;
      puVar5 = puVar4 + 0x10;
      param_2 = puVar6 + 0x10;
    } while (lVar3 != 0);
    uVar1 = puVar6[0x11];
    puVar4[0x10] = puVar6[0x10];
    puVar4[0x11] = uVar1;
    uVar1 = puVar6[0x13];
    puVar4[0x12] = puVar6[0x12];
    puVar4[0x13] = uVar1;
    uVar1 = puVar6[0x15];
    puVar4[0x14] = puVar6[0x14];
    puVar4[0x15] = uVar1;
    uVar1 = puVar6[0x17];
    puVar4[0x16] = puVar6[0x16];
    puVar4[0x17] = uVar1;
    uVar1 = puVar6[0x19];
    puVar4[0x18] = puVar6[0x18];
    puVar4[0x19] = uVar1;
    *(undefined4 *)(puVar4 + 0x1a) = *(undefined4 *)(puVar6 + 0x1a);
    *(undefined1 *)((longlong)puVar2 + 0x293) = param_5;
    puVar2[0x4f] = 0;
    puVar2[0x50] = 0;
    *(undefined4 *)(puVar2 + 0x51) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x28c) = param_3;
    *(undefined2 *)(puVar2 + 0x52) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x292) = param_4;
    puVar5 = puVar2;
  }
  return puVar5;
}

