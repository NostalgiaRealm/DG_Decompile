/*
 * FUN_1004263b at 1004263b
 * WNDPROC __fastcall FUN_1004263b(undefined4 param_1, undefined4 * param_2, undefined4 param_3)
 * Address ranges: 1004263b-10042681
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

WNDPROC __fastcall FUN_1004263b(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

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
     (pWVar2 = (WNDPROC)(*(code *)param_2[1])(param_1,param_3), pWVar2 == (WNDPROC)0x0)) {
    return (WNDPROC)0x0;
  }
  LOCK();
  *(int *)(pWVar2 + 8) = *(int *)(pWVar2 + 8) + 1;
  UNLOCK();
  return pWVar2;
}

