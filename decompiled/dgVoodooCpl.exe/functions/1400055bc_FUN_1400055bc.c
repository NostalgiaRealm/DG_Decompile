/*
 * FUN_1400055bc at 1400055bc
 * undefined __fastcall FUN_1400055bc(longlong param_1)
 * Address ranges: 1400055bc-1400058b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400055bc(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  HWND pHVar4;
  BOOL BVar5;
  BOOL bEnable;
  BOOL BVar6;
  
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))();
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x401);
  EnableWindow(pHVar4,(uint)(cVar3 != '\0'));
  plVar1 = (longlong *)(param_1 + 0x80);
  bEnable = 1;
  if ((cVar3 == '\0') || (BVar6 = bEnable, *(char *)(*plVar1 + 0x80) != '\0')) {
    BVar6 = 0;
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x406);
  EnableWindow(pHVar4,BVar6);
  BVar6 = 0;
  if ((cVar3 == '\0') || (BVar5 = bEnable, *(char *)(*plVar1 + 0x80) != '\0')) {
    BVar5 = BVar6;
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x402);
  EnableWindow(pHVar4,BVar5);
  cVar2 = *(char *)(*plVar1 + 0x80);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40e);
  EnableWindow(pHVar4,(uint)(cVar2 == '\0'));
  cVar2 = *(char *)(*plVar1 + 0x80);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40b);
  EnableWindow(pHVar4,(uint)(cVar2 == '\0'));
  cVar2 = *(char *)(*plVar1 + 0x80);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40c);
  EnableWindow(pHVar4,(uint)(cVar2 == '\0'));
  if ((cVar3 == '\0') || (BVar5 = bEnable, *(char *)(*plVar1 + 0x80) != '\0')) {
    BVar5 = BVar6;
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x407);
  EnableWindow(pHVar4,BVar5);
  if ((cVar3 == '\0') || (BVar5 = bEnable, *(char *)(*plVar1 + 0x80) != '\0')) {
    BVar5 = BVar6;
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x408);
  EnableWindow(pHVar4,BVar5);
  if ((cVar3 == '\0') || (BVar5 = bEnable, *(char *)(*plVar1 + 0x80) != '\0')) {
    BVar5 = BVar6;
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x403);
  EnableWindow(pHVar4,BVar5);
  if ((cVar3 == '\0') || (BVar5 = bEnable, *(char *)(*plVar1 + 0x80) != '\0')) {
    BVar5 = BVar6;
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x404);
  EnableWindow(pHVar4,BVar5);
  cVar3 = *(char *)(*plVar1 + 0x80);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x409);
  EnableWindow(pHVar4,(uint)(cVar3 == '\0'));
  if (((char)((int *)*plVar1)[0x20] != '\0') || (*(int *)*plVar1 == 1)) {
    bEnable = BVar6;
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40a);
  EnableWindow(pHVar4,bEnable);
  cVar3 = *(char *)(*plVar1 + 0x80);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f8);
  EnableWindow(pHVar4,(uint)(cVar3 == '\0'));
  cVar3 = *(char *)(*plVar1 + 0x80);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40f);
  EnableWindow(pHVar4,(uint)(cVar3 == '\0'));
  cVar3 = *(char *)(*plVar1 + 0x80);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40d);
  EnableWindow(pHVar4,(uint)(cVar3 == '\0'));
  cVar3 = *(char *)(*plVar1 + 0x80);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x405);
                    /* WARNING: Could not recover jumptable at 0x0001400058af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnableWindow(pHVar4,(uint)(cVar3 == '\0'));
  return;
}

