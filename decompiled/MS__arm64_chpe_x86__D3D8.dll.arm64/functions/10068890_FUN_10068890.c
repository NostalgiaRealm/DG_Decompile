/*
 * FUN_10068890 at 10068890
 * undefined FUN_10068890(void)
 * Address ranges: 10068890-10068bc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10068890(undefined8 param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar5 = 0;
  uVar6 = 0;
  if (*(uint *)(param_2 + 8) != 0) {
    do {
      bVar3 = *(byte *)(param_2 + 0x9c + uVar6);
      if ((param_4 & 1) == 0) {
        bVar4 = bVar3 == 0x10;
      }
      else {
        bVar4 = bVar3 == 1;
      }
      if (!bVar4) {
        uVar7 = (uint)bVar3;
        iVar1 = param_2 + uVar7 * 8;
        puVar2 = (undefined4 *)(param_3 + iVar5 * 0x1c);
        iVar5 = iVar5 + 1;
        puVar2[2] = *(undefined4 *)(&DAT_1012c758 + (uint)*(byte *)(iVar1 + 0x18) * 4);
        *puVar2 = (&PTR_s_POSITION_1012c710)[uVar7];
        puVar2[1] = (uint)*(byte *)(uVar7 + 0x1012c6f0);
        puVar2[3] = (int)*(char *)(iVar1 + 0x14);
        puVar2[4] = (uint)*(byte *)(iVar1 + 0x17) << 2;
        *(undefined8 *)(puVar2 + 5) = 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_2 + 8));
  }
  uVar6 = 7;
  do {
    if (*(char *)(param_2 + 0x14 + uVar6 * 8) == -1) {
      puVar2 = (undefined4 *)(param_3 + iVar5 * 0x1c);
      iVar5 = iVar5 + 1;
      *puVar2 = (&PTR_s_POSITION_1012c710)[uVar6];
      puVar2[1] = (uint)*(byte *)(uVar6 + 0x1012c6f0);
      *(undefined8 *)(puVar2 + 2) = 0x29;
      *(undefined8 *)(puVar2 + 4) = 0;
      puVar2[6] = 0;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0xf);
  if (*(char *)(param_2 + 0x3c) == -1) {
    puVar2 = (undefined4 *)(param_3 + iVar5 * 0x1c);
    iVar5 = iVar5 + 1;
    *puVar2 = PTR_s_COLOR_1012c724;
    *(undefined8 *)(puVar2 + 1) = 0x5700000000;
    *(undefined8 *)(puVar2 + 3) = 0;
    *(undefined8 *)(puVar2 + 5) = 0;
  }
  if (*(char *)(param_2 + 0x44) == -1) {
    puVar2 = (undefined4 *)(param_3 + iVar5 * 0x1c);
    iVar5 = iVar5 + 1;
    *puVar2 = PTR_s_COLOR_1012c728;
    *(undefined8 *)(puVar2 + 1) = 0x5700000001;
    *(undefined8 *)(puVar2 + 3) = 0;
    *(undefined8 *)(puVar2 + 5) = 0;
  }
  if (*(char *)(param_2 + 0x34) == -1) {
    puVar2 = (undefined4 *)(param_3 + iVar5 * 0x1c);
    iVar5 = iVar5 + 1;
    *puVar2 = PTR_s_TEXCOORD_1012c720;
    *(undefined8 *)(puVar2 + 1) = 0x290000000d;
    *(undefined8 *)(puVar2 + 3) = 0;
    *(undefined8 *)(puVar2 + 5) = 0;
  }
  if (*(int *)(param_2 + 4) != 0) {
    if (*(char *)(param_2 + 0x2c) == -1) {
      puVar2 = (undefined4 *)(param_3 + iVar5 * 0x1c);
      iVar5 = iVar5 + 1;
      *puVar2 = PTR_s_TEXCOORD_1012c71c;
      *(undefined8 *)(puVar2 + 1) = 0x600000008;
      *(undefined8 *)(puVar2 + 3) = 0;
      *(undefined8 *)(puVar2 + 5) = 0;
    }
    if (*(char *)(param_2 + 0x1c) == -1) {
      puVar2 = (undefined4 *)(param_3 + iVar5 * 0x1c);
      iVar5 = iVar5 + 1;
      *puVar2 = PTR_s_TEXCOORD_1012c714;
      *(undefined8 *)(puVar2 + 1) = 0x600000009;
      *(undefined8 *)(puVar2 + 3) = 0;
      *(undefined8 *)(puVar2 + 5) = 0;
    }
    if (*(char *)(param_2 + 0x24) == -1) {
      puVar2 = (undefined4 *)(param_3 + iVar5 * 0x1c);
      iVar5 = iVar5 + 1;
      *puVar2 = PTR_s_TEXCOORD_1012c718;
      *(undefined8 *)(puVar2 + 1) = 0x1c0000000a;
      *(undefined8 *)(puVar2 + 3) = 0;
      *(undefined8 *)(puVar2 + 5) = 0;
    }
    if (*(char *)(param_2 + 0x8c) == -1) {
      puVar2 = (undefined4 *)(param_3 + iVar5 * 0x1c);
      iVar5 = iVar5 + 1;
      *puVar2 = PTR_s_TEXCOORD_1012c74c;
      *(undefined8 *)(puVar2 + 1) = 0x60000000b;
      *(undefined8 *)(puVar2 + 3) = 0;
      *(undefined8 *)(puVar2 + 5) = 0;
    }
  }
  return iVar5;
}

