/*
 * FUN_1004ad2f at 1004ad2f
 * undefined __stdcall FUN_1004ad2f(int param_1, uint param_2, uint param_3)
 * Address ranges: 1004ad2f-1004ade8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004ad2f(int param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = param_3 & 0xf0;
  bVar3 = ((param_3 & 0x100) != 0) + 7;
  if (uVar2 < 0x51) {
    if (uVar2 == 0x50) {
LAB_1004addb:
      *(undefined1 *)(param_1 + 0x1f0) = 1;
      return;
    }
    if (uVar2 == 0x10) {
      *(byte *)(param_1 + 0x1ee) = *(byte *)(param_1 + 0x1ee) | bVar3;
      return;
    }
    if (uVar2 == 0x20) {
      *(byte *)(param_1 + 0x1ef) = *(byte *)(param_1 + 0x1ef) | bVar3;
      param_2 = param_2 + 0x18;
    }
    else if (uVar2 == 0x30) {
      *(byte *)(param_1 + 0x1e4) = *(byte *)(param_1 + 0x1e4) | bVar3;
    }
    else {
      if (uVar2 != 0x40) {
        return;
      }
      *(byte *)(param_1 + 0x1e5) = *(byte *)(param_1 + 0x1e5) | bVar3;
      param_2 = param_2 + 8;
    }
  }
  else {
    if (uVar2 == 0x60) goto LAB_1004addb;
    if (uVar2 == 0x70) {
      pbVar1 = (byte *)((param_3 & 7) + 0x1e6 + param_1);
      *pbVar1 = *pbVar1 | bVar3;
      return;
    }
    if (uVar2 != 0x90) {
      return;
    }
    param_2 = param_2 + 0x10;
    *(undefined1 *)(param_1 + 0x1f1) = 1;
  }
  pbVar1 = (byte *)(param_1 + 500 + ((int)param_2 >> 3));
  *pbVar1 = *pbVar1 | '\x01' << (param_2 & 7);
  return;
}

