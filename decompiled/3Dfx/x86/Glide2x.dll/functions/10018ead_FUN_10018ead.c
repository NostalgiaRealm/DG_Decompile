/*
 * FUN_10018ead at 10018ead
 * undefined4 __stdcall FUN_10018ead(int param_1)
 * Address ranges: 10018ead-10018f10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10018ead(int param_1)

{
  HWND hWnd;
  BOOL BVar1;
  MSG local_20;
  
  hWnd = FUN_10019657();
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

