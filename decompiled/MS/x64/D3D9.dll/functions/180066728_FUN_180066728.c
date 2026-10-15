/*
 * FUN_180066728 at 180066728
 * undefined __fastcall FUN_180066728(undefined8 param_1, longlong param_2, uint param_3, ushort param_4)
 * Address ranges: 180066728-1800667c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180066728(undefined8 param_1,longlong param_2,uint param_3,ushort param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  
  bVar3 = (byte)param_4 & 0xf0;
  bVar4 = ((param_4 >> 8 & 1) != 0) + 7;
  if (bVar3 == 0x10) {
    *(byte *)(param_2 + 0x20a) = *(byte *)(param_2 + 0x20a) | bVar4;
    return;
  }
  if (bVar3 == 0x20) {
    *(byte *)(param_2 + 0x20b) = *(byte *)(param_2 + 0x20b) | bVar4;
    uVar2 = param_3 + 0x18;
  }
  else {
    if (bVar3 == 0x30) {
      *(byte *)(param_2 + 0x200) = *(byte *)(param_2 + 0x200) | bVar4;
      pbVar1 = (byte *)(param_2 + 0x210 + ((longlong)(int)param_3 >> 3));
      *pbVar1 = *pbVar1 | '\x01' << (param_3 & 7);
      return;
    }
    if (bVar3 == 0x40) {
      *(byte *)(param_2 + 0x201) = *(byte *)(param_2 + 0x201) | bVar4;
      uVar2 = param_3 + 8;
    }
    else {
      if ((bVar3 == 0x50) || (bVar3 == 0x60)) {
        *(undefined1 *)(param_2 + 0x20c) = 1;
        return;
      }
      if (bVar3 == 0x70) {
        pbVar1 = (byte *)((ulonglong)((byte)param_4 & 7) + 0x202 + param_2);
        *pbVar1 = *pbVar1 | bVar4;
        return;
      }
      if (bVar3 != 0x90) {
        return;
      }
      *(undefined1 *)(param_2 + 0x20d) = 1;
      uVar2 = param_3 + 0x10;
    }
  }
  pbVar1 = (byte *)(param_2 + 0x210 + ((longlong)(int)uVar2 >> 3));
  *pbVar1 = *pbVar1 | '\x01' << (uVar2 & 7);
  return;
}

