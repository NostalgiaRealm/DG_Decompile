/*
 * FUN_1007a1a0 at 1007a1a0
 * undefined FUN_1007a1a0(void)
 * Address ranges: 1007a1a0-1007a1bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_1007a1a0(char *param_1)

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

