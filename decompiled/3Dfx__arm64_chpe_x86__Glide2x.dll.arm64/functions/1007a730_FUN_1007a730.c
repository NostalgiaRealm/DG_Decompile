/*
 * FUN_1007a730 at 1007a730
 * undefined FUN_1007a730(void)
 * Address ranges: 1007a730-1007a77b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007a730(byte *param_1,byte *param_2,int param_3)

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

