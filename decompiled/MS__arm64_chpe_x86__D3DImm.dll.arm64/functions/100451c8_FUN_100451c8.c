/*
 * FUN_100451c8 at 100451c8
 * undefined FUN_100451c8(void)
 * Address ranges: 100451c8-10045283
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100451c8(undefined8 param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined4 *extraout_w11_02;
  uint extraout_w12;
  uint extraout_w12_00;
  uint extraout_w12_01;
  uint uVar3;
  undefined4 *extraout_w13;
  undefined4 *extraout_w13_00;
  undefined4 *extraout_w13_01;
  
  uVar3 = param_3 & 0xff;
  iVar2 = param_2 + 0x10;
  uVar1 = (uint)*(byte *)(param_2 + 0x189) & (param_3 & 0xff ^ 0xffffffff);
  *(byte *)(param_2 + 0x189) = (byte)uVar1;
  if (uVar1 == 0) {
    iVar2 = FUN_10079a60(iVar2,*(undefined4 *)(param_2 + 0x130));
    *extraout_w13 = 0;
    param_2 = extraout_w11;
    uVar3 = extraout_w12;
  }
  uVar1 = (uint)*(byte *)(param_2 + 0x18a) & (uVar3 ^ 0xffffffff);
  *(byte *)(param_2 + 0x18a) = (byte)uVar1;
  if (uVar1 == 0) {
    iVar2 = FUN_10079a60(iVar2,*(undefined4 *)(param_2 + 0x134));
    *extraout_w13_00 = 0;
    param_2 = extraout_w11_00;
    uVar3 = extraout_w12_00;
  }
  uVar1 = (uint)*(byte *)(param_2 + 0x18b) & (uVar3 ^ 0xffffffff);
  *(byte *)(param_2 + 0x18b) = (byte)uVar1;
  if (uVar1 == 0) {
    iVar2 = FUN_10079a60(iVar2,*(undefined4 *)(param_2 + 0x138));
    *extraout_w13_01 = 0;
    param_2 = extraout_w11_01;
    uVar3 = extraout_w12_01;
  }
  uVar1 = (uint)*(byte *)(param_2 + 0x18c) & (uVar3 ^ 0xffffffff);
  *(byte *)(param_2 + 0x18c) = (byte)uVar1;
  if (uVar1 == 0) {
    FUN_10079a60(iVar2,*(undefined4 *)(param_2 + 0x13c));
    *extraout_w11_02 = 0;
  }
  return;
}

