/*
 * FUN_10030142 at 10030142
 * bool __fastcall FUN_10030142(uint param_1, byte param_2)
 * Address ranges: 10030142-10030160
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10030142(uint param_1,byte param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (((byte)param_1 & 0xf0) == 0xf0) {
    bVar1 = (param_2 & ((param_1 & 0x1000) != 0) + 7U) != 0;
  }
  return bVar1;
}

