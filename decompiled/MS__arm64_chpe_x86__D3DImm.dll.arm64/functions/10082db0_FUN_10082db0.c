/*
 * FUN_10082db0 at 10082db0
 * undefined FUN_10082db0(void)
 * Address ranges: 10082db0-10082dcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_10082db0(char *param_1)

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

