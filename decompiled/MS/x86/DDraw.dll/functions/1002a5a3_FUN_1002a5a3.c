/*
 * FUN_1002a5a3 at 1002a5a3
 * bool __fastcall FUN_1002a5a3(int param_1)
 * Address ranges: 1002a5a3-1002a5ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1002a5a3(int param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 8) == '\0';
  if (!bVar1) {
    FUN_10033038(param_1);
    bVar1 = *(char *)(param_1 + 8) == '\0';
  }
  return bVar1;
}

