/*
 * FUN_18004c59c at 18004c59c
 * undefined __fastcall FUN_18004c59c(longlong param_1, longlong param_2)
 * Address ranges: 18004c59c-18004c5e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c59c(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xd78) != 0) {
    FUN_18004cf80(param_1,*(uint *)(param_2 + 0x10),*(longlong **)(param_2 + 0xd80));
    (**(code **)(**(longlong **)(param_2 + 0xd78) + 0x10))();
    *(undefined8 *)(param_2 + 0xd80) = 0;
    *(undefined8 *)(param_2 + 0xd78) = 0;
  }
  return;
}

