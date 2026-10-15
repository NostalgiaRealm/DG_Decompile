/*
 * FUN_140004950 at 140004950
 * bool __cdecl FUN_140004950(undefined8 param_1, int param_2, LPWSTR param_3, int param_4)
 * Address ranges: 140004950-14000497b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_140004950(undefined8 param_1,int param_2,LPWSTR param_3,int param_4)

{
  int iVar1;
  
  iVar1 = LoadStringW((HINSTANCE)0x0,param_2 + 0x3000,param_3,param_4);
  return iVar1 != 0;
}

