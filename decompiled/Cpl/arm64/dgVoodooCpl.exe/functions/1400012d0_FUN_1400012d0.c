/*
 * FUN_1400012d0 at 1400012d0
 * undefined8 __cdecl FUN_1400012d0(longlong param_1)
 * Address ranges: 1400012d0-140001397
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400012d0(longlong param_1)

{
  uint uVar1;
  HMODULE hInst;
  HANDLE lParam;
  tagRECT tStack_20;
  
  hInst = GetModuleHandleW((LPCWSTR)0x0);
  lParam = LoadImageW(hInst,(LPCWSTR)0x70,1,0,0,0x8040);
  SendMessageW(*(HWND *)(param_1 + 0x18),0x80,1,(LPARAM)lParam);
  SendMessageW(*(HWND *)(param_1 + 0x18),0x80,0,(LPARAM)lParam);
  uVar1 = FUN_140010e20((undefined8 *)(param_1 + 0x70));
  if (uVar1 != *(uint *)(param_1 + 0x100)) {
    GetWindowRect(*(HWND *)(param_1 + 0x18),&tStack_20);
    FUN_140011118(param_1 + 0x70,uVar1,&tStack_20.left);
  }
  return 1;
}

