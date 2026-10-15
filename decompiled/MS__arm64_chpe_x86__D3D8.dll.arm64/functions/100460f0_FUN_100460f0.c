/*
 * FUN_100460f0 at 100460f0
 * undefined FUN_100460f0(void)
 * Address ranges: 100460f0-1004615f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100460f0(char *param_1)

{
  int iVar1;
  
  if (*param_1 == '\0') {
    if (param_1[5] == '\0') {
      if (param_1[1] != '\0') {
        return 0;
      }
      if (param_1[2] != '\0') {
        return 0;
      }
      if (param_1[3] != '\0') {
        return 0;
      }
      iVar1 = 4;
    }
    else {
      if (param_1[1] != '\0') {
        return 0;
      }
      iVar1 = 2;
    }
    if (param_1[iVar1] == '\0') {
      return 1;
    }
  }
  return 0;
}

