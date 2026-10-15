/*
 * FUN_10132730 at 10132730
 * undefined FUN_10132730(void)
 * Address ranges: 10132730-10132797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_10132730(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (*param_2 != '\0') {
    for (; cVar1 = *param_1, pcVar2 = param_2, pcVar3 = param_1, cVar1 != '\0';
        param_1 = param_1 + 1) {
      while (cVar1 != '\0') {
        if (*pcVar2 == '\0') {
          return param_1;
        }
        if (*pcVar3 != *pcVar2) break;
        cVar1 = pcVar3[1];
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      }
      if (*pcVar2 == '\0') {
        return param_1;
      }
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}

