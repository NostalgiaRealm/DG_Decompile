/*
 * FUN_180061190 at 180061190
 * undefined __fastcall FUN_180061190(HMODULE param_1, LPCWSTR param_2, LPCWSTR param_3)
 * Address ranges: 180061190-1800611bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180061190(HMODULE param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  HRSRC hResInfo;
  
  hResInfo = FindResourceW(param_1,param_2,param_3);
  if (hResInfo != (HRSRC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800611af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SizeofResource(param_1,hResInfo);
    return;
  }
  return;
}

