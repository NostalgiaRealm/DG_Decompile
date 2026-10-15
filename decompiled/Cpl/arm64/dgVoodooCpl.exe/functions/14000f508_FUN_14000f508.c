/*
 * FUN_14000f508 at 14000f508
 * undefined __cdecl FUN_14000f508(HWND param_1, UINT param_2, WPARAM param_3, LPARAM param_4)
 * Address ranges: 14000f508-14000f587
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000f508(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  if (param_2 == 0x81) {
    if (DAT_14002c2d8 != (code *)0x0) {
      (*DAT_14002c2d8)();
    }
    if (DAT_14002c2e8 != (code *)0x0) {
      (*DAT_14002c2e8)(param_1,7,1);
    }
  }
  CallWindowProcW(DAT_14002c2f8,param_1,param_2,param_3,param_4);
  return;
}

