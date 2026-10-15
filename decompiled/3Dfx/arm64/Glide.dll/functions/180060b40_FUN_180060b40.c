/*
 * FUN_180060b40 at 180060b40
 * char * __cdecl FUN_180060b40(char * param_1, char * param_2)
 * Address ranges: 180060b40-180060b97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_180060b40(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  if (*param_2 != '\0') {
    cVar2 = *param_1;
    while (cVar2 != '\0') {
      cVar2 = *param_1;
      pcVar1 = param_2;
      pcVar3 = param_1;
      while (cVar2 != '\0') {
        if (*pcVar1 == '\0') {
          return param_1;
        }
        if (*pcVar3 != *pcVar1) break;
        pcVar3 = pcVar3 + 1;
        pcVar1 = pcVar1 + 1;
        cVar2 = *pcVar3;
      }
      if (*pcVar1 == '\0') {
        return param_1;
      }
      param_1 = param_1 + 1;
      cVar2 = *param_1;
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}

