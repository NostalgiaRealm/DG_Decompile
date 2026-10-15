/*
 * FUN_100b82f4 at 100b82f4
 * undefined __stdcall FUN_100b82f4(HWND param_1)
 * Address ranges: 100b82f4-100b8339
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b82f4(HWND param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  uint uVar3;
  
  DVar1 = GetWindowThreadProcessId(param_1,(LPDWORD)0x0);
  DVar2 = GetCurrentThreadId();
  if (DVar2 == DVar1) {
    uVar3 = GetWindowLongW(param_1,-0x14);
    if ((uVar3 & 8) != 0) {
      SetWindowPos(param_1,(HWND)0xfffffffe,0,0,0,0,0x41b);
    }
  }
  return;
}

