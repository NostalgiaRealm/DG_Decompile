/*
 * FUN_180037750 at 180037750
 * ushort __fastcall FUN_180037750(ushort param_1, ushort param_2)
 * Address ranges: 180037750-1800377a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort FUN_180037750(ushort param_1,ushort param_2)

{
  ushort uVar1;
  
  if ((param_1 & 0xf00) == 0) {
    uVar1 = *(ushort *)(&DAT_180063c10 + (ulonglong)(param_2 >> 8) * 2);
  }
  else if ((param_1 & 0xf00) == 0x100) {
    uVar1 = *(ushort *)(&DAT_180063c18 + (ulonglong)(param_2 >> 8) * 2);
  }
  else {
    uVar1 = param_1 & 0xf00;
  }
  return param_1 & 0xf0ff | uVar1;
}

