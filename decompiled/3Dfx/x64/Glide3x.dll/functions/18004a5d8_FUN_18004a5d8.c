/*
 * FUN_18004a5d8 at 18004a5d8
 * undefined __fastcall FUN_18004a5d8(longlong param_1, longlong param_2)
 * Address ranges: 18004a5d8-18004a628
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004a5d8(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x28)) {
    FUN_180049954(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xe8))();
    *(longlong *)(param_1 + 0x28) = param_2;
    FUN_180060f94((undefined1 *)(param_1 + 0x168),0,0x100);
  }
  return;
}

