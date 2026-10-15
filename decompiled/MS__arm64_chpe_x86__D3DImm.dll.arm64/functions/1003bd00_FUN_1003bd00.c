/*
 * FUN_1003bd00 at 1003bd00
 * undefined FUN_1003bd00(void)
 * Address ranges: 1003bd00-1003bf8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1003bd00(undefined8 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  if (*(uint *)(param_2 + 8) != 0) {
    uVar3 = uVar4;
    do {
      bVar2 = *(byte *)(param_2 + 0x9c + uVar3);
      uVar4 = uVar3 + 1;
      *(undefined4 *)(param_3 + 8 + uVar3 * 0x1c) =
           *(undefined4 *)(&DAT_1009e190 + (uint)*(byte *)(param_2 + 0x18 + (uint)bVar2 * 8) * 4);
      *(undefined **)(param_3 + uVar3 * 0x1c) = (&PTR_s_POSITION_1009e150)[bVar2];
      uVar5 = (uint)bVar2;
      *(uint *)(param_3 + 4 + uVar3 * 0x1c) = (uint)*(byte *)(uVar5 + 0x1009e140);
      *(int *)(param_3 + 0xc + uVar3 * 0x1c) = (int)*(char *)(param_2 + 0x14 + uVar5 * 8);
      *(uint *)(param_3 + 0x10 + uVar3 * 0x1c) = (uint)*(byte *)(param_2 + 0x17 + uVar5 * 8) << 2;
      *(undefined4 *)(param_3 + 0x14 + uVar3 * 0x1c) = 0;
      *(undefined4 *)(param_3 + 0x18 + uVar3 * 0x1c) = 0;
      uVar3 = uVar4;
    } while (uVar4 < *(uint *)(param_2 + 8));
  }
  uVar3 = 7;
  do {
    if (*(char *)(param_2 + 0x14 + uVar3 * 8) == -1) {
      puVar1 = (undefined4 *)(param_3 + uVar4 * 0x1c);
      uVar4 = uVar4 + 1;
      *puVar1 = (&PTR_s_POSITION_1009e150)[uVar3];
      puVar1[1] = (uint)*(byte *)(uVar3 + 0x1009e140);
      *(undefined8 *)(puVar1 + 2) = 0x29;
      *(undefined8 *)(puVar1 + 4) = 0;
      puVar1[6] = 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xf);
  if (*(char *)(param_2 + 0x3c) == -1) {
    puVar1 = (undefined4 *)(param_3 + uVar4 * 0x1c);
    uVar4 = uVar4 + 1;
    *puVar1 = PTR_s_COLOR_1009e164;
    *(undefined8 *)(puVar1 + 1) = 0x5700000000;
    *(undefined8 *)(puVar1 + 3) = 0;
    *(undefined8 *)(puVar1 + 5) = 0;
  }
  if (*(char *)(param_2 + 0x44) == -1) {
    puVar1 = (undefined4 *)(param_3 + uVar4 * 0x1c);
    uVar4 = uVar4 + 1;
    *puVar1 = PTR_s_COLOR_1009e168;
    *(undefined8 *)(puVar1 + 1) = 0x5700000001;
    *(undefined8 *)(puVar1 + 3) = 0;
    *(undefined8 *)(puVar1 + 5) = 0;
  }
  if (*(int *)(param_2 + 4) != 0) {
    if (*(char *)(param_2 + 0x2c) == -1) {
      puVar1 = (undefined4 *)(param_3 + uVar4 * 0x1c);
      uVar4 = uVar4 + 1;
      *puVar1 = PTR_s_TEXCOORD_1009e15c;
      *(undefined8 *)(puVar1 + 1) = 0x600000008;
      *(undefined8 *)(puVar1 + 3) = 0;
      *(undefined8 *)(puVar1 + 5) = 0;
    }
    if (*(char *)(param_2 + 0x1c) == -1) {
      puVar1 = (undefined4 *)(param_3 + uVar4 * 0x1c);
      uVar4 = uVar4 + 1;
      *puVar1 = PTR_s_TEXCOORD_1009e154;
      *(undefined8 *)(puVar1 + 1) = 0x600000009;
      *(undefined8 *)(puVar1 + 3) = 0;
      *(undefined8 *)(puVar1 + 5) = 0;
    }
  }
  return uVar4;
}

