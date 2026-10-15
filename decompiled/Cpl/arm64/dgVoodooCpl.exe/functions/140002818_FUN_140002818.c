/*
 * FUN_140002818 at 140002818
 * undefined8 __cdecl FUN_140002818(longlong param_1)
 * Address ranges: 140002818-140002823
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140002818(longlong param_1)

{
  longlong lVar1;
  
  FUN_140010038(param_1,0x40f);
  lVar1 = 0;
  do {
    FUN_14000fe68(param_1,0x40f,(LPARAM)(&PTR_s_Message_disabled_1400267e0)[lVar1],
                  (ulonglong)(uint)(&DAT_1400267c0)[lVar1]);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  FUN_140010038(param_1,0x410);
  lVar1 = 0;
  do {
    FUN_14000fe68(param_1,0x410,(LPARAM)(&PTR_s_Message_disabled_1400267e0)[lVar1],
                  (ulonglong)(uint)(&DAT_1400267c0)[lVar1]);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  FUN_140010038(param_1,0x411);
  lVar1 = 0;
  do {
    FUN_14000fe68(param_1,0x411,(LPARAM)(&PTR_s_Message_disabled_1400267e0)[lVar1],
                  (ulonglong)(uint)(&DAT_1400267c0)[lVar1]);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  FUN_140010038(param_1,0x412);
  lVar1 = 0;
  do {
    FUN_14000fe68(param_1,0x412,(LPARAM)(&PTR_s_Disable_140026800)[lVar1],
                  (ulonglong)(uint)(&DAT_1400267d0)[lVar1]);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,2,20000);
  FUN_1400107e8(param_1,0x40f);
  FUN_1400107e8(param_1,0x410);
  FUN_1400107e8(param_1,0x411);
  FUN_1400107e8(param_1,0x412);
  FUN_1400107e8(param_1,0x413);
  return 1;
}

