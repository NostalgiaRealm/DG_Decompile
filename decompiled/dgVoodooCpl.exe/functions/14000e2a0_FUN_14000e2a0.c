/*
 * FUN_14000e2a0 at 14000e2a0
 * ulonglong __fastcall FUN_14000e2a0(longlong param_1, undefined8 param_2, undefined8 param_3, LPARAM param_4, LPARAM param_5)
 * Address ranges: 14000e2a0-14000e33f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_14000e2a0(longlong param_1,undefined8 param_2,undefined8 param_3,LPARAM param_4,
                       LPARAM param_5)

{
  HWND pHVar1;
  ulonglong uVar2;
  LRESULT LVar3;
  ulonglong uVar4;
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x402);
  uVar2 = SendMessageW(pHVar1,0x14a,0,param_4);
  if (1 < (int)uVar2 + 2U) {
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x402);
    LVar3 = SendMessageW(pHVar1,0x151,(longlong)(int)uVar2,param_5);
    uVar4 = 0xffffffff;
    if (LVar3 != -1) {
      uVar4 = uVar2 & 0xffffffff;
    }
    return uVar4;
  }
  return 0xffffffff;
}

