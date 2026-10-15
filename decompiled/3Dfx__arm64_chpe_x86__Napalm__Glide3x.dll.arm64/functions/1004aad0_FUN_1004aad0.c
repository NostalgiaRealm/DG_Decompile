/*
 * FUN_1004aad0 at 1004aad0
 * undefined FUN_1004aad0(void)
 * Address ranges: 1004aad0-1004ab17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004aad0(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  
  while( true ) {
    cVar1 = *param_1;
    if (cVar1 == *param_2 && cVar1 == '\0') {
      return 1;
    }
    if (cVar1 != *param_2) break;
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    if (param_3 == 0) {
      return 1;
    }
  }
  return 0;
}

