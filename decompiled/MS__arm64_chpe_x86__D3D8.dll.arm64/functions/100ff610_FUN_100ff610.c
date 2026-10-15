/*
 * FUN_100ff610 at 100ff610
 * undefined FUN_100ff610(void)
 * Address ranges: 100ff610-100ff65b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100ff610(byte *param_1,byte *param_2,int param_3)

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

