/*
 * FUN_140024cc4 at 140024cc4
 * char * __fastcall FUN_140024cc4(char * param_1, char * param_2)
 * Address ranges: 140024cc4-140024ce7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_140024cc4(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_1;
  pcVar2 = param_1;
  while (cVar1 != '\0') {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return param_1;
}

