/*
 * FUN_100cfea1 at 100cfea1
 * int __cdecl FUN_100cfea1(byte * param_1, byte * param_2, int param_3)
 * Address ranges: 100cfea1-100cfecf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_100cfea1(byte *param_1,byte *param_2,int param_3)

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

