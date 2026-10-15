/*
 * FUN_140023e90 at 140023e90
 * undefined __fastcall FUN_140023e90(HMODULE param_1, LPCWSTR param_2, LPCWSTR param_3)
 * Address ranges: 140023e90-140023ebb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140023e90(HMODULE param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  HRSRC hResInfo;
  
  hResInfo = FindResourceW(param_1,param_2,param_3);
  if (hResInfo != (HRSRC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140023eaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SizeofResource(param_1,hResInfo);
    return;
  }
  return;
}

