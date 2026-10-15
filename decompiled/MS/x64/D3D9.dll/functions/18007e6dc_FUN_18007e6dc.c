/*
 * FUN_18007e6dc at 18007e6dc
 * undefined __fastcall FUN_18007e6dc(undefined8 param_1, longlong param_2, byte param_3)
 * Address ranges: 18007e6dc-18007e780
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007e6dc(undefined8 param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  byte *pbVar2;
  byte bVar3;
  
  bVar3 = ~param_3;
  pbVar2 = (byte *)(param_2 + 0x1c1);
  *pbVar2 = *pbVar2 & bVar3;
  if (*pbVar2 == 0) {
    FUN_1800ec960(param_2 + 0x20,*(uint *)(param_2 + 0x15c));
    *(undefined4 *)(param_2 + 0x15c) = 0;
  }
  pbVar2 = (byte *)(param_2 + 0x1c2);
  *pbVar2 = *pbVar2 & bVar3;
  lVar1 = param_2 + 0x20;
  if (*pbVar2 == 0) {
    FUN_1800ec960(lVar1,*(uint *)(param_2 + 0x160));
    *(undefined4 *)(param_2 + 0x160) = 0;
  }
  pbVar2 = (byte *)(param_2 + 0x1c3);
  *pbVar2 = *pbVar2 & bVar3;
  if (*pbVar2 == 0) {
    FUN_1800ec960(lVar1,*(uint *)(param_2 + 0x164));
    *(undefined4 *)(param_2 + 0x164) = 0;
  }
  pbVar2 = (byte *)(param_2 + 0x1c4);
  *pbVar2 = *pbVar2 & bVar3;
  if (*pbVar2 == 0) {
    FUN_1800ec960(lVar1,*(uint *)(param_2 + 0x168));
    *(undefined4 *)(param_2 + 0x168) = 0;
  }
  return;
}

