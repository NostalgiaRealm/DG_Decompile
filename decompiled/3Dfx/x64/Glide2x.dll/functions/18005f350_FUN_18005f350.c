/*
 * FUN_18005f350 at 18005f350
 * int __fastcall FUN_18005f350(byte * param_1, byte * param_2, longlong param_3)
 * Address ranges: 18005f350-18005f372
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18005f350(byte *param_1,byte *param_2,longlong param_3)

{
  if (param_3 == 0) {
    return 0;
  }
  for (; (param_3 = param_3 + -1, param_3 != 0 && (*param_1 == *param_2)); param_1 = param_1 + 1) {
    param_2 = param_2 + 1;
  }
  return (uint)*param_1 - (uint)*param_2;
}

