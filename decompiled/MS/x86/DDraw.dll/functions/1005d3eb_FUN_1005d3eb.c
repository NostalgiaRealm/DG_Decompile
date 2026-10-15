/*
 * FUN_1005d3eb at 1005d3eb
 * WNDPROC __stdcall FUN_1005d3eb(void)
 * Address ranges: 1005d3eb-1005d46f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

WNDPROC FUN_1005d3eb(void)

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
    puVar3 = (undefined4 *)FUN_10060bca(0x974);
    if (puVar3 != (undefined4 *)0x0) {
      pWVar4 = (WNDPROC)FUN_1005d254(puVar3);
      if (pWVar4 == (WNDPROC)0x0) {
        return (WNDPROC)0x0;
      }
      iVar2 = FUN_1005d07a(pWVar4);
      if ((char)iVar2 != '\0') goto LAB_1005d462;
      FUN_1005d3a8((undefined4 *)pWVar4);
      FUN_10060be1(pWVar4);
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
LAB_1005d462:
  if (pWVar4 != (WNDPROC)0x0) {
    LOCK();
    *(int *)(pWVar4 + 0x48) = *(int *)(pWVar4 + 0x48) + 1;
    UNLOCK();
  }
  return pWVar4;
}

