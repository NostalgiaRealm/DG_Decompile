/*
 * FUN_14000214c at 14000214c
 * undefined8 __fastcall FUN_14000214c(longlong param_1)
 * Address ranges: 14000214c-140002314
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_14000214c(longlong param_1)

{
  ulonglong uVar1;
  HWND pHVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40f);
  SendMessageW(pHVar2,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x40f,(LPARAM)(&PTR_s_Message_disabled_140026800)[lVar4],
                  (ulonglong)(uint)(&DAT_1400267e0)[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x410);
  SendMessageW(pHVar2,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x410,(LPARAM)(&PTR_s_Message_disabled_140026800)[lVar4],
                  (ulonglong)(uint)(&DAT_1400267e0)[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x411);
  SendMessageW(pHVar2,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x411,(LPARAM)(&PTR_s_Message_disabled_140026800)[lVar4],
                  (ulonglong)(uint)(&DAT_1400267e0)[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x412);
  SendMessageW(pHVar2,0x14b,0,0);
  uVar1 = 0;
  do {
    uVar5 = uVar1;
    FUN_14000e340(param_1,0x412,(LPARAM)(&PTR_s_Disable_140026818)[uVar5],
                  (ulonglong)(uint)(&DAT_1400267f0)[uVar5]);
    uVar1 = uVar5 + 1;
  } while (uVar5 + 1 != 3);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,uVar5 & 0xffffffff,20000);
  FUN_14000eea0(param_1,0x40f);
  FUN_14000eea0(param_1,0x410);
  FUN_14000eea0(param_1,0x411);
  FUN_14000eea0(param_1,0x412);
  uVar3 = FUN_14000eea0(param_1,0x413);
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}

