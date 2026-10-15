/*
 * FUN_18001d260 at 18001d260
 * undefined8 __fastcall FUN_18001d260(longlong param_1)
 * Address ranges: 18001d260-18001d2ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18001d260(longlong param_1)

{
  BOOL BVar1;
  HWND hWnd;
  MSG local_38;
  
  hWnd = FUN_18001daf8();
  *(HWND *)(param_1 + 0x48) = hWnd;
  while( true ) {
    BVar1 = GetMessageW(&local_38,hWnd,0,0);
    if (((BVar1 == 0) || (BVar1 == -1)) || (local_38.message == 0x401)) break;
    TranslateMessage(&local_38);
    DispatchMessageW(&local_38);
    hWnd = *(HWND *)(param_1 + 0x48);
  }
  DestroyWindow(*(HWND *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  return 0;
}

