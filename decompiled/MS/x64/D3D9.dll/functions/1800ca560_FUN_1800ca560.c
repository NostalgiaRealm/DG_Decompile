/*
 * FUN_1800ca560 at 1800ca560
 * undefined __fastcall FUN_1800ca560(LPCSTR param_1, va_list param_2)
 * Address ranges: 1800ca560-1800ca5b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1800ca560(LPCSTR param_1,va_list param_2)

{
  CHAR local_2008 [8184];
  undefined8 uStack_10;
  
  uStack_10 = 0x1800ca570;
  FUN_1800fbea0(local_2008,0,0x2000);
  wvsprintfA(local_2008,param_1,param_2);
  OutputDebugStringA(local_2008);
  return;
}

