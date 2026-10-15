/*
 * FUN_10082d80 at 10082d80
 * undefined FUN_10082d80(void)
 * Address ranges: 10082d80-10082da3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_10082d80(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return param_1;
}

