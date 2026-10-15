/*
 * FUN_180222cf8 at 180222cf8
 * undefined FUN_180222cf8(void)
 * Address ranges: 180222cf8-180222d0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180222cf8(char *param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    *param_1 = cVar1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return;
}

