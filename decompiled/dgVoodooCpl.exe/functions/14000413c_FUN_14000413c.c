/*
 * FUN_14000413c at 14000413c
 * undefined __fastcall FUN_14000413c(longlong param_1)
 * Address ranges: 14000413c-14000463a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000413c(longlong param_1)

{
  char cVar1;
  char cVar2;
  HWND pHVar3;
  BOOL BVar4;
  uint uVar5;
  ulonglong uVar6;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))();
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x88) + 0x80);
  if (((cVar1 == '\0') && (cVar2 != '\0')) && (*(uint *)(*(longlong *)(param_1 + 0x88) + 0x58) < 2))
  {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x419);
  EnableWindow(pHVar3,BVar4);
  if (((cVar1 == '\0') && (cVar2 != '\0')) && (*(uint *)(*(longlong *)(param_1 + 0x88) + 0x58) < 2))
  {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f6);
  EnableWindow(pHVar3,BVar4);
  if (((cVar1 == '\0') && (cVar2 != '\0')) && (*(uint *)(*(longlong *)(param_1 + 0x88) + 0x58) < 2))
  {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x416);
  EnableWindow(pHVar3,BVar4);
  if (((cVar1 == '\0') && (cVar2 != '\0')) && (*(uint *)(*(longlong *)(param_1 + 0x88) + 0x58) < 2))
  {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x417);
  EnableWindow(pHVar3,BVar4);
  if (((cVar1 == '\0') && (cVar2 != '\0')) && (*(uint *)(*(longlong *)(param_1 + 0x88) + 0x58) < 2))
  {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x418);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fa);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41a);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x406);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x407);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x415);
  EnableWindow(pHVar3,BVar4);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x411);
  EnableWindow(pHVar3,(uint)(cVar1 == '\0'));
  if ((cVar1 == '\0') && (*(int *)(*(longlong *)(param_1 + 0x88) + 0x1cf) != 0)) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41b);
  EnableWindow(pHVar3,BVar4);
  if (((cVar1 == '\0') && (*(int *)(*(longlong *)(param_1 + 0x88) + 0x1cf) != 0)) &&
     (*(int *)(*(longlong *)(param_1 + 0x88) + 0x1cb) != 0)) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41c);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41d);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x410);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41e);
  EnableWindow(pHVar3,BVar4);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41f);
  EnableWindow(pHVar3,(uint)(cVar1 == '\0'));
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x408);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x409);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40a);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40b);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40f);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40c);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x420);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x421);
  EnableWindow(pHVar3,BVar4);
  uVar6 = 0;
  do {
    if (((cVar1 == '\0') && (cVar2 != '\0')) &&
       ((*(uint *)(param_1 + 0x238) >> ((uint)uVar6 & 0x1f) & 1) != 0)) {
      BVar4 = 1;
    }
    else {
      BVar4 = 0;
    }
    pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),(uint)(ushort)(&DAT_140027340)[uVar6]);
    EnableWindow(pHVar3,BVar4);
    uVar5 = (uint)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
  } while (uVar5 < 0x20);
  return;
}

