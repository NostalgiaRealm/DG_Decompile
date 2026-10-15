/*
 * FUN_180089d90 at 180089d90
 * undefined __fastcall FUN_180089d90(longlong param_1)
 * Address ranges: 180089d90-180089df9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180089d90(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    plVar1 = *(longlong **)(param_1 + 0x1d2b8 + lVar2 * 8);
    if (plVar1 != (longlong *)0x0) {
      FUN_1800dba14(*(longlong *)(param_1 + 0x1cf10),*(uint *)(param_1 + 0x28),plVar1);
      *(undefined8 *)(param_1 + 0x1d2b8 + lVar2 * 8) = 0;
    }
    plVar1 = *(longlong **)(param_1 + 0x1d0b8 + lVar2 * 8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      *(undefined8 *)(param_1 + 0x1d0b8 + lVar2 * 8) = 0;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x40);
  return;
}

