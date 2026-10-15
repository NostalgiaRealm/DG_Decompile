/*
 * FUN_18000488c at 18000488c
 * ulonglong __fastcall FUN_18000488c(HWND param_1, uint param_2, WPARAM param_3, HWND param_4)
 * Address ranges: 18000488c-1800048d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000488c(HWND param_1,uint param_2,WPARAM param_3,HWND param_4)

{
  WNDPROC pWVar1;
  ulonglong uVar2;
  
  pWVar1 = FUN_180003fcc();
  uVar2 = FUN_1800043a4((longlong)pWVar1,param_1,(ulonglong)param_2,param_3,param_4);
  FUN_1800041c8((undefined8 *)pWVar1);
  return uVar2;
}

