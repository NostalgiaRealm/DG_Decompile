/*
 * FUN_18005d708 at 18005d708
 * undefined __fastcall FUN_18005d708(LPCSTR param_1, va_list param_2)
 * Address ranges: 18005d708-18005d75c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18005d708(LPCSTR param_1,va_list param_2)

{
  CHAR local_2008 [8184];
  undefined8 uStack_10;
  
  uStack_10 = 0x18005d718;
  FUN_18005f814(local_2008,0,0x2000);
  wvsprintfA(local_2008,param_1,param_2);
  OutputDebugStringA(local_2008);
  return;
}

