/*
 * FUN_1005234e at 1005234e
 * char * __cdecl FUN_1005234e(char * param_1)
 * Address ranges: 1005234e-10052360
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __cdecl FUN_1005234e(char *param_1)

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

