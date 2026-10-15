/*
 * FUN_10052149 at 10052149
 * undefined __cdecl FUN_10052149(LPCSTR param_1)
 * Address ranges: 10052149-1005218d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_10052149(LPCSTR param_1)

{
  int local_2004 [2047];
  undefined4 uStack_8;
  
  uStack_8 = 0x10052156;
  FUN_10052de1(local_2004,0,0x2000);
  FUN_10052e0f((LPSTR)local_2004,param_1,&stack0x00000008);
  OutputDebugStringA((LPCSTR)local_2004);
  return;
}

