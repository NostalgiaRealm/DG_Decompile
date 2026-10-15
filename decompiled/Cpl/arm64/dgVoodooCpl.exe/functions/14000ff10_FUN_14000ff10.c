/*
 * FUN_14000ff10 at 14000ff10
 * int __cdecl FUN_14000ff10(longlong param_1, int param_2, LPARAM param_3, LPARAM param_4)
 * Address ranges: 14000ff10-14000ffb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_14000ff10(longlong param_1,int param_2,LPARAM param_3,LPARAM param_4)

{
  HWND pHVar1;
  LRESULT LVar2;
  int iVar3;
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  LVar2 = SendMessageW(pHVar1,0x143,0,param_3);
  iVar3 = (int)LVar2;
  if (iVar3 + 2U < 2) {
    iVar3 = -1;
  }
  else {
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
    LVar2 = SendMessageW(pHVar1,0x151,(longlong)iVar3,param_4);
    if (LVar2 == -1) {
      iVar3 = -1;
    }
  }
  return iVar3;
}

