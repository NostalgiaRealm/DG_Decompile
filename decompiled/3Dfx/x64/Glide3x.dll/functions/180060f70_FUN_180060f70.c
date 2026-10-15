/*
 * FUN_180060f70 at 180060f70
 * int __fastcall FUN_180060f70(byte * param_1, byte * param_2, longlong param_3)
 * Address ranges: 180060f70-180060f92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180060f70(byte *param_1,byte *param_2,longlong param_3)

{
  if (param_3 == 0) {
    return 0;
  }
  for (; (param_3 = param_3 + -1, param_3 != 0 && (*param_1 == *param_2)); param_1 = param_1 + 1) {
    param_2 = param_2 + 1;
  }
  return (uint)*param_1 - (uint)*param_2;
}

