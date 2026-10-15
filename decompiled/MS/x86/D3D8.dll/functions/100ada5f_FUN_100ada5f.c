/*
 * FUN_100ada5f at 100ada5f
 * int __cdecl FUN_100ada5f(byte * param_1, byte * param_2, int param_3)
 * Address ranges: 100ada5f-100ada8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_100ada5f(byte *param_1,byte *param_2,int param_3)

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

