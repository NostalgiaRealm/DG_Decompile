/*
 * FUN_1004fa8e at 1004fa8e
 * char * __cdecl FUN_1004fa8e(char * param_1)
 * Address ranges: 1004fa8e-1004faa0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __cdecl FUN_1004fa8e(char *param_1)

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

