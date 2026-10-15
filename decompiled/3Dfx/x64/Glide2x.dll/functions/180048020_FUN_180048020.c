/*
 * FUN_180048020 at 180048020
 * undefined __fastcall FUN_180048020(longlong param_1, longlong param_2)
 * Address ranges: 180048020-18004806b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048020(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x30)) {
    FUN_180047348(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 200))(*(longlong **)(param_1 + 0x688),param_2);
    *(undefined1 *)(param_1 + 0x674) = 1;
    *(longlong *)(param_1 + 0x30) = param_2;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}

