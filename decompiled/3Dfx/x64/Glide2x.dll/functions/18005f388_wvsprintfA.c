/*
 * USER32.DLL::wvsprintfA at 18005f388
 * int __stdcall wvsprintfA(LPSTR param_1, LPCSTR param_2, va_list arglist)
 * Address ranges: 18005f388-18005f38e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::wvsprintfA
 */

int __stdcall wvsprintfA(LPSTR param_1,LPCSTR param_2,va_list arglist)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00018005f388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = wvsprintfA(param_1,param_2,arglist);
  return iVar1;
}

