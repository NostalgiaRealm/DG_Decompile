/*
 * FUN_100033d6 at 100033d6
 * uint __stdcall FUN_100033d6(HWND param_1, UINT param_2, HANDLE param_3, HWND param_4)
 * Address ranges: 100033d6-10003405
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100033d6(HWND param_1,UINT param_2,HANDLE param_3,HWND param_4)

{
  WNDPROC pWVar1;
  uint uVar2;
  
  pWVar1 = FUN_10002ded();
  uVar2 = FUN_1000309e(pWVar1,param_1,param_2,param_3,param_4);
  FUN_10002e72((undefined4 *)pWVar1);
  return uVar2;
}

