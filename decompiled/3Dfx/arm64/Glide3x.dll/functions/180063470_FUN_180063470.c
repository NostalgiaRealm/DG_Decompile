/*
 * FUN_180063470 at 180063470
 * DWORD __cdecl FUN_180063470(HMODULE param_1, LPCWSTR param_2, LPCWSTR param_3)
 * Address ranges: 180063470-1800634bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD FUN_180063470(HMODULE param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  DWORD DVar1;
  HRSRC hResInfo;
  
  hResInfo = FindResourceW(param_1,param_2,param_3);
  if (hResInfo != (HRSRC)0x0) {
    DVar1 = SizeofResource(param_1,hResInfo);
    return DVar1;
  }
  return 0;
}

