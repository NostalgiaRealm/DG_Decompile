/*
 * FUN_180067004 at 180067004
 * byte __fastcall FUN_180067004(undefined8 param_1, longlong param_2, ushort param_3)
 * Address ranges: 180067004-180067056
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_180067004(undefined8 param_1,longlong param_2,ushort param_3)

{
  byte bVar1;
  
  if ((param_3 & 0xf0) == 0x30) {
    bVar1 = *(byte *)(param_2 + 0x20e);
  }
  else {
    if ((param_3 & 0xf0) != 0x40) {
      return (-((param_3 & 0x100) != 0) & 0x1bU) - 0x1c;
    }
    bVar1 = *(byte *)(param_2 + 0x20f);
  }
  if ((param_3 & 0x100) != 0) {
    bVar1 = bVar1 >> 6;
    return ((bVar1 << 2 | bVar1) << 2 | bVar1) << 2 | bVar1;
  }
  return bVar1;
}

