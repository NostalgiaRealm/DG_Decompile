/*
 * FUN_10079b40 at 10079b40
 * undefined FUN_10079b40(void)
 * Address ranges: 10079b40-10079bfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079b40(undefined8 param_1,int param_2,uint param_3)

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
  iVar2 = param_2 + 0x18;
  uVar1 = (uint)*(byte *)(param_2 + 0x1a5) & (param_3 & 0xff ^ 0xffffffff);
  *(byte *)(param_2 + 0x1a5) = (byte)uVar1;
  if (uVar1 == 0) {
    iVar2 = FUN_100ee638(iVar2,*(undefined4 *)(param_2 + 0x14c));
    *extraout_w13 = 0;
    param_2 = extraout_w11;
    uVar3 = extraout_w12;
  }
  uVar1 = (uint)*(byte *)(param_2 + 0x1a6) & (uVar3 ^ 0xffffffff);
  *(byte *)(param_2 + 0x1a6) = (byte)uVar1;
  if (uVar1 == 0) {
    iVar2 = FUN_100ee638(iVar2,*(undefined4 *)(param_2 + 0x150));
    *extraout_w13_00 = 0;
    param_2 = extraout_w11_00;
    uVar3 = extraout_w12_00;
  }
  uVar1 = (uint)*(byte *)(param_2 + 0x1a7) & (uVar3 ^ 0xffffffff);
  *(byte *)(param_2 + 0x1a7) = (byte)uVar1;
  if (uVar1 == 0) {
    iVar2 = FUN_100ee638(iVar2,*(undefined4 *)(param_2 + 0x154));
    *extraout_w13_01 = 0;
    param_2 = extraout_w11_01;
    uVar3 = extraout_w12_01;
  }
  uVar1 = (uint)*(byte *)(param_2 + 0x1a8) & (uVar3 ^ 0xffffffff);
  *(byte *)(param_2 + 0x1a8) = (byte)uVar1;
  if (uVar1 == 0) {
    FUN_100ee638(iVar2,*(undefined4 *)(param_2 + 0x158));
    *extraout_w11_02 = 0;
  }
  return;
}

