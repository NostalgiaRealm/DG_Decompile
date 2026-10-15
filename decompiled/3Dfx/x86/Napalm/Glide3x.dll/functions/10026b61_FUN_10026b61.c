/*
 * FUN_10026b61 at 10026b61
 * bool __fastcall FUN_10026b61(uint param_1, byte param_2)
 * Address ranges: 10026b61-10026b7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10026b61(uint param_1,byte param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (((byte)param_1 & 0xf0) == 0xf0) {
    bVar1 = (param_2 & ((param_1 & 0x1000) != 0) + 7U) != 0;
  }
  return bVar1;
}

