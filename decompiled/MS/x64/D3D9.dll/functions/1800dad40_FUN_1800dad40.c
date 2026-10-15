/*
 * FUN_1800dad40 at 1800dad40
 * undefined __fastcall FUN_1800dad40(longlong param_1, longlong param_2)
 * Address ranges: 1800dad40-1800dad8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800dad40(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xd78) != 0) {
    FUN_1800db9a0(param_1,*(uint *)(param_2 + 0x10),*(longlong **)(param_2 + 0xd80));
    (**(code **)(**(longlong **)(param_2 + 0xd78) + 0x10))();
    *(undefined8 *)(param_2 + 0xd80) = 0;
    *(undefined8 *)(param_2 + 0xd78) = 0;
  }
  return;
}

