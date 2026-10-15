/*
 * FUN_180060b60 at 180060b60
 * longlong __fastcall FUN_180060b60(char * param_1)
 * Address ranges: 180060b60-180060b73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180060b60(char *param_1)

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

