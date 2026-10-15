/*
 * FUN_1400053e0 at 1400053e0
 * undefined8 __cdecl FUN_1400053e0(longlong param_1)
 * Address ranges: 1400053e0-14000579b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400053e0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar4;
  longlong lVar5;
  CHAR aCStack_50 [32];
  
  FUN_140010038(param_1,0x3f2);
  lVar5 = 0;
  do {
    uVar2 = (ulonglong)(uint)(&DAT_140026e30)[lVar5];
    FUN_14000fe68(param_1,0x3f2,(LPARAM)(&PTR_s_Max_available_140026c70)[lVar5],uVar2);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 6);
  FUN_140010038(param_1,0x3f3);
  uVar3 = 0;
  do {
    while (iVar4 = (int)uVar3, iVar4 == 0) {
      uVar2 = 0;
      FUN_14000fe68(param_1,0x3f3,0x140027108,0);
      uVar3 = 1;
    }
    FUN_140024880(aCStack_50,"%d",uVar3,uVar2,in_x4,in_x5,in_x6,in_x7);
    FUN_14000fe68(param_1,0x3f3,(LPARAM)aCStack_50,uVar3);
    uVar1 = iVar4 + 1;
    uVar2 = uVar3;
    uVar3 = (ulonglong)uVar1;
  } while (uVar1 < 0x11);
  FUN_140010038(param_1,0x3f5);
  lVar5 = 0;
  do {
    FUN_14000fe68(param_1,0x3f5,(LPARAM)(&PTR_s_Whole_image_140026c30)[lVar5],lVar5);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 7);
  FUN_140010038(param_1,0x3f6);
  lVar5 = 0;
  do {
    FUN_14000fe68(param_1,0x3f6,(LPARAM)(&PTR_s_Point_sampled_140026bf0)[lVar5],
                  (ulonglong)(uint)(&DAT_140026bd0)[lVar5]);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 5);
  FUN_140010038(param_1,0x3f7);
  lVar5 = 0;
  do {
    FUN_14000fe68(param_1,0x3f7,(LPARAM)(&PTR_s_Automatic_140026e00)[lVar5],
                  (ulonglong)(uint)(&DAT_140026e30)[lVar5]);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 6);
  FUN_140010038(param_1,0x3f9);
  lVar5 = 0;
  do {
    FUN_14000fe68(param_1,0x3f9,(LPARAM)(&PTR_s_Automatic_140026b80)[lVar5],
                  (ulonglong)(uint)(&DAT_140026d40)[lVar5]);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 5);
  FUN_140010038(param_1,0x3fa);
  lVar5 = 0;
  do {
    FUN_14000fe68(param_1,0x3fa,(LPARAM)(&PTR_s_App_driven_140026b10)[lVar5],
                  (ulonglong)(uint)(&DAT_140026af0)[lVar5]);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 5);
  FUN_140010070(param_1,0x3fa);
  FUN_140010038(param_1,0x3fb);
  lVar5 = 0;
  do {
    FUN_14000fe68(param_1,0x3fb,(LPARAM)(&PTR_s_Infinite_140026dc0)[lVar5],
                  (ulonglong)(uint)(&DAT_140026da0)[lVar5]);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 7);
  FUN_140010070(param_1,0x3fb);
  FUN_140010038(param_1,0x3f4);
  lVar5 = 0;
  do {
    FUN_14000fe68(param_1,0x3f4,(LPARAM)(&PTR_s_Unspecified_140026b60)[lVar5],lVar5);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  FUN_140010038(param_1,0x3f8);
  lVar5 = 0;
  do {
    FUN_14000fe68(param_1,0x3f8,(LPARAM)(&PTR_s_Unlimited_140026ca0)[lVar5],
                  (ulonglong)(uint)(&DAT_140026d60)[lVar5]);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0xf);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,2,20000);
  FUN_1400107e8(param_1,0x40b);
  FUN_1400107e8(param_1,0x3f1);
  FUN_1400107e8(param_1,0x3f2);
  FUN_1400107e8(param_1,0x3f3);
  FUN_1400107e8(param_1,0x3f5);
  FUN_1400107e8(param_1,0x3f6);
  FUN_1400107e8(param_1,0x3f9);
  FUN_1400107e8(param_1,0x3fa);
  FUN_1400107e8(param_1,0x3fb);
  FUN_1400107e8(param_1,0x3f7);
  FUN_1400107e8(param_1,0x403);
  FUN_1400107e8(param_1,0x405);
  FUN_1400107e8(param_1,0x404);
  FUN_1400107e8(param_1,0x406);
  FUN_1400107e8(param_1,0x3f4);
  FUN_1400107e8(param_1,0x3f8);
  FUN_1400107e8(param_1,0x407);
  FUN_1400107e8(param_1,0x408);
  FUN_1400107e8(param_1,0x409);
  return 1;
}

