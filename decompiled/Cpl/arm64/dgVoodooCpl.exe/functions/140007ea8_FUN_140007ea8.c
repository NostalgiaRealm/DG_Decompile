/*
 * FUN_140007ea8 at 140007ea8
 * undefined8 __cdecl FUN_140007ea8(longlong param_1)
 * Address ranges: 140007ea8-140007eb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140007ea8(longlong param_1)

{
  longlong lVar1;
  
  FUN_140010038(param_1,0x40c);
  lVar1 = 0;
  do {
    FUN_14000fe68(param_1,0x40c,(LPARAM)(&PTR_s_Disabled_140026e80)[lVar1],
                  (ulonglong)(uint)(&DAT_140026e98)[lVar1]);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  FUN_140010038(param_1,0x40d);
  lVar1 = 0;
  do {
    FUN_14000fe68(param_1,0x40d,(LPARAM)(&PTR_s_Pure_32_bit_140026ec0)[lVar1],
                  (ulonglong)(uint)(&DAT_140026ea8)[lVar1]);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  FUN_140010038(param_1,0x40e);
  lVar1 = 0;
  do {
    FUN_14000fe68(param_1,0x40e,(LPARAM)(&PTR_s_Automatic_140026e50)[lVar1],lVar1);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 5);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,2,20000);
  FUN_1400107e8(param_1,0x40c);
  FUN_1400107e8(param_1,0x40d);
  FUN_1400107e8(param_1,0x40e);
  return 1;
}

