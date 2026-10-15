/*
 * FUN_1800090a0 at 1800090a0
 * undefined8 __cdecl FUN_1800090a0(char * param_1, char * param_2, int param_3)
 * Address ranges: 1800090a0-1800090d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800090a0(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  
  while( true ) {
    cVar1 = *param_1;
    if (cVar1 == *param_2 && cVar1 == '\0') {
      return 1;
    }
    if (cVar1 != *param_2) break;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (param_3 == 0) {
      return 1;
    }
  }
  return 0;
}

