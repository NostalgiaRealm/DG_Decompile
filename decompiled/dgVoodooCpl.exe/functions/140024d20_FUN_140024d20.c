/*
 * FUN_140024d20 at 140024d20
 * longlong __fastcall FUN_140024d20(char * param_1)
 * Address ranges: 140024d20-140024d33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_140024d20(char *param_1)

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

