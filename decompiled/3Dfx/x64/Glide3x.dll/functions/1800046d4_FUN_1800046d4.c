/*
 * FUN_1800046d4 at 1800046d4
 * ulonglong __fastcall FUN_1800046d4(HWND param_1, uint param_2, WPARAM param_3, HWND param_4)
 * Address ranges: 1800046d4-180004720
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800046d4(HWND param_1,uint param_2,WPARAM param_3,HWND param_4)

{
  WNDPROC pWVar1;
  ulonglong uVar2;
  
  pWVar1 = FUN_180003f68();
  uVar2 = FUN_1800041ec((longlong)pWVar1,param_1,(ulonglong)param_2,param_3,param_4);
  FUN_180004010((undefined8 *)pWVar1);
  return uVar2;
}

