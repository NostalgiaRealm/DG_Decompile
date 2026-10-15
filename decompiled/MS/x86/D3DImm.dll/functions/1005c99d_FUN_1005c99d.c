/*
 * FUN_1005c99d at 1005c99d
 * int __cdecl FUN_1005c99d(byte * param_1, byte * param_2, int param_3)
 * Address ranges: 1005c99d-1005c9cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_1005c99d(byte *param_1,byte *param_2,int param_3)

{
  if (param_3 != 0) {
    for (; (param_3 = param_3 + -1, param_3 != 0 && (*param_1 == *param_2)); param_1 = param_1 + 1)
    {
      param_2 = param_2 + 1;
    }
    return (uint)*param_1 - (uint)*param_2;
  }
  return 0;
}

