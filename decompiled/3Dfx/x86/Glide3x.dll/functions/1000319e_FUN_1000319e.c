/*
 * FUN_1000319e at 1000319e
 * uint __stdcall FUN_1000319e(HWND param_1, UINT param_2, HANDLE param_3, HWND param_4)
 * Address ranges: 1000319e-100031cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1000319e(HWND param_1,UINT param_2,HANDLE param_3,HWND param_4)

{
  WNDPROC pWVar1;
  uint uVar2;
  
  pWVar1 = FUN_10002bb5();
  uVar2 = FUN_10002e66(pWVar1,param_1,param_2,param_3,param_4);
  FUN_10002c3a((undefined4 *)pWVar1);
  return uVar2;
}

