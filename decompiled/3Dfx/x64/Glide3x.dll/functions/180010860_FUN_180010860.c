/*
 * FUN_180010860 at 180010860
 * undefined __fastcall FUN_180010860(longlong param_1, longlong param_2, undefined8 * param_3, HWND param_4, UINT param_5, WPARAM param_6, LONG * param_7)
 * Address ranges: 180010860-18001093a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180010860(longlong param_1,longlong param_2,undefined8 *param_3,HWND param_4,UINT param_5,
                  WPARAM param_6,LONG *param_7)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + -8);
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa0) == *(longlong *)(param_1 + 0x40)) {
    FUN_180010114((longlong)puVar1,param_2,(longlong)param_3,param_4,param_5,param_6,param_7);
  }
  else if (*(int *)(param_2 + 0x8be) == 1) {
    FUN_180010254((longlong)puVar1,param_2,param_3,param_4,param_5,param_6,(ulonglong)param_7);
  }
  else if (*(int *)(param_2 + 0x8be) == 2) {
    CallWindowProcW((WNDPROC)param_3[4],param_4,param_5,param_6,(LPARAM)param_7);
  }
  else {
    FUN_180010394(puVar1,param_2,(longlong)param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

