/*
 * FUN_1800dfa90 at 1800dfa90
 * undefined __fastcall FUN_1800dfa90(undefined8 param_1, HWND param_2)
 * Address ranges: 1800dfa90-1800dfafb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800dfa90(undefined8 param_1,HWND param_2)

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

