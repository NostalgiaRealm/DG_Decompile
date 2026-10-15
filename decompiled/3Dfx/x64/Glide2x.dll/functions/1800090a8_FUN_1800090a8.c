/*
 * FUN_1800090a8 at 1800090a8
 * undefined __fastcall FUN_1800090a8(longlong * param_1)
 * Address ranges: 1800090a8-18000910b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800090a8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(lVar1 + -8);
    lVar2 = lVar1 + lVar3 * 0x28;
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_18005d720(*(LPVOID *)(lVar2 + -0x10));
      FUN_18005d720(*(LPVOID *)(lVar2 + -0x20));
      lVar2 = lVar2 + -0x28;
    }
    FUN_18005d720((longlong *)(lVar1 + -8));
  }
  return;
}

