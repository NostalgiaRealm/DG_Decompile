/*
 * FUN_1800fc54c at 1800fc54c
 * char * __fastcall FUN_1800fc54c(char * param_1, char * param_2)
 * Address ranges: 1800fc54c-1800fc561
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_1800fc54c(char *param_1,char *param_2)

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

