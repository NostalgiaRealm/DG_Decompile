/*
 * FUN_10019a97 at 10019a97
 * HWND __fastcall FUN_10019a97(LPVOID param_1)
 * Address ranges: 10019a97-10019bca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HWND __fastcall FUN_10019a97(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  int iVar4;
  HWND pHVar5;
  HWND pHVar6;
  code *lpfn;
  HWND *lParam;
  undefined4 local_24 [2];
  DWORD local_1c;
  DWORD local_18;
  HWND local_8;
  
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)((int)param_1 + 0x28) = 0;
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  local_8 = (HWND)0x0;
  BVar1 = IsWindow((HWND)0x0);
  if ((BVar1 == 0) && (local_8 = GetActiveWindow(), local_8 == (HWND)0x0)) {
    lParam = &local_8;
    lpfn = FUN_10019bcb;
    DVar2 = GetCurrentThreadId();
    EnumThreadWindows(DVar2,lpfn,(LPARAM)lParam);
    if ((local_8 == (HWND)0x0) &&
       (pvVar3 = (HANDLE)CreateToolhelp32Snapshot(4,0), pvVar3 != (HANDLE)0xffffffff)) {
      local_24[0] = 0x1c;
      iVar4 = Thread32First(pvVar3,local_24);
      if (iVar4 != 0) {
        do {
          DVar2 = GetCurrentProcessId();
          if (local_18 == DVar2) {
            EnumThreadWindows(local_1c,FUN_10019bcb,(LPARAM)&local_8);
          }
          iVar4 = Thread32Next(pvVar3,local_24);
        } while ((iVar4 != 0) && (local_8 == (HWND)0x0));
        CloseHandle(pvVar3);
      }
    }
  }
  if ((*(int *)(*(int *)((int)param_1 + 0x1c) + 0x822) == 1) &&
     (pHVar5 = GetTopWindow(local_8), pHVar5 != (HWND)0x0)) {
    local_8 = pHVar5;
  }
  if (local_8 == (HWND)0x0) {
    *(undefined4 *)((int)param_1 + 0x28) = 0;
    pHVar6 = GetConsoleWindow();
    *(HWND *)((int)param_1 + 0x2c) = pHVar6;
    pHVar5 = local_8;
    if (pHVar6 != (HWND)0x0) {
      pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_1001923b,param_1,0,
                            (LPDWORD)((int)param_1 + 0x24));
      *(HANDLE *)((int)param_1 + 0x20) = pvVar3;
      pHVar5 = local_8;
      if (pvVar3 != (HANDLE)0x0) {
        while (pHVar5 = *(HWND *)((int)param_1 + 0x28), *(HWND *)((int)param_1 + 0x28) == (HWND)0x0)
        {
          Sleep(1);
        }
      }
    }
    local_8 = pHVar5;
    if (local_8 == (HWND)0x0) {
      local_8 = FUN_100199e5();
    }
  }
  return local_8;
}

