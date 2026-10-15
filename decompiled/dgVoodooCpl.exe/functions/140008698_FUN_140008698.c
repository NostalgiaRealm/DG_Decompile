/*
 * FUN_140008698 at 140008698
 * undefined8 __fastcall FUN_140008698(longlong param_1)
 * Address ranges: 140008698-1400087f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140008698(longlong param_1)

{
  HWND pHVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40c);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x40c,(LPARAM)(&PTR_s_Disabled_140026de8)[lVar3],
                  (ulonglong)(uint)(&DAT_140026e00)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40d);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x40d,(LPARAM)(&PTR_s_Pure_32_bit_140026e20)[lVar3],
                  (ulonglong)(uint)(&DAT_140026e10)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40e);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    lVar4 = lVar3;
    FUN_14000e340(param_1,0x40e,(LPARAM)(&PTR_s_Automatic_140026dc0)[lVar4],lVar4);
    lVar3 = lVar4 + 1;
  } while (lVar4 + 1 != 5);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,(ulonglong)((int)lVar4 - 2),20000);
  FUN_14000eea0(param_1,0x40c);
  FUN_14000eea0(param_1,0x40d);
  uVar2 = FUN_14000eea0(param_1,0x40e);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}

