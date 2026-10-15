/*
 * FUN_1005104f at 1005104f
 * WNDPROC __fastcall FUN_1005104f(undefined4 param_1, undefined4 * param_2)
 * Address ranges: 1005104f-10051093
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

WNDPROC __fastcall FUN_1005104f(undefined4 param_1,undefined4 *param_2)

{
  HMODULE hInstance;
  BOOL BVar1;
  WNDPROC pWVar2;
  LPCSTR lpszClass;
  tagWNDCLASSEXA *lpwcx;
  tagWNDCLASSEXA local_34;
  
  lpwcx = &local_34;
  lpszClass = (LPCSTR)*param_2;
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  BVar1 = GetClassInfoExA(hInstance,lpszClass,lpwcx);
  pWVar2 = (WNDPROC)0x0;
  if (BVar1 != 0) {
    pWVar2 = local_34.lpfnWndProc;
  }
  if ((pWVar2 == (WNDPROC)0x0) &&
     (pWVar2 = (WNDPROC)(*(code *)param_2[1])(param_1,0), pWVar2 == (WNDPROC)0x0)) {
    return (WNDPROC)0x0;
  }
  LOCK();
  *(int *)(pWVar2 + 8) = *(int *)(pWVar2 + 8) + 1;
  UNLOCK();
  return pWVar2;
}

