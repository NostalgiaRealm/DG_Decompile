/*
 * FUN_10055771 at 10055771
 * char * __cdecl FUN_10055771(char * param_1, char * param_2)
 * Address ranges: 10055771-100557bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __cdecl FUN_10055771(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (*param_2 != '\0') {
    for (; *param_1 != '\0'; param_1 = param_1 + 1) {
      cVar1 = *param_1;
      pcVar2 = param_2;
      pcVar3 = param_1;
      while (cVar1 != '\0') {
        if (*pcVar2 == '\0') {
          return param_1;
        }
        if (*pcVar3 != *pcVar2) break;
        pcVar3 = pcVar3 + 1;
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar3;
      }
      if (*pcVar2 == '\0') {
        return param_1;
      }
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}

