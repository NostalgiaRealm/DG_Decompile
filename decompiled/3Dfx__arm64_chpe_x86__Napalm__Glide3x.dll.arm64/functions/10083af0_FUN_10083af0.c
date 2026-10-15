/*
 * FUN_10083af0 at 10083af0
 * undefined FUN_10083af0(void)
 * Address ranges: 10083af0-10083b3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10083af0(byte *param_1,byte *param_2,int param_3)

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

