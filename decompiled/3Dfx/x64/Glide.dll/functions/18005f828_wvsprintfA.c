/*
 * USER32.DLL::wvsprintfA at 18005f828
 * int __stdcall wvsprintfA(LPSTR param_1, LPCSTR param_2, va_list arglist)
 * Address ranges: 18005f828-18005f82e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::wvsprintfA
 */

int __stdcall wvsprintfA(LPSTR param_1,LPCSTR param_2,va_list arglist)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00018005f828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = wvsprintfA(param_1,param_2,arglist);
  return iVar1;
}

