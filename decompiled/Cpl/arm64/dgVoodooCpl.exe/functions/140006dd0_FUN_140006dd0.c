/*
 * FUN_140006dd0 at 140006dd0
 * undefined8 __cdecl FUN_140006dd0(longlong param_1)
 * Address ranges: 140006dd0-140006dd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140006dd0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  LPARAM LVar3;
  HWND hWnd;
  longlong lVar4;
  ulonglong uVar5;
  
  FUN_14000fe68(param_1,0x3eb,0x140027dc0,0);
  lVar4 = *(longlong *)(param_1 + 0x88);
  if (*(int *)(lVar4 + 0x250) != 0) {
    uVar5 = 0;
    do {
      iVar1 = (**(code **)(**(longlong **)(lVar4 + uVar5 * 8 + 0x210) + 8))();
      LVar3 = (**(code **)**(undefined8 **)(*(longlong *)(param_1 + 0x88) + uVar5 * 8 + 0x210))();
      FUN_14000fe68(param_1,0x3eb,LVar3,(longlong)iVar1);
      lVar4 = *(longlong *)(param_1 + 0x88);
      uVar2 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(lVar4 + 0x250));
  }
  lVar4 = 0;
  do {
    FUN_14000fe68(param_1,0x3ef,(LPARAM)(&PTR_s_Unspecified_140027e40)[lVar4 * 2],
                  (longlong)(int)(&DAT_140027e48)[lVar4 * 4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 9);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,2,20000);
  FUN_1400107e8(param_1,0x3eb);
  FUN_1400107e8(param_1,0x3ec);
  FUN_1400107e8(param_1,0x3ee);
  FUN_1400107e8(param_1,0x3ed);
  FUN_1400107e8(param_1,0x3f0);
  FUN_1400107e8(param_1,0x3ef);
  FUN_1400107e8(param_1,0x401);
  FUN_1400107e8(param_1,0x402);
  FUN_1400107e8(param_1,0x3f3);
  FUN_1400107e8(param_1,0x3f4);
  FUN_1400107e8(param_1,0x3f5);
  FUN_1400107e8(param_1,0x406);
  FUN_1400107e8(param_1,0x3fe);
  FUN_1400107e8(param_1,0x403);
  FUN_1400107e8(param_1,0x404);
  FUN_1400107e8(param_1,0x40a);
  uVar2 = MulDiv(0xe6,*(int *)(param_1 + 0x128),0x60);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ef);
  SendMessageW(hWnd,0x160,(ulonglong)uVar2,0);
  return 1;
}

