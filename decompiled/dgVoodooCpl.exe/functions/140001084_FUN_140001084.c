/*
 * FUN_140001084 at 140001084
 * undefined4 __fastcall FUN_140001084(longlong param_1)
 * Address ranges: 140001084-140001132
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_140001084(longlong param_1)

{
  int iVar1;
  HMODULE hInst;
  HANDLE lParam;
  tagRECT local_18;
  
  hInst = GetModuleHandleW((LPCWSTR)0x0);
  lParam = LoadImageW(hInst,(LPCWSTR)0x70,1,0,0,0x8040);
  SendMessageW(*(HWND *)(param_1 + 0x18),0x80,1,(LPARAM)lParam);
  SendMessageW(*(HWND *)(param_1 + 0x18),0x80,0,(LPARAM)lParam);
  iVar1 = FUN_14000f670((undefined8 *)(param_1 + 0x70));
  if (iVar1 != *(int *)(param_1 + 0x100)) {
    GetWindowRect(*(HWND *)(param_1 + 0x18),&local_18);
    iVar1 = FUN_14000f960(param_1 + 0x70,iVar1,&local_18.left);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

