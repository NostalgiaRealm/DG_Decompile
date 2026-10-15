/*
 * FUN_140023e70 at 140023e70
 * bool __fastcall FUN_140023e70(HINSTANCE param_1, UINT param_2, LPWSTR param_3, int param_4)
 * Address ranges: 140023e70-140023e83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_140023e70(HINSTANCE param_1,UINT param_2,LPWSTR param_3,int param_4)

{
  int iVar1;
  
  iVar1 = LoadStringW(param_1,param_2,param_3,param_4);
  return iVar1 != 0;
}

