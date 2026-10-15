/*
 * FUN_18004e024 at 18004e024
 * undefined __cdecl FUN_18004e024(longlong param_1, longlong param_2)
 * Address ranges: 18004e024-18004e06f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004e024(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x38)) {
    FUN_18004b680(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 600))(*(longlong **)(param_1 + 0x688),param_2);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(longlong *)(param_1 + 0x38) = param_2;
    *(undefined1 *)(param_1 + 0x674) = 1;
  }
  return;
}

