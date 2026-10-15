/*
 * FUN_180051b38 at 180051b38
 * undefined __fastcall FUN_180051b38(undefined8 param_1, HWND param_2)
 * Address ranges: 180051b38-180051ba3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051b38(undefined8 param_1,HWND param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  uint uVar3;
  
  DVar1 = GetWindowThreadProcessId(param_2,(LPDWORD)0x0);
  DVar2 = GetCurrentThreadId();
  if (DVar2 == DVar1) {
    uVar3 = GetWindowLongW(param_2,-0x14);
    if ((uVar3 & 8) != 0) {
      SetWindowPos(param_2,(HWND)0xfffffffffffffffe,0,0,0,0,0x41b);
    }
  }
  return;
}

