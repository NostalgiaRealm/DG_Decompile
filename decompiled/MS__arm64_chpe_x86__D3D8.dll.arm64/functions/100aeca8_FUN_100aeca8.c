/*
 * FUN_100aeca8 at 100aeca8
 * undefined FUN_100aeca8(void)
 * Address ranges: 100aeca8-100aef0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_100aeca8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined8 *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,byte param_9,
            undefined4 param_10,byte param_11,undefined4 param_12,undefined1 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,byte param_19)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined4 *)FUN_100febf0(0x7c);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    iVar1 = 0;
    if (param_4 != 0) {
      iVar1 = param_4 + 8;
    }
    *(undefined8 *)(puVar3 + 3) = 0;
    puVar3[5] = 0;
    iVar2 = 0;
    if (*(int *)(param_1 + 0xacc) != 0) {
      iVar2 = *(int *)(param_1 + 0xacc) + 4;
    }
    *puVar3 = &PTR_FUN_1012947c;
    puVar4 = (undefined4 *)FUN_100febf0(0xc0);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[0x13] = param_15;
      puVar4[0x14] = param_17;
      *(undefined8 *)(puVar4 + 0x15) = 0;
      *(undefined8 *)(puVar4 + 0x17) = 0xffffffff00000000;
      *(undefined8 *)(puVar4 + 0x22) = 0;
      *(undefined8 *)(puVar4 + 0x20) = 0;
      *(undefined8 *)(puVar4 + 0x26) = 0;
      *(undefined8 *)(puVar4 + 0x24) = 0;
      *(undefined8 *)(puVar4 + 0x2a) = 0;
      *(undefined8 *)(puVar4 + 0x28) = 0;
      puVar4[0x1b] = param_6;
      puVar4[0x1c] = param_7;
      puVar4[1] = iVar2;
      *(undefined8 *)(puVar4 + 4) = 0;
      *(undefined8 *)(puVar4 + 2) = 0;
      *(undefined8 *)(puVar4 + 6) = 0;
      *(undefined8 *)(puVar4 + 10) = 0;
      *(undefined8 *)(puVar4 + 8) = 0;
      *(undefined8 *)(puVar4 + 0xc) = 0;
      *(undefined8 *)(puVar4 + 0x10) = 0;
      *(undefined8 *)(puVar4 + 0xe) = 0;
      puVar4[0x12] = 0;
      *(undefined1 *)(puVar4 + 0x12) = param_13;
      *puVar4 = &PTR_FUN_10129494;
      *(undefined8 *)(puVar4 + 0x2c) = 0;
      *(undefined8 *)(puVar4 + 0x2e) = 0;
    }
    puVar3[1] = puVar4;
    *(undefined2 *)(puVar3 + 2) = 0;
    *puVar3 = &PTR_FUN_101292f8;
    puVar3[6] = param_1;
    puVar3[7] = param_3;
    puVar3[8] = iVar1;
    puVar3[9] = 0;
    uVar7 = *param_5;
    uVar6 = param_5[3];
    uVar5 = param_5[2];
    *(undefined8 *)(puVar3 + 0xc) = param_5[1];
    *(undefined8 *)(puVar3 + 10) = uVar7;
    *(undefined8 *)(puVar3 + 0x10) = uVar6;
    *(undefined8 *)(puVar3 + 0xe) = uVar5;
    puVar3[0x12] = param_6;
    puVar3[0x13] = param_7;
    puVar3[0x14] = param_8;
    *(undefined8 *)(puVar3 + 0x15) = 0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[0x2e] = (uint)param_19 | ((uint)param_11 | (uint)param_9 << 1) << 9;
    }
    *(undefined8 *)(puVar3 + 0x18) = 0;
    puVar3[0x1a] = puVar3 + 0x17;
    *puVar3 = &PTR_FUN_1012a554;
    puVar3[0x17] = &PTR_FUN_1012a528;
    puVar3[0x1b] = param_1;
    puVar3[0x1c] = param_2;
    puVar3[0x1d] = param_3;
    puVar3[0x1e] = param_4;
  }
  return puVar3;
}

