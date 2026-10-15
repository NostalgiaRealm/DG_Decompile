/*
 * FUN_100033a0 at 100033a0
 * uint __stdcall FUN_100033a0(HWND param_1, UINT param_2, HANDLE param_3, HWND param_4)
 * Address ranges: 100033a0-100033cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100033a0(HWND param_1,UINT param_2,HANDLE param_3,HWND param_4)

{
  WNDPROC pWVar1;
  uint uVar2;
  
  pWVar1 = FUN_10002db7();
  uVar2 = FUN_10003068(pWVar1,param_1,param_2,param_3,param_4);
  FUN_10002e3c((undefined4 *)pWVar1);
  return uVar2;
}

