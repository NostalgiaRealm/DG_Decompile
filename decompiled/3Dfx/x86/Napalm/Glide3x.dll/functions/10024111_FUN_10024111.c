/*
 * FUN_10024111 at 10024111
 * ushort __fastcall FUN_10024111(ushort param_1, ushort param_2)
 * Address ranges: 10024111-10024155
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort __fastcall FUN_10024111(ushort param_1,ushort param_2)

{
  ushort uVar1;
  
  if ((param_1 & 0xf00) == 0) {
    uVar1 = *(ushort *)(&DAT_100593cc + (uint)(param_2 >> 8) * 2);
  }
  else {
    uVar1 = param_1 & 0xf00;
    if ((param_1 & 0xf00) == 0x100) {
      uVar1 = *(ushort *)(&DAT_100593d4 + (uint)(param_2 >> 8) * 2);
    }
  }
  return uVar1 | param_1 & 0xf0ff;
}

