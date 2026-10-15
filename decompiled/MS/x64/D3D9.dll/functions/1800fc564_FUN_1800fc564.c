/*
 * FUN_1800fc564 at 1800fc564
 * longlong __fastcall FUN_1800fc564(char * param_1)
 * Address ranges: 1800fc564-1800fc577
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800fc564(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return (longlong)(((int)param_1 - iVar2) + -1);
}

