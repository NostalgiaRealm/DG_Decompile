/*
 * FUN_1400027e8 at 1400027e8
 * bool __cdecl FUN_1400027e8(undefined8 param_1, int param_2, LPWSTR param_3, int param_4)
 * Address ranges: 1400027e8-140002817
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1400027e8(undefined8 param_1,int param_2,LPWSTR param_3,int param_4)

{
  int iVar1;
  
  iVar1 = LoadStringW((HINSTANCE)0x0,param_2 + 0x4200,param_3,param_4);
  return iVar1 != 0;
}

