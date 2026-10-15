/*
 * FUN_10048f39 at 10048f39
 * int __stdcall FUN_10048f39(int param_1, int param_2, char param_3)
 * Address ranges: 10048f39-10049180
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10048f39(int param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  uVar3 = 0;
  iVar4 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      uVar1 = (uint)*(byte *)(param_1 + 0x9c + uVar3);
      if (param_3 == '\0') {
        bVar5 = uVar1 == 0x10;
      }
      else {
        bVar5 = uVar1 == 1;
      }
      if (!bVar5) {
        iVar2 = iVar4 * 0x1c;
        *(undefined4 *)(param_2 + 8 + iVar2) =
             *(undefined4 *)(&DAT_100b25ec + (uint)*(byte *)(param_1 + 0x18 + uVar1 * 8) * 4);
        *(undefined **)(param_2 + iVar2) = (&PTR_s_POSITION_100b25a8)[uVar1];
        *(uint *)(param_2 + 4 + iVar2) = (uint)(byte)(&DAT_100b2590)[uVar1];
        *(int *)(param_2 + 0xc + iVar2) = (int)*(char *)(param_1 + 0x14 + uVar1 * 8);
        iVar4 = iVar4 + 1;
        *(uint *)(param_2 + 0x10 + iVar2) = (uint)*(byte *)(param_1 + 0x17 + uVar1 * 8) << 2;
        *(undefined4 *)(param_2 + 0x14 + iVar2) = 0;
        *(undefined4 *)(param_2 + 0x18 + iVar2) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  uVar3 = 7;
  do {
    if (*(char *)(param_1 + 0x14 + uVar3 * 8) == -1) {
      iVar2 = iVar4 * 0x1c;
      *(undefined **)(param_2 + iVar2) = (&PTR_s_POSITION_100b25a8)[uVar3];
      *(uint *)(param_2 + 4 + iVar2) = (uint)(byte)(&DAT_100b2590)[uVar3];
      *(undefined4 *)(param_2 + 8 + iVar2) = 0x29;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(param_2 + 0xc + iVar2) = 0;
      *(undefined4 *)(param_2 + 0x10 + iVar2) = 0;
      *(undefined4 *)(param_2 + 0x14 + iVar2) = 0;
      *(undefined4 *)(param_2 + 0x18 + iVar2) = 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xf);
  if (*(char *)(param_1 + 0x3c) == -1) {
    iVar2 = iVar4 * 0x1c;
    iVar4 = iVar4 + 1;
    *(char **)(iVar2 + param_2) = "COLOR";
    *(undefined4 *)(iVar2 + 4 + param_2) = 0;
    *(undefined4 *)(iVar2 + 8 + param_2) = 0x57;
    *(undefined4 *)(iVar2 + 0xc + param_2) = 0;
    *(undefined4 *)(iVar2 + 0x10 + param_2) = 0;
    *(undefined4 *)(iVar2 + 0x14 + param_2) = 0;
    *(undefined4 *)(iVar2 + 0x18 + param_2) = 0;
  }
  if (*(char *)(param_1 + 0x44) == -1) {
    iVar2 = iVar4 * 0x1c;
    iVar4 = iVar4 + 1;
    *(char **)(iVar2 + param_2) = "COLOR";
    *(undefined4 *)(iVar2 + 4 + param_2) = 1;
    *(undefined4 *)(iVar2 + 8 + param_2) = 0x57;
    *(undefined4 *)(iVar2 + 0xc + param_2) = 0;
    *(undefined4 *)(iVar2 + 0x10 + param_2) = 0;
    *(undefined4 *)(iVar2 + 0x14 + param_2) = 0;
    *(undefined4 *)(iVar2 + 0x18 + param_2) = 0;
  }
  if (*(char *)(param_1 + 0x34) == -1) {
    iVar2 = iVar4 * 0x1c;
    iVar4 = iVar4 + 1;
    *(char **)(iVar2 + param_2) = "TEXCOORD";
    *(undefined4 *)(iVar2 + 4 + param_2) = 0xd;
    *(undefined4 *)(iVar2 + 8 + param_2) = 0x29;
    *(undefined4 *)(iVar2 + 0xc + param_2) = 0;
    *(undefined4 *)(iVar2 + 0x10 + param_2) = 0;
    *(undefined4 *)(iVar2 + 0x14 + param_2) = 0;
    *(undefined4 *)(iVar2 + 0x18 + param_2) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    if (*(char *)(param_1 + 0x2c) == -1) {
      iVar2 = iVar4 * 0x1c;
      iVar4 = iVar4 + 1;
      *(char **)(iVar2 + param_2) = "TEXCOORD";
      *(undefined4 *)(iVar2 + 4 + param_2) = 8;
      *(undefined4 *)(iVar2 + 8 + param_2) = 6;
      *(undefined4 *)(iVar2 + 0xc + param_2) = 0;
      *(undefined4 *)(iVar2 + 0x10 + param_2) = 0;
      *(undefined4 *)(iVar2 + 0x14 + param_2) = 0;
      *(undefined4 *)(iVar2 + 0x18 + param_2) = 0;
    }
    if (*(char *)(param_1 + 0x1c) == -1) {
      iVar2 = iVar4 * 0x1c;
      iVar4 = iVar4 + 1;
      *(char **)(iVar2 + param_2) = "TEXCOORD";
      *(undefined4 *)(iVar2 + 4 + param_2) = 9;
      *(undefined4 *)(iVar2 + 8 + param_2) = 6;
      *(undefined4 *)(iVar2 + 0xc + param_2) = 0;
      *(undefined4 *)(iVar2 + 0x10 + param_2) = 0;
      *(undefined4 *)(iVar2 + 0x14 + param_2) = 0;
      *(undefined4 *)(iVar2 + 0x18 + param_2) = 0;
    }
    if (*(char *)(param_1 + 0x24) == -1) {
      iVar2 = iVar4 * 0x1c;
      iVar4 = iVar4 + 1;
      *(char **)(iVar2 + param_2) = "TEXCOORD";
      *(undefined4 *)(iVar2 + 4 + param_2) = 10;
      *(undefined4 *)(iVar2 + 8 + param_2) = 0x1c;
      *(undefined4 *)(iVar2 + 0xc + param_2) = 0;
      *(undefined4 *)(iVar2 + 0x10 + param_2) = 0;
      *(undefined4 *)(iVar2 + 0x14 + param_2) = 0;
      *(undefined4 *)(iVar2 + 0x18 + param_2) = 0;
    }
    if (*(char *)(param_1 + 0x8c) == -1) {
      iVar2 = iVar4 * 0x1c;
      iVar4 = iVar4 + 1;
      *(char **)(iVar2 + param_2) = "TEXCOORD";
      *(undefined4 *)(iVar2 + 4 + param_2) = 0xb;
      *(undefined4 *)(iVar2 + 8 + param_2) = 6;
      *(undefined4 *)(iVar2 + 0xc + param_2) = 0;
      *(undefined4 *)(iVar2 + 0x10 + param_2) = 0;
      *(undefined4 *)(iVar2 + 0x14 + param_2) = 0;
      *(undefined4 *)(iVar2 + 0x18 + param_2) = 0;
    }
  }
  return iVar4;
}

