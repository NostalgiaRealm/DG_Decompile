/*
 * FUN_100aa2c9 at 100aa2c9
 * uint __stdcall FUN_100aa2c9(HWND param_1, UINT param_2, HANDLE param_3, HWND param_4)
 * Address ranges: 100aa2c9-100aa2f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100aa2c9(HWND param_1,UINT param_2,HANDLE param_3,HWND param_4)

{
  WNDPROC pWVar1;
  uint uVar2;
  
  pWVar1 = FUN_100a9a56();
  uVar2 = FUN_100a9f91(pWVar1,param_1,param_2,param_3,param_4);
  FUN_100a9adb((undefined4 *)pWVar1);
  return uVar2;
}

