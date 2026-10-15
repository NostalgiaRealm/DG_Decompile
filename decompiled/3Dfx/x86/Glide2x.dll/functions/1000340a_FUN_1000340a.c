/*
 * FUN_1000340a at 1000340a
 * uint __stdcall FUN_1000340a(HWND param_1, UINT param_2, HANDLE param_3, HWND param_4)
 * Address ranges: 1000340a-10003439
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1000340a(HWND param_1,UINT param_2,HANDLE param_3,HWND param_4)

{
  WNDPROC pWVar1;
  uint uVar2;
  
  pWVar1 = FUN_10002e21();
  uVar2 = FUN_100030d2(pWVar1,param_1,param_2,param_3,param_4);
  FUN_10002ea6((undefined4 *)pWVar1);
  return uVar2;
}

