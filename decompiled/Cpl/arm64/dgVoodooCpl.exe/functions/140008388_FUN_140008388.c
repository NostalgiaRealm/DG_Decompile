/*
 * FUN_140008388 at 140008388
 * bool __cdecl FUN_140008388(undefined8 param_1, int param_2, LPWSTR param_3, int param_4)
 * Address ranges: 140008388-1400083b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_140008388(undefined8 param_1,int param_2,LPWSTR param_3,int param_4)

{
  int iVar1;
  
  iVar1 = LoadStringW((HINSTANCE)0x0,param_2 + 0x2000,param_3,param_4);
  return iVar1 != 0;
}

