/*
 * FUN_18016ffa0 at 18016ffa0
 * undefined FUN_18016ffa0(void)
 * Address ranges: 18016ffa0-18016ffeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_18016ffa0(undefined8 param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  
  if ((param_3 & 0xf0) == 0x30) {
    bVar1 = *(byte *)(param_2 + 0x20e);
  }
  else {
    if ((param_3 & 0xf0) != 0x40) {
      if ((param_3 & 0x100) != 0) {
        return 0xff;
      }
      return 0xe4;
    }
    bVar1 = *(byte *)(param_2 + 0x20f);
  }
  if ((param_3 >> 8 & 1) != 0) {
    bVar1 = bVar1 >> 6;
    bVar1 = bVar1 | (bVar1 | (bVar1 | bVar1 << 2) << 2) << 2;
  }
  return bVar1;
}

