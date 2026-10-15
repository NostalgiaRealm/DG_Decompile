/*
 * FUN_1800f8a40 at 1800f8a40
 * ulonglong __fastcall FUN_1800f8a40(HWND param_1, uint param_2, WPARAM param_3, HWND param_4)
 * Address ranges: 1800f8a40-1800f8a8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800f8a40(HWND param_1,uint param_2,WPARAM param_3,HWND param_4)

{
  WNDPROC pWVar1;
  ulonglong uVar2;
  
  pWVar1 = FUN_1800f80a0();
  uVar2 = FUN_1800f8558((longlong)pWVar1,param_1,(ulonglong)param_2,param_3,param_4);
  FUN_1800f8148((undefined8 *)pWVar1);
  return uVar2;
}

