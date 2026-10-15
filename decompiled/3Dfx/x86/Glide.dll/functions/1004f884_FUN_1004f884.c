/*
 * FUN_1004f884 at 1004f884
 * undefined __cdecl FUN_1004f884(LPCSTR param_1)
 * Address ranges: 1004f884-1004f8c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_1004f884(LPCSTR param_1)

{
  int local_2004 [2047];
  undefined4 uStack_8;
  
  uStack_8 = 0x1004f891;
  FUN_10050561(local_2004,0,0x2000);
  FUN_1005058f((LPSTR)local_2004,param_1,&stack0x00000008);
  OutputDebugStringA((LPCSTR)local_2004);
  return;
}

