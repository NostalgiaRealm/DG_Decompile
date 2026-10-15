/*
 * FUN_1004f6fe at 1004f6fe
 * char * __cdecl FUN_1004f6fe(char * param_1)
 * Address ranges: 1004f6fe-1004f710
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __cdecl FUN_1004f6fe(char *param_1)

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

