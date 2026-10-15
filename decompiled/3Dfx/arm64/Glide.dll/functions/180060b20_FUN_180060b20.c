/*
 * FUN_180060b20 at 180060b20
 * longlong __cdecl FUN_180060b20(char * param_1)
 * Address ranges: 180060b20-180060b3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180060b20(char *param_1)

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

