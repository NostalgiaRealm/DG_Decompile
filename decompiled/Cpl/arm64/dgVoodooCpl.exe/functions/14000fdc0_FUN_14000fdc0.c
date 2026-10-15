/*
 * FUN_14000fdc0 at 14000fdc0
 * int __cdecl FUN_14000fdc0(longlong param_1, undefined8 param_2, undefined8 param_3, LPARAM param_4, LPARAM param_5)
 * Address ranges: 14000fdc0-14000fe63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_14000fdc0(longlong param_1,undefined8 param_2,undefined8 param_3,LPARAM param_4,
                 LPARAM param_5)

{
  int extraout_w0;
  int iVar1;
  HWND pHVar2;
  LRESULT LVar3;
  
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x402);
  LVar3 = SendMessageW(pHVar2,0x14a,0,param_4);
  extraout_w0 = (int)LVar3;
  if (extraout_w0 + 2U < 2) {
    iVar1 = -1;
  }
  else {
    pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x402);
    LVar3 = SendMessageW(pHVar2,0x151,(longlong)extraout_w0,param_5);
    iVar1 = extraout_w0;
    if (LVar3 == -1) {
      iVar1 = -1;
    }
  }
  return iVar1;
}

