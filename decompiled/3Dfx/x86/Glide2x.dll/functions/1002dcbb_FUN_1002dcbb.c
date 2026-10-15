/*
 * FUN_1002dcbb at 1002dcbb
 * ushort __fastcall FUN_1002dcbb(ushort param_1, ushort param_2)
 * Address ranges: 1002dcbb-1002dcff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort __fastcall FUN_1002dcbb(ushort param_1,ushort param_2)

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

