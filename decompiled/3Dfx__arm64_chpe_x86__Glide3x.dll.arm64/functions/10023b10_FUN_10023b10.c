/*
 * FUN_10023b10 at 10023b10
 * undefined FUN_10023b10(void)
 * Address ranges: 10023b10-10023cd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10023b10(int param_1,undefined4 *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  *(char *)(param_1 + 0x48) = param_3;
  *(bool *)(param_1 + 0x49) = (uint)param_2[3] < (uint)param_2[5];
  *(undefined4 *)(param_1 + 0x28) = *param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_2[1];
  *(undefined4 *)(param_1 + 0x30) = param_2[2];
  *(undefined4 *)(param_1 + 0x20) = param_2[3];
  *(undefined4 *)(param_1 + 0x24) = param_2[4];
  uVar3 = 0x38;
  if (param_3 == '\0') {
    uVar3 = 0x1c;
  }
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x14) = param_2[6];
  *(undefined4 *)(param_1 + 8) = param_2[7];
  *(undefined4 *)(param_1 + 0xc) = param_2[8];
  *(undefined4 *)(param_1 + 0x10) = param_2[9];
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfd;
  FUN_10023e18(param_1);
  uVar1 = param_2[5];
  iVar2 = (param_2[4] * uVar1 + 0x2000) * 4;
  *(uint *)(param_1 + 0x58) = uVar1;
  uVar3 = (*(code *)PTR_FUN_100a001c)(0,0,4,0,iVar2,0);
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  iVar4 = (*(code *)PTR_FUN_100a00a0)(uVar3,0xf001f,0,0,iVar2);
  *(int *)(param_1 + 0x54) = iVar4;
  uVar3 = (*(code *)PTR_FUN_100a00a0)(*(undefined4 *)(param_1 + 0x4c),0xf001f,0,0,iVar2);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  return *(int *)(param_1 + 0x54) != 0;
}

