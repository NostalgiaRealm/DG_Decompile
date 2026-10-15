/*
 * FUN_180021784 at 180021784
 * undefined __fastcall FUN_180021784(longlong param_1)
 * Address ranges: 180021784-1800217df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021784(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    plVar1 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340) + 0x19d8);
    FUN_180043f10(plVar1,*(longlong *)(param_1 + 0x2a0 + lVar2 * 8));
    lVar2 = lVar2 + 1;
  } while (lVar2 != 2);
  FUN_180048104(plVar1,2,param_1 + 0x2a0);
  return;
}

