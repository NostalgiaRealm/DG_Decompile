/*
 * FUN_180043270 at 180043270
 * DWORD __cdecl FUN_180043270(HMODULE param_1, LPCWSTR param_2, LPCWSTR param_3)
 * Address ranges: 180043270-1800432bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD FUN_180043270(HMODULE param_1,LPCWSTR param_2,LPCWSTR param_3)

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

