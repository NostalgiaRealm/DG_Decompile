/*
 * FUN_18004e700 at 18004e700
 * undefined __fastcall FUN_18004e700(longlong param_1, longlong param_2)
 * Address ranges: 18004e700-18004e74a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004e700(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xd78) != 0) {
    FUN_18004f0e4(param_1,*(uint *)(param_2 + 0x10),*(longlong **)(param_2 + 0xd80));
    (**(code **)(**(longlong **)(param_2 + 0xd78) + 0x10))();
    *(undefined8 *)(param_2 + 0xd80) = 0;
    *(undefined8 *)(param_2 + 0xd78) = 0;
  }
  return;
}

