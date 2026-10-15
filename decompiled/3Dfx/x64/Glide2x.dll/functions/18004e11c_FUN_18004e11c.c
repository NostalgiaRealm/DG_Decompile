/*
 * FUN_18004e11c at 18004e11c
 * undefined __fastcall FUN_18004e11c(undefined8 param_1, undefined8 * param_2, undefined8 param_3)
 * Address ranges: 18004e11c-18004e172
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004e11c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  LPCSTR lpszClass;
  BOOL BVar1;
  HMODULE hInstance;
  tagWNDCLASSEXA local_78;
  
  lpszClass = (LPCSTR)*param_2;
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  BVar1 = GetClassInfoExA(hInstance,lpszClass,&local_78);
  if (((BVar1 == 0) || (local_78.lpfnWndProc == (WNDPROC)0x0)) &&
     (local_78.lpfnWndProc = (WNDPROC)(*(code *)param_2[1])(param_1,param_3),
     local_78.lpfnWndProc == (WNDPROC)0x0)) {
    return;
  }
  LOCK();
  *(int *)(local_78.lpfnWndProc + 8) = *(int *)(local_78.lpfnWndProc + 8) + 1;
  UNLOCK();
  return;
}

