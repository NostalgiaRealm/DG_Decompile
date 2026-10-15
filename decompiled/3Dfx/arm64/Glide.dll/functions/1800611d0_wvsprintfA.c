/*
 * USER32.DLL::wvsprintfA at 1800611d0
 * int __stdcall wvsprintfA(LPSTR param_1, LPCSTR param_2, va_list arglist)
 * Address ranges: 1800611d0-1800611db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::wvsprintfA
 */

int __stdcall wvsprintfA(LPSTR param_1,LPCSTR param_2,va_list arglist)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001800611d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = wvsprintfA(param_1,param_2,arglist);
  return iVar1;
}

