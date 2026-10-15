/*
 * FUN_18004a62c at 18004a62c
 * undefined __fastcall FUN_18004a62c(longlong param_1, longlong param_2)
 * Address ranges: 18004a62c-18004a677
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004a62c(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x30)) {
    FUN_180049954(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 200))(*(longlong **)(param_1 + 0x688),param_2);
    *(undefined1 *)(param_1 + 0x674) = 1;
    *(longlong *)(param_1 + 0x30) = param_2;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}

