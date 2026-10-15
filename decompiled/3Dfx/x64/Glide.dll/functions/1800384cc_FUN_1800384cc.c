/*
 * FUN_1800384cc at 1800384cc
 * undefined __fastcall FUN_1800384cc(longlong param_1, uint param_2, ushort param_3)
 * Address ranges: 1800384cc-180038563
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800384cc(longlong param_1,uint param_2,ushort param_3)

{
  byte *pbVar1;
  ushort uVar2;
  undefined1 uVar3;
  byte bVar4;
  ulonglong uVar5;
  
  uVar2 = param_3 & 0xf0;
  bVar4 = (byte)param_3;
  uVar3 = (undefined1)param_2;
  if (uVar2 == 0x10) {
    uVar5 = (ulonglong)(bVar4 & 0xf);
    pbVar1 = (byte *)(uVar5 + 0x40 + param_1);
    *pbVar1 = *pbVar1 | 7;
    if (param_2 < *(byte *)(uVar5 + 0xad + param_1)) {
      *(undefined1 *)(uVar5 + 0xad + param_1) = uVar3;
    }
  }
  else if (uVar2 == 0x20) {
    uVar5 = (ulonglong)(bVar4 & 0xf);
    pbVar1 = (byte *)(uVar5 + 0x40 + param_1);
    *pbVar1 = *pbVar1 | 7;
    if (param_2 < *(byte *)(uVar5 + 0xb3 + param_1)) {
      *(undefined1 *)(uVar5 + 0xb3 + param_1) = uVar3;
      return;
    }
  }
  else if (uVar2 == 0x30) {
    uVar5 = (ulonglong)(bVar4 & 0xf);
    pbVar1 = (byte *)(uVar5 + 0x40 + param_1);
    *pbVar1 = *pbVar1 | 7;
    if (param_2 < *(byte *)(uVar5 + 0xb0 + param_1)) {
      *(undefined1 *)(uVar5 + 0xb0 + param_1) = uVar3;
      return;
    }
  }
  else if (uVar2 == 0x40) {
    *(byte *)(param_1 + 0x43) = *(byte *)(param_1 + 0x43) | ((param_3 >> 0xc & 1) != 0) + 7U;
    return;
  }
  return;
}

