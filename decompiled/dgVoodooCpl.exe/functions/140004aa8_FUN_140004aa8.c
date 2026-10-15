/*
 * FUN_140004aa8 at 140004aa8
 * undefined8 __fastcall FUN_140004aa8(longlong param_1)
 * Address ranges: 140004aa8-140004c47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140004aa8(longlong param_1)

{
  BOOL BVar1;
  HWND hWnd;
  undefined4 extraout_var;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    FUN_14000e340(param_1,0x406,(LPARAM)(&PTR_s_dgVoodoo_Virtual_SVGA_Card_1400276d0)[lVar2],
                  (longlong)(int)(&DAT_140027618)[lVar2]);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 7);
  lVar2 = 0;
  do {
    FUN_14000e340(param_1,0x40b,(LPARAM)(&PTR_s_App_driven_140027640)[lVar2],
                  (longlong)(int)(&DAT_1400276a8)[lVar2]);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 10);
  lVar2 = 0;
  do {
    FUN_14000e340(param_1,0x40c,(LPARAM)(&PTR_s_Disabled_1400277d0)[lVar2],
                  (longlong)(int)(&DAT_1400277c0)[lVar2]);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,2,20000);
  FUN_14000eea0(param_1,0x401);
  FUN_14000eea0(param_1,0x406);
  FUN_14000eea0(param_1,0x402);
  FUN_14000eea0(param_1,0x40b);
  FUN_14000eea0(param_1,0x40c);
  FUN_14000eea0(param_1,0x40e);
  FUN_14000eea0(param_1,0x407);
  FUN_14000eea0(param_1,0x408);
  FUN_14000eea0(param_1,0x403);
  FUN_14000eea0(param_1,0x404);
  FUN_14000eea0(param_1,0x409);
  FUN_14000eea0(param_1,0x40a);
  FUN_14000eea0(param_1,0x3f8);
  FUN_14000eea0(param_1,0x40f);
  FUN_14000eea0(param_1,0x40d);
  FUN_14000eea0(param_1,0x405);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),0x407);
  BVar1 = EnableWindow(hWnd,0);
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
}

