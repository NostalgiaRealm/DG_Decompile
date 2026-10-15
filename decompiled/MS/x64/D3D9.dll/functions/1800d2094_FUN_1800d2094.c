/*
 * FUN_1800d2094 at 1800d2094
 * undefined __fastcall FUN_1800d2094(longlong * param_1)
 * Address ranges: 1800d2094-1800d20f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800d2094(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(lVar1 + -8);
    lVar2 = lVar1 + lVar3 * 0x28;
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_1800fbcf0(*(LPVOID *)(lVar2 + -0x10));
      FUN_1800fbcf0(*(LPVOID *)(lVar2 + -0x20));
      lVar2 = lVar2 + -0x28;
    }
    FUN_1800fbcf0((longlong *)(lVar1 + -8));
  }
  return;
}

