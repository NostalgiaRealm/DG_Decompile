/*
 * FUN_10132710 at 10132710
 * undefined FUN_10132710(void)
 * Address ranges: 10132710-1013272b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_10132710(char *param_1)

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

