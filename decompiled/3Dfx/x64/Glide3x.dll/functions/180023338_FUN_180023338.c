/*
 * FUN_180023338 at 180023338
 * undefined __fastcall FUN_180023338(longlong param_1)
 * Address ranges: 180023338-1800233ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023338(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    plVar1 = *(longlong **)(param_1 + 0x30a8 + lVar2 * 8);
    if (plVar1 != (longlong *)0x0) {
      FUN_18004f158(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x3330),
                    *(uint *)(*(longlong *)(param_1 + 0x3028) + 0x3338),plVar1);
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

