/*
 * FUN_180056140 at 180056140
 * undefined __fastcall FUN_180056140(longlong param_1, LPVOID param_2)
 * Address ranges: 180056140-180056198
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180056140(longlong param_1,LPVOID param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    plVar1 = *(longlong **)((longlong)param_2 + lVar2 * 0x30 + 0x20);
    if (plVar1 != (longlong *)0x0) {
      FUN_18004f050(*(longlong *)(param_1 + 0x10),*(uint *)(param_1 + 0x18),plVar1);
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x14);
  FUN_180060ac0(param_2);
  return;
}

