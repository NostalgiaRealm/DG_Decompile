/*
 * FUN_180030d88 at 180030d88
 * undefined __fastcall FUN_180030d88(longlong param_1)
 * Address ranges: 180030d88-180030dfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030d88(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    plVar1 = *(longlong **)(param_1 + 0x30a8 + lVar2 * 8);
    if (plVar1 != (longlong *)0x0) {
      FUN_18004cff4(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31b0),
                    *(uint *)(*(longlong *)(param_1 + 0x3028) + 0x31b8),plVar1);
      *(undefined8 *)(param_1 + 0x30a8 + lVar2 * 8) = 0;
    }
    plVar1 = *(longlong **)(param_1 + 0x3030 + lVar2 * 8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      *(undefined8 *)(param_1 + 0x3030 + lVar2 * 8) = 0;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xf);
  return;
}

