/*
 * FUN_180222c00 at 180222c00
 * undefined FUN_180222c00(void)
 * Address ranges: 180222c00-180222c43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180222c00(byte *param_1,byte *param_2,longlong param_3)

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

