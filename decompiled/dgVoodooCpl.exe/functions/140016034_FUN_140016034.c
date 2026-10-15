/*
 * FUN_140016034 at 140016034
 * undefined __fastcall FUN_140016034(longlong * param_1)
 * Address ranges: 140016034-14001609b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140016034(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(lVar1 + -8);
    lVar2 = lVar1 + lVar3 * 0x18;
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_14001609c((longlong *)(lVar2 + -0x10));
      lVar2 = lVar2 + -0x18;
    }
    FUN_140024260((longlong *)(lVar1 + -8));
  }
  return;
}

