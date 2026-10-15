/*
 * FUN_10051fe0 at 10051fe0
 * DWORD __fastcall FUN_10051fe0(HMODULE param_1, LPCWSTR param_2, LPCWSTR param_3)
 * Address ranges: 10051fe0-10052004
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD __fastcall FUN_10051fe0(HMODULE param_1,LPCWSTR param_2,LPCWSTR param_3)

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

