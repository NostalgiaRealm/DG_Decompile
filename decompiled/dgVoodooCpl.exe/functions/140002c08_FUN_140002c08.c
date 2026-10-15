/*
 * FUN_140002c08 at 140002c08
 * undefined8 __fastcall FUN_140002c08(longlong param_1)
 * Address ranges: 140002c08-1400030df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140002c08(longlong param_1)

{
  HWND pHVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x419);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x419,(LPARAM)(&PTR_s__undefined__1400269a8)[lVar3],
                  (ulonglong)(uint)(&DAT_140026970)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f6);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x3f6,(LPARAM)(&PTR_s_0x0000__unknown__140026880)[lVar3],
                  (ulonglong)(uint)(&DAT_140026840)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0xb);
  FUN_14000e4d0(param_1,0x3f6);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fa);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x3fa,(LPARAM)(&PTR_DAT_1400268f8)[lVar3],
                  (ulonglong)(uint)(&DAT_1400268d8)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x411);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x411,(LPARAM)(&PTR_s_Disabled_140026a68)[lVar3],
                  (ulonglong)(uint)(&DAT_1400268e8)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  FUN_14000e4d0(param_1,0x411);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41b);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x41b,(LPARAM)(&PTR_s_High_quality_140026a28)[lVar3],
                  (ulonglong)(uint)(&DAT_140026870)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  FUN_14000e4d0(param_1,0x41b);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41c);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x41c,(LPARAM)(&PTR_s_Automatic_1400269e8)[lVar3],
                  (ulonglong)(uint)(&DAT_140026a50)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 5);
  FUN_14000e4d0(param_1,0x41c);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41d);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x41d,(LPARAM)(&PTR_s_App_driven_140026958)[lVar3],
                  (ulonglong)(uint)(&DAT_140026a88)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  FUN_14000e4d0(param_1,0x41d);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41e);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x41e,(LPARAM)(&PTR_s_Automatic_1400269c8)[lVar3],
                  (ulonglong)(uint)(&DAT_140026830)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  FUN_14000e4d0(param_1,0x41e);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x410);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x410,(LPARAM)(&PTR_DAT_140026a10)[lVar3],
                  (ulonglong)(uint)(&DAT_140026a40)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  FUN_14000e4d0(param_1,0x410);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41f);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    lVar4 = lVar3;
    FUN_14000e340(param_1,0x41f,(LPARAM)(&PTR_s_Disable_140026910)[lVar4],
                  (ulonglong)(uint)(&DAT_140026980)[lVar4]);
    lVar3 = lVar4 + 1;
  } while (lVar4 + 1 != 9);
  FUN_14000e4d0(param_1,0x41f);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,(ulonglong)((int)lVar4 - 6),20000);
  FUN_14000eea0(param_1,0x419);
  FUN_14000eea0(param_1,0x3f6);
  FUN_14000eea0(param_1,0x3fa);
  FUN_14000eea0(param_1,0x41a);
  FUN_14000eea0(param_1,0x406);
  FUN_14000eea0(param_1,0x407);
  FUN_14000eea0(param_1,0x415);
  FUN_14000eea0(param_1,0x411);
  FUN_14000eea0(param_1,0x41b);
  FUN_14000eea0(param_1,0x41c);
  FUN_14000eea0(param_1,0x41d);
  FUN_14000eea0(param_1,0x41e);
  FUN_14000eea0(param_1,0x410);
  FUN_14000eea0(param_1,0x41f);
  FUN_14000eea0(param_1,0x408);
  FUN_14000eea0(param_1,0x409);
  FUN_14000eea0(param_1,0x40a);
  FUN_14000eea0(param_1,0x40b);
  FUN_14000eea0(param_1,0x40f);
  FUN_14000eea0(param_1,0x40c);
  FUN_14000eea0(param_1,0x420);
  FUN_14000eea0(param_1,0x421);
  lVar3 = 0;
  do {
    uVar2 = FUN_14000eea0(param_1,(uint)(ushort)(&DAT_140027340)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x20);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}

