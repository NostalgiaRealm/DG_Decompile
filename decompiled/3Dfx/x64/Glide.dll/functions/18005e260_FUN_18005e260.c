/*
 * FUN_18005e260 at 18005e260
 * undefined __fastcall FUN_18005e260(HMODULE param_1, LPCWSTR param_2, LPCWSTR param_3)
 * Address ranges: 18005e260-18005e28b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005e260(HMODULE param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  HRSRC hResInfo;
  
  hResInfo = FindResourceW(param_1,param_2,param_3);
  if (hResInfo != (HRSRC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018005e27f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SizeofResource(param_1,hResInfo);
    return;
  }
  return;
}

