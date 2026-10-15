/*
 * FUN_140005b10 at 140005b10
 * undefined8 __fastcall FUN_140005b10(longlong param_1)
 * Address ranges: 140005b10-140005f5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140005b10(longlong param_1)

{
  HWND pHVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  CHAR local_48 [32];
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f2);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x3f2,(LPARAM)(&PTR_s_Max_available_140026c00)[lVar4],
                  (ulonglong)(uint)(&DAT_140026da8)[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 6);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f3);
  uVar5 = 0;
  SendMessageW(pHVar1,0x14b,0,0);
  uVar3 = 0;
  do {
    while (uVar3 == 0) {
      uVar5 = 0;
      FUN_14000e340(param_1,0x3f3,0x140027068,0);
      uVar3 = 1;
    }
    FUN_140024290(local_48,"%d",(ulonglong)uVar3,uVar5);
    uVar5 = (ulonglong)uVar3;
    FUN_14000e340(param_1,0x3f3,(LPARAM)local_48,uVar5);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x11);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f5);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x3f5,(LPARAM)(&PTR_s_Whole_image_140026bc8)[lVar4],lVar4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 7);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f6);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x3f6,(LPARAM)(&PTR_s_Point_sampled_140026b90)[lVar4],
                  (ulonglong)(uint)(&DAT_140026b78)[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 5);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f7);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x3f7,(LPARAM)(&PTR_s_Automatic_140026d78)[lVar4],
                  (ulonglong)(uint)(&DAT_140026da8)[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 6);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f9);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x3f9,(LPARAM)(&PTR_s_Automatic_140026b30)[lVar4],
                  (ulonglong)(uint)(&DAT_140026cc8)[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 5);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fa);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x3fa,(LPARAM)(&PTR_s_App_driven_140026ad0)[lVar4],
                  (ulonglong)(uint)(&DAT_140026ab8)[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 5);
  FUN_14000e4d0(param_1,0x3fa);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fb);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x3fb,(LPARAM)(&PTR_s_Infinite_140026d40)[lVar4],
                  (ulonglong)(uint)(&DAT_140026d20)[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 7);
  FUN_14000e4d0(param_1,0x3fb);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f4);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x3f4,(LPARAM)(&PTR_s_Unspecified_140026b18)[lVar4],lVar4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f8);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x3f8,(LPARAM)(&PTR_s_Unlimited_140026c30)[lVar4],
                  (ulonglong)(uint)(&DAT_140026ce0)[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0xf);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,2,20000);
  FUN_14000eea0(param_1,0x40b);
  FUN_14000eea0(param_1,0x3f1);
  FUN_14000eea0(param_1,0x3f2);
  FUN_14000eea0(param_1,0x3f3);
  FUN_14000eea0(param_1,0x3f5);
  FUN_14000eea0(param_1,0x3f6);
  FUN_14000eea0(param_1,0x3f9);
  FUN_14000eea0(param_1,0x3fa);
  FUN_14000eea0(param_1,0x3fb);
  FUN_14000eea0(param_1,0x3f7);
  FUN_14000eea0(param_1,0x403);
  FUN_14000eea0(param_1,0x405);
  FUN_14000eea0(param_1,0x404);
  FUN_14000eea0(param_1,0x406);
  FUN_14000eea0(param_1,0x3f4);
  FUN_14000eea0(param_1,0x3f8);
  FUN_14000eea0(param_1,0x407);
  FUN_14000eea0(param_1,0x408);
  uVar2 = FUN_14000eea0(param_1,0x409);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}

