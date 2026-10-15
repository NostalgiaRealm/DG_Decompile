/*
 * FUN_140006d38 at 140006d38
 * bool __cdecl FUN_140006d38(undefined8 param_1, int param_2, LPWSTR param_3, int param_4)
 * Address ranges: 140006d38-140006d63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_140006d38(undefined8 param_1,int param_2,LPWSTR param_3,int param_4)

{
  int iVar1;
  
  iVar1 = LoadStringW((HINSTANCE)0x0,param_2 + 0x1000,param_3,param_4);
  return iVar1 != 0;
}

