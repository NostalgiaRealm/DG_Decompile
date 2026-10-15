/*
 * FUN_10035a00 at 10035a00
 * DWORD __fastcall FUN_10035a00(HMODULE param_1, LPCWSTR param_2, LPCWSTR param_3)
 * Address ranges: 10035a00-10035a24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD __fastcall FUN_10035a00(HMODULE param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  HRSRC hResInfo;
  DWORD DVar1;
  
  hResInfo = FindResourceW(param_1,param_2,param_3);
  if (hResInfo != (HRSRC)0x0) {
    DVar1 = SizeofResource(param_1,hResInfo);
    return DVar1;
  }
  return 0;
}

