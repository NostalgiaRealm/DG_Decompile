/*
 * FUN_180222d10 at 180222d10
 * undefined FUN_180222d10(void)
 * Address ranges: 180222d10-180222d2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180222d10(char *param_1)

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

