/*
 * FUN_140024cb8 at 140024cb8
 * undefined __cdecl FUN_140024cb8(char * param_1, char * param_2)
 * Address ranges: 140024cb8-140024cdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140024cb8(char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  do {
    cVar1 = *param_2;
    *param_1 = cVar1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return;
}

