/*
 * FUN_1400250f8 at 1400250f8
 * int __fastcall FUN_1400250f8(byte * param_1, byte * param_2, longlong param_3)
 * Address ranges: 1400250f8-14002511a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1400250f8(byte *param_1,byte *param_2,longlong param_3)

{
  if (param_3 == 0) {
    return 0;
  }
  for (; (param_3 = param_3 + -1, param_3 != 0 && (*param_1 == *param_2)); param_1 = param_1 + 1) {
    param_2 = param_2 + 1;
  }
  return (uint)*param_1 - (uint)*param_2;
}

