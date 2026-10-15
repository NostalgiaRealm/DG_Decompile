/*
 * FUN_180049b7c at 180049b7c
 * undefined __fastcall FUN_180049b7c(longlong param_1, longlong param_2)
 * Address ranges: 180049b7c-180049bc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049b7c(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x38)) {
    FUN_1800477f0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 600))(*(longlong **)(param_1 + 0x688),param_2);
    *(undefined1 *)(param_1 + 0x674) = 1;
    *(longlong *)(param_1 + 0x38) = param_2;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}

