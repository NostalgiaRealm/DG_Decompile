/*
 * FUN_18004a580 at 18004a580
 * undefined __fastcall FUN_18004a580(longlong param_1, longlong param_2)
 * Address ranges: 18004a580-18004a5d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004a580(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x20)) {
    FUN_180049954(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xf0))();
    *(undefined1 *)(param_1 + 0x674) = 1;
    *(longlong *)(param_1 + 0x20) = param_2;
    FUN_180060f94((undefined1 *)(param_1 + 0x68),0,0x100);
  }
  return;
}

