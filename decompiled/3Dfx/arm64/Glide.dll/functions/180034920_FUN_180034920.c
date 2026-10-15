/*
 * FUN_180034920 at 180034920
 * undefined __cdecl FUN_180034920(longlong param_1)
 * Address ranges: 180034920-180034997
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180034920(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    plVar1 = *(longlong **)(param_1 + 0x30a8 + lVar2 * 8);
    if (plVar1 != (longlong *)0x0) {
      FUN_180050888(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31b0),
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

