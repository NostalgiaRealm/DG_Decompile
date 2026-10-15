/*
 * FUN_10054490 at 10054490
 * undefined FUN_10054490(void)
 * Address ranges: 10054490-1005450b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10054490(char *param_1)

{
  int iVar1;
  
  if (*param_1 == '\0') {
    if (param_1[6] == '\0') {
      if (param_1[2] != '\0') {
        return 0;
      }
      if (param_1[3] != '\0') {
        return 0;
      }
      if (param_1[4] != '\0') {
        return 0;
      }
      iVar1 = 5;
    }
    else {
      if (param_1[2] != '\0') {
        return 0;
      }
      iVar1 = 3;
    }
    if ((param_1[iVar1] == '\0') && (param_1[1] == '\0')) {
      return 1;
    }
  }
  return 0;
}

