/*
 * FUN_18001dc30 at 18001dc30
 * HWND __fastcall FUN_18001dc30(LPVOID param_1, HWND param_2)
 * Address ranges: 18001dc30-18001ddbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HWND FUN_18001dc30(LPVOID param_1,HWND param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  HANDLE pvVar4;
  HWND pHVar5;
  HWND pHVar6;
  HWND local_res8 [4];
  undefined4 local_48 [2];
  DWORD local_40;
  DWORD local_3c;
  
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(LPDWORD)((longlong)param_1 + 0x40) = 0;
  local_res8[0] = param_2;
  BVar1 = IsWindow(param_2);
  if ((BVar1 == 0) && (local_res8[0] = GetActiveWindow(), local_res8[0] == (HWND)0x0)) {
    DVar2 = GetCurrentThreadId();
    EnumThreadWindows(DVar2,(WNDENUMPROC)&LAB_18001ddbc,(LPARAM)local_res8);
    if ((local_res8[0] == (HWND)0x0) &&
       (pvVar4 = (HANDLE)CreateToolhelp32Snapshot(4), pvVar4 != (HANDLE)0xffffffffffffffff)) {
      local_48[0] = 0x1c;
      iVar3 = Thread32First(pvVar4,local_48);
      if (iVar3 != 0) {
        do {
          DVar2 = GetCurrentProcessId();
          if (local_3c == DVar2) {
            EnumThreadWindows(local_40,(WNDENUMPROC)&LAB_18001ddbc,(LPARAM)local_res8);
          }
          iVar3 = Thread32Next(pvVar4,local_48);
        } while ((iVar3 != 0) && (local_res8[0] == (HWND)0x0));
        CloseHandle(pvVar4);
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)param_1 + 0x30) + 0x8be) == 1) &&
     (pHVar5 = GetTopWindow(local_res8[0]), pHVar5 != (HWND)0x0)) {
    local_res8[0] = pHVar5;
  }
  if (local_res8[0] == (HWND)0x0) {
    *(undefined8 *)((longlong)param_1 + 0x48) = 0;
    pHVar6 = GetConsoleWindow();
    *(HWND *)((longlong)param_1 + 0x50) = pHVar6;
    pHVar5 = local_res8[0];
    if (pHVar6 != (HWND)0x0) {
      pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_18001d260,param_1,0,
                            (LPDWORD)((longlong)param_1 + 0x40));
      *(HANDLE *)((longlong)param_1 + 0x38) = pvVar4;
      pHVar5 = local_res8[0];
      if (pvVar4 != (HANDLE)0x0) {
        while (pHVar5 = *(HWND *)((longlong)param_1 + 0x48),
              *(HWND *)((longlong)param_1 + 0x48) == (HWND)0x0) {
          Sleep(1);
        }
      }
    }
    local_res8[0] = pHVar5;
    if (local_res8[0] == (HWND)0x0) {
      local_res8[0] = FUN_18001daf8();
    }
  }
  return local_res8[0];
}

