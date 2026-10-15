/*
 * FUN_1000c8a1 at 1000c8a1
 * undefined4 __stdcall FUN_1000c8a1(int param_1)
 * Address ranges: 1000c8a1-1000c904
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000c8a1(int param_1)

{
  HWND hWnd;
  BOOL BVar1;
  MSG local_20;
  
  hWnd = FUN_1000d041();
  *(HWND *)(param_1 + 0x28) = hWnd;
  while( true ) {
    BVar1 = GetMessageW(&local_20,hWnd,0,0);
    if (((BVar1 == 0) || (BVar1 == -1)) || (local_20.message == 0x401)) break;
    TranslateMessage(&local_20);
    DispatchMessageW(&local_20);
    hWnd = *(HWND *)(param_1 + 0x28);
  }
  DestroyWindow(*(HWND *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 0;
}

