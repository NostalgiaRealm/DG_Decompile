/*
 * FUN_1007dec0 at 1007dec0
 * undefined FUN_1007dec0(void)
 * Address ranges: 1007dec0-1007dedb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_1007dec0(char *param_1)

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

