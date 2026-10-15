/*
 * FUN_1003072b at 1003072b
 * uint __stdcall FUN_1003072b(int param_1, int param_2)
 * Address ranges: 1003072b-100308aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1003072b(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      uVar1 = (uint)*(byte *)(param_1 + 0x9c + uVar3);
      iVar2 = uVar3 * 0x1c;
      *(undefined4 *)(param_2 + 8 + iVar2) =
           *(undefined4 *)(&DAT_1005ef30 + (uint)*(byte *)(param_1 + 0x18 + uVar1 * 8) * 4);
      *(undefined **)(param_2 + iVar2) = (&PTR_s_POSITION_1005eef4)[uVar1];
      *(uint *)(param_2 + 4 + iVar2) = (uint)(byte)(&DAT_1005eee4)[uVar1];
      *(int *)(param_2 + 0xc + iVar2) = (int)*(char *)(param_1 + 0x14 + uVar1 * 8);
      *(uint *)(param_2 + 0x10 + iVar2) = (uint)*(byte *)(param_1 + 0x17 + uVar1 * 8) << 2;
      uVar3 = uVar3 + 1;
      *(undefined4 *)(param_2 + 0x14 + iVar2) = 0;
      *(undefined4 *)(param_2 + 0x18 + iVar2) = 0;
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  uVar1 = 7;
  do {
    if (*(char *)(param_1 + 0x14 + uVar1 * 8) == -1) {
      iVar2 = uVar3 * 0x1c;
      *(undefined **)(param_2 + iVar2) = (&PTR_s_POSITION_1005eef4)[uVar1];
      *(uint *)(param_2 + 4 + iVar2) = (uint)(byte)(&DAT_1005eee4)[uVar1];
      *(undefined4 *)(param_2 + 8 + iVar2) = 0x29;
      uVar3 = uVar3 + 1;
      *(undefined4 *)(param_2 + 0xc + iVar2) = 0;
      *(undefined4 *)(param_2 + 0x10 + iVar2) = 0;
      *(undefined4 *)(param_2 + 0x14 + iVar2) = 0;
      *(undefined4 *)(param_2 + 0x18 + iVar2) = 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xf);
  if (*(char *)(param_1 + 0x3c) == -1) {
    iVar2 = uVar3 * 0x1c;
    *(char **)(iVar2 + param_2) = "COLOR";
    *(undefined4 *)(iVar2 + 4 + param_2) = 0;
    uVar3 = uVar3 + 1;
    *(undefined4 *)(iVar2 + 8 + param_2) = 0x57;
    *(undefined4 *)(iVar2 + 0xc + param_2) = 0;
    *(undefined4 *)(iVar2 + 0x10 + param_2) = 0;
    *(undefined4 *)(iVar2 + 0x14 + param_2) = 0;
    *(undefined4 *)(iVar2 + 0x18 + param_2) = 0;
  }
  if (*(char *)(param_1 + 0x44) == -1) {
    iVar2 = uVar3 * 0x1c;
    *(char **)(iVar2 + param_2) = "COLOR";
    *(undefined4 *)(iVar2 + 4 + param_2) = 1;
    uVar3 = uVar3 + 1;
    *(undefined4 *)(iVar2 + 8 + param_2) = 0x57;
    *(undefined4 *)(iVar2 + 0xc + param_2) = 0;
    *(undefined4 *)(iVar2 + 0x10 + param_2) = 0;
    *(undefined4 *)(iVar2 + 0x14 + param_2) = 0;
    *(undefined4 *)(iVar2 + 0x18 + param_2) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    if (*(char *)(param_1 + 0x2c) == -1) {
      iVar2 = uVar3 * 0x1c;
      uVar3 = uVar3 + 1;
      *(char **)(iVar2 + param_2) = "TEXCOORD";
      *(undefined4 *)(iVar2 + 4 + param_2) = 8;
      *(undefined4 *)(iVar2 + 8 + param_2) = 6;
      *(undefined4 *)(iVar2 + 0xc + param_2) = 0;
      *(undefined4 *)(iVar2 + 0x10 + param_2) = 0;
      *(undefined4 *)(iVar2 + 0x14 + param_2) = 0;
      *(undefined4 *)(iVar2 + 0x18 + param_2) = 0;
    }
    if (*(char *)(param_1 + 0x1c) == -1) {
      iVar2 = uVar3 * 0x1c;
      uVar3 = uVar3 + 1;
      *(char **)(iVar2 + param_2) = "TEXCOORD";
      *(undefined4 *)(iVar2 + 4 + param_2) = 9;
      *(undefined4 *)(iVar2 + 8 + param_2) = 6;
      *(undefined4 *)(iVar2 + 0xc + param_2) = 0;
      *(undefined4 *)(iVar2 + 0x10 + param_2) = 0;
      *(undefined4 *)(iVar2 + 0x14 + param_2) = 0;
      *(undefined4 *)(iVar2 + 0x18 + param_2) = 0;
    }
  }
  return uVar3;
}

