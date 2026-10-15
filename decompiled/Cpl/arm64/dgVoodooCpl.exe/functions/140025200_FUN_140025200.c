/*
 * FUN_140025200 at 140025200
 * int __cdecl FUN_140025200(byte * param_1, byte * param_2, longlong param_3)
 * Address ranges: 140025200-140025243
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_140025200(byte *param_1,byte *param_2,longlong param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    for (; (param_3 = param_3 + -1, param_3 != 0 && (*param_1 == *param_2)); param_1 = param_1 + 1)
    {
      param_2 = param_2 + 1;
    }
    iVar1 = (uint)*param_1 - (uint)*param_2;
  }
  return iVar1;
}

