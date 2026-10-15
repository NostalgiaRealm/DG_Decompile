/*
 * FUN_18005fcd0 at 18005fcd0
 * longlong __cdecl FUN_18005fcd0(char * param_1)
 * Address ranges: 18005fcd0-18005fceb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18005fcd0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  do {
    pcVar2 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar2;
  } while (cVar1 != '\0');
  return (longlong)(((int)pcVar2 - (int)param_1) + -1);
}

