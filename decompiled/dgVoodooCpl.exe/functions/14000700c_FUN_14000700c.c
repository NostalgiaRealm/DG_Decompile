/*
 * FUN_14000700c at 14000700c
 * undefined __fastcall FUN_14000700c(longlong param_1)
 * Address ranges: 14000700c-1400072bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000700c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  HWND pHVar4;
  BOOL bEnable;
  BOOL BVar5;
  bool bVar6;
  
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))();
  bVar6 = cVar3 != '\0';
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40b);
  EnableWindow(pHVar4,(uint)bVar6);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f1);
  EnableWindow(pHVar4,(uint)bVar6);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f2);
  EnableWindow(pHVar4,(uint)bVar6);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f3);
  bEnable = 1;
  BVar5 = 1;
  EnableWindow(pHVar4,1);
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (((*(int *)(lVar2 + 0x1c) == 6) || (*(int *)(lVar2 + 0x1c) < 3)) ||
     (8 < *(int *)(lVar2 + 0x1c))) {
    BVar5 = 0;
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f5);
  EnableWindow(pHVar4,BVar5);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f6);
  EnableWindow(pHVar4,(uint)(iVar1 - 3U < 6));
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f9);
  EnableWindow(pHVar4,(uint)bVar6);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fa);
  EnableWindow(pHVar4,(uint)bVar6);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fb);
  EnableWindow(pHVar4,(uint)bVar6);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f7);
  EnableWindow(pHVar4,(uint)(iVar1 - 3U < 6));
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x403);
  EnableWindow(pHVar4,1);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x404);
  EnableWindow(pHVar4,1);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x405);
  EnableWindow(pHVar4,1);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f4);
  EnableWindow(pHVar4,(uint)bVar6);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f8);
  EnableWindow(pHVar4,1);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x80) + 0xbe);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x407);
  EnableWindow(pHVar4,(uint)(iVar1 == 0));
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40a);
  EnableWindow(pHVar4,(uint)bVar6);
  if ((cVar3 == '\0') || (*(int *)(*(longlong *)(param_1 + 0x80) + 0xbe) != 0)) {
    BVar5 = 0;
  }
  else {
    BVar5 = 1;
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x408);
  EnableWindow(pHVar4,BVar5);
  if ((cVar3 == '\0') || (*(int *)(*(longlong *)(param_1 + 0x80) + 0xbe) != 0)) {
    bEnable = 0;
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x409);
                    /* WARNING: Could not recover jumptable at 0x0001400072b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnableWindow(pHVar4,bEnable);
  return;
}

