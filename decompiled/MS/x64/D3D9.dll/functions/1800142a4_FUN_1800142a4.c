/*
 * FUN_1800142a4 at 1800142a4
 * undefined __fastcall FUN_1800142a4(longlong param_1)
 * Address ranges: 1800142a4-1800142df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800142a4(longlong param_1)

{
  if (((*(uint *)(param_1 + 0x24) < *(uint *)(param_1 + 0x28)) && (*(longlong *)(param_1 + 8) != 0))
     && (*(longlong **)(param_1 + 0x60) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x28))();
    *(undefined8 *)(param_1 + 0x24) = 0;
  }
  return;
}

