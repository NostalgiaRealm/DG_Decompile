/*
 * FUN_10082bd8 at 10082bd8
 * undefined FUN_10082bd8(void)
 * Address ranges: 10082bd8-10082c3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10082bd8(undefined8 param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  
  if ((param_3 & 0xf0) == 0x30) {
    pbVar1 = (byte *)(param_2 + 0x202);
  }
  else {
    if ((param_3 & 0xf0) != 0x40) {
      if ((param_3 & 0x100) != 0) {
        return 0xff;
      }
      return 0xe4;
    }
    pbVar1 = (byte *)(param_2 + 0x203);
  }
  bVar2 = *pbVar1;
  if ((param_3 & 0x100) != 0) {
    bVar2 = bVar2 >> 6;
    bVar2 = bVar2 | (bVar2 | (bVar2 | bVar2 << 2) << 2) << 2;
  }
  return bVar2;
}

