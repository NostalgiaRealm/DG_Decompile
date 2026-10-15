/*
 * FUN_18001eb80 at 18001eb80
 * undefined __cdecl FUN_18001eb80(LPVOID param_1, HWND param_2)
 * Address ranges: 18001eb80-18001ed67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001eb80(LPVOID param_1,HWND param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  HANDLE pvVar4;
  HWND pHVar5;
  HWND pHVar6;
  HWND local_60;
  undefined4 local_58 [2];
  DWORD local_50;
  DWORD local_4c;
  
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  local_60 = param_2;
  BVar1 = IsWindow(param_2);
  if ((BVar1 == 0) && (local_60 = GetActiveWindow(), local_60 == (HWND)0x0)) {
    DVar2 = GetCurrentThreadId();
    EnumThreadWindows(DVar2,(WNDENUMPROC)&LAB_18001ed68,(LPARAM)&local_60);
    if ((local_60 == (HWND)0x0) &&
       (pvVar4 = (HANDLE)CreateToolhelp32Snapshot(CreateToolhelp32Snapshot_exref,4,0),
       pvVar4 != (HANDLE)0xffffffffffffffff)) {
      local_58[0] = 0x1c;
      iVar3 = Thread32First(Thread32First_exref,pvVar4,local_58);
      if (iVar3 != 0) {
        do {
          DVar2 = GetCurrentProcessId();
          if (local_4c == DVar2) {
            EnumThreadWindows(local_50,(WNDENUMPROC)&LAB_18001ed68,(LPARAM)&local_60);
          }
          iVar3 = Thread32Next(Thread32Next_exref,pvVar4,local_58);
        } while ((iVar3 != 0) && (local_60 == (HWND)0x0));
        CloseHandle(pvVar4);
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)param_1 + 0x30) + 0x8be) == 1) &&
     (pHVar5 = GetTopWindow(local_60), pHVar5 != (HWND)0x0)) {
    local_60 = pHVar5;
  }
  if (local_60 == (HWND)0x0) {
    *(undefined8 *)((longlong)param_1 + 0x48) = 0;
    pHVar6 = GetConsoleWindow();
    *(HWND *)((longlong)param_1 + 0x50) = pHVar6;
    pHVar5 = local_60;
    if (pHVar6 != (HWND)0x0) {
      pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_18001dfc0,param_1,0,
                            (LPDWORD)((longlong)param_1 + 0x40));
      *(HANDLE *)((longlong)param_1 + 0x38) = pvVar4;
      pHVar5 = local_60;
      if (pvVar4 != (HANDLE)0x0) {
        pHVar5 = *(HWND *)((longlong)param_1 + 0x48);
        while (pHVar5 == (HWND)0x0) {
          Sleep(1);
          pHVar5 = *(HWND *)((longlong)param_1 + 0x48);
        }
      }
    }
    local_60 = pHVar5;
    if (local_60 == (HWND)0x0) {
      FUN_18001ea70();
    }
  }
  return;
}

