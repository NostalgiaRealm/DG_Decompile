/*
 * FUN_10056f83 at 10056f83
 * undefined __fastcall FUN_10056f83(int param_1, uint param_2, byte param_3)
 * Address ranges: 10056f83-10056fd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10056f83(int param_1,uint param_2,byte param_3)

{
  byte *pbVar1;
  byte bVar2;
  
  if (param_2 != 0) {
    bVar2 = (byte)(param_2 >> 0x12) & 3;
    pbVar1 = (byte *)((param_2 & 0xff) + *(int *)(param_1 + 0x30));
    *pbVar1 = *pbVar1 & ~(('\x01' << ((byte)(param_2 >> 0x14) & 7)) + -1 << bVar2);
    pbVar1 = (byte *)((param_2 & 0xff) + *(int *)(param_1 + 0x30));
    *pbVar1 = *pbVar1 | ('\x01' << (param_3 & 0x1f)) + -1 << bVar2;
  }
  return;
}

