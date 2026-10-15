/*
 * FUN_180029fd0 at 180029fd0
 * ushort __fastcall FUN_180029fd0(ushort param_1, ushort param_2)
 * Address ranges: 180029fd0-18002a027
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort FUN_180029fd0(ushort param_1,ushort param_2)

{
  ushort uVar1;
  
  if ((param_1 & 0xf00) == 0) {
    uVar1 = *(ushort *)(&DAT_1800649f8 + (ulonglong)(param_2 >> 8) * 2);
  }
  else if ((param_1 & 0xf00) == 0x100) {
    uVar1 = *(ushort *)(&DAT_180064a00 + (ulonglong)(param_2 >> 8) * 2);
  }
  else {
    uVar1 = param_1 & 0xf00;
  }
  return param_1 & 0xf0ff | uVar1;
}

