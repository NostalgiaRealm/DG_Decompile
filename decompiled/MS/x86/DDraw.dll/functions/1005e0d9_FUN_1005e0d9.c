/*
 * FUN_1005e0d9 at 1005e0d9
 * uint __stdcall FUN_1005e0d9(HWND param_1, UINT param_2, HANDLE param_3, HWND param_4)
 * Address ranges: 1005e0d9-1005e108
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1005e0d9(HWND param_1,UINT param_2,HANDLE param_3,HWND param_4)

{
  WNDPROC pWVar1;
  uint uVar2;
  
  pWVar1 = FUN_1005d3eb();
  uVar2 = FUN_1005dda1(pWVar1,param_1,param_2,param_3,param_4);
  FUN_1005d470((undefined4 *)pWVar1);
  return uVar2;
}

