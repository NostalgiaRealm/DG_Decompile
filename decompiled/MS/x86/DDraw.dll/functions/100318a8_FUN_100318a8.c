/*
 * FUN_100318a8 at 100318a8
 * undefined __fastcall FUN_100318a8(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 100318a8-10031a19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100318a8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    param_1[2] = param_2[2];
  }
  if ((*(byte *)(param_2 + 1) & 4) != 0) {
    param_1[3] = param_2[3];
  }
  if ((*(byte *)(param_2 + 1) & 8) != 0) {
    param_1[4] = param_2[4];
  }
  if ((param_2[1] & 0x800) != 0) {
    param_1[9] = param_2[9];
  }
  if ((*(byte *)(param_2 + 1) & 0x20) != 0) {
    param_1[5] = param_2[5];
  }
  if ((*(byte *)(param_2 + 1) & 0x40) != 0) {
    param_1[6] = param_2[6];
  }
  if ((*(byte *)(param_2 + 1) & 0x80) != 0) {
    param_1[7] = param_2[7];
  }
  if ((param_2[1] & 0x1000) != 0) {
    puVar5 = param_1 + 0x12;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    param_1[0x12] = param_2[0x12];
    uVar2 = param_2[0x13];
    param_1[0x13] = uVar2;
    if ((uVar2 & 4) == 0) {
      param_1[0x15] = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x17] = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x19] = param_2[0x19];
    }
    else {
      param_1[0x14] = param_2[0x14];
    }
  }
  if ((param_2[1] & 0x2000) != 0) {
    uVar3 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar3;
  }
  if ((param_2[1] & 0x4000) != 0) {
    uVar3 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar3;
  }
  if ((param_2[1] & 0x8000) != 0) {
    uVar3 = param_2[0xf];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = uVar3;
  }
  if ((param_2[1] & 0x10000) != 0) {
    uVar3 = param_2[0x11];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar3;
  }
  puVar5 = param_2 + 6;
  puVar1 = param_1 + 6;
  if ((param_2[1] & 0x20000) != 0) {
    *puVar1 = *puVar5;
  }
  if ((param_2[1] & 0x40000) != 0) {
    *puVar1 = *puVar5;
  }
  if ((param_2[1] & 0x80000) != 0) {
    param_1[4] = param_2[4];
  }
  if ((param_2[1] & 0x100000) != 0) {
    param_1[0x1e] = param_2[0x1e];
  }
  if ((param_2[1] & 0x200000) != 0) {
    param_1[0x12] = param_2[0x12];
  }
  if ((param_2[1] & 0x400000) != 0) {
    *puVar1 = *puVar5;
  }
  return;
}

