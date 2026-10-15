/*
 * FUN_180018644 at 180018644
 * undefined __fastcall FUN_180018644(longlong param_1)
 * Address ranges: 180018644-180018679
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018644(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0xe0);
  (**(code **)(*plVar1 + 0x10))
            (plVar1,*(undefined4 *)(param_1 + 0xb4),*(undefined8 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return;
}

