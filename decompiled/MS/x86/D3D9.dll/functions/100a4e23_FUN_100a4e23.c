/*
 * FUN_100a4e23 at 100a4e23
 * undefined __cdecl FUN_100a4e23(LPCSTR param_1)
 * Address ranges: 100a4e23-100a4e67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_100a4e23(LPCSTR param_1)

{
  int local_2004 [2047];
  undefined4 uStack_8;
  
  uStack_8 = 0x100a4e30;
  FUN_100cfed0(local_2004,0,0x2000);
  FUN_100cfd41((LPSTR)local_2004,param_1,&stack0x00000008);
  OutputDebugStringA((LPCSTR)local_2004);
  return;
}

