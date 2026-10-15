/*
 * FUN_14000e6e8 at 14000e6e8
 * bool __cdecl FUN_14000e6e8(undefined8 param_1, UINT param_2, LPWSTR param_3, int param_4)
 * Address ranges: 14000e6e8-14000e70f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_14000e6e8(undefined8 param_1,UINT param_2,LPWSTR param_3,int param_4)

{
  int iVar1;
  
  iVar1 = LoadStringW((HINSTANCE)0x0,param_2,param_3,param_4);
  return iVar1 != 0;
}

