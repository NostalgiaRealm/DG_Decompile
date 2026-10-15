/*
 * FUN_14000a158 at 14000a158
 * undefined __fastcall FUN_14000a158(longlong param_1, char param_2, ulonglong param_3)
 * Address ranges: 14000a158-14000a21a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000a158(longlong param_1,char param_2,ulonglong param_3)

{
  DWORD DVar1;
  HWND hWnd;
  longlong local_28 [4];
  
  if ((*(longlong *)(param_1 + 0x1ac8) != 0) && (param_2 != '\0')) {
    FUN_140023f00(local_28,*(undefined8 *)(param_1 + 0x1ad8));
    FUN_14001dbfc((undefined8 *)(param_1 + 0x1ae0),local_28,param_3);
    FUN_140024020(local_28);
    SetLastError(0);
    SendMessageW(*(HWND *)(param_1 + 0x1ac8),0x406,0,*(LPARAM *)(param_1 + -0x68));
    DVar1 = GetLastError();
    if ((DVar1 != 0) && (*(char *)(param_1 + 0x1d9c) != '\0')) {
      MessageBoxA(*(HWND *)(param_1 + -0x68),"Cannot communicate to the specified application!",
                  (LPCSTR)0x0,0x10);
      *(undefined1 *)(param_1 + 0x1d9c) = 0;
    }
  }
  hWnd = GetDlgItem(*(HWND *)(param_1 + -0x68),0x3ed);
                    /* WARNING: Could not recover jumptable at 0x00014000a214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnableWindow(hWnd,1);
  return;
}

