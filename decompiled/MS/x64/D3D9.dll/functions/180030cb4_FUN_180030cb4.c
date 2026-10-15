/*
 * FUN_180030cb4 at 180030cb4
 * undefined __fastcall FUN_180030cb4(longlong * param_1)
 * Address ranges: 180030cb4-180030cec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030cb4(longlong *param_1)

{
  HWND pHVar1;
  longlong *plVar2;
  longlong lVar3;
  
  pHVar1 = (HWND)(**(code **)(*param_1 + 0x28))();
  lVar3 = DAT_180111f20;
  plVar2 = FUN_1800f91e4(DAT_180111f20,(longlong)pHVar1);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1800f8bfc(lVar3,pHVar1,0x1800f9328);
    plVar2[6] = lVar3;
  }
  return;
}

