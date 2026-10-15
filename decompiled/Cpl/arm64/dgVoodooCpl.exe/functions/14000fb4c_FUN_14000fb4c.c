/*
 * FUN_14000fb4c at 14000fb4c
 * undefined8 __cdecl FUN_14000fb4c(longlong * param_1, longlong param_2, int param_3, undefined8 param_4, uint param_5)
 * Address ranges: 14000fb4c-14000fbef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_14000fb4c(longlong *param_1,longlong param_2,int param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  HWND hWnd;
  undefined8 uVar2;
  code *pcVar3;
  
  if ((param_5 & 0xffff0000) == 0) {
    hWnd = GetDlgItem(*(HWND *)(param_2 + 0x18),param_3);
    uVar1 = GetWindowLongW(hWnd,-0x10);
    uVar1 = uVar1 & 0xf;
    if (uVar1 - 2 < 2) {
      pcVar3 = *(code **)(*param_1 + 8);
    }
    else if ((uVar1 < 10) && ((0x210U >> (ulonglong)uVar1 & 1) != 0)) {
      pcVar3 = *(code **)(*param_1 + 0x10);
    }
    else {
      pcVar3 = *(code **)*param_1;
    }
    uVar2 = (*pcVar3)(param_1,param_3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

