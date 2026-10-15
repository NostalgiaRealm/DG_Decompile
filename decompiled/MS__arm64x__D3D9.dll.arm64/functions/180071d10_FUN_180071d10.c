/*
 * FUN_180071d10 at 180071d10
 * undefined FUN_180071d10(void)
 * Address ranges: 180071d10-180071da7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180071d10(undefined8 param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint extraout_w14;
  uint extraout_w14_00;
  uint extraout_w14_01;
  uint uVar2;
  longlong extraout_x15;
  longlong extraout_x15_00;
  longlong extraout_x15_01;
  longlong extraout_x15_02;
  
  uVar2 = param_3 & 0xff;
  uVar1 = (uint)*(byte *)(param_2 + 0x1c1) & (param_3 & 0xff ^ 0xffffffff);
  *(char *)(param_2 + 0x1c1) = (char)uVar1;
  if (uVar1 == 0) {
    FUN_1800f4370(param_2 + 0x20,*(undefined4 *)(param_2 + 0x15c));
    *(undefined4 *)(extraout_x15 + 0x15c) = 0;
    param_2 = extraout_x15;
    uVar2 = extraout_w14;
  }
  uVar1 = (uint)*(byte *)(param_2 + 0x1c2) & (uVar2 ^ 0xffffffff);
  *(char *)(param_2 + 0x1c2) = (char)uVar1;
  if (uVar1 == 0) {
    FUN_1800f4370(param_2 + 0x20,*(undefined4 *)(param_2 + 0x160));
    *(undefined4 *)(extraout_x15_00 + 0x160) = 0;
    param_2 = extraout_x15_00;
    uVar2 = extraout_w14_00;
  }
  uVar1 = (uint)*(byte *)(param_2 + 0x1c3) & (uVar2 ^ 0xffffffff);
  *(char *)(param_2 + 0x1c3) = (char)uVar1;
  if (uVar1 == 0) {
    FUN_1800f4370(param_2 + 0x20,*(undefined4 *)(param_2 + 0x164));
    *(undefined4 *)(extraout_x15_01 + 0x164) = 0;
    param_2 = extraout_x15_01;
    uVar2 = extraout_w14_01;
  }
  uVar1 = (uint)*(byte *)(param_2 + 0x1c4) & (uVar2 ^ 0xffffffff);
  *(char *)(param_2 + 0x1c4) = (char)uVar1;
  if (uVar1 == 0) {
    FUN_1800f4370(param_2 + 0x20,*(undefined4 *)(param_2 + 0x168));
    *(undefined4 *)(extraout_x15_02 + 0x168) = 0;
  }
  return;
}

