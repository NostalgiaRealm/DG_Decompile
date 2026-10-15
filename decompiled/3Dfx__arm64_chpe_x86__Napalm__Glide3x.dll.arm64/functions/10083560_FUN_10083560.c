/*
 * FUN_10083560 at 10083560
 * undefined FUN_10083560(void)
 * Address ranges: 10083560-1008357b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_10083560(char *param_1)

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

