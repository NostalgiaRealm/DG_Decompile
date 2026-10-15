/*
 * FUN_140004980 at 140004980
 * undefined8 __cdecl FUN_140004980(longlong param_1)
 * Address ranges: 140004980-140004987
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140004980(longlong param_1)

{
  HWND hWnd;
  longlong lVar1;
  
  lVar1 = 0;
  do {
    FUN_14000fe68(param_1,0x406,(LPARAM)(&PTR_s_dgVoodoo_Virtual_SVGA_Card_140027780)[lVar1],
                  (longlong)(int)(&DAT_1400276c0)[lVar1]);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 7);
  lVar1 = 0;
  do {
    FUN_14000fe68(param_1,0x40b,(LPARAM)(&PTR_s_App_driven_1400276e0)[lVar1],
                  (longlong)(int)(&DAT_140027750)[lVar1]);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 10);
  lVar1 = 0;
  do {
    FUN_14000fe68(param_1,0x40c,(LPARAM)(&PTR_s_Disabled_140027880)[lVar1],
                  (longlong)(int)(&DAT_140027870)[lVar1]);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,2,20000);
  FUN_1400107e8(param_1,0x401);
  FUN_1400107e8(param_1,0x406);
  FUN_1400107e8(param_1,0x402);
  FUN_1400107e8(param_1,0x40b);
  FUN_1400107e8(param_1,0x40c);
  FUN_1400107e8(param_1,0x40e);
  FUN_1400107e8(param_1,0x407);
  FUN_1400107e8(param_1,0x408);
  FUN_1400107e8(param_1,0x403);
  FUN_1400107e8(param_1,0x404);
  FUN_1400107e8(param_1,0x409);
  FUN_1400107e8(param_1,0x40a);
  FUN_1400107e8(param_1,0x3f8);
  FUN_1400107e8(param_1,0x40f);
  FUN_1400107e8(param_1,0x40d);
  FUN_1400107e8(param_1,0x405);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),0x407);
  EnableWindow(hWnd,0);
  return 1;
}

