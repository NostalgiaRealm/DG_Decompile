/*
 * FUN_10002e21 at 10002e21
 * WNDPROC __stdcall FUN_10002e21(void)
 * Address ranges: 10002e21-10002ea5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

WNDPROC FUN_10002e21(void)

{
  HMODULE hInstance;
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  WNDPROC pWVar4;
  char *lpszClass;
  tagWNDCLASSEXA *lpwcx;
  tagWNDCLASSEXA local_34;
  
  lpwcx = &local_34;
  lpszClass = "DGDRIVERROOT";
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  BVar1 = GetClassInfoExA(hInstance,lpszClass,lpwcx);
  if ((BVar1 == 0) || (local_34.lpfnWndProc == (WNDPROC)0x0)) {
    puVar3 = (undefined4 *)FUN_1004f60f(0x974);
    if (puVar3 != (undefined4 *)0x0) {
      pWVar4 = (WNDPROC)FUN_10002c8a(puVar3);
      if (pWVar4 == (WNDPROC)0x0) {
        return (WNDPROC)0x0;
      }
      iVar2 = FUN_10002ab0(pWVar4);
      if ((char)iVar2 != '\0') goto LAB_10002e98;
      FUN_10002dde((undefined4 *)pWVar4);
      FUN_1004f626(pWVar4);
    }
    pWVar4 = (WNDPROC)0x0;
  }
  else {
    iVar2 = (*(code *)**(undefined4 **)local_34.lpfnWndProc)();
    pWVar4 = (WNDPROC)0x0;
    if (iVar2 == 0x287) {
      pWVar4 = local_34.lpfnWndProc;
    }
  }
LAB_10002e98:
  if (pWVar4 != (WNDPROC)0x0) {
    LOCK();
    *(int *)(pWVar4 + 0x48) = *(int *)(pWVar4 + 0x48) + 1;
    UNLOCK();
  }
  return pWVar4;
}

