/*
 * FUN_100ad603 at 100ad603
 * char * __cdecl FUN_100ad603(char * param_1)
 * Address ranges: 100ad603-100ad615
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __cdecl FUN_100ad603(char *param_1)

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

