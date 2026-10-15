/*
 * FUN_140009fac at 140009fac
 * undefined __fastcall FUN_140009fac(longlong param_1)
 * Address ranges: 140009fac-14000a156
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140009fac(longlong param_1)

{
  char cVar1;
  HWND pHVar2;
  BOOL bEnable;
  BOOL bEnable_00;
  bool bVar3;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x5b8) + 0x18))();
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x540),0x3eb);
  EnableWindow(pHVar2,(uint)(cVar1 != '\0'));
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x540),0x3ec);
  EnableWindow(pHVar2,(uint)(cVar1 != '\0'));
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x18))();
  bVar3 = cVar1 != '\0';
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x678),0x3f9);
  EnableWindow(pHVar2,(uint)bVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x678),0x3fa);
  EnableWindow(pHVar2,(uint)bVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x678),0x3f2);
  EnableWindow(pHVar2,(uint)bVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x678),0x3f7);
  EnableWindow(pHVar2,(uint)bVar3);
  bEnable_00 = 1;
  if ((cVar1 == '\0') || ((&DAT_140026e38)[*(int *)(*(longlong *)(param_1 + 0x6e0) + 0x27)] != '\0')
     ) {
    bEnable = 0;
  }
  else {
    bEnable = 1;
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x678),0x3fc);
  EnableWindow(pHVar2,bEnable);
  if ((cVar1 == '\0') || (**(int **)(param_1 + 0x6e0) == 1)) {
    bEnable_00 = 0;
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x678),0x3f1);
  EnableWindow(pHVar2,bEnable_00);
  FUN_1400055bc(param_1 + 0x8f0);
  if (*(char *)(param_1 + 0x410) != '\0') {
    FUN_14000700c(param_1 + 0xb80);
    (**(code **)(**(longlong **)(param_1 + 0xe80) + 0x18))();
    FUN_14000413c(param_1 + 0xf28);
    FUN_140002664(param_1 + 0x1168);
  }
  return;
}

