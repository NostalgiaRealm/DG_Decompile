/*
 * FUN_14000e340 at 14000e340
 * ulonglong __fastcall FUN_14000e340(longlong param_1, int param_2, LPARAM param_3, LPARAM param_4)
 * Address ranges: 14000e340-14000e3cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_14000e340(longlong param_1,int param_2,LPARAM param_3,LPARAM param_4)

{
  HWND pHVar1;
  ulonglong uVar2;
  LRESULT LVar3;
  ulonglong uVar4;
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  uVar2 = SendMessageA(pHVar1,0x143,0,param_3);
  if (1 < (int)uVar2 + 2U) {
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
    LVar3 = SendMessageW(pHVar1,0x151,(longlong)(int)uVar2,param_4);
    uVar4 = 0xffffffff;
    if (LVar3 != -1) {
      uVar4 = uVar2 & 0xffffffff;
    }
    return uVar4;
  }
  return 0xffffffff;
}

