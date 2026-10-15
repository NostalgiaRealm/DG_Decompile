/*
 * FUN_14000a648 at 14000a648
 * undefined __cdecl FUN_14000a648(longlong param_1, ulonglong param_2)
 * Address ranges: 14000a648-14000a72b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000a648(longlong param_1,ulonglong param_2)

{
  DWORD DVar1;
  HWND hWnd;
  undefined **local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  
  if ((*(longlong *)(param_1 + 0x1ac8) != 0) && ((param_2 & 1) != 0)) {
    uStack_28 = *(undefined8 *)(param_1 + 0x1ad8);
    local_20 = 0;
    local_30 = &PTR_FUN_140028808;
    FUN_14001eec8(param_1 + 0x1ae0,(longlong *)&local_30);
    FUN_14000f2c0(&local_30);
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
  EnableWindow(hWnd,1);
  return;
}

