/*
 * FUN_180004aac at 180004aac
 * ulonglong __fastcall FUN_180004aac(HWND param_1, uint param_2, WPARAM param_3, HWND param_4)
 * Address ranges: 180004aac-180004af8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180004aac(HWND param_1,uint param_2,WPARAM param_3,HWND param_4)

{
  WNDPROC pWVar1;
  ulonglong uVar2;
  
  pWVar1 = FUN_1800041ec();
  uVar2 = FUN_1800045c4((longlong)pWVar1,param_1,(ulonglong)param_2,param_3,param_4);
  FUN_1800043e8((undefined8 *)pWVar1);
  return uVar2;
}

