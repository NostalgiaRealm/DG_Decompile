/*
 * FUN_18004d1d0 at 18004d1d0
 * undefined __cdecl FUN_18004d1d0(longlong param_1, longlong param_2)
 * Address ranges: 18004d1d0-18004d1d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d1d0(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x38)) {
    FUN_18004a830(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 600))(*(longlong **)(param_1 + 0x688),param_2);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(longlong *)(param_1 + 0x38) = param_2;
    *(undefined1 *)(param_1 + 0x674) = 1;
  }
  return;
}

