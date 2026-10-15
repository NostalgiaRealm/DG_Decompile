/*
 * FUN_100304cc at 100304cc
 * bool __fastcall FUN_100304cc(uint param_1, byte param_2)
 * Address ranges: 100304cc-100304ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_100304cc(uint param_1,byte param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (((byte)param_1 & 0xf0) == 0xf0) {
    bVar1 = (param_2 & ((param_1 & 0x1000) != 0) + 7U) != 0;
  }
  return bVar1;
}

