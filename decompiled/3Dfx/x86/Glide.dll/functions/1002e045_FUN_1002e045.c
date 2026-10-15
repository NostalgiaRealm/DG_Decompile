/*
 * FUN_1002e045 at 1002e045
 * ushort __fastcall FUN_1002e045(ushort param_1, ushort param_2)
 * Address ranges: 1002e045-1002e089
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort __fastcall FUN_1002e045(ushort param_1,ushort param_2)

{
  ushort uVar1;
  
  if ((param_1 & 0xf00) == 0) {
    uVar1 = *(ushort *)(&DAT_10053ecc + (uint)(param_2 >> 8) * 2);
  }
  else {
    uVar1 = param_1 & 0xf00;
    if ((param_1 & 0xf00) == 0x100) {
      uVar1 = *(ushort *)(&DAT_10053ed4 + (uint)(param_2 >> 8) * 2);
    }
  }
  return uVar1 | param_1 & 0xf0ff;
}

