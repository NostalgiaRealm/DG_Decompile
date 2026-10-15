/*
 * FUN_100ff010 at 100ff010
 * undefined FUN_100ff010(void)
 * Address ranges: 100ff010-100ff02b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_100ff010(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return pcVar2 + (-1 - (int)param_1);
}

