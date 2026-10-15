/*
 * FUN_18001debc at 18001debc
 * undefined __fastcall FUN_18001debc(longlong param_1, longlong param_2, undefined8 * param_3, HWND param_4, UINT param_5, WPARAM param_6, LONG * param_7)
 * Address ranges: 18001debc-18001df96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001debc(longlong param_1,longlong param_2,undefined8 *param_3,HWND param_4,UINT param_5,
                  WPARAM param_6,LONG *param_7)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + -8);
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa0) == *(longlong *)(param_1 + 0x40)) {
    FUN_18001d770((longlong)puVar1,param_2,(longlong)param_3,param_4,param_5,param_6,param_7);
  }
  else if (*(int *)(param_2 + 0x8be) == 1) {
    FUN_18001d8b0((longlong)puVar1,param_2,param_3,param_4,param_5,param_6,(ulonglong)param_7);
  }
  else if (*(int *)(param_2 + 0x8be) == 2) {
    CallWindowProcW((WNDPROC)param_3[4],param_4,param_5,param_6,(LPARAM)param_7);
  }
  else {
    FUN_18001d9f0(puVar1,param_2,(longlong)param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

