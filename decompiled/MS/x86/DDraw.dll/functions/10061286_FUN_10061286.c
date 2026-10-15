/*
 * FUN_10061286 at 10061286
 * char * __cdecl FUN_10061286(char * param_1)
 * Address ranges: 10061286-10061298
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __cdecl FUN_10061286(char *param_1)

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

