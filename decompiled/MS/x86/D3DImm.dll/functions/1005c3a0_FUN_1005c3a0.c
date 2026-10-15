/*
 * FUN_1005c3a0 at 1005c3a0
 * DWORD __fastcall FUN_1005c3a0(HMODULE param_1, LPCWSTR param_2)
 * Address ranges: 1005c3a0-1005c3c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD __fastcall FUN_1005c3a0(HMODULE param_1,LPCWSTR param_2)

{
  HRSRC hResInfo;
  DWORD DVar1;
  
  hResInfo = FindResourceW(param_1,param_2,L"RT_CUSTOM");
  if (hResInfo != (HRSRC)0x0) {
    DVar1 = SizeofResource(param_1,hResInfo);
    return DVar1;
  }
  return 0;
}

