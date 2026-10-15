/*
 * FUN_180184fb8 at 180184fb8
 * undefined FUN_180184fb8(void)
 * Address ranges: 180184fb8-18018504f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180184fb8(undefined8 param_1,longlong param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_3;
  bVar1 = *(byte *)(param_2 + 0x1c1) & (param_3 ^ 0xff);
  *(byte *)(param_2 + 0x1c1) = bVar1;
  if (bVar1 == 0) {
    uVar3 = (uint)param_3;
    FUN_180213800(param_2 + 0x20,*(undefined4 *)(param_2 + 0x15c));
    *(undefined4 *)(param_2 + 0x15c) = 0;
  }
  uVar2 = (uint)*(byte *)(param_2 + 0x1c2) & (uVar3 ^ 0xffffffff);
  *(char *)(param_2 + 0x1c2) = (char)uVar2;
  if (uVar2 == 0) {
    FUN_180213800(param_2 + 0x20,*(undefined4 *)(param_2 + 0x160));
    *(undefined4 *)(param_2 + 0x160) = 0;
  }
  uVar2 = (uint)*(byte *)(param_2 + 0x1c3) & (uVar3 ^ 0xffffffff);
  *(char *)(param_2 + 0x1c3) = (char)uVar2;
  if (uVar2 == 0) {
    FUN_180213800(param_2 + 0x20,*(undefined4 *)(param_2 + 0x164));
    *(undefined4 *)(param_2 + 0x164) = 0;
  }
  uVar3 = (uint)*(byte *)(param_2 + 0x1c4) & (uVar3 ^ 0xffffffff);
  *(char *)(param_2 + 0x1c4) = (char)uVar3;
  if (uVar3 == 0) {
    FUN_180213800(param_2 + 0x20,*(undefined4 *)(param_2 + 0x168));
    *(undefined4 *)(param_2 + 0x168) = 0;
  }
  return;
}

