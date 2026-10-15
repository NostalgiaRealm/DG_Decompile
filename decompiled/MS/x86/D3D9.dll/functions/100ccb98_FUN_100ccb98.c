/*
 * FUN_100ccb98 at 100ccb98
 * uint __stdcall FUN_100ccb98(HWND param_1, UINT param_2, HANDLE param_3, HWND param_4)
 * Address ranges: 100ccb98-100ccbc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100ccb98(HWND param_1,UINT param_2,HANDLE param_3,HWND param_4)

{
  WNDPROC pWVar1;
  uint uVar2;
  
  pWVar1 = FUN_100cc325();
  uVar2 = FUN_100cc860(pWVar1,param_1,param_2,param_3,param_4);
  FUN_100cc3aa((undefined4 *)pWVar1);
  return uVar2;
}

