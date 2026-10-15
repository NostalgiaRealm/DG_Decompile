/*
 * FUN_10082bc4 at 10082bc4
 * undefined __cdecl FUN_10082bc4(LPCSTR param_1)
 * Address ranges: 10082bc4-10082c08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_10082bc4(LPCSTR param_1)

{
  int local_2004 [2047];
  undefined4 uStack_8;
  
  uStack_8 = 0x10082bd1;
  FUN_100ada8e(local_2004,0,0x2000);
  FUN_100ad461((LPSTR)local_2004,param_1,&stack0x00000008);
  OutputDebugStringA((LPCSTR)local_2004);
  return;
}

