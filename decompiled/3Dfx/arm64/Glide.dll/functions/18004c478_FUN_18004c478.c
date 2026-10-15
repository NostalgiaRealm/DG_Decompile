/*
 * FUN_18004c478 at 18004c478
 * undefined __cdecl FUN_18004c478(longlong param_1, longlong param_2)
 * Address ranges: 18004c478-18004c4c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c478(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x30)) {
    FUN_18004b680(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 200))(*(longlong **)(param_1 + 0x688),param_2);
    *(longlong *)(param_1 + 0x30) = param_2;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x674) = 1;
  }
  return;
}

