/*
 * FUN_1004f4f4 at 1004f4f4
 * undefined __cdecl FUN_1004f4f4(LPCSTR param_1)
 * Address ranges: 1004f4f4-1004f538
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_1004f4f4(LPCSTR param_1)

{
  int local_2004 [2047];
  undefined4 uStack_8;
  
  uStack_8 = 0x1004f501;
  FUN_100501d1(local_2004,0,0x2000);
  FUN_100501ff((LPSTR)local_2004,param_1,&stack0x00000008);
  OutputDebugStringA((LPCSTR)local_2004);
  return;
}

