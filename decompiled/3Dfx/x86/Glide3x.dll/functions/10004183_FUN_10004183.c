/*
 * FUN_10004183 at 10004183
 * bool __fastcall FUN_10004183(byte param_1, int param_2)
 * Address ranges: 10004183-1000419b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10004183(byte param_1,int param_2)

{
  if (param_2 != 3) {
    return (bool)(param_1 & 1) == (param_2 != 1);
  }
  return true;
}

