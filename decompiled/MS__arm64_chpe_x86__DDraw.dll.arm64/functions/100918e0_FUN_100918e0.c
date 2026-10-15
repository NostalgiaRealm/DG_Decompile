/*
 * FUN_100918e0 at 100918e0
 * undefined FUN_100918e0(void)
 * Address ranges: 100918e0-100918fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_100918e0(char *param_1)

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

