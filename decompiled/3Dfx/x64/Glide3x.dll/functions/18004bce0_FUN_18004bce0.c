/*
 * FUN_18004bce0 at 18004bce0
 * undefined __fastcall FUN_18004bce0(longlong param_1, longlong param_2)
 * Address ranges: 18004bce0-18004bd2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004bce0(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x38)) {
    FUN_180049954(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 600))(*(longlong **)(param_1 + 0x688),param_2);
    *(undefined1 *)(param_1 + 0x674) = 1;
    *(longlong *)(param_1 + 0x38) = param_2;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}

