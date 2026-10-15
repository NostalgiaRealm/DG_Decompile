/*
 * FUN_10059c82 at 10059c82
 * undefined __stdcall FUN_10059c82(int param_1, uint param_2, uint param_3)
 * Address ranges: 10059c82-10059d3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10059c82(int param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = param_3 & 0xf0;
  bVar3 = ((param_3 & 0x100) != 0) + 7;
  if (uVar2 < 0x51) {
    if (uVar2 == 0x50) {
LAB_10059d2e:
      *(undefined1 *)(param_1 + 0x200) = 1;
      return;
    }
    if (uVar2 == 0x10) {
      *(byte *)(param_1 + 0x1fe) = *(byte *)(param_1 + 0x1fe) | bVar3;
      return;
    }
    if (uVar2 == 0x20) {
      *(byte *)(param_1 + 0x1ff) = *(byte *)(param_1 + 0x1ff) | bVar3;
      param_2 = param_2 + 0x18;
    }
    else if (uVar2 == 0x30) {
      *(byte *)(param_1 + 500) = *(byte *)(param_1 + 500) | bVar3;
    }
    else {
      if (uVar2 != 0x40) {
        return;
      }
      *(byte *)(param_1 + 0x1f5) = *(byte *)(param_1 + 0x1f5) | bVar3;
      param_2 = param_2 + 8;
    }
  }
  else {
    if (uVar2 == 0x60) goto LAB_10059d2e;
    if (uVar2 == 0x70) {
      pbVar1 = (byte *)((param_3 & 7) + 0x1f6 + param_1);
      *pbVar1 = *pbVar1 | bVar3;
      return;
    }
    if (uVar2 != 0x90) {
      return;
    }
    param_2 = param_2 + 0x10;
    *(undefined1 *)(param_1 + 0x201) = 1;
  }
  pbVar1 = (byte *)(param_1 + 0x204 + ((int)param_2 >> 3));
  *pbVar1 = *pbVar1 | '\x01' << (param_2 & 7);
  return;
}

