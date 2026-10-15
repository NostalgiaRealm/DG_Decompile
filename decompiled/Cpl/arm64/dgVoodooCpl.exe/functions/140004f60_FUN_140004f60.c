/*
 * FUN_140004f60 at 140004f60
 * undefined __cdecl FUN_140004f60(longlong param_1)
 * Address ranges: 140004f60-14000532f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140004f60(longlong param_1)

{
  char cVar1;
  char cVar2;
  HWND pHVar3;
  longlong *plVar4;
  BOOL BVar5;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))();
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x401);
  EnableWindow(pHVar3,SUB14(cVar2 != '\0',0));
  if ((cVar2 == '\0') || (*(char *)(*(longlong *)(param_1 + 0x80) + 0x80) != '\0')) {
    BVar5 = 0;
  }
  else {
    BVar5 = 1;
  }
  plVar4 = (longlong *)(param_1 + 0x80);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x406);
  EnableWindow(pHVar3,BVar5);
  if ((cVar2 == '\0') || (*(char *)(*plVar4 + 0x80) != '\0')) {
    BVar5 = 0;
  }
  else {
    BVar5 = 1;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x402);
  EnableWindow(pHVar3,BVar5);
  cVar1 = *(char *)(*plVar4 + 0x80);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40e);
  EnableWindow(pHVar3,SUB14(cVar1 == '\0',0));
  cVar1 = *(char *)(*plVar4 + 0x80);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40b);
  EnableWindow(pHVar3,SUB14(cVar1 == '\0',0));
  cVar1 = *(char *)(*plVar4 + 0x80);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40c);
  EnableWindow(pHVar3,SUB14(cVar1 == '\0',0));
  if ((cVar2 == '\0') || (*(char *)(*plVar4 + 0x80) != '\0')) {
    BVar5 = 0;
  }
  else {
    BVar5 = 1;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x407);
  EnableWindow(pHVar3,BVar5);
  if ((cVar2 == '\0') || (*(char *)(*plVar4 + 0x80) != '\0')) {
    BVar5 = 0;
  }
  else {
    BVar5 = 1;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x408);
  EnableWindow(pHVar3,BVar5);
  if ((cVar2 == '\0') || (*(char *)(*plVar4 + 0x80) != '\0')) {
    BVar5 = 0;
  }
  else {
    BVar5 = 1;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x403);
  EnableWindow(pHVar3,BVar5);
  if ((cVar2 == '\0') || (*(char *)(*plVar4 + 0x80) != '\0')) {
    BVar5 = 0;
  }
  else {
    BVar5 = 1;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x404);
  EnableWindow(pHVar3,BVar5);
  cVar2 = *(char *)(*plVar4 + 0x80);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x409);
  EnableWindow(pHVar3,SUB14(cVar2 == '\0',0));
  if (((char)((int *)*plVar4)[0x20] != '\0') || (BVar5 = 1, *(int *)*plVar4 == 1)) {
    BVar5 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40a);
  EnableWindow(pHVar3,BVar5);
  cVar2 = *(char *)(*plVar4 + 0x80);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f8);
  EnableWindow(pHVar3,SUB14(cVar2 == '\0',0));
  cVar2 = *(char *)(*plVar4 + 0x80);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40f);
  EnableWindow(pHVar3,SUB14(cVar2 == '\0',0));
  cVar2 = *(char *)(*plVar4 + 0x80);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40d);
  EnableWindow(pHVar3,SUB14(cVar2 == '\0',0));
  cVar2 = *(char *)(*plVar4 + 0x80);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x405);
  EnableWindow(pHVar3,SUB14(cVar2 == '\0',0));
  return;
}

