/*
 * FUN_1004e87c at 1004e87c
 * undefined __cdecl FUN_1004e87c(LPCSTR param_1)
 * Address ranges: 1004e87c-1004e8c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_1004e87c(LPCSTR param_1)

{
  int local_2004 [2047];
  undefined4 uStack_8;
  
  uStack_8 = 0x1004e889;
  FUN_1005c9cc(local_2004,0,0x2000);
  FUN_1005c741((LPSTR)local_2004,param_1,&stack0x00000008);
  OutputDebugStringA((LPCSTR)local_2004);
  return;
}

