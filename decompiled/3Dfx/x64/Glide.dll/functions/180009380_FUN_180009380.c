/*
 * FUN_180009380 at 180009380
 * undefined __fastcall FUN_180009380(longlong * param_1)
 * Address ranges: 180009380-1800093e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180009380(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(lVar1 + -8);
    lVar2 = lVar1 + lVar3 * 0x18;
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_1800093e8((longlong *)(lVar2 + -0x10));
      lVar2 = lVar2 + -0x18;
    }
    FUN_18005dbc0((longlong *)(lVar1 + -8));
  }
  return;
}

