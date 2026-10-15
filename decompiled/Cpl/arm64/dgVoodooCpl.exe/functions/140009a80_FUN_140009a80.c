/*
 * FUN_140009a80 at 140009a80
 * undefined __cdecl FUN_140009a80(longlong param_1)
 * Address ranges: 140009a80-140009a93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140009a80(longlong param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  HWND pHVar5;
  BOOL BVar6;
  ulonglong uVar7;
  BOOL BVar8;
  
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x5b8) + 0x18))();
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x540),0x3eb);
  BVar6 = SUB14(cVar3 != '\0',0);
  EnableWindow(pHVar5,BVar6);
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x540),0x3ec);
  EnableWindow(pHVar5,BVar6);
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x18))();
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x678),0x3f9);
  BVar6 = SUB14(cVar3 != '\0',0);
  EnableWindow(pHVar5,BVar6);
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x678),0x3fa);
  EnableWindow(pHVar5,BVar6);
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x678),0x3f2);
  EnableWindow(pHVar5,BVar6);
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x678),0x3f7);
  EnableWindow(pHVar5,BVar6);
  if ((cVar3 == '\0') || ((&DAT_1400267f8)[*(int *)(*(longlong *)(param_1 + 0x6e0) + 0x27)] != '\0')
     ) {
    BVar6 = 0;
  }
  else {
    BVar6 = 1;
  }
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x678),0x3fc);
  EnableWindow(pHVar5,BVar6);
  if ((cVar3 == '\0') || (BVar6 = 1, **(int **)(param_1 + 0x6e0) == 1)) {
    BVar6 = 0;
  }
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x678),0x3f1);
  EnableWindow(pHVar5,BVar6);
  FUN_140004f60(param_1 + 0x8f0);
  if (*(char *)(param_1 + 0x410) != '\0') {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0xc08) + 0x18))();
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xb98),0x40b);
    BVar6 = SUB14(cVar3 != '\0',0);
    EnableWindow(pHVar5,BVar6);
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xb98),0x3f1);
    EnableWindow(pHVar5,BVar6);
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xb98),0x3f2);
    EnableWindow(pHVar5,BVar6);
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xb98),0x3f3);
    EnableWindow(pHVar5,1);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0xc00) + 0x1c);
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xb98),0x3f5);
    EnableWindow(pHVar5,SUB14((iVar2 != 6 && 2 < iVar2) && iVar2 < 9,0));
    iVar2 = *(int *)(*(longlong *)(param_1 + 0xc00) + 0x1c);
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xb98),0x3f6);
    EnableWindow(pHVar5,SUB14(iVar2 - 3U < 6,0));
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xb98),0x3f9);
    EnableWindow(pHVar5,BVar6);
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xb98),0x3fa);
    EnableWindow(pHVar5,BVar6);
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xb98),0x3fb);
    EnableWindow(pHVar5,BVar6);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0xc00) + 0x1c);
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xb98),0x3f7);
    EnableWindow(pHVar5,SUB14(iVar2 - 3U < 6,0));
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xb98),0x403);
    EnableWindow(pHVar5,1);
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xb98),0x404);
    EnableWindow(pHVar5,1);
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xb98),0x405);
    EnableWindow(pHVar5,1);
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xb98),0x3f4);
    EnableWindow(pHVar5,BVar6);
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xb98),0x3f8);
    EnableWindow(pHVar5,1);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0xc00) + 0xbe);
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xb98),0x407);
    EnableWindow(pHVar5,SUB14(iVar2 == 0,0));
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xb98),0x40a);
    EnableWindow(pHVar5,BVar6);
    if ((cVar3 == '\0') || (*(int *)(*(longlong *)(param_1 + 0xc00) + 0xbe) != 0)) {
      BVar6 = 0;
    }
    else {
      BVar6 = 1;
    }
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xb98),0x408);
    EnableWindow(pHVar5,BVar6);
    if ((cVar3 == '\0') || (*(int *)(*(longlong *)(param_1 + 0xc00) + 0xbe) != 0)) {
      BVar6 = 0;
    }
    else {
      BVar6 = 1;
    }
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xb98),0x409);
    EnableWindow(pHVar5,BVar6);
    (**(code **)(**(longlong **)(param_1 + 0xe80) + 0x18))();
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0xfb8) + 0x18))();
    cVar3 = *(char *)(*(longlong *)(param_1 + 0xfb0) + 0x80);
    if (((cVar3 != '\0') || (cVar4 == '\0')) ||
       (BVar6 = 1, 1 < *(uint *)(*(longlong *)(param_1 + 0xfb0) + 0x58))) {
      BVar6 = 0;
    }
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x419);
    EnableWindow(pHVar5,BVar6);
    if (((cVar3 != '\0') || (cVar4 == '\0')) ||
       (BVar6 = 1, 1 < *(uint *)(*(longlong *)(param_1 + 0xfb0) + 0x58))) {
      BVar6 = 0;
    }
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x3f6);
    EnableWindow(pHVar5,BVar6);
    if (((cVar3 != '\0') || (cVar4 == '\0')) ||
       (BVar6 = 1, 1 < *(uint *)(*(longlong *)(param_1 + 0xfb0) + 0x58))) {
      BVar6 = 0;
    }
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x416);
    EnableWindow(pHVar5,BVar6);
    if (((cVar3 != '\0') || (cVar4 == '\0')) ||
       (BVar6 = 1, 1 < *(uint *)(*(longlong *)(param_1 + 0xfb0) + 0x58))) {
      BVar6 = 0;
    }
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x417);
    EnableWindow(pHVar5,BVar6);
    if (((cVar3 != '\0') || (cVar4 == '\0')) ||
       (BVar6 = 1, 1 < *(uint *)(*(longlong *)(param_1 + 0xfb0) + 0x58))) {
      BVar6 = 0;
    }
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x418);
    EnableWindow(pHVar5,BVar6);
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x3fa);
    EnableWindow(pHVar5,SUB14(cVar3 == '\0' && cVar4 != '\0',0));
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x41a);
    EnableWindow(pHVar5,SUB14(cVar3 == '\0' && cVar4 != '\0',0));
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x406);
    EnableWindow(pHVar5,SUB14(cVar3 == '\0' && cVar4 != '\0',0));
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x407);
    EnableWindow(pHVar5,SUB14(cVar3 == '\0' && cVar4 != '\0',0));
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x415);
    EnableWindow(pHVar5,SUB14(cVar3 == '\0' && cVar4 != '\0',0));
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x411);
    BVar6 = SUB14(cVar3 == '\0',0);
    EnableWindow(pHVar5,BVar6);
    if ((cVar3 == '\0') && (*(int *)(*(longlong *)(param_1 + 0xfb0) + 0x1cf) != 0)) {
      BVar8 = 1;
    }
    else {
      BVar8 = 0;
    }
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x41b);
    EnableWindow(pHVar5,BVar8);
    if (((cVar3 == '\0') && (*(int *)(*(longlong *)(param_1 + 0xfb0) + 0x1cf) != 0)) &&
       (*(int *)(*(longlong *)(param_1 + 0xfb0) + 0x1cb) != 0)) {
      BVar8 = 1;
    }
    else {
      BVar8 = 0;
    }
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x41c);
    EnableWindow(pHVar5,BVar8);
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x41d);
    EnableWindow(pHVar5,SUB14(cVar3 == '\0' && cVar4 != '\0',0));
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x410);
    EnableWindow(pHVar5,SUB14(cVar3 == '\0' && cVar4 != '\0',0));
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x41e);
    EnableWindow(pHVar5,SUB14(cVar3 == '\0' && cVar4 != '\0',0));
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x41f);
    EnableWindow(pHVar5,BVar6);
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x408);
    EnableWindow(pHVar5,SUB14(cVar3 == '\0' && cVar4 != '\0',0));
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x409);
    EnableWindow(pHVar5,SUB14(cVar3 == '\0' && cVar4 != '\0',0));
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x40a);
    EnableWindow(pHVar5,SUB14(cVar3 == '\0' && cVar4 != '\0',0));
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x40b);
    EnableWindow(pHVar5,SUB14(cVar3 == '\0' && cVar4 != '\0',0));
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x40f);
    EnableWindow(pHVar5,SUB14(cVar3 == '\0' && cVar4 != '\0',0));
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x40c);
    EnableWindow(pHVar5,SUB14(cVar3 == '\0' && cVar4 != '\0',0));
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x420);
    EnableWindow(pHVar5,SUB14(cVar3 == '\0' && cVar4 != '\0',0));
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),0x421);
    EnableWindow(pHVar5,SUB14(cVar3 == '\0' && cVar4 != '\0',0));
    uVar7 = 0;
    do {
      if (((cVar3 != '\0') || (cVar4 == '\0')) ||
         (BVar6 = 1, (*(uint *)(param_1 + 0x1160) & 1 << (ulonglong)((uint)uVar7 & 0x1f)) == 0)) {
        BVar6 = 0;
      }
      pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0xf40),(int)(&DAT_1400273e0)[uVar7]);
      EnableWindow(pHVar5,BVar6);
      uVar1 = (uint)uVar7 + 1;
      uVar7 = (ulonglong)uVar1;
    } while (uVar1 < 0x20);
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x11f0) + 0x18))();
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x1180),0x40f);
    BVar6 = SUB14(cVar3 != '\0',0);
    EnableWindow(pHVar5,BVar6);
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x1180),0x410);
    EnableWindow(pHVar5,BVar6);
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x1180),0x411);
    EnableWindow(pHVar5,BVar6);
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x1180),0x412);
    EnableWindow(pHVar5,BVar6);
    pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x1180),0x413);
    EnableWindow(pHVar5,BVar6);
  }
  return;
}

