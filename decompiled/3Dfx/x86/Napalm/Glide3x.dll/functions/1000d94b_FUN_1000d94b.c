/*
 * FUN_1000d94b at 1000d94b
 * HWND __thiscall FUN_1000d94b(void * this, HWND param_1)
 * Address ranges: 1000d94b-1000da81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HWND __thiscall FUN_1000d94b(void *this,HWND param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  int iVar4;
  HWND pHVar5;
  HWND pHVar6;
  code *lpfn;
  HWND *lParam;
  undefined4 local_20 [2];
  DWORD local_18;
  DWORD local_14;
  
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  BVar1 = IsWindow(param_1);
  if ((BVar1 == 0) && (param_1 = GetActiveWindow(), param_1 == (HWND)0x0)) {
    lParam = &param_1;
    lpfn = FUN_1000da82;
    DVar2 = GetCurrentThreadId();
    EnumThreadWindows(DVar2,lpfn,(LPARAM)lParam);
    if ((param_1 == (HWND)0x0) &&
       (pvVar3 = (HANDLE)CreateToolhelp32Snapshot(4,0), pvVar3 != (HANDLE)0xffffffff)) {
      local_20[0] = 0x1c;
      iVar4 = Thread32First(pvVar3,local_20);
      if (iVar4 != 0) {
        do {
          DVar2 = GetCurrentProcessId();
          if (local_14 == DVar2) {
            EnumThreadWindows(local_18,FUN_1000da82,(LPARAM)&param_1);
          }
          iVar4 = Thread32Next(pvVar3,local_20);
        } while ((iVar4 != 0) && (param_1 == (HWND)0x0));
        CloseHandle(pvVar3);
      }
    }
  }
  if ((*(int *)(*(int *)((int)this + 0x1c) + 0x822) == 1) &&
     (pHVar5 = GetTopWindow(param_1), pHVar5 != (HWND)0x0)) {
    param_1 = pHVar5;
  }
  if (param_1 == (HWND)0x0) {
    *(undefined4 *)((int)this + 0x28) = 0;
    pHVar6 = GetConsoleWindow();
    *(HWND *)((int)this + 0x2c) = pHVar6;
    pHVar5 = param_1;
    if (pHVar6 != (HWND)0x0) {
      pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_1000d0f9,this,0,
                            (LPDWORD)((int)this + 0x24));
      *(HANDLE *)((int)this + 0x20) = pvVar3;
      pHVar5 = param_1;
      if (pvVar3 != (HANDLE)0x0) {
        while (pHVar5 = *(HWND *)((int)this + 0x28), *(HWND *)((int)this + 0x28) == (HWND)0x0) {
          Sleep(1);
        }
      }
    }
    param_1 = pHVar5;
    if (param_1 == (HWND)0x0) {
      param_1 = FUN_1000d899();
    }
  }
  return param_1;
}

