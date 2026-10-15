/*
 * FUN_10021617 at 10021617
 * ushort __fastcall FUN_10021617(ushort param_1, ushort param_2)
 * Address ranges: 10021617-1002165b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort __fastcall FUN_10021617(ushort param_1,ushort param_2)

{
  ushort uVar1;
  
  if ((param_1 & 0xf00) == 0) {
    uVar1 = *(ushort *)(&DAT_10055f5c + (uint)(param_2 >> 8) * 2);
  }
  else {
    uVar1 = param_1 & 0xf00;
    if ((param_1 & 0xf00) == 0x100) {
      uVar1 = *(ushort *)(&DAT_10055f64 + (uint)(param_2 >> 8) * 2);
    }
  }
  return uVar1 | param_1 & 0xf0ff;
}

