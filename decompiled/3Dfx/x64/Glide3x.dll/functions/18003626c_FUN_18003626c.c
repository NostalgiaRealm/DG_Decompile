/*
 * FUN_18003626c at 18003626c
 * undefined __fastcall FUN_18003626c(longlong * param_1)
 * Address ranges: 18003626c-1800362d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003626c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(lVar1 + -8);
    lVar2 = lVar1 + lVar3 * 0x18;
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_1800362d4((longlong *)(lVar2 + -0x10));
      lVar2 = lVar2 + -0x18;
    }
    FUN_180060ac0((longlong *)(lVar1 + -8));
  }
  return;
}

