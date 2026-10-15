/*
 * FUN_10055559 at 10055559
 * undefined __cdecl FUN_10055559(LPCSTR param_1)
 * Address ranges: 10055559-1005559d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_10055559(LPCSTR param_1)

{
  int local_2004 [2047];
  undefined4 uStack_8;
  
  uStack_8 = 0x10055566;
  FUN_100561f1(local_2004,0,0x2000);
  FUN_1005621f((LPSTR)local_2004,param_1,&stack0x00000008);
  OutputDebugStringA((LPCSTR)local_2004);
  return;
}

