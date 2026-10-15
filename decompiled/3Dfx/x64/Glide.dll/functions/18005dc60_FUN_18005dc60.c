/*
 * FUN_18005dc60 at 18005dc60
 * longlong __fastcall FUN_18005dc60(char * param_1)
 * Address ranges: 18005dc60-18005dc73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18005dc60(char *param_1)

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

