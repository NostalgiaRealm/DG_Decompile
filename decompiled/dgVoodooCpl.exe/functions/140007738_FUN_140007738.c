/*
 * FUN_140007738 at 140007738
 * undefined8 __fastcall FUN_140007738(longlong param_1)
 * Address ranges: 140007738-1400078d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140007738(longlong param_1)

{
  int iVar1;
  LPARAM LVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  FUN_14000e340(param_1,0x3eb,0x140027d10,0);
  lVar4 = *(longlong *)(param_1 + 0x88);
  if (*(int *)(lVar4 + 0x250) != 0) {
    uVar6 = 0;
    do {
      iVar1 = (**(code **)(**(longlong **)(lVar4 + 0x210 + uVar6 * 8) + 8))();
      LVar2 = (**(code **)**(undefined8 **)(*(longlong *)(param_1 + 0x88) + 0x210 + uVar6 * 8))();
      FUN_14000e340(param_1,0x3eb,LVar2,(longlong)iVar1);
      lVar4 = *(longlong *)(param_1 + 0x88);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(lVar4 + 0x250));
  }
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x3ef,(LPARAM)(&PTR_s_Unspecified_140027d90)[lVar4 * 2],
                  (longlong)(int)(&DAT_140027d98)[lVar4 * 4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 9);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,2,20000);
  FUN_14000eea0(param_1,0x3eb);
  FUN_14000eea0(param_1,0x3ec);
  FUN_14000eea0(param_1,0x3ee);
  FUN_14000eea0(param_1,0x3ed);
  FUN_14000eea0(param_1,0x3f0);
  FUN_14000eea0(param_1,0x3ef);
  FUN_14000eea0(param_1,0x401);
  FUN_14000eea0(param_1,0x402);
  FUN_14000eea0(param_1,0x3f3);
  FUN_14000eea0(param_1,0x3f4);
  FUN_14000eea0(param_1,0x3f5);
  FUN_14000eea0(param_1,0x406);
  FUN_14000eea0(param_1,0x3fe);
  FUN_14000eea0(param_1,0x403);
  FUN_14000eea0(param_1,0x404);
  FUN_14000eea0(param_1,0x40a);
  uVar3 = FUN_1400076e4(param_1);
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}

