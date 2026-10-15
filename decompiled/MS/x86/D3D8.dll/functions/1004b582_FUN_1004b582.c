/*
 * FUN_1004b582 at 1004b582
 * byte __stdcall FUN_1004b582(int param_1, uint param_2)
 * Address ranges: 1004b582-1004b5e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1004b582(int param_1,uint param_2)

{
  byte bVar1;
  
  if ((param_2 & 0xf0) == 0x30) {
    bVar1 = *(byte *)(param_1 + 0x1f2);
  }
  else {
    if ((param_2 & 0xf0) != 0x40) {
      if ((param_2 & 0x100) == 0) {
        return 0xe4;
      }
      return 0xff;
    }
    bVar1 = *(byte *)(param_1 + 499);
  }
  if ((param_2 & 0x100) != 0) {
    bVar1 = bVar1 >> 6;
    bVar1 = ((bVar1 << 2 | bVar1) << 2 | bVar1) << 2 | bVar1;
  }
  return bVar1;
}

