/*
 * FUN_18005d260 at 18005d260
 * undefined __fastcall FUN_18005d260(LPCSTR param_1, va_list param_2)
 * Address ranges: 18005d260-18005d2b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18005d260(LPCSTR param_1,va_list param_2)

{
  CHAR local_2008 [8184];
  undefined8 uStack_10;
  
  uStack_10 = 0x18005d270;
  FUN_18005f374(local_2008,0,0x2000);
  wvsprintfA(local_2008,param_1,param_2);
  OutputDebugStringA(local_2008);
  return;
}

